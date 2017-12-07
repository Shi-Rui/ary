#!chezscheme

(define (f2i f)
  (if (> (round f) f)
      (- (round f) 1)
      (round f)))

(define (display-list l)
  (if (null? l)
      (newline)
      (begin
        (display (car l))
        (display-list (cdr l)))))

(define (number2H n)
  (cond [(< n 10) n]
        [(= n 10) "a"]
        [(= n 11) "b"]
        [(= n 12) "c"]
        [(= n 13) "d"]
        [(= n 14) "e"]
        [(= n 15) "f"]
        [else "it's too large."]))

(define (H2number h)
  (cond [(number? h) h]
        [(symbol? h) (H2number (symbol->string h))]
        [(or (equal? h "a") (equal? h "A")) 10]
        [(or (equal? h "b") (equal? h "B")) 11]
        [(or (equal? h "c") (equal? h "C")) 12]
        [(or (equal? h "d") (equal? h "D")) 13]
        [(or (equal? h "e") (equal? h "E")) 14]
        [(or (equal? h "f") (equal? h "F")) 15]
        [else "it's a hex."]))

(define (D2B d)
  (define (iter d l)
    (if (= (f2i (/ d 2)) 0)
        (cons (modulo d 2) l)
        (iter (f2i (/ d 2)) (cons (modulo d 2) l))))
  (iter d '()))

(define (D2* d a)
  (define (iter d l)
    (if (= (f2i (/ d a)) 0)
        (cons (modulo d a) l)
        (iter (f2i (/ d a)) (cons (modulo d a) l))))
  (iter d '()))

(define (D2O d)
  (D2* d 8))

(define (D2H d)
  (map number2H (D2* d 16)))

(define D (read))
(newline)
(display-list (D2H D))

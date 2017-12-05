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

(define (D2B d)
  (define (iter d l)
  (if (= (f2i (/ d 2)) 0)
      (cons (modulo d 2)l)
      (iter (f2i (/ d 2)) (cons (modulo d 2) l))))
  (iter d '()))

(define D (read))
(display-list (D2B D))

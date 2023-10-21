exercises: 
	gcc e2_exercises.c e2_exercises.h -o exercises
	./exercises

# should not be accessible to students before solution is posted.
exercises_solution: 
	gcc e2_exercises_solutions.c e2_exercises.h -o exercises_solution
	./exercises_solution

in_class: 
	gcc e2_in_class_practice.c e2_in_class_practice.h -o in_class
	./in_class
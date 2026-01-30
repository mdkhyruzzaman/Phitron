import random
from school import School


class Person:
    def __init__(self, name):
        self.name = name


class Teacher(Person):
    def __init__(self, name) -> None:
        super().__init__(name)

    def evaluate_exam(self):
        return random.randint(1, 100)


class Student(Person):
    def __init__(self, name, classroom) -> None:
        super().__init__(name)
        self.classroom = classroom
        self.__id = None
        self.marks = {}  # {'eng': 70}
        self.subject_grade = {}  # {'eng': 'A'}
        self.grade = None  # Final Grade

    def calculate_final_grade(self):
        point_sum = 0
        for grade in self.subject_grade.values():
            point = School.grade_to_value(grade)
            point_sum += point
        gpa = point_sum / len(self.subject_grade)
        self.grade = School.value_to_grade(gpa)

    @property
    def id(self):
        return self.__id

    @id.setter
    def id(self, value):
        self.__id = value
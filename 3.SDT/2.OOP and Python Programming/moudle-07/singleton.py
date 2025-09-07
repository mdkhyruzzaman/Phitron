# singleston --> one single instance
# if you wnat a new instance, you will get the old one(already created) instance

class Singleton:
    _instance = None
    def __init__(self):
        if Singleton._instance is None:
            Singleton._instance = self
        else:
            raise Exception("This is ")
        
    @staticmethod
    def get_instance():
        if Singleton._instance
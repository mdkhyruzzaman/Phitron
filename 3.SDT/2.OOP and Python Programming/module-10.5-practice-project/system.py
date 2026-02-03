from authentication import Authentication
from store import Store

class System:
    def __init__(self):
        self.auth = Authentication()
        self.store = Store()

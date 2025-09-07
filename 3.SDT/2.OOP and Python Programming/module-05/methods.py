class Phone:
    price = 19000
    color = 'blue'
    brand = 'samsung'
    features = ['camera', 'speaker', 'hammer']

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'sending SMS to: {phone} and message: {sms}'
        return text

my_phone = Phone()
print(my_phone.features)

my_phone.call()
r = my_phone.send_sms(1234, 'I forget to miss you')
print(r)

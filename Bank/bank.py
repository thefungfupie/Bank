#Simple banking program to show use of classes in python#
class bankAccount:
	def createAccount(self):
		self.balance = 0
	
	def withdraw(self, amount):
		self.balance -= amount
		return self.balance

	def deposit(self, amount):
		self.balance += amount
		return self.balance

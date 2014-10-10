#Simple Python banking program

class BankAccount:
	def create(self):
		self.balance=0

	def withdraw(self, amount):
		self.balance -= amount
		return self.balance

	def deposit(self, amount):
		self.balance += amount
		return self.balance



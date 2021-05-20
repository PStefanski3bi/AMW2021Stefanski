from django.db import models

class Car(models.Model):
    name = models.CharField(max_length=20)
    brand = models.CharField(max_length=20)
    description = models.CharField(max_length=1000)

    def __str__(self):
        return self.name

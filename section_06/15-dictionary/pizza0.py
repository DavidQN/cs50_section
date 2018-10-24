pizzas = {
    "cheese": 9,
    "pepperoni": 10,
    "vegetable": 11,
    "buffalo chicken": 12
}

print(pizzas)
pizzas["cheese"] = 8
print(pizzas["cheese"])

pizzas.update({
    'cheese': 5,
    "vegetable": 9
})
print(pizzas['cheese'], pizzas['vegetable'])

# What is the difference between both update() and just doing it based on the key?
# It has more to do with performance than anything, you can read about it here:
# https://stackoverflow.com/questions/15456158/python-dict-update-vs-subscript-to-add-a-single-key-value-pair
"""Functions used in preparing Guido's gorgeous lasagna.

Learn about Guido, the creator of the Python language:
https://en.wikipedia.org/wiki/Guido_van_Rossum

This is a module docstring, used to describe the functionality
of a module and its functions and/or classes.
"""



EXPECTED_BAKE_TIME = 40
PREPARATION_TIME= 0

def preparation_time_in_minutes(number_of_layers):
    """ Calculates the preparation time 
    :param: number_of_layers: int - the number of layers in the lasagna.
    :return: int - total time in minutes 
    the function takes 1 parameter then times it by 2 regardless the situation
    """
    PREPARATION_TIME = number_of_layers * 2
    return PREPARATION_TIME    


def bake_time_remaining(input_data):
    """Calculate the bake time remaining.
 
   :param elapsed_bake_time: int baking time already elapsed
   :return: int remaining bake time (in minutes) derived from 'EXPECTED_BAKE_TIME'
 
   Function that takes the actual minutes the lasagna has been in the oven as
   an argument and returns how many minutes the lasagna still needs to bake
   based on the `EXPECTED_BAKE_TIME`.
   """
    ELAPSED_TIME_IN_MINUTES= input_data
    BAKE_TIME_REMAINING = EXPECTED_BAKE_TIME - ELAPSED_TIME_IN_MINUTES
    return BAKE_TIME_REMAINING






def elapsed_time_in_minutes(number_of_layers, elapsed_bake_time):
    """Calculate the elapsed cooking time.

    :param number_of_layers: int - the number of layers in the lasagna.
    :param elapsed_bake_time: int - elapsed cooking time.
    :return: int - total time elapsed (in minutes) preparing and cooking.

    This function takes two integers representing the number of lasagna layers and the
    time already spent baking and calculates the total elapsed minutes spent cooking the
    lasagna.
    """
    ELAPSED_TIME_IN_MINUTES = preparation_time_in_minutes(number_of_layers) + elapsed_bake_time
    return ELAPSED_TIME_IN_MINUTES




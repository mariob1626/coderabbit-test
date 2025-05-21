# simple_utils.py - A tiny utility library

def reverse_string(text):
    """Reverses the characters in a string."""
    return text[::-1]

def count_words(sentence):
    return len(sentence.split())

def celsius_to_fahrenheit(celsius: float) -> float:
    """Convert temperature from Celsius to Fahrenheit.
    
    Args:
        celsius: Temperature value in Celsius
        
    Returns:
        Temperature value in Fahrenheit
    """
    return (celsius * 9/5) + 32

# simple_utils.py - A tiny utility library

def reverse_string(text):
    """Reverses the characters in a string."""
    return text[::-1]

def count_words(sentence: str) -> int:
    """Count the number of words in a sentence.

    Words are considered to be separated by whitespace.
    """
    return len(sentence.split())

def celsius_to_fahrenheit(celsius: float) -> float:
    """Convert temperature from Celsius to Fahrenheit.
    
    Args:
        celsius: Temperature value in Celsius
        
    Returns:
        Temperature value in Fahrenheit
    """
    return (celsius * 9/5) + 32

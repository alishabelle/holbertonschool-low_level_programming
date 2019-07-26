class Rectangle:
    def width(self):
        self.__width = width
        
    def width(self, value):
        if not isinstance(width, int):
            raise TypeError("width must be an integer")

        if width < 0:
            raise ValueError("width must be >= 0")
    
    @property    
    def height(self):
        self.__height = height
    
    @height.setter
    def height(self, value):
        if not isinstance(height, int):
            raise TypeError("height must be an integer")
        if height < 0:
            raise ValueError("height must be >= 0")

    def __init__(self, width=0, height=0):
        self.width = width
        self.height = height

    def area(self):
        return self.__width * self.__height

    def perimeter(self):
        return (self.__width * self.__height) * 2
    

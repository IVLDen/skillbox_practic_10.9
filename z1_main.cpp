#include <iostream>
#include <cmath>
int main()
{
  float a, b, c;
  std::cout << "a, b, c:";
  std::cin >> a >> b >> c;

  float discriminant = (b * b) - (4 * a * c);
    
  if (discriminant > 0)
{
    float x1 = (-b + sqrt(discriminant)) / (2  * a);
    float x2 = (-b - sqrt(discriminant)) / (2 * a);
    std::cout  << "Root 1, 2: " << x1 << ", " << x2 << std::endl;
 }
   else if (discriminant == 0)
{
    float x = -b / (2 * a);
    std::cout << "Root: " << x << std::endl;
}
   else
    std::cout << "No roots" << std::endl;

}

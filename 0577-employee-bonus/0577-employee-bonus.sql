# Write your MySQL query statement below

Select Employee.name, Bonus.bonus
from employee
left join bonus on employee.empid = bonus.empid
where bonus < 1000 or bonus is null;
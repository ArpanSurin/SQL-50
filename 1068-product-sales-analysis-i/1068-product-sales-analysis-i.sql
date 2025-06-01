# Write your MySQL query statement below
select sales.year, sales.price, product.product_name
from sales
left join product on sales.product_id = product.product_id
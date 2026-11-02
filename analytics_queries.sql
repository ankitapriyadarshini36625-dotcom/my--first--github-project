CREATE TABLE ecom_orders (
    order_id INT PRIMARY KEY,
    product_category VARCHAR(50),
    quantity INT,
    price_per_unit DECIMAL(10,2)
);

-- 2. Insert the records generated from the C program
INSERT INTO ecom_orders VALUES (101, 'Electronics', 2, 450.00);
INSERT INTO ecom_orders VALUES (102, 'Office_Supplies', 10, 15.50);
INSERT INTO ecom_orders VALUES (103, 'Electronics', 1, 1200.00);
INSERT INTO ecom_orders VALUES (104, 'Books', 5, 22.00);
INSERT INTO ecom_orders VALUES (105, 'Office_Supplies', 3, 45.00);

-- 3. Business Analytics Query: Calculate Total Sales per Category
-- This showcases your knowledge of aggregations used in business dashboards
SELECT 
    product_category,
    SUM(quantity) AS total_units_sold,
    SUM(quantity * price_per_unit) AS total_revenue
FROM 
    ecom_orders
GROUP BY 
    product_category
ORDER BY 
    total_revenue DESC;
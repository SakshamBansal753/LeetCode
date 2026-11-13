SELECT t.department,
       t.employee,
       t.salary
FROM (
    SELECT d.name AS department,
           e.name AS employee,
           e.salary AS salary,
           DENSE_RANK() OVER (
               PARTITION BY d.name
               ORDER BY e.salary DESC
           ) AS rak
    FROM employee AS e
    LEFT JOIN department AS d
      ON e.departmentid = d.id
) AS t
WHERE rak <= 3;
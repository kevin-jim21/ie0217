# Laboratorio 10 (BREAKOUTROOM 2)

## Integrantes:
- Oscar Porras Silesky
- Antony Brenes Rodríguez
- Gabriel Gonzales Rivera
- Kevin Jiménez Acuña

## Databases

### hospital.db

#### Fáciles

- **Gabriel**

    **Pregunta:** Write a query to find the first_name, last_name and birth date of patients who has height
    greater than 160 and weight greater than 70.

    **Respuesta:**

        ```sql
        SELECT first_name, last_name, birth_date
        FROM patients
        WHERE height > 160 AND weight > 70;
        ```
    **Comentario del codigo:** Primero se especifican las columnas que se quieren mostrar en la nueva tabla, después
    se especifica de que tabla se sacan los datos a utilizar y finalmente, se especifican las condiciones utilizando
    WHERE y AND para obtener el rango requerido.

- **Antony**

    **Pregunta:** Write a query to find list of patients first_name, last_name, and allergies where allergies are not null and are from the city of 'Hamilton'.

    **Respuesta:**

        ```sql
        SELECT
            first_name, last_name, allergies
        FROM
            patients
        WHERE
            allergies IS NOT NULL
            AND city = 'Hamilton';
        ```

    **Comentario del codigo:** Se utiliza SELECT para obtener los nombres, apellidos y pacientes que poseen alergias.
    Despues, se especifica la lista de donde se obtienen los datos con FROM y se utiliza WHERE para buscar aquellos
    pacientes que poseen al menos un tipo de alergia y que habitan en Hamilton.

#### Medias

- **Gabriel**

    **Pregunta:** Show unique birth years from patients and orther them by ascending.

    **Respuesta:**

        ```sql
        SELECT DISTINTC YEAR(birth_date) AS birth_year
        FROM patients
        ORDER BY birth_year;
        ```
    **Comentario del codigo:** Como se piden los años de nacimiento únicos entonces se debe utilizar SELECT DISTINCT
    para no repetir los años de nacimiento. Además, se utiliza el comando YEAR para extraer sólamente el año de la
    fecha de nacimiento de los pacientes, que corresponde a la columna birth_date y se renombra como birth_year. Por
    último, se especifica que se utiliza la tabla patients con FROM y se ordenan los datos en forma ascendente por medio
    de ORDER BY.

- **Antony**

    **Pregunta:** Show unique first names from the patients table which only occurs once in the list. For example, if two or more people are named 'John' in the first_name column then don't include their name in the output list. If only 1 person is named 'Leo' then include them in the output.

    **Respuesta:**

        ```sql
        SELECT first_name
        FROM patients
        GROUP BY first_name;
        HAVING COUNT(first_name) = 1;
        ```
    **Comentario del codigo:** Utilizando SELECT se obtiene el nombre de los pacientes, con FROM se especifica la tabla de donde se obtienen
    los nombres, con GROUP BY se agrupan los nombres que coinciden entre sí y con HAVING COUNT se obtienen sólamente los nombres que no se repiten.

- **Kevin**

    **Pregunta:** Show patient_id and first_name from patients where their first_name start and ends with 's' and is at least 6 characters long.

    **Respuesta:**

        ```sql
        SELECT patient_id, first_name
        FROM patients
        where first_name LIKE 'S%' and first_name LIKE '%s' and LEN(first_name) >= 6;
        ```
    **Comentario del codigo:** Primero se utiliza SELECT para obtener el número de identificación del paciente y su nombre, también se utiliza FROM para solciitar los datos de la tabla patients. Por último, se utiliza LIKE para hacer match cuando el nombre empieza con S y cuando termina con s. Se utiliza LEN para obtener los nombres cuya cantidad de carácteres es al menos seis.

- **Oscar**
  
    **Pregunta:** Show patient_id, first_name, last_name from patients whos diagnosis is 'Dementia'. Primary diagnosis is stored in the admissions table.

    **Respuesta:**

        ```sql
        SELECT patients.patient_id, first_name, last_name
        FROM patients
        JOIN admissions ON admissions.patient_id = patients.patient_id
        WHERE diagnosis = 'Dementia';
        ```
    **Comentario del codigo:** Se utiliza SELECT para mostrar las columnas del número de identificación, nombre y apellido; también, utilizando FROM se especifica que la tabla de la cual se requieren los datos es patients. Después, por medio de JOIN se unen las listas por medio del número de identificación del paciente y para finalizar, se utiliza WHERE para mostrar sólo los pacientes cuyo diagnóstico es Dementia.

#### Difíciles
- **Gabriel**
  
    **Pregunta:** Show all of the patients grouped into weight groups.
    Show the total amount of patients in each weight group.
    Order the list by the weight group decending.

    For example, if they weight 100 to 109 they are placed in the 100 weight group, 110-119 = 110 weight group, etc.

    **Respuesta:**

        ```sql
        SELECT COUNT(*) AS quantity_of_patients_in_group, FLOOR(weight / 10) * 10 AS group_of_weight
        FROM patients
        GROUP BY group_of_weight
        ORDER BY group_of_weight DESC;
        ```
    **Comentario del codigo:** En el SELECT se cuenta el número de pacientes en cada grupo utilizando COUNT(*) y se guarda en la columna llamada quantity_of_patients_in_group; mientras que en la otra columna se divide el peso del paciente entre 10 y con FLOOR se redondea al entero más cercano hacia abajo. Con FROM se especifica que los datos deben tomarse de patients y con GROUP BY se agrupan los resultados por grupo de peso. ORDER BY se utiliza para ordenar estos resultados de acuerdo al grupo de peso de manera descendente.

- **Antony**
  
    **Pregunta:** Show patient_id, weight, height, isObese from the patients table.
    Display isObese as a boolean 0 or 1.
    Obese is defined as weight(kg)/(height(m)2) >= 30.
    weight is in units kg.
    height is in units cm.

    **Respuesta:**

        ```sql
        SELECT 
            patient_id,
            weight,
            height,
            CASE 
                WHEN weight / ((height / 100.0) * (height / 100.0)) >= 30 THEN 1
                ELSE 0
            END AS isObese
        FROM patients;
        ```
    **Comentario del codigo:** Se seleccionan las columnas deseadas con SELECT, para la cuarta columna se hace uso de un CASE y un WHEN para determinar por medio de un uno si el paciente es obeso, en caso contrario se utiliza un cero. Finalmente, se utiliza FROM para obtener estos datos de la tabla patients.

### northwind.db

#### Fáciles
- **Antony**
  
    **Pregunta:** Show the company_name, contact_name, fax number of all customers that has a fax number. (not null)

    **Respuesta:**

        ```sql
        SELECT company_name, contact_name, fax
        FROM customers
        WHERE fax IS NOT NULL;
        ```
    **Comentario del codigo:** Para empezar, se obtienen las columnas del nombre de la compañía, el nombre de contacto y su fax utilizando SELECT. Se utiliza FROM para obtener los datos de la tabla costumers y se utiliza WHERE para mostrar sólamente aquellas compañías donde el 
    dato del fax no esté vacío en el registro.

- **Kevin**
  
    **Pregunta:** Show the first_name, last_name. hire_date of the most recently hired employee.

    **Respuesta:**

        ```sql
        SELECT first_name, last_name, hire_date
        FROM employees
        WHERE hire_date = (SELECT MAX(hire_date) FROM employees);
        ```
    **Comentario del codigo:** Por medio de SELECT se obtienen las columnas del nombre, apellido y fecha de vinculación. Se especifica que estos datos deben venir de employees por medio de FROM y para finalizar, se utiliza un WHERE que indica que sólamente se muestre el empleado que se vínculo más recientemente a la empresa, filtrado por medio de MAX().

- **Oscar**

    **Pregunta:** Show the average unit price rounded to 2 decimal places, the total units in stock, total discontinued products from the products table.

    **Respuesta:**

        ```sql
        SELECT round(avg(Unit_Price), 2) AS average_price,
        SUM(units_in_stock) AS total_stock,
        SUM(discontinued) AS total_discontinued
        FROM products;
        ```
    **Comentario del codigo:** En el SELECT, se obtiene en la primera columna el redondeo a dos decimales del promedio del precio unitario, esto es posible utilizando ROUND() y AVG(); estos se obtienen bajo el nombre de average_price. En la segunda columna se obtiene el total de unidades en el "stock" utilizando SUM, bajo el nombre total_stock. En la tercera columna se obtiene de esta misma forma el total de productos descontinuados. Por último, se utiliza FROM para obtener los datos de la tabla products.

#### Medias
- **Gabriel**

    **Pregunta:** Show de ProductName, CompanyName, CategoryName from the products, suppliers and categories table.

    **Respuesta:**

        ```sql
        SELECT products.product_name, suppliers.company_name, categories.category_name
        FROM products
        JOIN suppliers ON suppliers.supplier_id = products.Suppliers_id
        JOIN categories ON categories.category_id = products.Category_id;
        ```
    **Comentario del codigo:** Mediante SELECT se consultan product_name de la tabla products, company_name de la tabla suppliers y category_name de la tabla categories. Después se utiliza FROM products para obtener los datos de products, el primer JOIN une la tabla suppliers con products y sólo sale el valor de company_name si el supplier_id coincide en suppliers y products. En el segundo JOIN,s e utiliza un método parecido para sólo obtener el valor y mostrarlo en la tabla nueva si el category_id coincide en categories y products.

- **Kevin**

    **Pregunta:** Show the category_name and the average product unit price for each category rounded to 2 decimal places.

    **Respuesta:**

        ```sql
        SELECT c.category_name, ROUND(AVG(p.unit_price), 2) AS average_unit_price
        FROM products p
        JOIN categories c ON c.category_id = p.Category_id
        GROUP BY c.category_name;
        ```
    **Comentario del codigo:** Para realizar este ejercicio, primero es necesario obtener el category_name y después se crea una columna nueva que corresponde al redondeo del precio unitario a dos decimales, con el nombre de average_unit_price. Después se realiza un JOIN utilizando los category_id de cada tabla y se agrupan todos por su category_name.

- **Oscar**

    **Pregunta:** Show the city, company_name, contact_name from the customers and suppliers table merged together. Create a column which contains 'customers' or 'suppliers' depending on the table it came from.


    **Respuesta:**

        ```sql
        SELECT City, company_name, contact_name, 'customers' AS relationship
        FROM customers
        UNION
        SELECT city, company_name, contact_name, 'suppliers' AS relationship
        FROM suppliers;
        ```
    **Comentario del codigo:** Primero se utiliza SELECT para mostrar las columnas requeridas de la tabla costumers, después se especifica con FROM que estos datos pertenecen a costumers. Posteriormente, se utiliza UNION y se aplica practicamente el mismo proceso que se aplicó a la tabla costumers, pero ahora a la tabla suppliers; obteniendo así la unión de las tablas customers y suppliers.

#### Difíciles
- **Kevin**

    **Pregunta:** Show the employee's first_name and last_name, a "num_orders" column with a count of the orders taken, and a column called "Shipped" that displays "On Time" if the order shipped_date is less or equal to the required_date, "Late" if the order shipped late.
    Order by employee last_name, then by first_name, and then descending by number of orders.

    **Respuesta:**

        ```sql
        SELECT
        e.first_name,
        e.last_name,
        COUNT(o.order_id) As num_orders,
        (CASE WHEN o.shipped_date <= o.required_date THEN 'On Time' ELSE 'Late' END) AS shipped
        FROM orders o
        JOIN employees e ON e.employee_id = o.employee_id
        GROUP BY
        e.first_name,
        e.last_name,
        shipped
        ORDER BY
        e.last_name,
        e.first_name,
        num_orders DESC
        ```
    **Comentario del codigo:** Para este ejercicio, se obtuvieron las columnas de first_name y last_name de la tabla de employees de forma común. Para la tercera columna, se utilizó un contador de ordenes utilizando en el primary key de orders y para la cuarta se utilizó un case en donde se analizaba si la orden estuvo a tiempo o no. Después, se utilizó el JOIN para unir tablas, se utilizó GROUP BY para agrupar nombre y apellido con la columna shipped y por último, se ordena priorizando el orden por apellido, después por nombre y por úlitmo el número de ordenes de forma descendente.

- **Oscar**

    **Pregunta:** Show how much money the company lost due to giving discounts each year, order the years from most recent to least recent. Round to 2 decimal places

    **Respuesta:**

        ```sql         
        SELECT 
        YEAR(o.order_date) AS 'order_year' , 
        ROUND(SUM(p.unit_price * od.quantity * od.discount),2) AS 'discount_amount' 

        FROM orders o 
        JOIN order_details od ON o.order_id = od.order_id
        JOIN products p ON od.product_id = p.product_id

        GROUP BY YEAR(o.order_date)
        ORDER BY order_year desc;
        ```
    **Comentario del codigo:** Para la primera columna se utiliza YEAR() para obtener los años bajo el alias order_year, en la segunda columna se combina ROUND y SUM para obtener el total de pérdidas de la emrpesa con un redondeo de dos decimales. Después se especifica con FROM que los datos vienen de orders, se utilizan dos JOIN; el primero de ellos para concatenar las tablas por medio de order_id, el segundo para unirlas por medio de product_id. Para finalizar, se agrupan los años que coinciden entre sí, y los order_year de forma descendente.
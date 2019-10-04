-- DEPART LOCATIONS INSERTIONS
INSERT INTO dept_locations VALUES(
1,
'Houston'
);

INSERT INTO dept_locations VALUES(
4,
'Stafford'
);

INSERT INTO dept_locations VALUES(
5,
'Bellaire'
);

INSERT INTO dept_locations VALUES(
5,
'Sugarland'
);

INSERT INTO dept_locations VALUES(
5,
'Houston'
);

INSERT INTO dept_locations VALUES(
6,
'Atlanta'
);

INSERT INTO dept_locations VALUES(
6,
'Sacramento'
);

INSERT INTO dept_locations VALUES(
7,
'Milwaukee'
);

INSERT INTO dept_locations VALUES(
8,
'Chicago'
);

INSERT INTO dept_locations VALUES(
8,
'Dallas'
);

INSERT INTO dept_locations VALUES(
8,
'Philadephia'
);

INSERT INTO dept_locations VALUES(
8,
'Seattle'
);

INSERT INTO dept_locations VALUES(
8,
'Miami'
);

-- PROJECT INSERTIONS
INSERT INTO project VALUES(
'ProductX',
1,
'Bellaire',
5
);

INSERT INTO project VALUES(
'ProductY',
2,
'Sugarland',
5
);

INSERT INTO project VALUES(
'ProductZ',
3,
'Houston',
5
);

INSERT INTO project VALUES(
'Computerization',
10,
'Stafford',
4
);

INSERT INTO project VALUES(
'Reorganization',
20,
'Houston',
1
);

INSERT INTO project VALUES(
'Newbenefits',
30,
'Stafford',
4
);

INSERT INTO project VALUES(
'OperatingSystems',
61,
'Jacksonville',
6
);

INSERT INTO project VALUES(
'DatabaseSystems',
62,
'Birmingham',
6
);

INSERT INTO project VALUES(
'Middleware',
63,
'Jackson',
6
);

INSERT INTO project VALUES(
'InkjetPrinters',
91,
'Phoenix',
7
);

INSERT INTO project VALUES(
'LaserPrinters',
92,
'LasVegas',
7
);

-- DEPARTMENT INSERTIONS
INSERT INTO department VALUES(
'Research',
5,
333445555,
'1978-05-22'
);

INSERT INTO department VALUES(
'Administration',
4,
987654321,
'1985-01-01'
);

INSERT INTO department VALUES(
'Headquarters',
1,
888665555,
'1971-06-19'
);

INSERT INTO department VALUES(
'Software',
6,
111111100,
'1999-05-15'
);

INSERT INTO department VALUES(
'Hardware',
7,
444444400,
'1998-05-15'
);

INSERT INTO department VALUES(
'Sales',
8,
555555500,
'1997-01-01'
);

-- WORKS_ON
INSERT INTO works_on VALUES(
123456789,
1,
32.5
);

INSERT INTO works_on VALUES(
123456789,
2,
7.5
);

INSERT INTO works_on VALUES(
666884444,
3,
40.0
);

INSERT INTO works_on VALUES(
453453453,
1,
20.0
);

INSERT INTO works_on VALUES(
453453453,
2,
20.0
);

INSERT INTO works_on VALUES(
333445555,
2,
10.0
);

INSERT INTO works_on VALUES(
333445555,
3,
10.0
);

INSERT INTO works_on VALUES(
333445555,
10,
10.0
);

INSERT INTO works_on VALUES(
333445555,
20,
10.0
);

INSERT INTO works_on VALUES(
999887777,
30,
30.0
);

INSERT INTO works_on VALUES(
999887777,
10,
10.0
);

INSERT INTO works_on VALUES(
987987987,
10,
35.0
);

INSERT INTO works_on VALUES(
987987987,
30,
5.0
);

INSERT INTO works_on VALUES(
987654321,
30,
20.0
);

INSERT INTO works_on VALUES(
987654321,
20,
15.0
);

INSERT INTO works_on VALUES(
888665555,
20,
0
);

INSERT INTO works_on VALUES(
111111100,
61,
40.0
);

INSERT INTO works_on VALUES(
111111101,
61,
40.0
);

INSERT INTO works_on VALUES(
111111102,
61,
40.0
);

INSERT INTO works_on VALUES(
111111103,
61,
40.0
);

INSERT INTO works_on VALUES(
222222200,
62,
40.0
);

INSERT INTO works_on VALUES(
222222201,
62,
48.0
);

INSERT INTO works_on VALUES(
222222202,
62,
40.0
);

INSERT INTO works_on VALUES(
222222203,
62,
40.0
);

INSERT INTO works_on VALUES(
222222204,
62,
40.0
);

INSERT INTO works_on VALUES(
222222205,
62,
40.0
);

INSERT INTO works_on VALUES(
333333300,
63,
40.0
);

INSERT INTO works_on VALUES(
333333301,
63,
46.0
);

INSERT INTO works_on VALUES(
444444400,
91,
40.0
);

INSERT INTO works_on VALUES(
444444401,
91,
40.0
);

INSERT INTO works_on VALUES(
444444402,
91,
40.0
);

INSERT INTO works_on VALUES(
444444403,
91,
40.0
);

INSERT INTO works_on VALUES(
555555500,
92,
40.0
);

INSERT INTO works_on VALUES(
555555501,
92,
44.0
);

INSERT INTO works_on VALUES(
666666601,
91,
40.0
);

INSERT INTO works_on VALUES(
666666603,
91,
40.0
);

INSERT INTO works_on VALUES(
666666604,
91,
40.0
);

INSERT INTO works_on VALUES(
666666605,
92,
40.0
);

INSERT INTO works_on VALUES(
666666606,
91,
40.0
);

INSERT INTO works_on VALUES(
666666607,
61,
40.0
);

INSERT INTO works_on VALUES(
666666608,
62,
40.0
);

INSERT INTO works_on VALUES(
666666609,
63,
40.0
);

INSERT INTO works_on VALUES(
666666610,
61,
40.0
);

INSERT INTO works_on VALUES(
666666611,
61,
40.0
);

INSERT INTO works_on VALUES(
666666612,
61,
40.0
);

INSERT INTO works_on VALUES(
666666613,
61,
30.0
);

INSERT INTO works_on VALUES(
666666613,
62,
10.0
);

INSERT INTO works_on VALUES(
666666613,
63,
10.0
);

-- DEPENDENT
INSERT INTO dependent VALUES(
333445555,
'Alice',
'F',
'1976-04-05',
'Daughter'
);

INSERT INTO dependent VALUES(
333445555,
'Theodore',
'M',
'1973-10-25',
'Son'
);

INSERT INTO dependent VALUES(
333445555,
'Joy',
'F',
'1948-05-03',
'Spouse'
);

INSERT INTO dependent VALUES(
987654321,
'Abner',
'M',
'1932-02-29',
'Spouse'
);

INSERT INTO dependent VALUES(
123456789,
'Michael',
'M',
'1978-01-01',
'Son'
);

INSERT INTO dependent VALUES(
123456789,
'Alice',
'F',
'1978-12-31',
'Daughter'
);

INSERT INTO dependent VALUES(
123456789,
'Elizabeth',
'F',
'1957-05-05',
'Spouse'
);

INSERT INTO dependent VALUES(
444444400,
'Johnny',
'M',
'1997-04-04',
'Son'
);

INSERT INTO dependent VALUES(
444444400,
'Tommy',
'M',
'1999-06-07',
'Son'
);

INSERT INTO dependent VALUES(
444444401,
'Chris',
'M',
'1969-04-19',
'Spouse'
);

INSERT INTO dependent VALUES(
444444402,
'Alec',
'M',
'1964-02-14',
'Spouse'
);



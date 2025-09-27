SELECT id, company_name FROM ai_m
UNION
SELECT id, company_name FROM ai_ap;
SELECT id, company_name FROM ai_m
UNION ALL
SELECT id, company_name FROM ai_ap;
SELECT id, company_name FROM ai_m
MINUS
SELECT id, company_name FROM ai_ap;
SELECT id, company_name FROM ai_m
INTERSECT
SELECT id, company_name FROM ai_ap;
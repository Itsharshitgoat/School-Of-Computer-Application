use ai;
select ai_m.id,ai_m.parameter,ai_ap.active_parameter
from ai_m
inner join ai_ap on ai_m.id=ai_ap.id;
select ai_m.id,ai_m.parameter,ai_ap.active_parameter
from ai_m
left join ai_ap on ai_m.id=ai_ap.id;
select ai_m.id,ai_m.parameter,ai_ap.active_parameter
from ai_m
right join ai_ap on ai_m.id=ai_ap.id;
select ai_m.id,ai_m.parameter,ai_ap.active_parameter
from ai_m
cross join ai_ap;
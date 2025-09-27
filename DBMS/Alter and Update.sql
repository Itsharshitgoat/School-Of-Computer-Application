alter table ai_m
add company_name varchar(100) unique;
alter table ai_ap
add company_name varchar(100) unique;
update ai_m
set company_name='Hangzhou DeepSeek'
where id=1;
update ai_m
set company_name='Alibaba Cloud'
where id=2;
update ai_m
set company_name='OpenAI'
where id=3;
update ai_m
set company_name='Meta'
where id=4;
update ai_m
set company_name=' Microsoft'
where id=5;
update ai_ap
set company_name='Hangzhou DeepSeek'
where id=1;
update ai_ap
set company_name='Alibaba Cloud'
where id=2;
update ai_ap
set company_name='OpenAI'
where id=3;
update ai_ap
set company_name='Meta'
where id=4;
update ai_ap
set company_name=' Microsoft'
where id=5;

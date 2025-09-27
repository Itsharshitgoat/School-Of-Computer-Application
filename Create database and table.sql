create database ai;
use ai;
create table ai_m(
id int primary key,
name varchar(100) unique,
parameter int not null
);
create table ai_ap(
id int,
name varchar(100) unique,
active_parameter int not null,
foreign key(id) references ai_m(id)
on update cascade
on delete cascade
);
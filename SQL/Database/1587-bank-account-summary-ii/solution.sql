# Write your MySQL query statement below
select u.name as name ,t.balance as balance
from Users u
left join (
    select sum(tt.amount) as balance,tt.account as account
    from Transactions as tt
    group by tt.account
) as t
on t.account=u.account
where (t.balance>10000)

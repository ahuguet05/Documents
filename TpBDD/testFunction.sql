delimiter ##
create function fois2 (nb INT)
	returns integer
	begin
	return nb*2;
	end
##
delimiter ;

delimiter ##
create function CA (vno int, pu int)
	returns integer
	begin
	return (select pu*sum(aquant) from achat where vno=achat.vno); 
	end
##
delimiter ; 

select 
    title, rating 
from 
    IMDB
inner join
    earning on IMDB.Movie_id = earning.Movie_id
where
    metacritic > 60 
    and domestic > 100000000
    and title LIKE '%(2012)';

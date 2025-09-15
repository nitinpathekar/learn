import MovieCard from "../components/MovieCard";

function Home() {
    const movies = [
        {
            id: 1,
            title: "MS Dhoni",
            url: "https://share.google/images/AmGI1FhY043xK7T42",
            release_date: "10/10/2022"
        },
        {
            id: 2,
            title: "Virat Kohli",
            url: "https://share.google/images/KOLH1FhY043xK7T99", 
            release_date: "15/11/2021"
        },
        {
            id: 3,
            title: "Sachin Tendulkar",
            url: "https://share.google/images/SAC1FhY043xK7T54",
            release_date: "24/04/2019"
        },
        {
            id: 4,
            title: "Rohit Sharma",
            url: "https://share.google/images/ROH1FhY043xK7T77",
            release_date: "30/06/2020"
        },
        {
            id: 5,
            title: "Yuvraj Singh",
            url: "https://share.google/images/YUV1FhY043xK7T88",
            release_date: "12/12/2018"
        },
        {
            id: 6,
            title: "Suresh Raina",
            url: "https://share.google/images/RAIN1FhY043xK7T33",
            release_date: "20/05/2021"
        },
        {
            id: 7,
            title: "Hardik Pandya",
            url: "https://share.google/images/HAR1FhY043xK7T55",
            release_date: "01/08/2022"
        },
        {
            id: 8,
            title: "KL Rahul",
            url: "https://share.google/images/KLR1FhY043xK7T11",
            release_date: "05/01/2023"
        },
        {
            id: 9,
            title: "Shikhar Dhawan",
            url: "https://share.google/images/DHA1FhY043xK7T22",
            release_date: "19/09/2020"
        },
        {
            id: 10,
            title: "Ravindra Jadeja",
            url: "https://share.google/images/JAD1FhY043xK7T44",
            release_date: "23/03/2021"
        }
    ];
    const handleSearch = () => {

    }
    return (<>
        <div className="home">
            <form onSubmit={handleSearch} className="search-form">
                <input type="text"
                    placeholder="Search for movies.." className="search-input" />
                    <button type="submit" className="search-botton">Search</button>
            </form>

            <div className="movies-grid">
                {movies.map((movie) => (
                    <MovieCard movie={movie} key={movie.id} />
                ))}
            </div>
        </div>
    </>)
}
export default Home;
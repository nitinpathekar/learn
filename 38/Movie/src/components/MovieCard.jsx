function MovieCard({ movie }) {
  function onFavoriteClick() {
    alert("alwert")
  }

  return <>

    <div className="movie-card">

      <div className="movie-poster">
        <img src={movie.url} alt={movie.title} />
        <div className="movie-overplay">
          <button className="facorite=btn" onClick={onFavoriteClick}></button>
        </div>

      </div>
      <div className="detais" >
        <h3>{movie.title}</h3>
        <p>{movie.releaseDate}</p>
      </div>


    </div>



  </>;
}
export default MovieCard
import { useState } from "react"

export default function LudoBoard() {


    let [move, setmove] = useState({ red: 0, blue: 0, black: 0 });
    return <>
        <div className="board">
            <p>blue moves ={move.blue}</p>
            <button style={{ color: "blue", backgroundColor:"white" }}>+1</button>
            <p>black moves ={move.black}</p>
            <button style={{ color: "black", backgroundColor:"white"}}>+1</button>
            <p>red moves ={move.red}</p>
            <button style={{ color: "red", backgroundColor:"white" }}>+1</button> 
        
        </div>
    </>
}


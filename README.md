<p dir="ltr" style="text-align: left;"></p>
<p><span><span style=""><span></span></span></span></p>
<h5><strong style="font-size: 1.17188rem;"><u>Problem:</u></strong><br></h5>
<div>In this exam, you are given a maze consisting of various rooms connected to each other via a direct door. In one of those rooms, there is a secret treasure and your purpose is to find that treasure. You do not know in which room the treasure is placed. Therefore starting from the entrance, you search for the treasure walking through room-by-room. During the search, you print the path that you follow until you reach the treasure.</div>
<div><br></div>
<div>&nbsp; &nbsp; &nbsp;<img src="https://github.com/user-attachments/assets/f0c6ffa0-1fb1-4d9d-af5a-da220149b79a" alt="maze" width="1270" height="744" class="img-fluid atto_image_button_text-bottom"><br></div>
<div><br></div>
<div>Here are the details of the problem structure:</div>
<div>
    <ul>
        <li>The maze is actually a connected undirected graph. Each room is a node of the graph. If a room is connected to an other room, there is an edge between those two rooms.&nbsp;</li>
        <li>Each room is defined in the type of <strong><em>Struct Room</em></strong>. This structure has 3 components:<ul>
                <li><em>int id:</em> Each room has a unique id.</li>
                <li><em>char content</em>: Shows the content of the room. All rooms have the content of '-' character except the room containing the treasure. That room has the content of '*' character representing the treasure.</li>
                <li><em>vector&lt;Room*&gt; neighbors</em>: Holds a pointer for the rooms which are connected to the current room via a door.</li>
            </ul>
        </li>
        <li>If a Room Y is defined as a neighbor to Room X, then you can be sure that Room X is also defined as a neighbor to Room Y in its neighborhood vector.</li>
        <li>The rooms of the maze will be given to the function as in the type of <em>vector&lt;Room*&gt;</em>.&nbsp;</li>
        <li>You are expected to return the path as vector of ids of rooms which are visited.</li>
    </ul>
</div>
<div><span style="font-size: 0.9375rem;">Here are the details of how to search/traverse the maze:</span></div>
<div>
    <ul>
        <li><span style="font-size: 0.9375rem;">You will actually do a kind of DFS. You will start from the first room (first means the firstly defined room, not the room with the first id) to traverse. You will pass to one of its neighbor rooms, and then to one of the neighbors of it, and to one of the neighbors of it, and so on. As you pass through a new room each time, you will add the id of that room to the output path. Upto here, it is exactly DFS.</span></li>
        <li><span style="font-size: 0.9375rem;">&nbsp;When you come to an end, that is a room with no unvisited neighbor, then you should turn back. While going back, you should also add the ids of the rooms&nbsp; that you need to visit one more time into the output path. For instance, assume that Room 5 is neighbor to Room 12 and assume that you come to Room 5 at some point and have not visited Room 12, yet. Also assume Room 12 is not neighbor to any other nonvisited room. Then, in your output path a pattern like the following have to exist: 5, 12, 5 . That means "you pass through Room 5, then Room 12, then you turn back to Room 5 again since there is not left any nonvisited room neighbor to Room 12. In short, in addition to usual DFS output, you are expected to print the nodes at each time you visit.</span></li>
        <li><span style="font-size: 0.9375rem;">When you find the treasure (The Room whose content is '*'), you should turn back totally. That is, you need to go back over the route that you follow. You should not go into any new room. During the going back, you again add the ids of the rooms that you visit.</span></li>
        <li>For the neighbor selection, you need to follow the order in which the rooms are defined as a neighbor for that Room. For instance, if the neighbors of Room 5&nbsp; are ordered as &lt;Room 12, Room 7, Room 9&gt; inside the neighbor vector, then you should select Room 12 first. After completing Room 12, you should continue from Room 7 and next from Room 9. Assume that Room 7 was visited before. Then you should follow Room 9 after completing the Room 12 and its neighbors. In other words, you should skip Room 7.</li>
        <li>There will always be exactly one room including the treasure.</li>
    </ul>
    <h5><strong><u>Example IO:</u></strong></h5>
</div>
<div><span style="font-size: 0.9375rem;"><span>Please pay attention to the ordering of the neighbors for each node. It affects the resulting path!</span></span></div>
<div><span style="font-size: 0.9375rem;"><span><br></span></span></div>
<div class="editor-indent" style="margin-left: 30px;">
    <div><span style="font-size: 0.9375rem;"><strong>EXAMPLE-1</strong></span></div>
</div><img src="https://github.com/user-attachments/assets/a2e00083-7d4d-44c3-ba75-3e1b0c0f5834" alt="dfs_example1" width="514" height="685" class="img-fluid atto_image_button_text-bottom"><br>
<div class="editor-indent" style="margin-left: 30px;"><strong>EXAMPLE-2</strong></div><img src="https://github.com/user-attachments/assets/cbae761f-8d20-4a4b-8a9e-943b62c07138" alt="dfs_example2" width="514" height="682" class="img-fluid atto_image_button_text-bottom"><br>
<div class="editor-indent" style="margin-left: 30px;"><strong>EXAMPLE-3</strong></div><img src="https://github.com/user-attachments/assets/4abca68f-b1ce-4128-943f-c4078938194e" alt="dfs_example3" width="514" height="684" class="img-fluid atto_image_button_text-bottom"><br>
<div class="editor-indent" style="margin-left: 30px;"><strong>EXAMPLE-4</strong></div><img src="https://github.com/user-attachments/assets/bf06fc94-1bda-440a-be4e-00815840287a" alt="dfs_example4" width="515" height="683" class="img-fluid atto_image_button_text-bottom"><br><br>
<h5><strong><u>Constraints:</u></strong></h5>
<p></p>
<ul>
    <li>Maximum number of nodes in a maze graph will be&nbsp;<strong>10000</strong>.&nbsp;</li>
</ul>
<h5><span><strong><u>Evaluation:</u></strong></span></h5>
<p></p>
<ul>
    <li>After your exam, black box evaluation will be carried out. You will get full points if your function returns the correct result without exceeding time limit.</li>
</ul>
<h5><u><strong>Specifications:</strong></u></h5>
<p dir="ltr"></p>
<ul>
    <li>There are <strong>only</strong><strong><strong>&nbsp;1 task</strong></strong>&nbsp;to be solved in&nbsp;<strong>12 hours</strong>&nbsp;in this take home exam.</li>
    <li>You will implement your solutions in&nbsp;<strong>the5.cpp</strong>&nbsp;file.</li>
    <li>Do&nbsp;<strong>not&nbsp;</strong>change the first line of&nbsp;<strong>the5.cpp</strong>, which is&nbsp;<strong>#include "the5.h"</strong></li>
    <li><em>&lt;iostream&gt;,&nbsp; &lt;climits&gt;,</em><em>&nbsp;&lt;vector&gt;, &lt;string&gt;, &lt;stack&gt;, &lt;queue&gt;&nbsp;&nbsp;</em>are included in "the5.h" for your convenience.</li>
    <li>Do&nbsp;<strong>not&nbsp;</strong>change the arguments and return&nbsp;<strong>types</strong>&nbsp;of the function<strong>&nbsp;maze_trace().</strong><strong>&nbsp;</strong>(You should change return&nbsp;<strong>value</strong>, on the other hand.)<strong><br></strong></li>
    <li>Do&nbsp;<strong>not&nbsp;</strong>include any other library or write include anywhere in your&nbsp;<strong>the5.cpp</strong>&nbsp;file (not even in comments)</li>
</ul>
<h5><strong><u>Compilation:</u></strong></h5>
<p></p>
<ul>
    <li>You are given&nbsp;<strong>test.cpp</strong>&nbsp;file to&nbsp;<strong>test&nbsp;</strong>your work on&nbsp;<strong>ODTÜClass</strong>&nbsp;or your&nbsp;<strong>locale</strong>. You can and you are encouraged to modify this file to add different test cases.</li>
    <li>If you want to&nbsp;<strong>test&nbsp;</strong>your work and see your outputs you can&nbsp;<strong>compile and run&nbsp;</strong>your work on your locale as:</li>
</ul>
<table cellspacing="0" cellpadding="0" border="1">
    <tbody>
        <tr>
            <td width="604" valign="top">
                <p>&gt;g++ test.cpp the5.cpp -Wall -std=c++11 -o test</p>
                <p>&gt; ./test</p>
            </td>
        </tr>
    </tbody>
</table><br>
<ul>
    <li>You can test your&nbsp;<strong>the5.cpp</strong>&nbsp;on virtual lab environment. If you click&nbsp;<strong>run</strong>, your function will be compiled and executed with&nbsp;<strong>test.cpp</strong>. If you click&nbsp;<strong>evaluate</strong>, you will get a feedback for your current work and your work will be&nbsp;<strong>temporarily&nbsp;</strong>graded for&nbsp;<strong>limited&nbsp;</strong>number of inputs.</li>
    <li>The grade you see in lab is&nbsp;<strong>not</strong>&nbsp;your final grade, your code will be re-evaluated with&nbsp;<strong>completely</strong>&nbsp;<strong>different&nbsp;</strong>inputs after the exam.</li>
</ul>
<p>The system has the following limits:<br></p>
<ul>
    <li>a maximum execution time of 32 seconds</li>
    <li>a 192 MB maximum memory limit</li>
    <li>an execution file size of 1M.</li>
    <li>Solutions with longer running times will not be graded.</li>
    <li>If you are sure that your solution works in the expected complexity constrains but your evaluation fails due to limits in the lab environment, the constant factors may be the problem.<br><br></li>
</ul>
<table width="656" cellspacing="0" cellpadding="0" border="1">
    <tbody>
        <tr>
            <td width="656" valign="top">
                <p>vector&lt;int&gt; maze_trace(vector&lt;Room*&gt; maze);<br></p>
            </td>
        </tr>
    </tbody>
</table>
<div><br></div>
<div></div><br>
<p></p>

setViewDistance 1500;
titleCut ["","BLACK IN", 20];
showCinemaBorder false;

0 fadeMusic 0;
playMusic ["dayz_track_death_1",16];
5 fadeMusic 0.5;

while {true} do 
{
	waitUntil {preloadCamera getPos camera_1};
	titleCut ["", "BLACK IN", 4];
	//_camera = "camera" camCreate [0,0,0];
	_camera = "camera" camCreate getPos camera_1;
	cutText ["Barro", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_1;
	_camera camSetTarget camtarget_1;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_2};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Aguado", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_2;
	_camera camSetTarget camtarget_2;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_3};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Mt. Asormo", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_3;
	_camera camSetTarget camtarget_3;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_4};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Calamar", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_4;
	_camera camSetTarget camtarget_4;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_5};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Aeropuerto Sargentas", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_5;
	_camera camSetTarget camtarget_5;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_6};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Mt. Toris", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_6;
	_camera camSetTarget camtarget_6;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_7};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText [" ", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_7;
	_camera camSetTarget camtarget_7;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_8};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Lagosa", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_8;
	_camera camSetTarget camtarget_8;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_9};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Old Mines", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_9;
	_camera camSetTarget camtarget_9;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_10};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Marecella", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_10;
	_camera camSetTarget camtarget_10;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_11};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText [" ", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_11;
	_camera camSetTarget camtarget_11;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_12};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Victorin", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_12;
	_camera camSetTarget camtarget_12;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_13};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Prospero", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_13;
	_camera camSetTarget camtarget_13;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_14};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Faunaverde", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_14;
	_camera camSetTarget camtarget_14;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_15};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Pancho", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_15;
	_camera camSetTarget camtarget_15;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_16};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Montehofo", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_16;
	_camera camSetTarget camtarget_16;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_17};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Los Peligron", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_17;
	_camera camSetTarget camtarget_17;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_18};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Morada", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_18;
	_camera camSetTarget camtarget_18;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_19};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Rosalia", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_19;
	_camera camSetTarget camtarget_19;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_20};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Vidora", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_20;
	_camera camSetTarget camtarget_20;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_21};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Fernando", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_21;
	_camera camSetTarget camtarget_21;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_22};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Calapedro", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_22;
	_camera camSetTarget camtarget_22;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_23};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Corazon", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_23;
	_camera camSetTarget camtarget_23;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_24};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Sanvigado", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_24;
	_camera camSetTarget camtarget_24;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_25};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Manteria", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_25;
	_camera camSetTarget camtarget_25;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_26};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Maruko", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_26;
	_camera camSetTarget camtarget_26;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_27};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Maruko", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_27;
	_camera camSetTarget camtarget_27;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_28};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Maruko", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_28;
	_camera camSetTarget camtarget_28;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_29};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["San Isabel", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_29;
	_camera camSetTarget camtarget_29;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_30};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Aculto", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_30;
	_camera camSetTarget camtarget_30;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_31};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["FOB Eddie", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_31;
	_camera camSetTarget camtarget_31;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_32};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Haciendos", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_32;
	_camera camSetTarget camtarget_32;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_33};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Guayucca", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_33;
	_camera camSetTarget camtarget_33;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};
	
	sleep 10;
	waitUntil {preloadCamera getPos camera_34};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Tucos", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_34;
	_camera camSetTarget camtarget_34;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};

	sleep 10;
	waitUntil {preloadCamera getPos camera_35};
	titleCut ["", "BLACK IN", 4];
	_camera = "camera" camCreate [0,0,0];
	cutText ["Tucos", "PLAIN DOWN", 4];
	_camera cameraEffect ["INTERNAL","BACK"];
	_camera camSetPos getPos camera_35;
	_camera camSetTarget camtarget_34;
	_camera camCommit 0;
	waitUntil {camCommitted _camera};

	sleep 10;
};
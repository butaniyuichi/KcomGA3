#pragma once
#ifndef __C_OBJ_GIMIMICKMANAGER_H__
#define __C_OBJ_GIMIMICKMANAGER_H__

//使用オブジェクトのプロトタイプ宣言
class Gimickearphone;
class Gimickearkoune;
class Gimickcat;
class Gimmickbicycle;
class GimmickTelevision;
class GimmickOven;
class GimmickKatsuo;
class GimmickDoor;
class GimmickDog;
class GimmickManholeCover;
class GimmickManholeHole;
class GimmickOldman;
class GimmickChildren;
class GimmickGranny;
class GimmickMynah;
class GimmickShelf;
class GimmickWindchime;
class GimmickDoctor;
class GimmickComputer;
class GimmickRecorder;

class CObjGimmickManager : public CObj
{
public:
	CObjGimmickManager() {};
	~CObjGimmickManager() {};

	//			　選択キャラ, 　　　ステージID
	void Init(int select_chara, int stage_id);		//イニシャライズ
	void Destructor();	//デストラクタ
	void Action();		//アクション
	void Draw();		//ドロー
private:

	int m_Stage_ID;			//ステージの番号

	//チュートリアル（博士）ステージ↓
	GimmickDoctor* m_gimmick_doctor;	//博士
	GimmickComputer* m_gimmick_computer;//コンピュータ
	GimmickRecorder* m_gimmick_recorder;//レコーダー
	//チュートリアル（博士）ステージ↑

	//シオンステージ↓
	//ステージ2↓
	Gimmickearphone* m_gimmick_earphone;
	Gimmickkoune* m_gimmick_koune;
	Gimmickcat* m_gimmick_cat;
	Gimmickbicycle* m_gimmick_bicycle;
	//ステージ2↑
	//ステージ3↓
	GimmickChildren* m_gimmick_children;
	GimmickGranny* m_gimmick_granny;
	GimmickMynah* m_gimmick_mynah;
	GimmickShelf* m_gimmick_shelf;
	GimmickWindchime* m_gimmick_windchime;
	//ステージ3↑
	//シオンステージ1↑





	//メルエルステージ↓
	//ステージ1↓
	GimmickTelevision* m_gimmick_television;
	GimmickOven* m_gimmick_oven;
	GimmickKatsuo* m_gimmick_katsuo;
	GimmickDoor* m_gimmick_door;

	//ステージ1↑
	//メルエルステージ↑




	//コウネステージ↓
	//ステージ1↓
	GimmickDog*  m_gimmick_dog;
	GimmickManholeCover*  m_gimmick_manhole_cover;
	GimmickManholeHole*  m_gimmick_manhole_hole;
	GimmickOldman*  m_gimmick_oldman;
	//ステージ1↑
	//コウネステージ↑






	
};

#endif
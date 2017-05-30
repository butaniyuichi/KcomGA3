#include "main.h"

//シーンに必要なグラフィックやサウンド登録
void CSceneDataSelect::InitScene()
{

	//このシーンで表示させるイメージ情報
	//Image()->LoadImage("image.png",0,TEX_SIZE_512);
	//Image()->LoadImage("back.png",1,TEX_SIZE_512);
	//Image()->LoadImage("boss.png",2,TEX_SIZE_256);

	//文字データ作成
	//Font()->SetStrTex("ボスHP：");
	//Font()->SetStrTex("アイテム有効：速度アップ");

	//このシーンで鳴らすサウンド情報
	//Audio()->LoadAudio(0,"game_maoudamashii_1_battle37.wav");
	//Audio()->LoadAudio(1,"se_maoudamashii_se_pc03.wav");
	//Audio()->LoadAudio(2,"se_maoudamashii_explosion06.wav");

	//シーンに必要なオブジェクト情報

	m_obj_dataselect = new CObjDataSelect();
	m_obj_dataselect->Init();
	Obj()->InsertObj(m_obj_dataselect,OBJ_DATASELECT,0,this,HIT_BOX_OFF);

	//Audio()->LoopStart(0);

}

//シーン実行
void CSceneDataSelect::Scene()
{

}
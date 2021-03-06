#ifndef __COBJDATASELECT_H__
#define __COBJDATASELECT_H__

#define MAX_SAVEDATA 3       //セーブデータの数
#define CHAR_PROGRESS 3		 //キャラクターの数(進行度用)

struct CharacterData
{
	int Koune_Data;
	int Sion_Data;
	int Melueru_Data;
};


class CObjDataSelect : public CObj {
public:
	void Init();		//イニシャライズ
	void Destructor();	//デストラクタ
	void Action();		//アクション
	void Draw();		//ドロー

	void ButtonFromTheBegin(); //はじめから
	void ButtonContinuation(); //つづきから

	

private:

	RECT m_rDst_Koune,m_rDst_Sion, m_rDst_Melueru;
	RECT m_rSrc_Koune, m_rSrc_Sion, m_rSrc_Melueru;



	bool m_bsavedataflg; //各セーブデータ確認する
	bool m_bmessageflg;  //メッセージフラグ

	ButtonDataSelect* m_obj_savedatabutton[MAX_SAVEDATA];	//データ選択ボタン
	ButtonDataSelect* m_obj_titlebackbutton;				//戻るボタン
	ButtonDataSelect* m_obj_deletebutton;					//初期化するボタン

	int m_inext_scene;	//はじめからつづきからどちらが選ばれたか
	int m_button_y;			//セーブデータ表示位置
	
	bool m_icreateflg;		//ボタンが作成されたか確認

	int m_iSelectData;

	bool m_bselect_flg[MAX_SAVEDATA];  //(つづきから)ボタンが選択できるかどうか

	//プレイヤー名文字サイズ
	int text_size_playername[MAX_SAVEDATA]; 

	//データ表示用
	char m_cplayername[MAX_SAVEDATA][256];

	char m_csave_playername[MAX_SAVEDATA][256];			//プレイヤーネーム
	int  m_iplayerprogress[MAX_SAVEDATA][CHAR_PROGRESS];//キャラクター進行度


	CharacterData charaData[MAX_SAVEDATA];

	//一回だけロードする用
	int iLoad_flg;
	int iTitle_flg;

	int m_iprogress_cnt[MAX_SAVEDATA][3];

	int m_Load_KouneClearflg[MAX_SAVEDATA][10];
	int m_Load_SionClearflg[MAX_SAVEDATA][10];
	int m_Load_MelueruClearflg[MAX_SAVEDATA][10];


};

#endif // !__COBJDATASELECT_H__
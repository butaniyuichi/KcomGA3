#include "main.h"

void ButtonFromTheBegin(); //はじめから
void ButtonContinuation(); //つづきから

void CObjDataSelect::Init()
{
}

void CObjDataSelect::Destructor()
{
}

void CObjDataSelect::Action()
{
	//データの有無を確認する
	//セーブデータの有無を確認する
	/*for (int; < 3 : ++) {
		if (ButtonData[][]) {
			m_dataflg[]//←変数名かえる = true;
		}
	}*/


  //ボタン判定

	//if () {
		//初めから
	//	ButtonFromTheBegin();
	//}if(){
		//続きから
	//	ButtonContinuation();
	//}

	//タイトルに戻る

}

void CObjDataSelect::Draw()
{
	//カラー情報
	float col[4] = { 1.0f,1.0f,1.0f,1.0f };

	//画像
	//主人公１

	//主人公２

	//主人公３

	//テスト描画
	Font()->StrDraw("dataselect", 0, 0, 16, col);

	//プレイヤー名１
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公１の進行度
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公２の進行度
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公３の進行度
	Font()->StrDraw("", 0, 0, 16, col);

	//プレイヤー名２
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公１の進行度
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公２の進行度
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公３の進行度
	Font()->StrDraw("", 0, 0, 16, col);

	//プレイヤー名３
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公１の進行度
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公２の進行度
	Font()->StrDraw("", 0, 0, 16, col);
	//主人公３の進行度
	Font()->StrDraw("", 0, 0, 16, col);


	//戻る
	Font()->StrDraw("戻る", 0, 0, 16, col);

}


//はじめから
void ButtonFromTheBegin() {
	//マウスク判定
	//カーソルがある所を拡大+発光
	
	//選択しました


}

//つづきから
void ButtonContinuation() {
	//保留
/*	for (int; < 3;++) {
		if (m_dataflg[]) {
			
		}
		else {
			//データが入ってなかったら選べなくする/暗くする
			//判定消すかできるほうだけ判定を入れる

		}
	}
*/

	//マウス判定
	//カーソルがある所を拡大+発光
	//......


	//データが入ってなかったら選べなくする/暗くする
	switch () {
		//選択されたデータをロード
		//セーブデータ１
		case 1:
			//データをロードする


	//		break;

	//	//---------------------------------------------
	//	//セーブデータ２
	//	case 2:
	//		//データをロードする


	//		break;

	//	//---------------------------------------------
	//	//セーブデータ３
	//	case 3:
	//		//データをロードする


			break;
	}

	//シーン移動

	
}

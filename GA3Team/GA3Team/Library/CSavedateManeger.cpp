#include "../main.h"

void CSavedataManeger::Loadsavedata()
{
	ifstream stream("test.sav", std::ios::in);
	vector<string> vstr;
	string str;

	int dataflg = 0;
	int saveflg = 0;

	while (getline(stream, str)) {
		vstr.push_back(str);
	}

	for (auto itr = vstr.begin(); itr != vstr.end(); itr++) {//�s
		//�v���C���[�l�[����ǂݎ��
		if ((*itr)[0] == '[')
		{
			(*itr).erase(0, 1);
			strcpy_s(Savedata[saveflg].m_cPlayerName, (*itr).c_str());
			continue;
		}
		//�`���[�g���A���N���A���Ă邩�ۂ��𔻒f����t���O���擾
		if ((*itr)[0] == ']')
		{
			(*itr).erase(0, 1);
			if ((*itr)[0] == '0') {
				Savedata[saveflg].m_btutorial = false;
			}
			else {
				Savedata[saveflg].m_btutorial = true;
			}
			continue;
		}
		//�e�t���O���擾����
		for (int i = 0; i < (*itr).length(); i++) {//����
			switch (dataflg) { //__SWITCH__
			case 0: { //m_bKouneflg
				if ((*itr)[i] == '0') {
					Savedata[saveflg].m_btutoriaruflg.push_back(false);
				}
				else {
					Savedata[saveflg].m_btutoriaruflg.push_back(true);
				}
				break;
			}
			case 1: { //m_bKouneflg
				if ((*itr)[i] == '0') {
					Savedata[saveflg].m_bKouneflg.push_back(false);
				}
				else {
					Savedata[saveflg].m_bKouneflg.push_back(true);
				}
				break;
			}
			case 2: {//m_bKouneClearflg
				if ((*itr)[i] == '0') {
					Savedata[saveflg].m_bKouneClearflg.push_back(false);
				}
				else {
					Savedata[saveflg].m_bKouneClearflg.push_back(true);
				}
				break;
			}
			case 3: {//m_bKouneClearflg
				if ((*itr)[i] == '0') {
					Savedata[saveflg].m_bSionflg.push_back(false);
				}
				else {
					Savedata[saveflg].m_bSionflg.push_back(true);
				}
				break;
			}
			case 4: {//m_bKouneClearflg
				if ((*itr)[i] == '0') {
					Savedata[saveflg].m_bSionClearflg.push_back(false);
				}
				else {
					Savedata[saveflg].m_bSionClearflg.push_back(true);
				}
				break;
			}
			case 5: {//m_bKouneClearflg
				if ((*itr)[i] == '0') {
					Savedata[saveflg].m_bMelueruflg.push_back(false);
				}
				else {
					Savedata[saveflg].m_bMelueruflg.push_back(true);
				}
				break;
			}
			case 6: {//m_bKouneClearflg
				if ((*itr)[i] == '0') {
					Savedata[saveflg].m_bMelueruClearflg.push_back(false);
				}
				else {
					Savedata[saveflg].m_bMelueruClearflg.push_back(true);
				}
				break;
			}
			}//!__SWITCH__
		}//!__CHAR__
		dataflg++;

		if (saveflg >= 3)
			return;

		if (dataflg > 6)
		{
			saveflg++;
			dataflg = 0;
		}
	}//!__TEXT__
}

void CSavedataManeger::Writesavedata()
{
	ofstream stream("test.sav");
	ostream_iterator<bool> stream_itr(stream, "");
	for (auto itr = Savedata.begin(); itr != Savedata.end(); itr++)
	{
		stream << "[";
		stream << (*itr).m_cPlayerName;
		stream << "\n";
		stream << "]";
		stream << (*itr).m_btutorial;
		stream << "\n";
		copy((*itr).m_btutoriaruflg.begin(), (*itr).m_btutoriaruflg.end(), stream_itr);
		stream << "\n";
		copy((*itr).m_bKouneflg.begin(), (*itr).m_bKouneflg.end(), stream_itr);
		stream << "\n";
		copy((*itr).m_bKouneClearflg.begin(), (*itr).m_bKouneClearflg.end(), stream_itr);
		stream << "\n";
		copy((*itr).m_bSionflg.begin(), (*itr).m_bSionflg.end(), stream_itr);
		stream << "\n";
		copy((*itr).m_bSionClearflg.begin(), (*itr).m_bSionClearflg.end(), stream_itr);
		stream << "\n";
		copy((*itr).m_bMelueruflg.begin(), (*itr).m_bMelueruflg.end(), stream_itr);
		stream << "\n";
		copy((*itr).m_bMelueruClearflg.begin(), (*itr).m_bMelueruClearflg.end(), stream_itr);
		stream << "\n";
		stream << "-\n";
	}
}

bool CSavedataManeger::Savedatacheck(int savenum)
{
	
	if (strlen(Savedata[savenum].m_cPlayerName) > 0) //=0
		return true;
	return false;
}

void CSavedataManeger::Deletesavedata()
{

}
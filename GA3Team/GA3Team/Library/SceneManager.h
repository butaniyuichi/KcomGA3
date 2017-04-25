#ifndef __SCENE_MANAGER_H__
#define __SCENE_MANAGER_H__

//�p���p�@�V�[���N���X
class CScene
{
	public:
		CScene(){Init();}
		virtual ~CScene(){}
		void Init()
		{
			m_DrawTexture	 =g_DrawTexture;
			m_Audio			 =g_Audio;
			m_WinInputs		 =g_WinInputs;
			m_SceneManager   =g_SceneManager;
			m_SceneObjManager=g_SceneObjManager;
			m_UserData		 =g_UserData;
			m_DrawFont		 =g_DrawFont;
			m_HitBoxManager  =g_HitBoxManager;
		}

		virtual void InitScene()=0;
		virtual void Scene()=0;

		//�G���W�����ڑ���p
		CDrawTexture*		Image()  { return m_DrawTexture;	}
		CAudio*				Audio()  { return m_Audio;		    }
		CWinInputs*			Input()  { return m_WinInputs;		}
		CSceneManager*		Manager(){ return m_SceneManager;	}
		CSceneObjManager*	Obj()    { return m_SceneObjManager;}
		CUserData*			User()   { return m_UserData;		}
		CDrawFont*		    Font()   { return m_DrawFont;		}
		CHitBoxManager*		Hit()	 { return m_HitBoxManager;	}
	private:
		CDrawTexture*	 m_DrawTexture;
		CAudio*			 m_Audio;
		CWinInputs*		 m_WinInputs;
		CSceneManager*   m_SceneManager;
		CSceneObjManager*m_SceneObjManager;
		CUserData*		 m_UserData;
		CDrawFont*		 m_DrawFont;
		CHitBoxManager*	 m_HitBoxManager;
};

//�V�[���}�l�[�W���[�N���X
class CSceneManager
{
	public:
		CSceneManager ()	   {	Init();								}
		~CSceneManager()	   {	if(m_Scene!=NULL)	delete m_Scene;	}
		//�V�[���������
		void Pop(CScene* scene){	m_PopScene=scene;					}

		void GameLoop();	//�o�^���Ă�V�[�������s����
		void Init();		//������

	private:
		CScene* m_PopScene; //�|�b�v�\��̃V�[�����
		CScene*	m_Scene;	//���s�V�[��(�X�^�b�N�\��)

		unsigned long m_TimeStart;
		unsigned long m_TimeEnd;
		unsigned long m_Time;
		int m_TimeCount;
		CDirectXDeviec*	 m_DirectXDeveice;
		CSceneObjManager*m_SceneObjManager;

		void SceneAction();
		void SceneDraw();
		void Pop();
};

#endif
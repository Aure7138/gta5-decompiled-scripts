#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_33[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_47 = 0;
	char* sLocal_48[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char cLocal_145[16] = "";
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_59 = 1;
	bLocal_62 = true;
	bLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	unk_0x84CFE9237092E41B();
	if (unk_0x97B6A6696D936191() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_150())
	{
		Global_4268032 = 99;
		Global_4268033 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4268032 = 0;
		Global_4268033 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_149();
	if (func_148(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_147();
	iLocal_112 = unk_0x8CCC0A0504C52531();
	if (Global_14498 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_16899 = 0;
	Global_16900 = 0;
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0x12BC8708CC473113(unk_0x33CD235DF1E6A94E()))
		{
			Global_16899 = 1;
		}
		if (unk_0x741E4EDA851C8E52())
		{
			Global_16899 = 1;
		}
		if (unk_0x91D5C8283D19AF49(unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E()), 0))
		{
			Global_16899 = 1;
		}
		if (unk_0x1D819CC3EBBF0BFB(unk_0x33CD235DF1E6A94E(), 78, 1))
		{
			Global_16899 = 1;
		}
		if (unk_0xD5AE919ED8631502(unk_0x33CD235DF1E6A94E()))
		{
			Global_16899 = 1;
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16899 = 1;
			}
			uLocal_149 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if ((((unk_0x541D5C57194E73C4(uLocal_149) == joaat("rhino") || unk_0x541D5C57194E73C4(iLocal_149) == joaat("cutter")) || unk_0x541D5C57194E73C4(iLocal_149) == joaat("submersible")) || unk_0x541D5C57194E73C4(iLocal_149) == joaat("khanjali")) || (unk_0x541D5C57194E73C4(iLocal_149) == joaat("barrage") && unk_0x3FCD3FCFAFC3878C(iLocal_149, func_146(unk_0x33CD235DF1E6A94E(), 1))))
			{
				Global_16899 = 1;
			}
			else if (unk_0x7BDC41A7CA0C77A2(iLocal_149, -1, 0) == unk_0x33CD235DF1E6A94E())
			{
				if (unk_0x67F8A06049221C80(iLocal_149) > 0f)
				{
					if (!Global_71590)
					{
						if (!func_145())
						{
							unk_0x78893508441AD74F(unk_0x33CD235DF1E6A94E(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_71590)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0xC035E897EDDE5AFA(unk_0x95B959F18401C09A(), 0);
		}
	}
	unk_0xCE689A8E8C42ED78(&Global_2423, 21);
	func_144(0);
	unk_0x8950ED5730F62EE8(&Global_2423, 17);
	if (Global_14495 == 0)
	{
		func_143();
	}
	else
	{
		uLocal_140 = unk_0x199B24FF79A52CCF("camera_gallery");
		uLocal_141 = unk_0x199B24FF79A52CCF("instructional_buttons");
		while (!unk_0x11AE7F6A404414C9(uLocal_140) || !unk_0x11AE7F6A404414C9(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x818D1850BE9E44A9();
			unk_0x3FD9339AA95E323F(0, 25, 1);
		}
		if (Global_71590)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_142())
			{
				case 0:
					iLocal_144 = 2;
					break;
				
				case 2:
					iLocal_144 = 2;
					break;
				
				case 3:
					iLocal_144 = 2;
					break;
				}
		}
		func_141(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_140(uLocal_140, "CLOSE_SHUTTER");
		unk_0xBB698266C5FDF0A7(Global_14534, "DISPLAY_VIEW");
		unk_0x4D9DA18AB3C2A466(16);
		unk_0x818901B332D5541D();
	}
	Local_78 = { Global_14513 };
	Local_81 = { Global_14506[Global_14498 /*3*/] };
	Global_16900 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14553.f_1 > 3)
	{
		Global_14553.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0xCE689A8E8C42ED78(&Global_2425, 3);
	}
	func_138();
	unk_0x5C58D0ADA22491FA(4);
	if (unk_0x7BF59EE8C8208A29())
	{
	}
	if (Global_4456448.f_155714)
	{
	}
	if (Global_4456448.f_155716 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x144904D2EAA84341(0, Global_14522);
		unk_0x144904D2EAA84341(0, 186);
		unk_0x818D1850BE9E44A9();
		unk_0x3FD9339AA95E323F(0, 25, 1);
		unk_0x3FD9339AA95E323F(0, 0, 1);
		if (func_137())
		{
			if (!unk_0x0E4018692D92041D(Global_4269308, 2))
			{
				unk_0x8950ED5730F62EE8(&Global_4269308, 2);
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_106565.f_14045.f_81)
		{
			if (!unk_0x0E4018692D92041D(Global_4269308, 13))
			{
				if (!unk_0xFAC8F20FBC764F4D())
				{
					if (!unk_0x0E4018692D92041D(Global_2424, 28))
					{
						if ((iLocal_128 && iLocal_131 == 0) && !func_137())
						{
							unk_0x8950ED5730F62EE8(&Global_4269308, 13);
							Global_106565.f_14045.f_81 = 1;
							func_136("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xD9C92B0885A075F8())
		{
			if (Global_4456448.f_155713 == 0 && Global_4456448.f_155714 == 0)
			{
				unk_0x7049F65F85106838(15, 0f, -0.0375f);
			}
			unk_0x581AE7724ACAD410(7);
			func_135();
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 200, 1);
			}
			unk_0x3FD9339AA95E323F(0, 44, 1);
			unk_0x3FD9339AA95E323F(0, 47, 1);
			unk_0x3FD9339AA95E323F(0, 91, 1);
			unk_0x3FD9339AA95E323F(0, 92, 1);
			unk_0x3FD9339AA95E323F(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0x144904D2EAA84341(0, Global_14526);
			}
			unk_0x144904D2EAA84341(0, Global_14523);
			if ((unk_0xBB5E373390A5F824() || unk_0x75A50A9E5219C397()) && !func_137())
			{
				iLocal_130 = 1;
				Global_14553.f_1 = 3;
				unk_0xD5CD4268EDE6F40E(0);
			}
			if (unk_0xC99322FFEB21BC08())
			{
				Global_14553.f_1 = 3;
				unk_0xD5CD4268EDE6F40E(0);
			}
			if (unk_0x0E4018692D92041D(Global_2424, 3))
			{
				Global_14553.f_1 = 3;
				unk_0xD5CD4268EDE6F40E(0);
			}
			if (unk_0xB331FCEB94EB05C8())
			{
				if (func_123())
				{
					Global_14553.f_1 = 3;
					unk_0xD5CD4268EDE6F40E(0);
				}
			}
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xB5D4E8F757C24136(unk_0x33CD235DF1E6A94E(), 0))
				{
					Global_14553.f_1 = 3;
					unk_0xD5CD4268EDE6F40E(0);
				}
				if ((unk_0x1D819CC3EBBF0BFB(unk_0x33CD235DF1E6A94E(), 78, 1) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x5801F241F822A181(unk_0x95B959F18401C09A()))
				{
					if (func_122())
					{
					}
					else
					{
						Global_14553.f_1 = 3;
						unk_0xD5CD4268EDE6F40E(0);
					}
				}
				if (unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xD084701173607F29(unk_0x33CD235DF1E6A94E()))
				{
					if (Global_71590 == 1)
					{
						Global_14553.f_1 = 3;
					}
				}
				if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0x073F9A78D00FB9C0(unk_0x33CD235DF1E6A94E()) > 0.3f)
					{
						Global_14553.f_1 = 3;
					}
				}
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					func_121();
					iLocal_149 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x67F8A06049221C80(iLocal_149) < 0f)
					{
						func_118(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0xDC1105CDB8032DCA())
							{
								func_118(0);
							}
						}
						else if (!unk_0xDC1105CDB8032DCA())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x818D1850BE9E44A9();
						}
					}
				}
				else if (Global_71590 == 0)
				{
					if (unk_0x0E4018692D92041D(Global_2423, 18))
					{
						func_117();
						if ((Global_14553 == 0 || Global_14553 == 1) || Global_14553 == 2)
						{
							if (!unk_0x5B88AA27ED51387B(unk_0x33CD235DF1E6A94E()))
							{
								if (unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
								{
								}
								else
								{
									Global_14553.f_1 = 3;
									unk_0xD5CD4268EDE6F40E(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_116();
			}
			if (Global_14553.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_14553.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_114();
									if (Global_16904 == 0 && Global_16901 == 6)
									{
										unk_0x3E282335477723EC(0, 1);
										unk_0x3FE7249C0944DB7B();
										iLocal_150 = 0;
										func_113();
										if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
										{
											Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
										}
										func_112();
										iLocal_109++;
										if (func_150())
										{
											func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_107();
									}
									if (Global_16901 == 0)
									{
										iLocal_150 = 0;
										unk_0x3FE7249C0944DB7B();
										if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
										{
											Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
										}
										func_106();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_107();
										if (func_150())
										{
											if (Global_4268033 == 0)
											{
												if (!unk_0x0E4018692D92041D(Global_4269308, 2))
												{
													func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x0E4018692D92041D(Global_4269308, 2))
										{
											func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_105();
										func_104(1);
									}
								}
								else if (Global_14553.f_1 != 9)
								{
									if (Global_16900 == 1)
									{
										if (Global_16899 == 0)
										{
											func_103();
										}
									}
									else if ((Global_3031 - Global_3030) > Global_3032)
									{
										if (unk_0xBB5E373390A5F824() && func_102())
										{
											if (func_101() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0xD5CD4268EDE6F40E(0);
												unk_0xCBE6AF58552C63B2(iLocal_112);
												iLocal_143 = 0;
												if (Global_16899 == 0)
												{
													func_112();
													Global_16899 = 1;
													unk_0x3E282335477723EC(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_100(0, 0);
													func_104(0);
													iLocal_115 = 0;
													func_99();
													iLocal_142 = 0;
													func_97(0, 1);
													func_141(Global_14534, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_95(1);
												}
											}
										}
										if (func_94(2, Global_14521, 0))
										{
											if (func_137())
											{
												if (Global_1657075 || Global_1312791)
												{
												}
												else if (func_101() && iLocal_127)
												{
												}
												else if (!func_102())
												{
													if (iLocal_127 == 0)
													{
														unk_0x7EDEAEAED85BEE4F(500);
														func_93(1);
													}
												}
											}
											else if (func_101() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0xD5CD4268EDE6F40E(0);
												unk_0xCBE6AF58552C63B2(iLocal_112);
												iLocal_143 = 0;
												if (Global_16899 == 0)
												{
													func_112();
													Global_16899 = 1;
													unk_0x3E282335477723EC(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_100(0, 0);
													func_104(0);
													iLocal_115 = 0;
													func_99();
													iLocal_142 = 0;
													func_97(0, 1);
													func_141(Global_14534, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0xFAC8F20FBC764F4D())
										{
											func_92();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0xFAC8F20FBC764F4D())
									{
										func_92();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0x0E4018692D92041D(Global_2423, 28))
										{
											func_92();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0x0E4018692D92041D(Global_2423, 28))
									{
										func_92();
										iLocal_102 = 0;
									}
									if (Global_16899 == 1)
									{
										func_85();
									}
									else if (Global_14553.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_81();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_106();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
												{
													if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
													{
														func_140(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0xE3903F59E2F22150();
														while (unk_0xE3903F59E2F22150() < (iLocal_135 + iLocal_137) && Global_14553.f_1 > 3)
														{
															func_135();
															func_116();
															func_80();
															unk_0x818D1850BE9E44A9();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_150())
												{
													if (Global_4268033 == 0)
													{
														if (!unk_0x0E4018692D92041D(Global_4269308, 2))
														{
															func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x0E4018692D92041D(Global_4269308, 2))
												{
													func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_116();
												func_135();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_107();
												iLocal_136 = 0;
												func_140(uLocal_140, "OPEN_SHUTTER");
											}
											func_105();
											func_104(1);
											func_79();
										}
									}
									if (iLocal_143 == 1)
									{
										func_76();
									}
									if (iLocal_129)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0x8950ED5730F62EE8(&Global_2423, 18);
											if (Global_16899 == 0)
											{
												func_97(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_16899 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_16902 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_80();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_14553.f_1 > 3)
					{
						if (Global_16900 == 1)
						{
							if (Global_16899 == 0)
							{
								func_103();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 7)
				{
					if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0x4CE1DD5CFC1F941E())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_155 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = unk_0x4C103BB3CB028DA4();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (unk_0x833B1A3D9F713E03(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_97(0, 1);
					}
					if (unk_0x833B1A3D9F713E03(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x1771F6BAF60B44FA(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_97(0, 1);
							iLocal_154 = 0;
							unk_0xEEC8262BD93AF156("Gallery");
							unk_0x1BC2B60A3ECC3DD7();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0xF5DB888C353E2BED())
					{
						if (unk_0x833B1A3D9F713E03(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_97(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x833B1A3D9F713E03(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_97(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0xF5DB888C353E2BED())
					{
						if (unk_0x833B1A3D9F713E03(2, Global_14525))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_97(0, 1);
							if (unk_0x0E4018692D92041D(Global_2424, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0xE3903F59E2F22150();
							unk_0x029080C7AB907BB3(1);
						}
					}
				}
				else if (unk_0x833B1A3D9F713E03(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_97(0, 1);
				}
			}
		}
		iLocal_108 = unk_0xE3903F59E2F22150();
		if (func_137())
		{
			if (!unk_0x0E4018692D92041D(Global_4269308, 2))
			{
				unk_0x8950ED5730F62EE8(&Global_4269308, 2);
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_100(0, 0);
			func_104(0);
			iLocal_115 = 0;
			func_99();
			Global_16899 = 0;
			Global_16900 = 0;
			Global_16902 = 0;
			unk_0x83A1D480DB0B52CC(&uLocal_140);
			unk_0x83A1D480DB0B52CC(&uLocal_141);
			unk_0xD5CD4268EDE6F40E(0);
			if (Global_14727 == 1)
			{
				unk_0x8950ED5730F62EE8(&Global_2423, 17);
			}
			else
			{
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			}
			unk_0x3E282335477723EC(0, 1);
			unk_0xC035E897EDDE5AFA(unk_0x95B959F18401C09A(), 1);
			unk_0xCE689A8E8C42ED78(&Global_2425, 3);
			unk_0xCE689A8E8C42ED78(&Global_4269308, 3);
			unk_0x019859CB72B1DB4C(15);
			Global_16903 = 1;
			unk_0xCBE6AF58552C63B2(iLocal_112);
			unk_0x44D426446FAF55FB(iLocal_112);
			unk_0x3FE7249C0944DB7B();
			func_99();
			unk_0xAB46782535B3097D(0);
			unk_0xF3DBF2ACE9D492CF(0);
			unk_0x8B51389A4CFFACEC(1f);
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				unk_0x524B4AAA3328E253(unk_0x33CD235DF1E6A94E(), "Mood_Normal_1", 0);
				unk_0x1400DA3CD323B316(unk_0x33CD235DF1E6A94E());
			}
			if (Global_4268033 > 0 && Global_4268033 < 13)
			{
				unk_0x30F6F0B876E12AD8(sLocal_33[Global_4268033]);
			}
			unk_0xCE689A8E8C42ED78(&Global_2423, 18);
			func_97(0, 1);
			if (func_148(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0x5894DC159447E10A();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0xDFE49B71C087C2D8(1);
		}
		else if (Global_14553.f_1 > 3)
		{
			unk_0xDFE49B71C087C2D8(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x7B9C4CEB6D33A226();
	iVar1 = unk_0xCB75C331DD5DDCCC(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = unk_0x9641B16CD71C5D05(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x56214633B95FF606();
			iLocal_110 = unk_0xF6EFDADE5378A189();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0x11AE7F6A404414C9(uLocal_140))
					{
						if (func_150())
						{
							if (Global_4268033 == 0)
							{
								if (!unk_0x0E4018692D92041D(Global_4269308, 2))
								{
									func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x0E4018692D92041D(Global_4269308, 2))
							{
								func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x11AE7F6A404414C9(uLocal_140))
				{
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0x3FE7249C0944DB7B();
			break;
		
		case 1:
			if (!unk_0xEB62162D7CA7A4F4())
			{
				unk_0xCF8FB817B736462A("CELL_SPINNER2");
				unk_0xB90003646A14C0B1(1);
			}
			break;
		
		case 2:
			if (unk_0x0E4018692D92041D(Global_2424, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_14553.f_1 = 3;
				Global_16903 = 1;
			}
			unk_0x3FE7249C0944DB7B();
			break;
	}
}

void func_5()
{
	if (func_94(2, Global_14522, 0))
	{
		func_1(0);
		if (unk_0x0E4018692D92041D(Global_2424, 28))
		{
			unk_0xD5CD4268EDE6F40E(0);
			unk_0x5AE11BC36633DE4E(0);
			func_113();
			iLocal_127 = 0;
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
			}
			func_112();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0x0E4018692D92041D(Global_2424, 14))
			{
				func_136("CELL_299", -1);
			}
			else
			{
				func_112();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_97(1, 1);
		}
	}
	if (unk_0x0E4018692D92041D(Global_2423, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_135();
			unk_0x818D1850BE9E44A9();
			func_80();
			func_121();
			func_116();
		}
		unk_0xD5CD4268EDE6F40E(0);
		func_113();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
		}
		func_107();
		func_112();
	}
	if (func_94(2, Global_14526, 0))
	{
		func_1(0);
		if (func_101() || unk_0x0E4018692D92041D(Global_2424, 28))
		{
		}
		else
		{
			unk_0xD5CD4268EDE6F40E(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_113();
			iLocal_127 = 0;
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
			}
			func_112();
		}
	}
	if (unk_0x0E4018692D92041D(Global_2423, 28))
	{
		if (func_94(2, Global_14525, 0))
		{
			func_1(0);
			unk_0xD5CD4268EDE6F40E(0);
			unk_0x0FABF46F0B9C98E4(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x818D1850BE9E44A9();
			func_135();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x818D1850BE9E44A9();
			func_135();
			unk_0x5E33457A521F8109();
			unk_0xFA46656B2B84A52D();
			Global_16903 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_97(0, 1);
			Global_16899 = 1;
			unk_0x3E282335477723EC(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
			}
			func_100(0, 0);
			func_104(0);
			iLocal_115 = 0;
			func_99();
			if (!Global_2528542.f_6218)
			{
				unk_0x8950ED5730F62EE8(&Global_2423, 9);
			}
			iLocal_142 = 0;
			func_141(Global_14534, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Accept", &Global_14542, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x59444F5D27C23602(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16904 = 1;
	unk_0x3E282335477723EC(0, 1);
}

int func_9()
{
	if (iLocal_107 == iLocal_108)
	{
		if (iLocal_105)
		{
			iLocal_105 = 1;
		}
	}
	if (Global_14553.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x5D79F3D06EB318A0(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_131)
	{
		func_71();
		func_67();
		func_66();
		fLocal_73 = unk_0x34678A75251E1232();
		fLocal_74 = unk_0xECD075B93A09A2B6();
		if (iLocal_133 == 0)
		{
			if (unk_0xF1CDE9FD207C4CD8(2, iVar0) && !unk_0xF1CDE9FD207C4CD8(2, iVar1))
			{
				iLocal_133 = 1;
				func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x0E4018692D92041D(Global_2423, 28))
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
					func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(2, 179, 1), func_63());
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_280");
					func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_62();
				unk_0xBB698266C5FDF0A7(uLocal_141, "SET_MAX_WIDTH");
				unk_0x8DAB5B12D7B9AD29(fLocal_77);
				unk_0x818901B332D5541D();
				func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF1CDE9FD207C4CD8(2, iVar0) || unk_0xF1CDE9FD207C4CD8(2, iVar1))
		{
			iLocal_133 = 0;
			func_107();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0xF1CDE9FD207C4CD8(2, iVar1) && !unk_0xF1CDE9FD207C4CD8(2, iVar0))
			{
				iLocal_134 = 1;
				func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x0E4018692D92041D(Global_2423, 28))
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
					func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(2, 179, 1), func_63());
				}
				else if (!func_137())
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_280");
					func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_280");
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
				}
				func_61();
				unk_0xBB698266C5FDF0A7(uLocal_141, "SET_MAX_WIDTH");
				unk_0x8DAB5B12D7B9AD29(fLocal_77);
				unk_0x818901B332D5541D();
				func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF1CDE9FD207C4CD8(2, iVar1) || unk_0xF1CDE9FD207C4CD8(2, iVar0))
		{
			iLocal_134 = 0;
			func_107();
		}
	}
	else
	{
		unk_0xAE4810E427AD9203(0, 2, 1);
		unk_0xAE4810E427AD9203(0, 1, 1);
	}
	if (unk_0xEABBA3F8727C0FE7(2))
	{
		func_107();
	}
	func_121();
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 200, 1);
	}
	if (func_137())
	{
		if (!unk_0x0E4018692D92041D(Global_4269308, 2))
		{
			unk_0x8950ED5730F62EE8(&Global_4269308, 2);
			func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0x833B1A3D9F713E03(2, 183) && iLocal_156 == 0) && !func_137())
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
			{
				if (unk_0x0E4018692D92041D(Global_4269308, 2))
				{
					unk_0xCE689A8E8C42ED78(&Global_4269308, 2);
					if (!unk_0x0E4018692D92041D(Global_4269308, 2))
					{
						func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x8950ED5730F62EE8(&Global_4269308, 2);
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0xBB698266C5FDF0A7(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x295B86DE57A0721D(0);
			func_60("CELL_FOCUS");
			unk_0x295B86DE57A0721D(1);
			unk_0x818901B332D5541D();
		}
		if (!func_59(14))
		{
			if (unk_0x0E4018692D92041D(Global_4269308, 10))
			{
				if ((Global_71590 == 0 && unk_0x1BCDA92AD0A7835B(joaat("pi_menu")) > 0) && func_58())
				{
					unk_0xBB698266C5FDF0A7(uLocal_140, "SET_FOCUS_LOCK");
					unk_0x295B86DE57A0721D(1);
					unk_0x713FEBE56D2BD403("CELL_ACTTL");
					unk_0xD61E5ED1D4E687A5(unk_0x434854E9CAE13C4A(&Global_4270293));
					unk_0x36F3AA9FFAAF8606();
					unk_0x295B86DE57A0721D(0);
					unk_0x818901B332D5541D();
					unk_0xCE689A8E8C42ED78(&Global_4269308, 10);
				}
			}
		}
		else if (unk_0x0E4018692D92041D(Global_4269308, 10))
		{
			unk_0xCE689A8E8C42ED78(&Global_4269308, 10);
		}
		iLocal_66 = unk_0xE3903F59E2F22150();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				Local_70 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
				if (unk_0x16E00F066AFFEA0D(Local_70, Local_67, 1) > 5f)
				{
					Global_14553.f_1 = 3;
					unk_0xD5CD4268EDE6F40E(0);
				}
				iLocal_65 = unk_0xE3903F59E2F22150();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0xF1CDE9FD207C4CD8(0, 182) && !func_137())
		{
			unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
			iLocal_132 = 0;
			unk_0xBB698266C5FDF0A7(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x295B86DE57A0721D(0);
			func_60("CELL_FOCUS");
			unk_0x295B86DE57A0721D(1);
			unk_0x818901B332D5541D();
		}
	}
	else if (unk_0xF1CDE9FD207C4CD8(0, 182) && !func_137())
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
		iLocal_132 = 1;
		if (!func_59(14))
		{
			unk_0xBB698266C5FDF0A7(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x295B86DE57A0721D(1);
			func_60("CELL_FOCUS");
			unk_0x295B86DE57A0721D(1);
			unk_0x818901B332D5541D();
		}
	}
	if (func_150())
	{
		if ((unk_0x833B1A3D9F713E03(2, 186) && iLocal_156 == 0) && !func_137())
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
					{
						unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
						unk_0x524B4AAA3328E253(unk_0x33CD235DF1E6A94E(), "Mood_Normal_1", 0);
						unk_0x1400DA3CD323B316(unk_0x33CD235DF1E6A94E());
						if (Global_14553 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x063A77907C209DC4(unk_0x33CD235DF1E6A94E(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x063A77907C209DC4(unk_0x33CD235DF1E6A94E(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											unk_0x524B4AAA3328E253(unk_0x33CD235DF1E6A94E(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0x524B4AAA3328E253(unk_0x33CD235DF1E6A94E(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0x524B4AAA3328E253(unk_0x33CD235DF1E6A94E(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0x524B4AAA3328E253(unk_0x33CD235DF1E6A94E(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
					{
						unk_0x524B4AAA3328E253(unk_0x33CD235DF1E6A94E(), "Mood_Normal_1", 0);
						unk_0x1400DA3CD323B316(unk_0x33CD235DF1E6A94E());
						unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
					}
				}
			}
		}
		if ((unk_0x833B1A3D9F713E03(2, 185) && iLocal_156 == 0) && !func_137())
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0xCE3CFF625BEBAA04(sLocal_19[Global_4268032], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xAB46782535B3097D(1);
							unk_0xF3DBF2ACE9D492CF(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0xAB46782535B3097D(0);
						unk_0xF3DBF2ACE9D492CF(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0xAB46782535B3097D(1);
					unk_0xF3DBF2ACE9D492CF(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0xAB46782535B3097D(0);
					unk_0xF3DBF2ACE9D492CF(0);
				}
			}
		}
	}
	if (iLocal_59 == 1 && !func_137())
	{
		if (unk_0x833B1A3D9F713E03(0, 172) && iLocal_156 == 0)
		{
			if (func_150())
			{
				Global_4268033++;
				unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
			}
			if (Global_4268033 == 13)
			{
				func_104(0);
				unk_0x8B51389A4CFFACEC(1f);
				unk_0x30F6F0B876E12AD8(sLocal_33[(Global_4268033 - 1)]);
				Global_4268033 = 0;
				func_57();
				if (iLocal_47 == 1)
				{
					unk_0xCE689A8E8C42ED78(&Global_4269308, 2);
					iLocal_47 = 0;
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4268033 > 0 && Global_4268033 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0x0A06DEFFF267C21E(sLocal_33[Global_4268033], 0);
			}
		}
	}
	if (Global_4268033 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0xD83C9F072D059CC4(sLocal_33[Global_4268033]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0x56DEBE9615C7EB97())
				{
					func_104(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0x0E4018692D92041D(Global_4269308, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0x8950ED5730F62EE8(&Global_4269308, 2);
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x8B51389A4CFFACEC(0.25f);
				unk_0x8260AFC98D0D6CAC(sLocal_33[Global_4268033], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4268033 == 1 || Global_4268033 == 3)
			{
			}
			if (Global_4268033 == 2 || Global_4268033 == 4)
			{
			}
		}
	}
	if ((unk_0x833B1A3D9F713E03(0, 173) && iLocal_156 == 0) && !func_137())
	{
		if (func_150())
		{
			func_99();
			Global_4268032++;
			unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
		}
		if (Global_4268032 == 13)
		{
			Global_4268032 = 0;
		}
		if (Global_4268032 == 0)
		{
			if (func_150())
			{
				func_99();
			}
		}
		else
		{
			func_105();
		}
		func_56();
	}
	if ((unk_0x5EBE50D55314CEAD(0, 184) && iLocal_156 == 0) && !func_137())
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
			{
				Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
				unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_140(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0xE3903F59E2F22150();
				while (unk_0xE3903F59E2F22150() < (iLocal_135 + iLocal_139) && Global_14553.f_1 > 3)
				{
					func_135();
					func_116();
					func_80();
					unk_0x818D1850BE9E44A9();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0xCBE6AF58552C63B2(iLocal_112);
					iLocal_131 = 1;
					func_55(1);
					func_54();
					unk_0x8950ED5730F62EE8(&Global_2425, 3);
					iLocal_65 = unk_0xE3903F59E2F22150();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_55(0);
					iLocal_131 = 0;
					unk_0xCE689A8E8C42ED78(&Global_2425, 3);
				}
				iLocal_135 = unk_0xE3903F59E2F22150();
				while (unk_0xE3903F59E2F22150() < (iLocal_135 + iLocal_137) && Global_14553.f_1 > 3)
				{
					func_135();
					func_116();
					func_80();
					unk_0x818D1850BE9E44A9();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_140(uLocal_140, "OPEN_SHUTTER");
				if (func_150())
				{
					if (Global_4268033 == 0)
					{
						if (!unk_0x0E4018692D92041D(Global_4269308, 2))
						{
							func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x0E4018692D92041D(Global_4269308, 2))
				{
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_116();
				func_135();
				if (unk_0x0E4018692D92041D(Global_2423, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_52();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (unk_0x833B1A3D9F713E03(0, 40) || unk_0x833B1A3D9F713E03(0, 41))
			{
				fLocal_114 = unk_0x37D4D3708D21B21B();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x66DE54BD13B1BD88(iLocal_112))
					{
						unk_0x0F8EAEEC97DDBCB3(iLocal_112, "Camera_Zoom", &Global_14542, 1);
					}
				}
				else
				{
					unk_0xCBE6AF58552C63B2(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0xF1CDE9FD207C4CD8(0, 40) || unk_0xF1CDE9FD207C4CD8(0, 41))
		{
			fLocal_114 = unk_0x37D4D3708D21B21B();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x66DE54BD13B1BD88(iLocal_112))
				{
					unk_0x0F8EAEEC97DDBCB3(iLocal_112, "Camera_Zoom", &Global_14542, 1);
				}
			}
			else
			{
				unk_0xCBE6AF58552C63B2(iLocal_112);
			}
		}
		else
		{
			unk_0xCBE6AF58552C63B2(iLocal_112);
		}
	}
	if (func_94(2, Global_14522, 0))
	{
		fLocal_75 = unk_0x34678A75251E1232();
		fLocal_76 = unk_0xECD075B93A09A2B6();
		unk_0x0FABF46F0B9C98E4(0, 0);
		unk_0x8950ED5730F62EE8(&Global_2423, 21);
		unk_0xCBE6AF58552C63B2(iLocal_112);
		iLocal_127 = 1;
		func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_141(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x0F8EAEEC97DDBCB3(-1, "Camera_Shoot", &Global_14542, 1);
		func_140(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0x25E480E1B3CEE87C(Local_84, 0);
		if (!func_150())
		{
			func_99();
		}
		Global_16902 = 1;
		unk_0x3E282335477723EC(0, 1);
		while (Global_16901 < 6 && Global_14553.f_1 > 3)
		{
			func_135();
			func_116();
			func_80();
			func_121();
			unk_0x818D1850BE9E44A9();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x9D5F6D4E8A7A3188(0, 0);
		if (Global_14495)
		{
			func_1(1);
		}
		iLocal_135 = unk_0xE3903F59E2F22150();
		while (unk_0xE3903F59E2F22150() < (iLocal_135 + iLocal_138) && Global_14553.f_1 > 3)
		{
			func_135();
			func_116();
			func_80();
			unk_0x818D1850BE9E44A9();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_140(uLocal_140, "OPEN_SHUTTER");
		unk_0xCE689A8E8C42ED78(&Global_2423, 21);
		func_107();
		if (Global_14553.f_1 > 3)
		{
			if (Global_71590)
			{
				func_20(1086, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x04C975A5C7EC6831(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x04C975A5C7EC6831(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x04C975A5C7EC6831(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_104(0);
		}
		func_116();
	}
	if (unk_0x0E4018692D92041D(Global_2423, 28))
	{
		if (func_94(2, Global_14525, 0))
		{
			unk_0x0FABF46F0B9C98E4(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x818D1850BE9E44A9();
			func_135();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x818D1850BE9E44A9();
			func_135();
			unk_0x5E33457A521F8109();
			unk_0xFA46656B2B84A52D();
			Global_16903 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16899 = 1;
			unk_0x3E282335477723EC(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
			}
			func_100(0, 0);
			func_104(0);
			iLocal_115 = 0;
			func_99();
			if (!Global_2528542.f_6218)
			{
				unk_0x8950ED5730F62EE8(&Global_2423, 9);
			}
			unk_0xD5CD4268EDE6F40E(0);
			iLocal_142 = 0;
			func_141(Global_14534, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_15(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_14(unk_0x33CD235DF1E6A94E());
			if (func_13(iVar0) && (!func_59(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_13(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_18(int iParam0, var uParam1)
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_14490 = { Global_14506[Global_14498 /*3*/] };
	func_97(0, 1);
	func_100(0, 0);
	func_104(0);
	iLocal_115 = 0;
	func_99();
	if (!unk_0x0E4018692D92041D(Global_2424, 28))
	{
		if (unk_0x7BF59EE8C8208A29() == 0)
		{
			if (unk_0xD88B24C279C15EA1())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_25(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_25(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_25(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_25(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_25(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_25(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_25(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_25(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_25(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_25(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_25(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_25(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_25(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_25(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_25(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_25(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_25(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_25(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_25(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_25(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_25(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_25(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_25(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_25(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_25(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_25(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_25(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_25(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_25(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_25(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1382575)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8956:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0x75D54ED6C1AD1642(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312745;
}

void func_27()
{
	if (iLocal_156 == 1)
	{
		func_51();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_137())
		{
			func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
			func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_280");
		}
		else
		{
			func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
			func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_280");
		}
		if (iLocal_131)
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
				{
					if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_71590 == 0 && unk_0x1BCDA92AD0A7835B(joaat("pi_menu")) > 0) && func_58())
				{
					func_49();
				}
				else
				{
					if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(2, 183, 1), "CELL_GRID");
					func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(5f);
						func_47(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_64(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
			{
				if (!unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
				{
					if (!func_137())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
						func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(2, 183, 1), "CELL_GRID");
						func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x4464D5595CEED843(0, 39, 1), "CELL_284");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
						if (!unk_0x5D79F3D06EB318A0(0))
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(0, 210, 1), "CELL_284");
						}
						else
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xF745CA12DC8836EB(0, 29, 1), "CELL_284");
						}
					}
					if (!func_137())
					{
						if (func_150())
						{
							func_48(6f);
							func_47(7f);
							if (bLocal_63)
							{
								func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 182, 1), "CELL_FOCUS");
							}
							func_64(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(3f);
						func_47(4f);
						func_64(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_137())
				{
					if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
				{
					if (!func_137())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x4464D5595CEED843(2, 183, 1), "CELL_GRID");
						func_64(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
						if (!unk_0x5D79F3D06EB318A0(0))
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(0, 210, 1), "CELL_284");
						}
						else
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xF745CA12DC8836EB(0, 29, 1), "CELL_284");
						}
					}
					if (!func_137())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x4464D5595CEED843(0, 39, 1), "CELL_284");
					}
					if (!func_137())
					{
						if (func_150())
						{
							func_48(7f);
							func_47(8f);
							if (bLocal_63)
							{
								func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 182, 1), "CELL_FOCUS");
							}
							func_64(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(3f);
						func_47(4f);
						func_64(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xBB698266C5FDF0A7(uLocal_141, "SET_MAX_WIDTH");
		unk_0x8DAB5B12D7B9AD29(fLocal_77);
		unk_0x818901B332D5541D();
		func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_64(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x4464D5595CEED843(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_46(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_30(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x33CD235DF1E6A94E(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar6;
	var uVar12;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	
	if (func_45())
	{
		return 0;
	}
	uVar0 = 5;
	uVar6 = 5;
	uVar12 = 5;
	if (iParam1 == 0)
	{
		iVar21 = 3;
	}
	else if (bParam3)
	{
		iVar21 = 1;
	}
	else if (bParam4)
	{
		iVar21 = 2;
	}
	else
	{
		iVar21 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar6, &uVar12, iVar21, bParam5);
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x541D5C57194E73C4(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar18 = func_38(iParam0);
			if (!iVar18 == -1)
			{
				if (func_37(&uVar0, iVar18))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar19 = func_36(iParam0);
			if (!iVar19 == -1)
			{
				if (func_34(&uVar6, iVar19))
				{
					return 1;
				}
			}
		}
		if (unk_0xB331FCEB94EB05C8())
		{
			iVar20 = func_33(iParam0);
			if (!iVar20 == 0)
			{
				if (func_32(&uVar12, iVar20))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA603FBA9F3C17D3A(iParam0, 1);
	return uVar0;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x063A77907C209DC4(iParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x063A77907C209DC4(iParam0, 0);
	return uVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_44(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_43(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 4, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 38, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 62, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 46:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 66, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 47:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 48:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 49:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 50:
				case 51:
				case 52:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 19, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 4, 1);
							break;
						
						case 1:
							func_44(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 37, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 36, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 38, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 1, 1);
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 5, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 1, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 5, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 12, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 23, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 29, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 33, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 46, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 47, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_41(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xCE689A8E8C42ED78(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_43(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_44(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 5, 1);
					func_44(uParam4, 6, 1);
					func_44(uParam4, 7, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					func_44(uParam4, 115, 1);
					func_44(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 9, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
				
				case 10:
					func_44(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 4, 1);
						func_42(uParam3, 6, 1);
						func_42(uParam3, 10, 1);
						func_42(uParam3, 54, 1);
						func_42(uParam3, 55, 1);
						func_42(uParam3, 56, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 106, 1);
						func_42(uParam3, 114, 1);
						func_42(uParam3, 116, 1);
						func_42(uParam3, 117, 1);
						func_42(uParam3, 118, 1);
						func_42(uParam3, 119, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 9, 1);
						func_40(uParam2, 10, 1);
						func_40(uParam2, 53, 1);
						func_40(uParam2, 56, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 36, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 14, 1);
						func_40(uParam2, 105, 1);
						func_40(uParam2, 113, 1);
						func_40(uParam2, 114, 1);
						func_40(uParam2, 115, 1);
						func_40(uParam2, 116, 1);
						func_40(uParam2, 117, 1);
					}
					func_44(uParam4, 2, 1);
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 32, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 6, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 32, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					func_44(uParam4, 115, 1);
					func_44(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_42(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_44(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 7, 1);
						func_42(uParam3, 0, 1);
						func_42(uParam3, 12, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 15, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 17, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 21, 1);
						func_42(uParam3, 25, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 30, 1);
						func_42(uParam3, 31, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 55, 1);
						func_40(uParam2, 0, 1);
						func_40(uParam2, 2, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 7, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 11, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 15, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 17, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
						func_40(uParam2, 20, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 22, 1);
						func_40(uParam2, 54, 1);
						func_40(uParam2, 24, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 30, 1);
						func_40(uParam2, 31, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 36, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xCE689A8E8C42ED78(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_45()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_47(float fParam0)
{
	func_64(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x4464D5595CEED843(0, 172, 1), "CELL_BORDER");
}

void func_48(float fParam0)
{
	if (Global_1667046 == 1)
	{
		fParam0 = -1f;
	}
	func_64(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x4464D5595CEED843(0, 173, 1), "CELL_FILTER");
}

void func_49()
{
	if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 183, 1), "CELL_GRID");
	func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
	func_48(5f);
	func_47(6f);
	func_50(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_59(14))
	{
		if ((Global_71590 == 0 && unk_0x1BCDA92AD0A7835B(joaat("pi_menu")) > 0) && func_58())
		{
			unk_0xBB698266C5FDF0A7(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x295B86DE57A0721D(1);
			unk_0x713FEBE56D2BD403("CELL_ACTTL");
			unk_0xD61E5ED1D4E687A5(unk_0x434854E9CAE13C4A(&Global_4270293));
			unk_0x36F3AA9FFAAF8606();
			unk_0x295B86DE57A0721D(0);
			unk_0x818901B332D5541D();
		}
	}
}

void func_50(float fParam0)
{
	func_64(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x4464D5595CEED843(0, 175, 1), "CELL_ACCYC");
}

void func_51()
{
	func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 39, 1), "CELL_284");
	func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
	func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
	func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_280");
	unk_0xBB698266C5FDF0A7(uLocal_141, "SET_MAX_WIDTH");
	unk_0x8DAB5B12D7B9AD29(fLocal_77);
	unk_0x818901B332D5541D();
	func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_156 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
		func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(2, 179, 1), func_63());
		if (iLocal_131)
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
				{
					if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_150())
					{
						func_48(3f);
						func_47(4f);
					}
				}
				else if ((Global_71590 == 0 && unk_0x1BCDA92AD0A7835B(joaat("pi_menu")) > 0) && func_58())
				{
					func_49();
				}
				else
				{
					if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(2, 183, 1), "CELL_GRID");
					func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(5f);
						func_47(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_64(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
			{
				if (!unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(2, 183, 1), "CELL_GRID");
					func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
					func_64(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x4464D5595CEED843(0, 39, 1), "CELL_284");
					if (func_150())
					{
						func_48(6f);
						func_47(7f);
						func_64(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(3f);
						func_47(4f);
						func_64(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
			{
				if (!func_137())
				{
					if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x4464D5595CEED843(2, 183, 1), "CELL_GRID");
				func_64(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
				func_64(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x4464D5595CEED843(0, 39, 1), "CELL_284");
				if (func_150())
				{
					if (!func_137())
					{
						func_48(7f);
						func_47(8f);
						if (bLocal_63)
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 182, 1), "CELL_FOCUS");
						}
						func_64(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_137())
					{
						if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
					if (func_150())
					{
						if (!func_137())
						{
							func_48(4f);
							func_47(5f);
							func_64(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x4464D5595CEED843(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0xBB698266C5FDF0A7(uLocal_141, "SET_MAX_WIDTH");
		unk_0x8DAB5B12D7B9AD29(fLocal_77);
		unk_0x818901B332D5541D();
		func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_53()
{
	func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 39, 1), "CELL_284");
	func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_285");
	func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(2, 179, 1), func_63());
	func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 177, 1), "CELL_281");
	unk_0xBB698266C5FDF0A7(uLocal_141, "SET_MAX_WIDTH");
	unk_0x8DAB5B12D7B9AD29(fLocal_77);
	unk_0x818901B332D5541D();
	func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_54()
{
	if (iLocal_131)
	{
		unk_0xD6EDA274D82E8678(fLocal_73, 1065353216);
		unk_0xC7E6A5D90DED6E0B(fLocal_74);
	}
}

void func_55(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4456448.f_155713 == 1)
	{
	}
	else if (Global_4456448.f_155714 == 1)
	{
	}
	else
	{
		unk_0x53F6DE06DCE23EBF(iParam0);
	}
}

void func_56()
{
	if (iLocal_61 == 1)
	{
		if (unk_0xCE3CFF625BEBAA04(sLocal_19[Global_4268032], "phone_cam12DUMMY"))
		{
			unk_0xAB46782535B3097D(0);
			unk_0xF3DBF2ACE9D492CF(0);
		}
		else
		{
			unk_0xAB46782535B3097D(1);
			unk_0xF3DBF2ACE9D492CF(1);
		}
	}
}

void func_57()
{
	func_141(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_150())
	{
		if (Global_1667046 == 0)
		{
			unk_0x29B6D8EFAD395B92("phone_cam");
		}
	}
}

int func_58()
{
	if (func_59(14))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if ((unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[0 /*29*/] || unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[1 /*29*/]) || unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[2 /*29*/])
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_59(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_60(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_61()
{
	if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x5D79F3D06EB318A0(2))
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 30, 1), "CELL_RT_RSTICK");
		func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xF745CA12DC8836EB(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 1, 1), "CELL_RT_RSTICK");
		func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xF745CA12DC8836EB(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_62()
{
	if (unk_0x5D79F3D06EB318A0(2) || unk_0xF5DB888C353E2BED())
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x4464D5595CEED843(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_64(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xF745CA12DC8836EB(0, 1, 1), "CELL_LT_RSTICK");
	if (func_59(14))
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x4464D5595CEED843(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x4464D5595CEED843(0, 39, 1), "CELL_LT_LSTICKZ");
		func_64(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x4464D5595CEED843(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_63()
{
	if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 233 && Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_181 == 9)
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

void func_64(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x786AF4A44E1B5B4B(uParam3))
	{
		func_65(uParam3);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam4))
	{
		func_60(sParam4);
	}
	unk_0x818901B332D5541D();
}

void func_65(var uParam0)
{
	unk_0x3EFC6497702202D6(uParam0);
}

void func_66()
{
	if (Global_71590)
	{
		switch (Global_16983)
		{
			case 0:
				if (unk_0x5D79F3D06EB318A0(2))
				{
					func_136("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_136("CELL_CAM_SELFIE_0", -1);
				}
				Global_16983++;
				break;
			
			case 1:
				if (!unk_0xFAC8F20FBC764F4D())
				{
					if (unk_0x5D79F3D06EB318A0(2))
					{
						func_136("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_136("CELL_CAM_SELFIE_1", -1);
					}
					Global_16983++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16982)
		{
			case 0:
				if (unk_0x5D79F3D06EB318A0(2))
				{
					func_136("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_136("CELL_CAM_SELFIE_0", -1);
				}
				Global_16982++;
				break;
			
			case 1:
				if (!unk_0xFAC8F20FBC764F4D())
				{
					if (unk_0x5D79F3D06EB318A0(2))
					{
						func_136("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_136("CELL_CAM_SELFIE_1", -1);
					}
					Global_16982++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x5D79F3D06EB318A0(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0xF1CDE9FD207C4CD8(2, iVar10) && !unk_0xF1CDE9FD207C4CD8(2, iVar9))
	{
		unk_0x3FD9339AA95E323F(0, 2, 1);
		unk_0x3FD9339AA95E323F(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 2)) * 127;
		if (unk_0x5D79F3D06EB318A0(2))
		{
			if (unk_0xEE14D9A9F531ADDC(iVar0) > 28 || unk_0xEE14D9A9F531ADDC(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0xEE14D9A9F531ADDC(iVar2) > 28 || unk_0xEE14D9A9F531ADDC(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0x5D79F3D06EB318A0(2))
		{
			fVar7 = unk_0x2EEE89525F08C860(0, 290);
			fVar8 = unk_0x2EEE89525F08C860(0, 291);
			if (unk_0xA5C0D3C085A49E49())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xEE14D9A9F531ADDC(iVar0) > 28 || unk_0xEE14D9A9F531ADDC(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_70(fVar5);
		func_69(fVar6);
		func_68(fVar4);
	}
	else if (!unk_0xF1CDE9FD207C4CD8(2, iVar9))
	{
		unk_0xAE4810E427AD9203(0, 2, 1);
		unk_0xAE4810E427AD9203(0, 1, 1);
	}
}

void func_68(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	unk_0xC0312D3A63E3EA51(fLocal_161);
}

void func_69(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	unk_0x65ED5A45B2B14FAB(fLocal_162);
}

void func_70(float fParam0)
{
	fLocal_163 = (fLocal_163 + fParam0);
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	unk_0x2C34991F69FF9B31(fLocal_163);
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x5D79F3D06EB318A0(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0xF1CDE9FD207C4CD8(2, iVar10))
		{
			if (unk_0x833B1A3D9F713E03(2, 178) && !func_137())
			{
				unk_0xE2270D4DA1247350(0.5f);
				unk_0x260E491FFE13E891(0.85f);
				unk_0xD055B2173EC7AA98(0.5f);
				unk_0x5558C5907FA836D4(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0xF1CDE9FD207C4CD8(2, iVar10) && !unk_0xF1CDE9FD207C4CD8(2, iVar11))
	{
		if (unk_0x833B1A3D9F713E03(2, 178) && !func_137())
		{
			unk_0xE2270D4DA1247350(0.5f);
			unk_0x260E491FFE13E891(0.85f);
			unk_0xD055B2173EC7AA98(0.5f);
			unk_0x5558C5907FA836D4(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0x3FD9339AA95E323F(0, 2, 1);
		unk_0x3FD9339AA95E323F(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 2)) * 127;
		if (unk_0x5D79F3D06EB318A0(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 39)) * 127;
			fVar8 = unk_0x2EEE89525F08C860(0, 290);
			fVar9 = unk_0x2EEE89525F08C860(0, 291);
			if (unk_0xA5C0D3C085A49E49())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xEE14D9A9F531ADDC(iVar2) > 15 || unk_0xEE14D9A9F531ADDC(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0xEE14D9A9F531ADDC(iVar0) > 28 || unk_0xEE14D9A9F531ADDC(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_75(fVar6);
		func_74(fVar7);
		func_73(fVar4);
		if (!func_59(14))
		{
			func_72(fVar5);
		}
	}
	else if (!unk_0x1CAA347A3C84C225(2, iVar11))
	{
		unk_0xAE4810E427AD9203(0, 2, 1);
		unk_0xAE4810E427AD9203(0, 1, 1);
	}
	if (!unk_0x1CAA347A3C84C225(2, iVar10) && !unk_0x1CAA347A3C84C225(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x2EEE89525F08C860(0, 293)) * 127;
		if (unk_0xEE14D9A9F531ADDC(iVar2) > 28 || unk_0xEE14D9A9F531ADDC(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0xEE14D9A9F531ADDC(iVar0) > 28 || unk_0xEE14D9A9F531ADDC(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_59(14))
		{
			func_72(fVar5);
		}
	}
}

void func_72(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	unk_0xD055B2173EC7AA98(fLocal_159);
}

void func_73(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	unk_0x5558C5907FA836D4(fLocal_160);
}

void func_74(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	unk_0x260E491FFE13E891(fLocal_158);
}

void func_75(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	unk_0xE2270D4DA1247350(fLocal_157);
}

void func_76()
{
	if (Global_71850 || Global_71851)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_4456448.f_155713 == 0 && Global_4456448.f_155714 == 0)
			{
				unk_0xFF524AE40FB6301A(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_14495)
		{
			if (Global_14725)
			{
				if (iLocal_150 == 0)
				{
					if (Global_14553.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_78(255, 255, 255, 255);
			func_77(0.059f, 0.644f, "CELL_284", 0);
			func_78(255, 255, 255, 255);
			func_77(0.165f, 0.644f, "CELL_285", 0);
			func_78(255, 255, 255, 255);
			func_77(0.275f, 0.75f, "CELL_280", 0);
			func_78(255, 255, 255, 255);
			func_77(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14495)
	{
	}
	else
	{
		func_78(255, 255, 255, 255);
		func_77(0.275f, 0.75f, func_63(), 0);
		func_78(255, 255, 255, 255);
		func_77(0.275f, 0.79f, "CELL_286", 0);
		func_78(255, 255, 255, 255);
		func_77(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_77(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, iParam3);
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xC56FB1634FB1F447(0.4f, 0.4f);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(1, 0, 0, 0, 205);
	unk_0xC8D3D8174E443454(1);
	unk_0xBED53673591D764E(0);
	unk_0x762F7A52B1325903(iParam0, iParam1, iParam2, iParam3);
}

void func_79()
{
	unk_0xD6EDA274D82E8678(fLocal_75, 1065353216);
	unk_0xC7E6A5D90DED6E0B(fLocal_76);
}

void func_80()
{
	unk_0x3FD9339AA95E323F(0, 25, 1);
	unk_0x3FD9339AA95E323F(0, 44, 1);
	unk_0x3FD9339AA95E323F(0, 3, 1);
	unk_0x3FD9339AA95E323F(0, 4, 1);
	unk_0x3FD9339AA95E323F(0, 5, 1);
	unk_0x3FD9339AA95E323F(0, 6, 1);
	unk_0x3FD9339AA95E323F(0, 1, 1);
	unk_0x3FD9339AA95E323F(0, 2, 1);
	unk_0x3FD9339AA95E323F(0, 39, 1);
	unk_0x3FD9339AA95E323F(0, 47, 1);
	unk_0x3FD9339AA95E323F(0, 56, 1);
}

void func_81()
{
	Local_87 = { Global_14506[Global_14498 /*3*/] };
	if (Global_14495)
	{
		if (func_84())
		{
			unk_0x4951EE4BB7B6B4F7(&Local_93);
			Local_87 = { Local_93 };
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		func_1(1);
		if (iLocal_121)
		{
			Local_81.f_0 = (Local_81.f_0 + 12f);
		}
		if (Local_81.f_0 > Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
		{
			Local_81.f_0 = Local_87.f_0;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (unk_0x0E4018692D92041D(Global_2425, 4))
		{
			if (Local_81.f_1 < (Local_87.f_1 + 15f) || Local_81.f_1 == (Local_87.f_1 + 15f))
			{
				Local_81.f_1 = (Local_87.f_1 + 15f);
				iLocal_122 = 0;
			}
		}
		else if (Local_81.f_1 < (Local_87.f_1 + 10f) || Local_81.f_1 == (Local_87.f_1 + 10f))
		{
			Local_81.f_1 = (Local_87.f_1 + 10f);
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (func_84() == 0)
		{
			if (unk_0x0E4018692D92041D(Global_2425, 4))
			{
				Local_87.f_1 = (Local_87.f_1 + 15f);
			}
			else
			{
				Local_87.f_1 = (Local_87.f_1 + 10f);
			}
			Local_87.f_0 = (Local_87.f_0 - 14f);
		}
		else
		{
			Local_87 = { Global_14499[Global_14498 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x727F454F1D40BAE4(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0x25E480E1B3CEE87C(Local_84, 0);
			if (!unk_0x0E4018692D92041D(Global_2423, 22))
			{
				if (unk_0x0E4018692D92041D(Global_2423, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_83();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_82();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_82()
{
	func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x0E4018692D92041D(Global_2424, 28))
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_286");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(2, 178, 1), "CELL_277");
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xBB698266C5FDF0A7(uLocal_141, "SET_MAX_WIDTH");
	unk_0x8DAB5B12D7B9AD29(fLocal_77);
	unk_0x818901B332D5541D();
	func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_83()
{
	func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x0E4018692D92041D(Global_2424, 28))
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(2, 179, 1), func_63());
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_286");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x4464D5595CEED843(2, 179, 1), func_63());
		func_64(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x4464D5595CEED843(2, 178, 1), "CELL_277");
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x4464D5595CEED843(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xBB698266C5FDF0A7(uLocal_141, "SET_MAX_WIDTH");
	unk_0x8DAB5B12D7B9AD29(fLocal_77);
	unk_0x818901B332D5541D();
	func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_84()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			if (Global_14496 == 0)
			{
				if (Global_1738 != 128)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (Global_15866 != 2)
						{
						}
					}
				}
			}
		}
		if (func_59(14))
		{
			return 0;
		}
		if (unk_0xB5D4E8F757C24136(unk_0x33CD235DF1E6A94E(), 0))
		{
			return 0;
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!unk_0x051B931529C63ADC())
			{
				if (unk_0x8AE34E8B10270D31(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E()) || unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E())) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x4638E26BEF5EAFDC(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
		if (Global_105613)
		{
			return 0;
		}
	}
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x7B9C4CEB6D33A226();
	iVar1 = unk_0xCB75C331DD5DDCCC(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x051B931529C63ADC()))
	{
		iVar2 = 1;
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar3 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				if ((((((((unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iVar3)) || unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(iVar3))) || unk_0x86A90EB179092418(unk_0x541D5C57194E73C4(iVar3))) || unk_0x541D5C57194E73C4(iVar3) == joaat("seashark")) || unk_0x541D5C57194E73C4(iVar3) == joaat("seashark2")) || unk_0x541D5C57194E73C4(iVar3) == joaat("rhino")) || unk_0x541D5C57194E73C4(iVar3) == joaat("submersible")) || unk_0x541D5C57194E73C4(iVar3) == joaat("submersible2")) || unk_0x541D5C57194E73C4(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269586 || iVar2 == 1)
	{
		if (unk_0x1BCDA92AD0A7835B(joaat("apptrackify")) > 0 || Global_106565.f_14045.f_89)
		{
			if (unk_0x1BCDA92AD0A7835B(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_85()
{
	unk_0x3FD9339AA95E323F(0, 47, 1);
	unk_0x144904D2EAA84341(0, Global_14523);
	Local_84 = { Global_14513 };
	Local_87 = { Global_14506[Global_14498 /*3*/] };
	if (func_84())
	{
		unk_0x5E10768F0F254FE4(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0x4951EE4BB7B6B4F7(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14495)
	{
		func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_55(0);
		iLocal_131 = 0;
		if (unk_0x0E4018692D92041D(Global_2423, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_86();
		}
		if (iLocal_121)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 9))
			{
				Local_81.f_0 = (Local_81.f_0 + 2f);
			}
			else
			{
				Local_81.f_0 = (Local_81.f_0 + 12f);
			}
		}
		if (Local_81.f_0 > Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
		{
			Local_81.f_0 = Local_87.f_0;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (Local_81.f_1 < Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
		{
			Local_81.f_1 = Local_87.f_1;
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0)
		{
			if (iLocal_118)
			{
				Local_78.f_0 = (Local_78.f_0 + 1f);
			}
			if (Local_78.f_0 > Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
			{
				Local_78.f_0 = Local_84.f_0;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_78.f_1 = (Local_78.f_1 - 2f);
			}
			if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
			{
				Local_78.f_1 = Local_84.f_1;
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				Local_78.f_2 = (Local_78.f_2 - 14f);
			}
			if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
			{
				Local_78.f_2 = Local_84.f_2;
				iLocal_120 = 0;
			}
		}
		if (iLocal_126)
		{
			Local_78 = { Local_84 };
			Local_81 = { Local_87 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			if (func_84() == 0)
			{
				unk_0x25E480E1B3CEE87C(Local_78, 0);
				unk_0x727F454F1D40BAE4(Local_81);
			}
			func_97(0, 1);
		}
		else if (func_84() == 0)
		{
			unk_0x25E480E1B3CEE87C(Local_78, 0);
			unk_0x727F454F1D40BAE4(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_86();
		}
	}
	else
	{
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 + 1f);
		}
		if (Local_78.f_0 > Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 2f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 - 7f);
		}
		if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_86();
		}
	}
	unk_0x25E480E1B3CEE87C(Local_78, 0);
}

void func_86()
{
	func_1(0);
	if (func_84() == 0)
	{
		if (unk_0x0E4018692D92041D(Global_2423, 30))
		{
			unk_0x727F454F1D40BAE4(Global_14499[Global_14498 /*3*/]);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14506[Global_14498 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0x25E480E1B3CEE87C(Local_78, 0);
	}
	Global_16899 = 0;
	func_100(0, 0);
	func_104(0);
	iLocal_115 = 0;
	func_99();
	Global_14540 = 1;
	Global_16902 = 0;
	if (Global_14553.f_1 > 4)
	{
		Global_14553.f_1 = 6;
		Global_14531 = 1;
		func_87();
	}
	if (unk_0x11AE7F6A404414C9(uLocal_140))
	{
		func_140(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x818D1850BE9E44A9();
	unk_0x83A1D480DB0B52CC(&uLocal_141);
	unk_0x83A1D480DB0B52CC(&uLocal_140);
	if (Global_14727 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 17);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 17);
	}
	unk_0xCE689A8E8C42ED78(&Global_2423, 18);
	unk_0xCE689A8E8C42ED78(&Global_2423, 21);
	unk_0x3E282335477723EC(0, 1);
	unk_0xCE689A8E8C42ED78(&Global_2425, 3);
	unk_0xCE689A8E8C42ED78(&Global_4269308, 3);
	unk_0xD5CD4268EDE6F40E(0);
	unk_0xC035E897EDDE5AFA(unk_0x95B959F18401C09A(), 1);
	unk_0x019859CB72B1DB4C(15);
	Global_16903 = 1;
	unk_0xCBE6AF58552C63B2(iLocal_112);
	unk_0x44D426446FAF55FB(iLocal_112);
	unk_0x3FE7249C0944DB7B();
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x524B4AAA3328E253(unk_0x33CD235DF1E6A94E(), "Mood_Normal_1", 0);
		unk_0x1400DA3CD323B316(unk_0x33CD235DF1E6A94E());
	}
	func_99();
	unk_0xAB46782535B3097D(0);
	unk_0xF3DBF2ACE9D492CF(0);
	unk_0x8B51389A4CFFACEC(1f);
	if (Global_4268033 > 0 && Global_4268033 < 13)
	{
		unk_0x30F6F0B876E12AD8(sLocal_33[Global_4268033]);
	}
	func_97(0, 1);
	if (func_148(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0x5894DC159447E10A();
}

void func_87()
{
	struct<3> Var0;
	
	if (Global_14536 == 1)
	{
		return;
	}
	if (Global_14553.f_1 < 4)
	{
		return;
	}
	while (!unk_0x11AE7F6A404414C9(Global_14534))
	{
		if (Global_71590)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14553.f_1)
	{
		case 6:
			func_141(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_91(Global_3028);
			if (Global_3028 == 1)
			{
				func_141(Global_14534, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_141(Global_14534, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_90(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_90(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_90(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_90(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x8950ED5730F62EE8(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_141(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_90(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_89();
				func_141(Global_14534, "SET_THEME", unk_0xBBDA792448DB5A89(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(4);
					unk_0x4D9DA18AB3C2A466(0);
					unk_0x4D9DA18AB3C2A466(2);
					unk_0x713FEBE56D2BD403("CELL_CONDFON");
					unk_0xD61E5ED1D4E687A5(&Global_15881);
					unk_0x36F3AA9FFAAF8606();
					func_60("CELL_300");
					func_60("CELL_217");
					func_60("CELL_217");
					unk_0x818901B332D5541D();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_141(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_141(Global_14534, "SET_THEME", unk_0xBBDA792448DB5A89(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_89();
				if (Global_15879)
				{
					unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(4);
					unk_0x4D9DA18AB3C2A466(0);
					unk_0x4D9DA18AB3C2A466(2);
					unk_0x713FEBE56D2BD403("CELL_CONDFON");
					unk_0xD61E5ED1D4E687A5(&Global_15881);
					unk_0x36F3AA9FFAAF8606();
					func_60("CELL_300");
					func_60("CELL_219");
					func_60("CELL_219");
					unk_0x818901B332D5541D();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_141(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_141(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &Var0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_141(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_88();
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if (unk_0x11AE7F6A404414C9(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
		}
		else
		{
			func_90(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_89()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_90(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam7))
	{
		func_60(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam8))
	{
		func_60(iParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam9))
	{
		func_60(iParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam10))
	{
		func_60(iParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam11))
	{
		func_60(iParam11);
	}
	unk_0x818901B332D5541D();
}

void func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_59(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar2);
								unk_0x818901B332D5541D();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											iVar6 = Global_37589;
											break;
										
										case 1:
											iVar6 = Global_37590;
											break;
										
										case 2:
											iVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(Global_2429);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar7);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar8);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 8)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if ((iVar1 == 23 && unk_0xCE3CFF625BEBAA04(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x0E4018692D92041D(Global_2424, 6))
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_90(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_92()
{
	switch (iLocal_100)
	{
		case 1:
			unk_0x3E282335477723EC(0, 1);
			if (unk_0x0E4018692D92041D(Global_2423, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_52();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(Global_2423, 22))
			{
				unk_0x3E282335477723EC(0, 1);
				if (unk_0x0E4018692D92041D(Global_2423, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_83();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_82();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		if (!func_102())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 17);
		}
	}
	else if (func_102())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 17);
	}
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x833B1A3D9F713E03(iParam0, uParam1) || (iParam2 == 1 && unk_0x5EBE50D55314CEAD(iParam0, iParam1)))
	{
		if (unk_0x4CE1DD5CFC1F941E())
		{
			if (unk_0x86CF3D110E5DD82F() == 0 || (unk_0xE3F7CBC28F745843() && unk_0x5D79F3D06EB318A0(2)))
			{
				return 0;
			}
		}
		if (unk_0xD9C92B0885A075F8() || unk_0x15C85368E432C647())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_95(bool bParam0)
{
	if (bParam0)
	{
		if (!func_96())
		{
			unk_0x8950ED5730F62EE8(&Global_1681628, 18);
		}
	}
	else if (func_96())
	{
		unk_0xCE689A8E8C42ED78(&Global_1681628, 18);
	}
}

bool func_96()
{
	return unk_0x0E4018692D92041D(Global_1681628, 18);
}

void func_97(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_98(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

int func_98(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	if ((Global_4456448.f_155713 == 0 && Global_4456448.f_155714 == 0) && Global_1667046 == 0)
	{
		unk_0x3DE34B8864800B14();
	}
}

void func_100(int iParam0, int iParam1)
{
	if (Global_4456448.f_155713 == 1)
	{
	}
	else if (Global_4456448.f_155714 == 1)
	{
	}
	else
	{
		unk_0x9D5F6D4E8A7A3188(iParam0, iParam1);
	}
}

int func_101()
{
	if (unk_0x0E4018692D92041D(Global_2423, 15))
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return unk_0x0E4018692D92041D(Global_1681628, 17);
}

void func_103()
{
	if (Global_14495)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_84())
		{
			unk_0x5E10768F0F254FE4(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0x4951EE4BB7B6B4F7(&Local_93);
			Local_87 = { Local_93 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		if (iLocal_120 == 0)
		{
			if (iLocal_121)
			{
				Local_81.f_0 = (Local_81.f_0 - 14f);
			}
			if (Local_81.f_0 < Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_81.f_1 = (Local_81.f_1 + 7f);
			}
			if (Local_81.f_1 > Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
			{
				iLocal_122 = 0;
			}
			if (iLocal_123)
			{
				Local_81.f_2 = (Local_81.f_2 + 12f);
			}
			if (Local_81.f_2 > Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
			{
				iLocal_123 = 0;
			}
		}
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 - 1f);
		}
		if (Local_78.f_0 < Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			Local_78.f_0 = Local_84.f_0;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 0.5f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			Local_78.f_1 = Local_84.f_1;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 11f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			Local_78.f_2 = Local_84.f_2;
			iLocal_120 = 0;
		}
		if (func_84() == 0)
		{
			unk_0x25E480E1B3CEE87C(Local_78, 0);
			unk_0x727F454F1D40BAE4(Local_81);
		}
	}
	else
	{
		Local_84 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 - 1f);
		}
		if (Local_78.f_0 < Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 + 2f);
		}
		if (Local_78.f_1 > Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 7f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		unk_0x25E480E1B3CEE87C(Local_78, 0);
	}
	if (Global_14495)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_84())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0x25E480E1B3CEE87C(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x727F454F1D40BAE4(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_16900 = 0;
				func_100(1, 1);
				iLocal_115 = 1;
				func_104(1);
				func_57();
				func_105();
				func_55(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_116();
				func_141(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x0E4018692D92041D(Global_4269308, 2))
				{
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_143();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0x25E480E1B3CEE87C(Local_78, 0);
		Global_16900 = 0;
	}
}

void func_104(bool bParam0)
{
	if (func_150())
	{
		if (bParam0)
		{
			if (!unk_0x56DEBE9615C7EB97())
			{
				unk_0xB7966B225EBEEE27(1);
				if (Global_4268033 > 0 && Global_4268033 < 99)
				{
					unk_0x8260AFC98D0D6CAC(sLocal_33[Global_4268033], 0);
					unk_0x8B51389A4CFFACEC(0.25f);
				}
			}
		}
		else if (unk_0x56DEBE9615C7EB97())
		{
			unk_0xB7966B225EBEEE27(0);
		}
	}
}

void func_105()
{
	if (Global_4268032 > 0 && Global_4268032 < 99)
	{
		if (Global_1667046 == 0)
		{
			unk_0x29B6D8EFAD395B92(sLocal_19[Global_4268032]);
		}
	}
}

void func_106()
{
	if (Global_14495)
	{
		iLocal_125 = 0;
		func_57();
		func_97(1, 1);
		func_100(1, 1);
		iLocal_115 = 1;
		Global_16903 = 1;
	}
}

void func_107()
{
	if (Global_4456448.f_155713 == 1 && func_108(1))
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (unk_0x0E4018692D92041D(Global_2423, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_52();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (unk_0xCE3CFF625BEBAA04(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_108(int iParam0)
{
	if ((func_111() || func_110()) || (func_109() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_109()
{
	return Global_2448756.f_16;
}

var func_110()
{
	return Global_2448756.f_15;
}

var func_111()
{
	return Global_2448756.f_14;
}

void func_112()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Back", &Global_14542, 1);
	}
}

void func_113()
{
	unk_0x0FABF46F0B9C98E4(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_114()
{
	func_115();
}

void func_115()
{
	if (iLocal_151)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_151 = 0;
		}
	}
	if (iLocal_151 == 0)
	{
	}
}

void func_116()
{
	if (Global_14553.f_1 > 3)
	{
		if (!unk_0xD9C92B0885A075F8())
		{
			unk_0x5A2C46836B4DF5B3(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_117()
{
	if (func_59(14))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_11();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

void func_118(int iParam0)
{
	if (func_120())
	{
		return;
	}
	if (Global_14725)
	{
		func_97(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_119())
	{
		Global_14553.f_1 = 3;
	}
}

int func_119()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_120()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_121()
{
	unk_0x3FD9339AA95E323F(0, 0, 1);
	unk_0x3FD9339AA95E323F(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0x144904D2EAA84341(0, Global_14526);
		unk_0x144904D2EAA84341(0, Global_14523);
		unk_0x3FD9339AA95E323F(0, 278, 1);
		unk_0x3FD9339AA95E323F(0, 279, 1);
		unk_0x3FD9339AA95E323F(0, 280, 1);
		unk_0x3FD9339AA95E323F(0, 281, 1);
		unk_0x3FD9339AA95E323F(0, 282, 1);
		unk_0x3FD9339AA95E323F(0, 282, 1);
		unk_0x3FD9339AA95E323F(0, 284, 1);
		unk_0x3FD9339AA95E323F(0, 285, 1);
		unk_0x3FD9339AA95E323F(0, 69, 1);
		unk_0x3FD9339AA95E323F(0, 70, 1);
		unk_0x3FD9339AA95E323F(0, 114, 1);
		unk_0x3FD9339AA95E323F(0, 71, 1);
		unk_0x3FD9339AA95E323F(0, 72, 1);
		unk_0x3FD9339AA95E323F(0, 74, 1);
		unk_0x3FD9339AA95E323F(0, 75, 1);
		unk_0x3FD9339AA95E323F(0, 76, 1);
		unk_0x3FD9339AA95E323F(0, 73, 1);
		unk_0x3FD9339AA95E323F(0, 77, 1);
		unk_0x3FD9339AA95E323F(0, 78, 1);
		unk_0x3FD9339AA95E323F(0, 286, 1);
		unk_0x3FD9339AA95E323F(0, 287, 1);
		unk_0x3FD9339AA95E323F(0, 79, 1);
		unk_0x3FD9339AA95E323F(0, 80, 1);
		unk_0x3FD9339AA95E323F(0, 81, 1);
		unk_0x3FD9339AA95E323F(0, 82, 1);
		unk_0x3FD9339AA95E323F(0, 86, 1);
		unk_0x3FD9339AA95E323F(0, 59, 1);
		unk_0x3FD9339AA95E323F(0, 60, 1);
		unk_0x3FD9339AA95E323F(0, 61, 1);
		unk_0x3FD9339AA95E323F(0, 62, 1);
		unk_0x3FD9339AA95E323F(0, 63, 1);
		unk_0x3FD9339AA95E323F(0, 64, 1);
		unk_0x3FD9339AA95E323F(0, 87, 1);
		unk_0x3FD9339AA95E323F(0, 88, 1);
		unk_0x3FD9339AA95E323F(0, 89, 1);
		unk_0x3FD9339AA95E323F(0, 90, 1);
		unk_0x3FD9339AA95E323F(0, 107, 1);
		unk_0x3FD9339AA95E323F(0, 108, 1);
		unk_0x3FD9339AA95E323F(0, 109, 1);
		unk_0x3FD9339AA95E323F(0, 110, 1);
		unk_0x3FD9339AA95E323F(0, 111, 1);
		unk_0x3FD9339AA95E323F(0, 112, 1);
		unk_0x3FD9339AA95E323F(0, 113, 1);
		unk_0x3FD9339AA95E323F(0, 114, 1);
		unk_0x3FD9339AA95E323F(0, 91, 1);
		unk_0x3FD9339AA95E323F(0, 92, 1);
		unk_0x3FD9339AA95E323F(0, 68, 1);
		unk_0x3FD9339AA95E323F(0, 102, 1);
		unk_0x3FD9339AA95E323F(0, 136, 1);
		unk_0x3FD9339AA95E323F(0, 137, 1);
		unk_0x3FD9339AA95E323F(0, 138, 1);
		unk_0x3FD9339AA95E323F(0, 139, 1);
		unk_0x3FD9339AA95E323F(0, 102, 1);
	}
}

int func_122()
{
	var uVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			uVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x67FFBB75D2430704(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x7BDC41A7CA0C77A2(uVar0, -1, 0) == unk_0x33CD235DF1E6A94E())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_123()
{
	var uVar0;
	
	func_131(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_130())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_129())
	{
		return 1;
	}
	if (func_128(157))
	{
		if (!func_127())
		{
			return 1;
		}
	}
	if (func_128(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_124() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_124()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()
{
	switch (func_126())
	{
		case 0:
			return func_125();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_125()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_126()
{
	return Global_25765;
}

bool func_127()
{
	return Global_2448756.f_586;
}

int func_128(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_2458613;
}

bool func_130()
{
	return Global_2448756.f_581;
}

void func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_132(iVar0);
					break;
				
				case -42615386:
					unk_0x286A5F0670063839(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_132(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 3))
	{
		if (func_134(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x378BD4B3881338C2(Var0.f_1);
			if (unk_0x765F6FEEFF39224F(iVar3))
			{
				if (unk_0xF0D230FB550CD6EB(iVar3, 0))
				{
					iVar4 = unk_0xF2C96862595654B4(iVar3, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar4, Var0.f_2) && unk_0xE36862B47CD70685())
					{
						if (func_133(iVar4, &bVar5))
						{
							unk_0xD4A76B5E6C175542(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x65F544B458249682(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_133(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9E08E12414BD4476(iParam0, 0))
		{
			if (unk_0x0A81FE3D92AE2AC9(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_134(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_135()
{
	if (iLocal_156 == 1)
	{
		unk_0x581AE7724ACAD410(7);
		unk_0x581AE7724ACAD410(1);
		unk_0x581AE7724ACAD410(3);
		unk_0x581AE7724ACAD410(4);
		unk_0x581AE7724ACAD410(6);
		unk_0x581AE7724ACAD410(8);
		unk_0x581AE7724ACAD410(9);
		unk_0x581AE7724ACAD410(2);
	}
	else
	{
		unk_0xF3F3DC87D7163212();
	}
}

void func_136(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 1, iParam1);
}

bool func_137()
{
	return unk_0x0E4018692D92041D(Global_1681628, 5);
}

void func_138()
{
	if (func_139())
	{
		unk_0x5EC1B075C44EF32B();
		if (unk_0x47BE216AA5C280DA(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16903 = 1;
			Global_14553.f_1 = 3;
			unk_0x3FE7249C0944DB7B();
		}
	}
	else
	{
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1)
		{
			if (iLocal_127 == 0)
			{
				if (unk_0x11AE7F6A404414C9(uLocal_140))
				{
					if (func_150())
					{
						if (Global_4268033 == 0)
						{
							if (!unk_0x0E4018692D92041D(Global_4269308, 2))
							{
								func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x0E4018692D92041D(Global_4269308, 2))
						{
							func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x11AE7F6A404414C9(uLocal_140))
			{
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_141(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0x3FE7249C0944DB7B();
	}
}

int func_139()
{
	if (Global_4456448.f_155713 == 1)
	{
		if (Global_71590)
		{
			return 0;
		}
	}
	if (Global_4456448.f_155714 == 1)
	{
		if (Global_71590)
		{
			return 0;
		}
	}
	if (unk_0xD88B24C279C15EA1() || unk_0xF3622D832771D4B9())
	{
		if (unk_0x0E4018692D92041D(Global_2424, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_140(var uParam0, char* sParam1)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x818901B332D5541D();
}

void func_141(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x818901B332D5541D();
}

int func_142()
{
	if (Global_71590)
	{
		Global_14553 = 3;
	}
	else
	{
		Global_14553 = func_11();
	}
	if (Global_14553 > 3)
	{
		Global_14553 = 3;
	}
	return Global_106565.f_14045[Global_14553 /*20*/].f_7;
}

void func_143()
{
	if (Global_14553.f_1 > 3)
	{
		Global_14553.f_1 = 8;
	}
	Global_16902 = 0;
	iLocal_127 = 0;
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		Local_67 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
	}
	if (Global_14495)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_116();
			func_80();
			unk_0x818D1850BE9E44A9();
		}
		func_140(uLocal_140, "OPEN_SHUTTER");
		func_135();
		func_107();
		iLocal_129 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_100(1, 1);
		func_104(1);
		func_57();
		func_105();
		func_55(0);
		iLocal_115 = 1;
	}
}

void func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 15);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 15);
	}
}

bool func_145()
{
	return Global_1312844;
}

int func_146(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0xF0D230FB550CD6EB(iParam0, iParam1))
		{
			uVar0 = unk_0xF2C96862595654B4(iParam0, iParam1);
			if (unk_0x765F6FEEFF39224F(uVar0))
			{
				iVar1 = unk_0xA2AD91D40FCCF9D2(unk_0x541D5C57194E73C4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x67FFBB75D2430704(iVar0, iVar3, 0))
					{
						if (unk_0x7BDC41A7CA0C77A2(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_147()
{
}

int func_148(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xAB923D8907C25634() != iParam0 && bParam2)
		{
			unk_0xE5E26871D8586417(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_149()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xBFCF1429B1DC83C2(unk_0x33CD235DF1E6A94E()))
		{
			unk_0xB5FEFF716515EF9E(unk_0x33CD235DF1E6A94E(), 0, 0);
			unk_0xE2270D4DA1247350(fLocal_157);
			unk_0x260E491FFE13E891(fLocal_158);
			unk_0xD055B2173EC7AA98(fLocal_159);
		}
		else
		{
			unk_0xE2270D4DA1247350(fLocal_157);
			unk_0x260E491FFE13E891(fLocal_158);
			unk_0xD055B2173EC7AA98(fLocal_159);
		}
	}
	unk_0x5558C5907FA836D4(fLocal_160);
	unk_0xC0312D3A63E3EA51(fLocal_161);
	unk_0x65ED5A45B2B14FAB(fLocal_162);
	unk_0x2C34991F69FF9B31(fLocal_163);
	func_54();
}

int func_150()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}


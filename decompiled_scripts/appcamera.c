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
	unk_0x11103F6657466FF8();
	if (unk_0x2DA8A432EC3C3D33() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_139())
	{
		Global_2606866 = 99;
		Global_2606867 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_2606866 = 0;
		Global_2606867 = 0;
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
	func_138();
	if (func_137(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_136();
	iLocal_112 = unk_0x6307C3D1D866114A();
	if (Global_14388 == 0)
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
	Global_16778 = 0;
	Global_16779 = 0;
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (unk_0xC954500F00DB9A24(unk_0x0031992CA618A445()))
		{
			Global_16778 = 1;
		}
		if (unk_0x4A4BA8BB077106BB())
		{
			Global_16778 = 1;
		}
		if (unk_0x432757A9E7AAFA96(unk_0x882388E2A8356C6F(unk_0x0031992CA618A445()), 0))
		{
			Global_16778 = 1;
		}
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
		{
			Global_16778 = 1;
		}
		if (unk_0x953F7E502B702611(unk_0x0031992CA618A445()))
		{
			Global_16778 = 1;
		}
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16778 = 1;
			}
			uLocal_149 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if ((unk_0xE9559A12052415BE(uLocal_149) == joaat("rhino") || unk_0xE9559A12052415BE(iLocal_149) == joaat("cutter")) || unk_0xE9559A12052415BE(iLocal_149) == joaat("submersible"))
			{
				Global_16778 = 1;
			}
			else if (unk_0x3251C2B06497863C(iLocal_149, -1, 0) == unk_0x0031992CA618A445())
			{
				if (unk_0x4F3A65A97120614D(iLocal_149) > 0f)
				{
					if (!Global_70785)
					{
						if (!func_135())
						{
							unk_0x162D4638D393BAB6(unk_0x0031992CA618A445(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_70785)
	{
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			unk_0x2A7D60DB05B0B7D5(unk_0x3D35F9864E4640B1(), 0);
		}
	}
	unk_0xD804ACF2A7171150(&Global_2313, 21);
	func_134(0);
	unk_0xCD7E92DE2BFA0B0D(&Global_2313, 17);
	if (Global_14385 == 0)
	{
		func_133();
	}
	else
	{
		uLocal_140 = unk_0xB1E69EFAB6CB45A3("camera_gallery");
		uLocal_141 = unk_0xB1E69EFAB6CB45A3("instructional_buttons");
		while (!unk_0x77FA56883245AD26(uLocal_140) || !unk_0x77FA56883245AD26(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x5535802AD071DF09();
			unk_0xC9621A9AD282CC14(0, 25, 1);
		}
		if (Global_70785)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_132())
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
		func_131(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_130(uLocal_140, "CLOSE_SHUTTER");
		unk_0xEBD23F68B1A617FC(Global_14424, "DISPLAY_VIEW");
		unk_0x32F9127910F63DFA(16);
		unk_0x1C703A54AB4B12F6();
	}
	Local_78 = { Global_14403 };
	Local_81 = { Global_14396[Global_14388 /*3*/] };
	Global_16779 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0xD804ACF2A7171150(&Global_2315, 3);
	}
	func_128();
	unk_0x38C75B31337B3454(4);
	if (unk_0x75EFE4AD7FE01A74())
	{
	}
	if (Global_1641087.f_111183)
	{
	}
	if (Global_1641087.f_111185 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x8662FAB20C4C3CFB(0, Global_14412);
		unk_0x8662FAB20C4C3CFB(0, 186);
		unk_0x5535802AD071DF09();
		unk_0xC9621A9AD282CC14(0, 25, 1);
		unk_0xC9621A9AD282CC14(0, 0, 1);
		if (!Global_104439.f_13912.f_81)
		{
			if (!unk_0x2A3398C6222EB190(Global_2608142, 13))
			{
				if (!unk_0x068C69D0643C4B95())
				{
					if (!unk_0x2A3398C6222EB190(Global_2314, 28))
					{
						if (iLocal_128 && iLocal_131 == 0)
						{
							unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 13);
							Global_104439.f_13912.f_81 = 1;
							func_127("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x957E53BB191CB24D())
		{
			if (Global_1641087.f_111182 == 0 && Global_1641087.f_111183 == 0)
			{
				unk_0xB8281495D778DB56(15, 0f, -0.0375f);
			}
			unk_0xBD1C47D856010F09(7);
			func_126();
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				unk_0x49544FB997F0AADE(unk_0x0031992CA618A445(), 200, 1);
			}
			unk_0xC9621A9AD282CC14(0, 44, 1);
			unk_0xC9621A9AD282CC14(0, 47, 1);
			unk_0xC9621A9AD282CC14(0, 91, 1);
			unk_0xC9621A9AD282CC14(0, 92, 1);
			unk_0xC9621A9AD282CC14(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0x8662FAB20C4C3CFB(0, Global_14416);
			}
			unk_0x8662FAB20C4C3CFB(0, Global_14413);
			if (unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
			{
				iLocal_130 = 1;
				Global_14443.f_1 = 3;
				unk_0x5BF9AA7BD6376F82(0);
			}
			if (unk_0xB7F75BFA1C7C2AF6())
			{
				Global_14443.f_1 = 3;
				unk_0x5BF9AA7BD6376F82(0);
			}
			if (unk_0x2A3398C6222EB190(Global_2314, 3))
			{
				Global_14443.f_1 = 3;
				unk_0x5BF9AA7BD6376F82(0);
			}
			if (unk_0x27CA09C6DFAB1E79())
			{
				if (func_115())
				{
					Global_14443.f_1 = 3;
					unk_0x5BF9AA7BD6376F82(0);
				}
			}
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0xCAAA726E313CCCFD(unk_0x0031992CA618A445(), 0))
				{
					Global_14443.f_1 = 3;
					unk_0x5BF9AA7BD6376F82(0);
				}
				if ((unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0xC3B36E687193A3B6(unk_0x3D35F9864E4640B1()))
				{
					if (func_114())
					{
					}
					else
					{
						Global_14443.f_1 = 3;
						unk_0x5BF9AA7BD6376F82(0);
					}
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()) || unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					if (Global_70785 == 1)
					{
						Global_14443.f_1 = 3;
					}
				}
				if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
				{
					if (unk_0x49109C5C04FCFF8A(unk_0x0031992CA618A445()) > 0.3f)
					{
						Global_14443.f_1 = 3;
					}
				}
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					func_113();
					iLocal_149 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					if (unk_0x4F3A65A97120614D(iLocal_149) < 0f)
					{
						func_111(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0xBAEAD28FF7F1D621())
							{
								func_111(0);
							}
						}
						else if (!unk_0xBAEAD28FF7F1D621())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x5535802AD071DF09();
						}
					}
				}
				else if (Global_70785 == 0)
				{
					if (unk_0x2A3398C6222EB190(Global_2313, 18))
					{
						func_110();
						if ((Global_14443 == 0 || Global_14443 == 1) || Global_14443 == 2)
						{
							if (!unk_0x4128FA10CDD107BC(unk_0x0031992CA618A445()))
							{
								if (unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
								{
								}
								else
								{
									Global_14443.f_1 = 3;
									unk_0x5BF9AA7BD6376F82(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_109();
			}
			if (Global_14443.f_1 < 4)
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
							if (Global_14443.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_107();
									if (Global_16783 == 0 && Global_16780 == 6)
									{
										unk_0x9CEB47B3DB798328(0, 1);
										unk_0xFE185FFD730A31A1();
										iLocal_150 = 0;
										func_106();
										if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
										{
											Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
										}
										func_105();
										iLocal_109++;
										if (func_139())
										{
											func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
									}
									if (Global_16780 == 0)
									{
										iLocal_150 = 0;
										unk_0xFE185FFD730A31A1();
										if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
										{
											Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
										}
										func_99();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
										if (func_139())
										{
											if (Global_2606867 == 0)
											{
												if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
												{
													func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
										{
											func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_98();
										func_97(1);
									}
								}
								else if (Global_14443.f_1 != 9)
								{
									if (Global_16779 == 1)
									{
										if (Global_16778 == 0)
										{
											func_96();
										}
									}
									else if ((Global_2921 - Global_2920) > Global_2922)
									{
										if (func_95(2, Global_14411, 0))
										{
											if (func_94() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x5BF9AA7BD6376F82(0);
												unk_0x03C4BA9F5A120DFE(iLocal_112);
												iLocal_143 = 0;
												if (Global_16778 == 0)
												{
													func_105();
													Global_16778 = 1;
													unk_0x9CEB47B3DB798328(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_93(0, 0);
													func_97(0);
													iLocal_115 = 0;
													func_92();
													iLocal_142 = 0;
													func_90(0, 1);
													func_131(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x068C69D0643C4B95())
										{
											func_89();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x068C69D0643C4B95())
									{
										func_89();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0x2A3398C6222EB190(Global_2313, 28))
										{
											func_89();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0x2A3398C6222EB190(Global_2313, 28))
									{
										func_89();
										iLocal_102 = 0;
									}
									if (Global_16778 == 1)
									{
										func_82();
									}
									else if (Global_14443.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_78();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_99();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
												{
													if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
													{
														func_130(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x31CD6E9F83C10233();
														while (unk_0x31CD6E9F83C10233() < (iLocal_135 + iLocal_137) && Global_14443.f_1 > 3)
														{
															func_126();
															func_109();
															func_77();
															unk_0x5535802AD071DF09();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_139())
												{
													if (Global_2606867 == 0)
													{
														if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
														{
															func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
												{
													func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_109();
												func_126();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_100();
												iLocal_136 = 0;
												func_130(uLocal_140, "OPEN_SHUTTER");
											}
											func_98();
											func_97(1);
											func_76();
										}
									}
									if (iLocal_143 == 1)
									{
										func_73();
									}
									if (iLocal_129)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0xCD7E92DE2BFA0B0D(&Global_2313, 18);
											if (Global_16778 == 0)
											{
												func_90(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_16778 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_16781 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_77();
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
					if (Global_14443.f_1 > 3)
					{
						if (Global_16779 == 1)
						{
							if (Global_16778 == 0)
							{
								func_96();
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
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 7)
				{
					if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0x6EC0C21CF01F429C() || unk_0x43F4A6D2081CC5ED())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0x20551D6D924ED04B())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", 0, -1, "", "", 1);
					}
				}
				if (iLocal_155 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = unk_0xDC89EE24F4F4F213();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (unk_0xD887E21676314450(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
					}
					if (unk_0xD887E21676314450(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0xBF946CEEECD8C935(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_154 = 0;
							unk_0x8B9D74B8B67CDB6F("Gallery");
							unk_0xFF82D9F343272A74();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0x43F4A6D2081CC5ED())
					{
						if (unk_0xD887E21676314450(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0xD887E21676314450(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0x43F4A6D2081CC5ED())
					{
						if (unk_0xD887E21676314450(2, Global_14415))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							if (unk_0x2A3398C6222EB190(Global_2314, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x31CD6E9F83C10233();
							unk_0x40FB16B5061B30EC(1);
						}
					}
				}
				else if (unk_0xD887E21676314450(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_90(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x31CD6E9F83C10233();
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			Global_16778 = 0;
			Global_16779 = 0;
			Global_16781 = 0;
			unk_0x7F165E259CFAC8B8(&uLocal_140);
			unk_0x7F165E259CFAC8B8(&uLocal_141);
			unk_0x5BF9AA7BD6376F82(0);
			if (Global_14606 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&Global_2313, 17);
			}
			else
			{
				unk_0xD804ACF2A7171150(&Global_2313, 17);
			}
			unk_0x9CEB47B3DB798328(0, 1);
			unk_0x2A7D60DB05B0B7D5(unk_0x3D35F9864E4640B1(), 1);
			unk_0xD804ACF2A7171150(&Global_2315, 3);
			unk_0xD804ACF2A7171150(&Global_2608142, 3);
			unk_0xC030DF4B187326D7(15);
			Global_16782 = 1;
			unk_0x03C4BA9F5A120DFE(iLocal_112);
			unk_0xF2565A150D1CA964(iLocal_112);
			unk_0xFE185FFD730A31A1();
			func_92();
			unk_0x171D5789108A8EE9(0);
			unk_0x7BBF764E1BA82944(0);
			unk_0xE6C99373F62CC20D(1f);
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				unk_0xB9F5312DE5BD69DC(unk_0x0031992CA618A445(), "Mood_Normal_1", 0);
				unk_0x5CC34E800484F0E6(unk_0x0031992CA618A445());
			}
			if (Global_2606867 > 0 && Global_2606867 < 13)
			{
				unk_0x40C8D24AE8508DEC(sLocal_33[Global_2606867]);
			}
			unk_0xD804ACF2A7171150(&Global_2313, 18);
			func_90(0, 1);
			if (func_137(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0xBEE2834559A8897A();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x3567ECFAFF02309E(1);
		}
		else if (Global_14443.f_1 > 3)
		{
			unk_0x3567ECFAFF02309E(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x72A1F054E4BCA1A8();
	iVar1 = unk_0xE2378BA63E191ED9(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2608356 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = unk_0xC61A877BB3651274(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x69A139002F1088CE();
			iLocal_110 = unk_0x884B28701B23F4AB();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0x77FA56883245AD26(uLocal_140))
					{
						if (func_139())
						{
							if (Global_2606867 == 0)
							{
								if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
								{
									func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
							{
								func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x77FA56883245AD26(uLocal_140))
				{
					func_131(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0xFE185FFD730A31A1();
			break;
		
		case 1:
			if (!unk_0xCC819B6E11062663())
			{
				unk_0x06B4553661AF4E5A("CELL_SPINNER2");
				unk_0x84E9918555B2F8B5(1);
			}
			break;
		
		case 2:
			if (unk_0x2A3398C6222EB190(Global_2314, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_14443.f_1 = 3;
				Global_16782 = 1;
			}
			unk_0xFE185FFD730A31A1();
			break;
	}
}

void func_5()
{
	if (func_95(2, Global_14412, 0))
	{
		func_1(0);
		if (unk_0x2A3398C6222EB190(Global_2314, 28))
		{
			unk_0x5BF9AA7BD6376F82(0);
			unk_0x5AE11BC36633DE4E(0);
			func_106();
			iLocal_127 = 0;
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			}
			func_105();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0x2A3398C6222EB190(Global_2314, 14))
			{
				func_127("CELL_299", -1);
			}
			else
			{
				func_105();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_90(1, 1);
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2313, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_126();
			unk_0x5535802AD071DF09();
			func_77();
			func_113();
			func_109();
		}
		unk_0x5BF9AA7BD6376F82(0);
		func_106();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
		}
		func_100();
		func_105();
	}
	if (func_95(2, Global_14416, 0))
	{
		func_1(0);
		if (func_94() || unk_0x2A3398C6222EB190(Global_2314, 28))
		{
		}
		else
		{
			unk_0x5BF9AA7BD6376F82(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_106();
			iLocal_127 = 0;
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			}
			func_105();
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2313, 28))
	{
		if (func_95(2, Global_14415, 0))
		{
			func_1(0);
			unk_0x5BF9AA7BD6376F82(0);
			unk_0x839C25CE02EF3B49(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x5535802AD071DF09();
			func_126();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x5535802AD071DF09();
			func_126();
			unk_0x336F1A9B81560EF5();
			unk_0xCD6A9119510EED34();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_90(0, 1);
			Global_16778 = 1;
			unk_0x9CEB47B3DB798328(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 9);
			iLocal_142 = 0;
			func_131(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x18F1BFAF88AC511B(-1, "Menu_Accept", &Global_14432, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0xA7FC4412652EAFAA(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16783 = 1;
	unk_0x9CEB47B3DB798328(0, 1);
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
	if (Global_14443.f_1 < 4)
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
	
	if (unk_0xFF512A008EA368FF(2))
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
		func_68();
		func_64();
		func_63();
		fLocal_73 = unk_0xCC12513AF8620267();
		fLocal_74 = unk_0xBE799303ECA946B6();
		if (iLocal_133 == 0)
		{
			if (unk_0x9148803485DEDF45(2, iVar0) && !unk_0x9148803485DEDF45(2, iVar1))
			{
				iLocal_133 = 1;
				func_131(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_131(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x2A3398C6222EB190(Global_2313, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(2, 179, 1), "CELL_287");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0xEBD23F68B1A617FC(uLocal_141, "SET_MAX_WIDTH");
				unk_0x90495002CD46BD88(fLocal_77);
				unk_0x1C703A54AB4B12F6();
				func_131(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x9148803485DEDF45(2, iVar0) || unk_0x9148803485DEDF45(2, iVar1))
		{
			iLocal_133 = 0;
			func_100();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x9148803485DEDF45(2, iVar1) && !unk_0x9148803485DEDF45(2, iVar0))
			{
				iLocal_134 = 1;
				func_131(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_131(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x2A3398C6222EB190(Global_2313, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(2, 179, 1), "CELL_287");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(0, 177, 1), "CELL_281");
				}
				func_59();
				unk_0xEBD23F68B1A617FC(uLocal_141, "SET_MAX_WIDTH");
				unk_0x90495002CD46BD88(fLocal_77);
				unk_0x1C703A54AB4B12F6();
				func_131(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x9148803485DEDF45(2, iVar1) || unk_0x9148803485DEDF45(2, iVar0))
		{
			iLocal_134 = 0;
			func_100();
		}
	}
	else
	{
		unk_0x14C5CBCF9E6EB7B5(0, 2, 1);
		unk_0x14C5CBCF9E6EB7B5(0, 1, 1);
	}
	if (unk_0xDE25F26B6B16CF7A(2))
	{
		func_100();
	}
	func_113();
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x49544FB997F0AADE(unk_0x0031992CA618A445(), 200, 1);
	}
	if (unk_0xD887E21676314450(2, 183) && iLocal_156 == 0)
	{
		unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (!unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
			{
				if (unk_0x2A3398C6222EB190(Global_2608142, 2))
				{
					unk_0xD804ACF2A7171150(&Global_2608142, 2);
					if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
					{
						func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 2);
					func_131(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0xEBD23F68B1A617FC(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xE8240315678FDE8E(0);
			func_58("CELL_FOCUS");
			unk_0xE8240315678FDE8E(1);
			unk_0x1C703A54AB4B12F6();
		}
		if (!func_57(14))
		{
			if (unk_0x2A3398C6222EB190(Global_2608142, 10))
			{
				if ((Global_70785 == 0 && unk_0x7832F791572D5809(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0xEBD23F68B1A617FC(uLocal_140, "SET_FOCUS_LOCK");
					unk_0xE8240315678FDE8E(1);
					unk_0x9BC6C9E77AAC792E("CELL_ACTTL");
					unk_0x50B3C23D0902259F(unk_0xC0D54565FC1032F4(&Global_2609050));
					unk_0xCC5EB3A492FB7D4B();
					unk_0xE8240315678FDE8E(0);
					unk_0x1C703A54AB4B12F6();
					unk_0xD804ACF2A7171150(&Global_2608142, 10);
				}
			}
		}
		else if (unk_0x2A3398C6222EB190(Global_2608142, 10))
		{
			unk_0xD804ACF2A7171150(&Global_2608142, 10);
		}
		iLocal_66 = unk_0x31CD6E9F83C10233();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				Local_70 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
				if (unk_0x1410333E912D4EC6(Local_70, Local_67, 1) > 5f)
				{
					Global_14443.f_1 = 3;
					unk_0x5BF9AA7BD6376F82(0);
				}
				iLocal_65 = unk_0x31CD6E9F83C10233();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x9148803485DEDF45(0, 182))
		{
			unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_132 = 0;
			unk_0xEBD23F68B1A617FC(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xE8240315678FDE8E(0);
			func_58("CELL_FOCUS");
			unk_0xE8240315678FDE8E(1);
			unk_0x1C703A54AB4B12F6();
		}
	}
	else if (unk_0x9148803485DEDF45(0, 182))
	{
		unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
		iLocal_132 = 1;
		if (!func_57(14))
		{
			unk_0xEBD23F68B1A617FC(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xE8240315678FDE8E(1);
			func_58("CELL_FOCUS");
			unk_0xE8240315678FDE8E(1);
			unk_0x1C703A54AB4B12F6();
		}
	}
	if (func_139())
	{
		if (unk_0xD887E21676314450(2, 186) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
					{
						unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
						unk_0xB9F5312DE5BD69DC(unk_0x0031992CA618A445(), "Mood_Normal_1", 0);
						unk_0x5CC34E800484F0E6(unk_0x0031992CA618A445());
						if (Global_14443 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x6C5A6C5A6F492576(unk_0x0031992CA618A445(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x6C5A6C5A6F492576(unk_0x0031992CA618A445(), 1);
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
											unk_0xB9F5312DE5BD69DC(unk_0x0031992CA618A445(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0xB9F5312DE5BD69DC(unk_0x0031992CA618A445(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0xB9F5312DE5BD69DC(unk_0x0031992CA618A445(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0xB9F5312DE5BD69DC(unk_0x0031992CA618A445(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
					{
						unk_0xB9F5312DE5BD69DC(unk_0x0031992CA618A445(), "Mood_Normal_1", 0);
						unk_0x5CC34E800484F0E6(unk_0x0031992CA618A445());
						unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
					}
				}
			}
		}
		if (unk_0xD887E21676314450(2, 185) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0xB3404E397FF56B3B(sLocal_19[Global_2606866], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x171D5789108A8EE9(1);
							unk_0x7BBF764E1BA82944(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0x171D5789108A8EE9(0);
						unk_0x7BBF764E1BA82944(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0x171D5789108A8EE9(1);
					unk_0x7BBF764E1BA82944(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0x171D5789108A8EE9(0);
					unk_0x7BBF764E1BA82944(0);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		if (unk_0xD887E21676314450(0, 172) && iLocal_156 == 0)
		{
			if (func_139())
			{
				Global_2606867++;
				unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
			}
			if (Global_2606867 == 13)
			{
				func_97(0);
				unk_0xE6C99373F62CC20D(1f);
				unk_0x40C8D24AE8508DEC(sLocal_33[(Global_2606867 - 1)]);
				Global_2606867 = 0;
				func_55();
				if (iLocal_47 == 1)
				{
					unk_0xD804ACF2A7171150(&Global_2608142, 2);
					iLocal_47 = 0;
					func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2606867 > 0 && Global_2606867 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0x59B2F61C9D01132B(sLocal_33[Global_2606867], 0);
			}
		}
	}
	if (Global_2606867 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0xB56F0E1C89B9E069(sLocal_33[Global_2606867]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0x8B33C026A5B080FB())
				{
					func_97(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 2);
				func_131(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xE6C99373F62CC20D(0.25f);
				unk_0x012AF99FA41C5945(sLocal_33[Global_2606867], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_2606867 == 1 || Global_2606867 == 3)
			{
			}
			if (Global_2606867 == 2 || Global_2606867 == 4)
			{
			}
		}
	}
	if (unk_0xD887E21676314450(0, 173) && iLocal_156 == 0)
	{
		if (func_139())
		{
			func_92();
			Global_2606866++;
			unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
		}
		if (Global_2606866 == 13)
		{
			Global_2606866 = 0;
		}
		if (Global_2606866 == 0)
		{
			if (func_139())
			{
				func_92();
			}
		}
		else
		{
			func_98();
		}
		func_54();
	}
	if (unk_0x42F812C5F1AA300A(0, 184) && iLocal_156 == 0)
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && !unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
			{
				Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
				unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
				func_131(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_130(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x31CD6E9F83C10233();
				while (unk_0x31CD6E9F83C10233() < (iLocal_135 + iLocal_139) && Global_14443.f_1 > 3)
				{
					func_126();
					func_109();
					func_77();
					unk_0x5535802AD071DF09();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0x03C4BA9F5A120DFE(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					unk_0xCD7E92DE2BFA0B0D(&Global_2315, 3);
					iLocal_65 = unk_0x31CD6E9F83C10233();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					unk_0xD804ACF2A7171150(&Global_2315, 3);
				}
				iLocal_135 = unk_0x31CD6E9F83C10233();
				while (unk_0x31CD6E9F83C10233() < (iLocal_135 + iLocal_137) && Global_14443.f_1 > 3)
				{
					func_126();
					func_109();
					func_77();
					unk_0x5535802AD071DF09();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_130(uLocal_140, "OPEN_SHUTTER");
				if (func_139())
				{
					if (Global_2606867 == 0)
					{
						if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
						{
							func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
				{
					func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_109();
				func_126();
				if (unk_0x2A3398C6222EB190(Global_2313, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_50();
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
			if (unk_0xD887E21676314450(0, 40) || unk_0xD887E21676314450(0, 41))
			{
				fLocal_114 = unk_0x2B7613A585292E2B();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x917B2B29AECD0509(iLocal_112))
					{
						unk_0x18F1BFAF88AC511B(iLocal_112, "Camera_Zoom", &Global_14432, 1);
					}
				}
				else
				{
					unk_0x03C4BA9F5A120DFE(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x9148803485DEDF45(0, 40) || unk_0x9148803485DEDF45(0, 41))
		{
			fLocal_114 = unk_0x2B7613A585292E2B();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x917B2B29AECD0509(iLocal_112))
				{
					unk_0x18F1BFAF88AC511B(iLocal_112, "Camera_Zoom", &Global_14432, 1);
				}
			}
			else
			{
				unk_0x03C4BA9F5A120DFE(iLocal_112);
			}
		}
		else
		{
			unk_0x03C4BA9F5A120DFE(iLocal_112);
		}
	}
	if (func_95(2, Global_14412, 0))
	{
		fLocal_75 = unk_0xCC12513AF8620267();
		fLocal_76 = unk_0xBE799303ECA946B6();
		unk_0x839C25CE02EF3B49(0, 0);
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 21);
		unk_0x03C4BA9F5A120DFE(iLocal_112);
		iLocal_127 = 1;
		func_131(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_131(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x18F1BFAF88AC511B(-1, "Camera_Shoot", &Global_14432, 1);
		func_130(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0xB0C8424D8C3EF063(Local_84, 0);
		if (!func_139())
		{
			func_92();
		}
		Global_16781 = 1;
		unk_0x9CEB47B3DB798328(0, 1);
		while (Global_16780 < 6 && Global_14443.f_1 > 3)
		{
			func_126();
			func_109();
			func_77();
			func_113();
			unk_0x5535802AD071DF09();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x9FC4DC280CEA9DFE(0, 0);
		if (Global_14385)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x31CD6E9F83C10233();
		while (unk_0x31CD6E9F83C10233() < (iLocal_135 + iLocal_138) && Global_14443.f_1 > 3)
		{
			func_126();
			func_109();
			func_77();
			unk_0x5535802AD071DF09();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_130(uLocal_140, "OPEN_SHUTTER");
		unk_0xD804ACF2A7171150(&Global_2313, 21);
		func_100();
		if (Global_14443.f_1 > 3)
		{
			if (Global_70785)
			{
				func_20(1083, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x36E9A95630877B8A(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x36E9A95630877B8A(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x36E9A95630877B8A(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_97(0);
		}
		func_109();
	}
	if (unk_0x2A3398C6222EB190(Global_2313, 28))
	{
		if (func_95(2, Global_14415, 0))
		{
			unk_0x839C25CE02EF3B49(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x5535802AD071DF09();
			func_126();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x5535802AD071DF09();
			func_126();
			unk_0x336F1A9B81560EF5();
			unk_0xCD6A9119510EED34();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16778 = 1;
			unk_0x9CEB47B3DB798328(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 9);
			unk_0x5BF9AA7BD6376F82(0);
			iLocal_142 = 0;
			func_131(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_15(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_14(unk_0x0031992CA618A445());
			if (func_13(iVar0) && (!func_57(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_13(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
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
		return Global_104439.f_27911[iParam0 /*29*/];
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
		Global_2455018[iVar0] = iParam0;
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
		if (Global_2455018[iVar1] == 0)
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
	if (Global_1312841)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312853) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_14380 = { Global_14396[Global_14388 /*3*/] };
	func_90(0, 1);
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	if (!unk_0x2A3398C6222EB190(Global_2314, 28))
	{
		if (unk_0x75EFE4AD7FE01A74() == 0)
		{
			if (unk_0x8BCF3CDD10AB0F3C())
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
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1365005[func_25(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1365011[func_25(uParam2)] = iParam1;
			break;
		
		case 786:
			Global_1365017[func_25(uParam2)] = iParam1;
			break;
		
		case 787:
			Global_1365023[func_25(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1364981[func_25(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1364987[func_25(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1364993[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1364999[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1364957[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1364963[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1364969[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1364975[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1365029[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1365035[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1365041[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1365047[func_25(uParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1365053[func_25(uParam2)] = iParam1;
			break;
		
		case 636:
			Global_1365059[func_25(uParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1365065[func_25(uParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2536117[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2536117[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2916:
			Global_2536117[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2536117[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6671:
			Global_2536194[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1365071[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1365077[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1365083[func_25(uParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1365089[func_25(uParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2536154[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2536154[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2536154[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2536154[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2536154[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2536197[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2536197[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2536197[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2536197[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2536197[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2536213[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2536213[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2536213[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2536213[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2536213[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3208:
			Global_2536154[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2536117[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2536229[func_25(uParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2536238[func_25(uParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2536232[func_25(uParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2536241[func_25(uParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2536235[func_25(uParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2536244[func_25(uParam2)] = iParam1;
			break;
		
		case 3676:
			Global_2536247[func_25(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2536154[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2536117[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2536154[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2536117[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2536154[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3999:
			Global_2536117[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2536154[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2536117[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2536154[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2536117[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4007:
			Global_2536154[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2536117[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6088:
			Global_2536154[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6089:
			Global_2536117[11 /*3*/][func_25(uParam2)] = iParam1;
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
	iVar0 = Global_2511967[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1364938)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2916:
			case 3045:
			case 6671:
			case 3040:
			case 3041:
			case 3042:
			case 3043:
			case 3044:
			case 3219:
			case 3221:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3214:
			case 3208:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3676:
			case 3217:
			case 3216:
			case 3999:
			case 3998:
			case 4002:
			case 4001:
			case 4005:
			case 4004:
			case 4008:
			case 4007:
			case 6089:
			case 6088:
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
	uVar0 = Global_2511967[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
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
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312735;
}

void func_27()
{
	if (iLocal_156 == 1)
	{
		func_49();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_131(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_131(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 176, 1), "CELL_280");
		if (iLocal_131)
		{
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
				{
					if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_70785 == 0 && unk_0x7832F791572D5809(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					if (func_139())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
			{
				if (!unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xE344F89A3A395F9C(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE344F89A3A395F9C(0, 39, 1), "CELL_284");
					if (func_139())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					if (func_139())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xE344F89A3A395F9C(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xE344F89A3A395F9C(0, 39, 1), "CELL_284");
					if (func_139())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					if (func_139())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xEBD23F68B1A617FC(uLocal_141, "SET_MAX_WIDTH");
		unk_0x90495002CD46BD88(fLocal_77);
		unk_0x1C703A54AB4B12F6();
		func_131(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xE344F89A3A395F9C(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_44(Global_2536756, Global_2536757))
		{
			if (iParam0 == 0 || !func_30(Global_2536756, Global_2536757, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x0031992CA618A445(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar5;
	var uVar10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	uVar0 = 4;
	uVar5 = 4;
	uVar10 = 4;
	if (iParam1 == 0)
	{
		iVar18 = 3;
	}
	else if (bParam3)
	{
		iVar18 = 1;
	}
	else if (bParam4)
	{
		iVar18 = 2;
	}
	else
	{
		iVar18 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar5, &uVar10, iVar18, bParam5);
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0xE9559A12052415BE(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar15 = func_38(iParam0);
			if (!iVar15 == -1)
			{
				if (func_37(&uVar0, iVar15))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar16 = func_36(iParam0);
			if (!iVar16 == -1)
			{
				if (func_34(&uVar5, iVar16))
				{
					return 1;
				}
			}
		}
		if (unk_0x27CA09C6DFAB1E79())
		{
			iVar17 = func_33(iParam0);
			if (!iVar17 == 0)
			{
				if (func_32(&uVar10, iVar17))
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
	if (unk_0x2A3398C6222EB190((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x2BCDCFC2AA7EC715(iParam0, 1);
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
	if (unk_0x2A3398C6222EB190((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6C5A6C5A6F492576(iParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6C5A6C5A6F492576(iParam0, 0);
	return uVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_43(uParam4, 91, 1);
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
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
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
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 5, 1);
					func_43(uParam4, 6, 1);
					func_43(uParam4, 7, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					func_43(uParam4, 115, 1);
					func_43(uParam4, 116, 1);
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
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 10:
					func_43(uParam4, 28, 1);
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
					func_43(uParam4, 2, 1);
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 32, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
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
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 19, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 6, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 32, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					func_43(uParam4, 115, 1);
					func_43(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_42(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_43(uParam4, 9, 1);
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
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
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
					func_43(uParam4, 3, 1);
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
			}
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
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 8, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
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
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
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
				
				case 29:
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
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							break;
					}
					break;
				
				case 30:
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
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 31:
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
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 32:
				case 33:
				case 34:
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
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
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
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
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 19, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
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
							func_43(uParam4, 43, 1);
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
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
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
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
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
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
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
							func_42(uParam3, 47, 1);
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
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 38, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
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
					func_39(2, 29, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 30, uParam2, uParam3, uParam4, 0, 0);
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
	if (bParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xD804ACF2A7171150(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xD804ACF2A7171150(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_44(int iParam0, int iParam1)
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

void func_45(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xE344F89A3A395F9C(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	if (Global_1776900 == 1)
	{
		fParam0 = -1f;
	}
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xE344F89A3A395F9C(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 183, 1), "CELL_GRID");
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_70785 == 0 && unk_0x7832F791572D5809(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0xEBD23F68B1A617FC(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xE8240315678FDE8E(1);
			unk_0x9BC6C9E77AAC792E("CELL_ACTTL");
			unk_0x50B3C23D0902259F(unk_0xC0D54565FC1032F4(&Global_2609050));
			unk_0xCC5EB3A492FB7D4B();
			unk_0xE8240315678FDE8E(0);
			unk_0x1C703A54AB4B12F6();
		}
	}
}

void func_48(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xE344F89A3A395F9C(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	func_131(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_131(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(0, 177, 1), "CELL_281");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 176, 1), "CELL_280");
	unk_0xEBD23F68B1A617FC(uLocal_141, "SET_MAX_WIDTH");
	unk_0x90495002CD46BD88(fLocal_77);
	unk_0x1C703A54AB4B12F6();
	func_131(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_50()
{
	if (iLocal_156 == 1)
	{
		func_51();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_131(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_131(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(2, 179, 1), "CELL_287");
		if (iLocal_131)
		{
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
				{
					if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_139())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_70785 == 0 && unk_0x7832F791572D5809(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					if (func_139())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
			{
				if (!unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE344F89A3A395F9C(0, 39, 1), "CELL_284");
					if (func_139())
					{
						func_46(6f);
						func_45(7f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					if (func_139())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xA2DA265833F05359(unk_0x0031992CA618A445()) == 2)
			{
				if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xE344F89A3A395F9C(2, 183, 1), "CELL_GRID");
				func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
				func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xE344F89A3A395F9C(0, 39, 1), "CELL_284");
				if (func_139())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_63)
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 182, 1), "CELL_FOCUS");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
					if (func_139())
					{
						func_46(4f);
						func_45(5f);
						func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xE344F89A3A395F9C(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xEBD23F68B1A617FC(uLocal_141, "SET_MAX_WIDTH");
		unk_0x90495002CD46BD88(fLocal_77);
		unk_0x1C703A54AB4B12F6();
		func_131(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_131(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_131(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(2, 179, 1), "CELL_287");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 177, 1), "CELL_281");
	unk_0xEBD23F68B1A617FC(uLocal_141, "SET_MAX_WIDTH");
	unk_0x90495002CD46BD88(fLocal_77);
	unk_0x1C703A54AB4B12F6();
	func_131(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_131)
	{
		unk_0xADE985F6BA90AED5(fLocal_73, 1065353216);
		unk_0x31F42B23A853582E(fLocal_74);
	}
}

void func_53(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_1641087.f_111182 == 1)
	{
	}
	else if (Global_1641087.f_111183 == 1)
	{
	}
	else
	{
		unk_0x88517935C2A64A7E(iParam0);
	}
}

void func_54()
{
	if (iLocal_61 == 1)
	{
		if (unk_0xB3404E397FF56B3B(sLocal_19[Global_2606866], "phone_cam12DUMMY"))
		{
			unk_0x171D5789108A8EE9(0);
			unk_0x7BBF764E1BA82944(0);
		}
		else
		{
			unk_0x171D5789108A8EE9(1);
			unk_0x7BBF764E1BA82944(1);
		}
	}
}

void func_55()
{
	func_131(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_139())
	{
		if (Global_1776900 == 0)
		{
			unk_0x2F7EF808648CC347("phone_cam");
		}
	}
}

int func_56()
{
	if (func_57(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if ((unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/] || unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/]) || unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
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

bool func_57(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_58(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_59()
{
	if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0xFF512A008EA368FF(2))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 30, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x295E4023D39A7295(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 1, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x295E4023D39A7295(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (unk_0xFF512A008EA368FF(2) || unk_0x43F4A6D2081CC5ED())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE344F89A3A395F9C(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x295E4023D39A7295(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE344F89A3A395F9C(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE344F89A3A395F9C(0, 39, 1), "CELL_LT_LSTICKZ");
		func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xE344F89A3A395F9C(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_61(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x0BD3CCFB6C6CFA91(uParam3))
	{
		func_62(uParam3);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam4))
	{
		func_58(sParam4);
	}
	unk_0x1C703A54AB4B12F6();
}

void func_62(var uParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

void func_63()
{
	if (Global_70785)
	{
		switch (Global_16862)
		{
			case 0:
				if (unk_0xFF512A008EA368FF(2))
				{
					func_127("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_127("CELL_CAM_SELFIE_0", -1);
				}
				Global_16862++;
				break;
			
			case 1:
				if (!unk_0x068C69D0643C4B95())
				{
					if (unk_0xFF512A008EA368FF(2))
					{
						func_127("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_127("CELL_CAM_SELFIE_1", -1);
					}
					Global_16862++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16861)
		{
			case 0:
				if (unk_0xFF512A008EA368FF(2))
				{
					func_127("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_127("CELL_CAM_SELFIE_0", -1);
				}
				Global_16861++;
				break;
			
			case 1:
				if (!unk_0x068C69D0643C4B95())
				{
					if (unk_0xFF512A008EA368FF(2))
					{
						func_127("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_127("CELL_CAM_SELFIE_1", -1);
					}
					Global_16861++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_64()
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
	
	if (unk_0xFF512A008EA368FF(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x9148803485DEDF45(2, iVar10) && !unk_0x9148803485DEDF45(2, iVar9))
	{
		unk_0xC9621A9AD282CC14(0, 2, 1);
		unk_0xC9621A9AD282CC14(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 2)) * 127;
		if (unk_0xFF512A008EA368FF(2))
		{
			if (unk_0x0C58CE21DE9AD283(iVar0) > 28 || unk_0x0C58CE21DE9AD283(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x0C58CE21DE9AD283(iVar2) > 28 || unk_0x0C58CE21DE9AD283(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0xFF512A008EA368FF(2))
		{
			fVar7 = unk_0x55B774FEC27F431A(0, 290);
			fVar8 = unk_0x55B774FEC27F431A(0, 291);
			if (unk_0x44B60563EF68B10C())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x0C58CE21DE9AD283(iVar0) > 28 || unk_0x0C58CE21DE9AD283(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_67(fVar5);
		func_66(fVar6);
		func_65(fVar4);
	}
	else if (!unk_0x9148803485DEDF45(2, iVar9))
	{
		unk_0x14C5CBCF9E6EB7B5(0, 2, 1);
		unk_0x14C5CBCF9E6EB7B5(0, 1, 1);
	}
}

void func_65(float fParam0)
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
	unk_0x0437B32860D7C66E(fLocal_161);
}

void func_66(float fParam0)
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
	unk_0x6F71C5DCBE1BC0AA(fLocal_162);
}

void func_67(float fParam0)
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
	unk_0x0779BAAC22A85AF6(fLocal_163);
}

void func_68()
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
	
	if (unk_0xFF512A008EA368FF(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x9148803485DEDF45(2, iVar10))
		{
			if (unk_0xD887E21676314450(2, 178))
			{
				unk_0x3EA86D584BC5CF85(0.5f);
				unk_0x7A09463FC7F3252F(0.85f);
				unk_0x2C953830EE7D3327(0.5f);
				unk_0x11F3F18C83AFDB06(-0.25f);
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
	if (unk_0x9148803485DEDF45(2, iVar10) && !unk_0x9148803485DEDF45(2, iVar11))
	{
		if (unk_0xD887E21676314450(2, 178))
		{
			unk_0x3EA86D584BC5CF85(0.5f);
			unk_0x7A09463FC7F3252F(0.85f);
			unk_0x2C953830EE7D3327(0.5f);
			unk_0x11F3F18C83AFDB06(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0xC9621A9AD282CC14(0, 2, 1);
		unk_0xC9621A9AD282CC14(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 2)) * 127;
		if (unk_0xFF512A008EA368FF(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 39)) * 127;
			fVar8 = unk_0x55B774FEC27F431A(0, 290);
			fVar9 = unk_0x55B774FEC27F431A(0, 291);
			if (unk_0x44B60563EF68B10C())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x0C58CE21DE9AD283(iVar2) > 15 || unk_0x0C58CE21DE9AD283(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x0C58CE21DE9AD283(iVar0) > 28 || unk_0x0C58CE21DE9AD283(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_72(fVar6);
		func_71(fVar7);
		func_70(fVar4);
		if (!func_57(14))
		{
			func_69(fVar5);
		}
	}
	else if (!unk_0x59ABF4F2C485FC38(2, iVar11))
	{
		unk_0x14C5CBCF9E6EB7B5(0, 2, 1);
		unk_0x14C5CBCF9E6EB7B5(0, 1, 1);
	}
	if (!unk_0x59ABF4F2C485FC38(2, iVar10) && !unk_0x59ABF4F2C485FC38(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x55B774FEC27F431A(0, 293)) * 127;
		if (unk_0x0C58CE21DE9AD283(iVar2) > 28 || unk_0x0C58CE21DE9AD283(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x0C58CE21DE9AD283(iVar0) > 28 || unk_0x0C58CE21DE9AD283(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_57(14))
		{
			func_69(fVar5);
		}
	}
}

void func_69(float fParam0)
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
	unk_0x2C953830EE7D3327(fLocal_159);
}

void func_70(float fParam0)
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
	unk_0x11F3F18C83AFDB06(fLocal_160);
}

void func_71(float fParam0)
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
	unk_0x7A09463FC7F3252F(fLocal_158);
}

void func_72(float fParam0)
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
	unk_0x3EA86D584BC5CF85(fLocal_157);
}

void func_73()
{
	if (Global_71045 || Global_71046)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_1641087.f_111182 == 0 && Global_1641087.f_111183 == 0)
			{
				unk_0x4237E72FB80FD332(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_14385)
		{
			if (Global_14604)
			{
				if (iLocal_150 == 0)
				{
					if (Global_14443.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_75(255, 255, 255, 255);
			func_74(0.059f, 0.644f, "CELL_284", 0);
			func_75(255, 255, 255, 255);
			func_74(0.165f, 0.644f, "CELL_285", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.75f, "CELL_280", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14385)
	{
	}
	else
	{
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.75f, "CELL_287", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.79f, "CELL_286", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_74(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, iParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xD1F2C9FF58856AEC(0.4f, 0.4f);
	unk_0xDB70E58A218CFD6A(0, 0, 0, 0, 0);
	unk_0x1EA8206824200C12(1, 0, 0, 0, 205);
	unk_0xFA4892074339E12F(1);
	unk_0x4E250FE9E4D8720F(0);
	unk_0x52D4D0409C49DF8C(iParam0, iParam1, iParam2, iParam3);
}

void func_76()
{
	unk_0xADE985F6BA90AED5(fLocal_75, 1065353216);
	unk_0x31F42B23A853582E(fLocal_76);
}

void func_77()
{
	unk_0xC9621A9AD282CC14(0, 25, 1);
	unk_0xC9621A9AD282CC14(0, 44, 1);
	unk_0xC9621A9AD282CC14(0, 3, 1);
	unk_0xC9621A9AD282CC14(0, 4, 1);
	unk_0xC9621A9AD282CC14(0, 5, 1);
	unk_0xC9621A9AD282CC14(0, 6, 1);
	unk_0xC9621A9AD282CC14(0, 1, 1);
	unk_0xC9621A9AD282CC14(0, 2, 1);
	unk_0xC9621A9AD282CC14(0, 39, 1);
	unk_0xC9621A9AD282CC14(0, 47, 1);
	unk_0xC9621A9AD282CC14(0, 56, 1);
}

void func_78()
{
	Local_87 = { Global_14396[Global_14388 /*3*/] };
	if (Global_14385)
	{
		if (func_81())
		{
			unk_0x4EBACDA5E9A0E784(&Local_93);
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
		if (unk_0x2A3398C6222EB190(Global_2315, 4))
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
		if (func_81() == 0)
		{
			if (unk_0x2A3398C6222EB190(Global_2315, 4))
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
			Local_87 = { Global_14389[Global_14388 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x99C19CAA37B6F6D3(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0xB0C8424D8C3EF063(Local_84, 0);
			if (!unk_0x2A3398C6222EB190(Global_2313, 22))
			{
				if (unk_0x2A3398C6222EB190(Global_2313, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_80();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_79();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_79()
{
	func_131(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_131(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x2A3398C6222EB190(Global_2314, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xEBD23F68B1A617FC(uLocal_141, "SET_MAX_WIDTH");
	unk_0x90495002CD46BD88(fLocal_77);
	unk_0x1C703A54AB4B12F6();
	func_131(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_80()
{
	func_131(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_131(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x2A3398C6222EB190(Global_2314, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE344F89A3A395F9C(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE344F89A3A395F9C(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE344F89A3A395F9C(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xEBD23F68B1A617FC(uLocal_141, "SET_MAX_WIDTH");
	unk_0x90495002CD46BD88(fLocal_77);
	unk_0x1C703A54AB4B12F6();
	func_131(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if (Global_15745 != 2)
						{
						}
					}
				}
			}
		}
		if (func_57(14))
		{
			return 0;
		}
		if (unk_0xCAAA726E313CCCFD(unk_0x0031992CA618A445(), 0))
		{
			return 0;
		}
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (!unk_0x7EB7875F6B85DD39())
			{
				if (unk_0x7019CC495F72B3AC(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5BB7DB96F2D9F1A9(unk_0x0031992CA618A445()) || unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445())) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0x2818B6547D0A3E36(unk_0x0031992CA618A445()))
		{
			return 0;
		}
		if (Global_103487)
		{
			return 0;
		}
	}
	if (Global_70785)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x72A1F054E4BCA1A8();
	iVar1 = unk_0xE2378BA63E191ED9(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x7EB7875F6B85DD39()))
	{
		iVar2 = 1;
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				iVar3 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if ((((((((unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iVar3)) || unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(iVar3))) || unk_0x01301B632ADFA6CA(unk_0xE9559A12052415BE(iVar3))) || unk_0xE9559A12052415BE(iVar3) == joaat("seashark")) || unk_0xE9559A12052415BE(iVar3) == joaat("seashark2")) || unk_0xE9559A12052415BE(iVar3) == joaat("rhino")) || unk_0xE9559A12052415BE(iVar3) == joaat("submersible")) || unk_0xE9559A12052415BE(iVar3) == joaat("submersible2")) || unk_0xE9559A12052415BE(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2608356 || iVar2 == 1)
	{
		if (unk_0x7832F791572D5809(joaat("apptrackify")) > 0 || Global_104439.f_13912.f_89)
		{
			if (unk_0x7832F791572D5809(joaat("michael2")) > 0)
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

void func_82()
{
	unk_0xC9621A9AD282CC14(0, 47, 1);
	unk_0x8662FAB20C4C3CFB(0, Global_14413);
	Local_84 = { Global_14403 };
	Local_87 = { Global_14396[Global_14388 /*3*/] };
	if (func_81())
	{
		unk_0x7413A80265D56065(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0x4EBACDA5E9A0E784(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14385)
	{
		func_131(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (unk_0x2A3398C6222EB190(Global_2313, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_83();
		}
		if (iLocal_121)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 9))
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
			if (func_81() == 0)
			{
				unk_0xB0C8424D8C3EF063(Local_78, 0);
				unk_0x99C19CAA37B6F6D3(Local_81);
			}
			func_90(0, 1);
		}
		else if (func_81() == 0)
		{
			unk_0xB0C8424D8C3EF063(Local_78, 0);
			unk_0x99C19CAA37B6F6D3(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_83();
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
			func_83();
		}
	}
	unk_0xB0C8424D8C3EF063(Local_78, 0);
}

void func_83()
{
	func_1(0);
	if (func_81() == 0)
	{
		if (unk_0x2A3398C6222EB190(Global_2313, 30))
		{
			unk_0x99C19CAA37B6F6D3(Global_14389[Global_14388 /*3*/]);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14396[Global_14388 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0xB0C8424D8C3EF063(Local_78, 0);
	}
	Global_16778 = 0;
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	Global_14430 = 1;
	Global_16781 = 0;
	if (Global_14443.f_1 > 4)
	{
		Global_14443.f_1 = 6;
		Global_14421 = 1;
		func_84();
	}
	if (unk_0x77FA56883245AD26(uLocal_140))
	{
		func_130(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x5535802AD071DF09();
	unk_0x7F165E259CFAC8B8(&uLocal_141);
	unk_0x7F165E259CFAC8B8(&uLocal_140);
	if (Global_14606 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 17);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 17);
	}
	unk_0xD804ACF2A7171150(&Global_2313, 18);
	unk_0xD804ACF2A7171150(&Global_2313, 21);
	unk_0x9CEB47B3DB798328(0, 1);
	unk_0xD804ACF2A7171150(&Global_2315, 3);
	unk_0xD804ACF2A7171150(&Global_2608142, 3);
	unk_0x5BF9AA7BD6376F82(0);
	unk_0x2A7D60DB05B0B7D5(unk_0x3D35F9864E4640B1(), 1);
	unk_0xC030DF4B187326D7(15);
	Global_16782 = 1;
	unk_0x03C4BA9F5A120DFE(iLocal_112);
	unk_0xF2565A150D1CA964(iLocal_112);
	unk_0xFE185FFD730A31A1();
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0xB9F5312DE5BD69DC(unk_0x0031992CA618A445(), "Mood_Normal_1", 0);
		unk_0x5CC34E800484F0E6(unk_0x0031992CA618A445());
	}
	func_92();
	unk_0x171D5789108A8EE9(0);
	unk_0x7BBF764E1BA82944(0);
	unk_0xE6C99373F62CC20D(1f);
	if (Global_2606867 > 0 && Global_2606867 < 13)
	{
		unk_0x40C8D24AE8508DEC(sLocal_33[Global_2606867]);
	}
	func_90(0, 1);
	if (func_137(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0xBEE2834559A8897A();
}

void func_84()
{
	struct<3> Var0;
	
	if (Global_14426 == 1)
	{
		return;
	}
	if (Global_14443.f_1 < 4)
	{
		return;
	}
	while (!unk_0x77FA56883245AD26(Global_14424))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14443.f_1)
	{
		case 6:
			func_131(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_2918);
			if (Global_2918 == 1)
			{
				func_131(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14447), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14447;
			}
			else
			{
				func_131(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14448), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14448;
			}
			if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14606 == 0)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD804ACF2A7171150(&Global_2313, 17);
			}
			else if (Global_70785)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD804ACF2A7171150(&Global_2313, 17);
			}
			else
			{
				if (Global_14605 == 1)
				{
					if (Global_14431)
					{
						func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14431)
				{
					func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xCD7E92DE2BFA0B0D(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_131(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD804ACF2A7171150(&Global_2313, 17);
			if (unk_0x2A3398C6222EB190(Global_2313, 20))
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14442 == 1)
			{
				func_86();
				func_131(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104439.f_13912[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(4);
					unk_0x32F9127910F63DFA(0);
					unk_0x32F9127910F63DFA(2);
					unk_0x9BC6C9E77AAC792E("CELL_CONDFON");
					unk_0x50B3C23D0902259F(&Global_15760);
					unk_0xCC5EB3A492FB7D4B();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0x1C703A54AB4B12F6();
				}
				else if (Global_104439.f_27911[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_104439.f_27911[Global_1628 /*29*/].f_3), &(Global_104439.f_27911[Global_1628 /*29*/].f_7), "CELL_217", &(Global_104439.f_27911[Global_1628 /*29*/].f_3), 0);
				}
				func_131(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_131(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104439.f_13912[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_86();
				if (Global_15758)
				{
					unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
					unk_0x32F9127910F63DFA(4);
					unk_0x32F9127910F63DFA(0);
					unk_0x32F9127910F63DFA(2);
					unk_0x9BC6C9E77AAC792E("CELL_CONDFON");
					unk_0x50B3C23D0902259F(&Global_15760);
					unk_0xCC5EB3A492FB7D4B();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0x1C703A54AB4B12F6();
				}
				else
				{
					if (Global_16003)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_104439.f_27911[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_131(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_131(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_104439.f_27911[Global_1628 /*29*/].f_3), &(Global_104439.f_27911[Global_1628 /*29*/].f_7), &Var0, &(Global_104439.f_27911[Global_1628 /*29*/].f_3), 0);
					}
				}
				func_131(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	if (unk_0x77FA56883245AD26(Global_14424))
	{
		if (Global_14442 == 1)
		{
			if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x2A3398C6222EB190(Global_2313, 20))
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD804ACF2A7171150(&Global_2313, 17);
		}
		else
		{
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD804ACF2A7171150(&Global_2313, 17);
			if (unk_0x2A3398C6222EB190(Global_2313, 20))
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_86()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_104439.f_13912[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 0);
					break;
				
				case 2:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 1);
					break;
				
				case 3:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 2);
					break;
				
				case 4:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 3);
					break;
				
				case 5:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 4);
					break;
				
				case 6:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 5);
					break;
				
				case 7:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_104439.f_13912[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 6);
					break;
				
				case 2:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 0);
					break;
				
				case 3:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 1);
					break;
				
				case 4:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 2);
					break;
				
				case 5:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 3);
					break;
				
				case 6:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 4);
					break;
				
				case 7:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_104439.f_13912[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 5);
					break;
				
				case 2:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 6);
					break;
				
				case 3:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 1);
					break;
				
				case 4:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 0);
					break;
				
				case 5:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 2);
					break;
				
				case 6:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 3);
					break;
				
				case 7:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2608354)
			{
				case 1:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 0);
					break;
				
				case 2:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 1);
					break;
				
				case 3:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 2);
					break;
				
				case 4:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 3);
					break;
				
				case 5:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 4);
					break;
				
				case 6:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 5);
					break;
				
				case 7:
					unk_0xDC2C87280D755B25(unk_0x3D35F9864E4640B1(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_87(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam8))
	{
		func_58(iParam8);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam9))
	{
		func_58(iParam9);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam10))
	{
		func_58(iParam10);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam11))
	{
		func_58(iParam11);
	}
	unk_0x1C703A54AB4B12F6();
}

void func_88(int iParam0)
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
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_57(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar2);
								unk_0x1C703A54AB4B12F6();
							}
							if (Global_2455109)
							{
								if (iVar1 == 14)
								{
									func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104439.f_14002[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104439.f_14002[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104439.f_14002[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70785)
								{
									iVar4 = 0;
									iVar4 = Global_2606876;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2606877[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2606877[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2606877[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(Global_2319);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar7);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar8);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 8)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if ((iVar1 == 23 && unk_0xB3404E397FF56B3B(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x2A3398C6222EB190(Global_2314, 6))
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622539.f_1;
								func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_89()
{
	switch (iLocal_100)
	{
		case 1:
			unk_0x9CEB47B3DB798328(0, 1);
			if (unk_0x2A3398C6222EB190(Global_2313, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_50();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0x2A3398C6222EB190(Global_2313, 22))
			{
				unk_0x9CEB47B3DB798328(0, 1);
				if (unk_0x2A3398C6222EB190(Global_2313, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_80();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_79();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_90(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_91(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_91(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	if ((Global_1641087.f_111182 == 0 && Global_1641087.f_111183 == 0) && Global_1776900 == 0)
	{
		unk_0x283E1197D815CA4A();
	}
}

void func_93(int iParam0, int iParam1)
{
	if (Global_1641087.f_111182 == 1)
	{
	}
	else if (Global_1641087.f_111183 == 1)
	{
	}
	else
	{
		unk_0x9FC4DC280CEA9DFE(iParam0, iParam1);
	}
}

int func_94()
{
	if (unk_0x2A3398C6222EB190(Global_2313, 15))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD887E21676314450(iParam0, uParam1) || (iParam2 == 1 && unk_0x42F812C5F1AA300A(iParam0, iParam1)))
	{
		if (unk_0x20551D6D924ED04B())
		{
			if (unk_0xB74983234B4F06A7() == 0 || (unk_0xFCFC2645B6CF6425() && unk_0xFF512A008EA368FF(2)))
			{
				return 0;
			}
		}
		if (unk_0x957E53BB191CB24D() || unk_0x0CF4609684193305())
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

void func_96()
{
	if (Global_14385)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_81())
		{
			unk_0x7413A80265D56065(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0x4EBACDA5E9A0E784(&Local_93);
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
		if (func_81() == 0)
		{
			unk_0xB0C8424D8C3EF063(Local_78, 0);
			unk_0x99C19CAA37B6F6D3(Local_81);
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
		unk_0xB0C8424D8C3EF063(Local_78, 0);
	}
	if (Global_14385)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_81())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0xB0C8424D8C3EF063(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x99C19CAA37B6F6D3(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_16779 = 0;
				func_93(1, 1);
				iLocal_115 = 1;
				func_97(1);
				func_55();
				func_98();
				func_53(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_109();
				func_131(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
				{
					func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_133();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0xB0C8424D8C3EF063(Local_78, 0);
		Global_16779 = 0;
	}
}

void func_97(bool bParam0)
{
	if (func_139())
	{
		if (bParam0)
		{
			if (!unk_0x8B33C026A5B080FB())
			{
				unk_0x6A28A2C675716B95(1);
				if (Global_2606867 > 0 && Global_2606867 < 99)
				{
					unk_0x012AF99FA41C5945(sLocal_33[Global_2606867], 0);
					unk_0xE6C99373F62CC20D(0.25f);
				}
			}
		}
		else if (unk_0x8B33C026A5B080FB())
		{
			unk_0x6A28A2C675716B95(0);
		}
	}
}

void func_98()
{
	if (Global_2606866 > 0 && Global_2606866 < 99)
	{
		if (Global_1776900 == 0)
		{
			unk_0x2F7EF808648CC347(sLocal_19[Global_2606866]);
		}
	}
}

void func_99()
{
	if (Global_14385)
	{
		iLocal_125 = 0;
		func_55();
		func_90(1, 1);
		func_93(1, 1);
		iLocal_115 = 1;
		Global_16782 = 1;
	}
}

void func_100()
{
	if (Global_1641087.f_111182 == 1 && func_101())
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (unk_0x2A3398C6222EB190(Global_2313, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (unk_0xB3404E397FF56B3B(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_101()
{
	if ((func_104() || func_103()) || func_102())
	{
		return 1;
	}
	return 0;
}

var func_102()
{
	return Global_2445582.f_14;
}

var func_103()
{
	return Global_2445582.f_13;
}

var func_104()
{
	return Global_2445582.f_12;
}

void func_105()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x18F1BFAF88AC511B(-1, "Menu_Back", &Global_14432, 1);
	}
}

void func_106()
{
	unk_0x839C25CE02EF3B49(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_107()
{
	func_108();
}

void func_108()
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

void func_109()
{
	if (Global_14443.f_1 > 3)
	{
		if (!unk_0x957E53BB191CB24D())
		{
			unk_0x45822700F324A838(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_110()
{
	if (func_57(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_11();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_111(int iParam0)
{
	if (Global_14604)
	{
		func_90(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_112())
	{
		Global_14443.f_1 = 3;
	}
}

int func_112()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	unk_0xC9621A9AD282CC14(0, 0, 1);
	unk_0xC9621A9AD282CC14(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0x8662FAB20C4C3CFB(0, Global_14416);
		unk_0x8662FAB20C4C3CFB(0, Global_14413);
		unk_0xC9621A9AD282CC14(0, 278, 1);
		unk_0xC9621A9AD282CC14(0, 279, 1);
		unk_0xC9621A9AD282CC14(0, 280, 1);
		unk_0xC9621A9AD282CC14(0, 281, 1);
		unk_0xC9621A9AD282CC14(0, 282, 1);
		unk_0xC9621A9AD282CC14(0, 282, 1);
		unk_0xC9621A9AD282CC14(0, 284, 1);
		unk_0xC9621A9AD282CC14(0, 285, 1);
		unk_0xC9621A9AD282CC14(0, 69, 1);
		unk_0xC9621A9AD282CC14(0, 70, 1);
		unk_0xC9621A9AD282CC14(0, 114, 1);
		unk_0xC9621A9AD282CC14(0, 71, 1);
		unk_0xC9621A9AD282CC14(0, 72, 1);
		unk_0xC9621A9AD282CC14(0, 74, 1);
		unk_0xC9621A9AD282CC14(0, 75, 1);
		unk_0xC9621A9AD282CC14(0, 76, 1);
		unk_0xC9621A9AD282CC14(0, 73, 1);
		unk_0xC9621A9AD282CC14(0, 77, 1);
		unk_0xC9621A9AD282CC14(0, 78, 1);
		unk_0xC9621A9AD282CC14(0, 286, 1);
		unk_0xC9621A9AD282CC14(0, 287, 1);
		unk_0xC9621A9AD282CC14(0, 79, 1);
		unk_0xC9621A9AD282CC14(0, 80, 1);
		unk_0xC9621A9AD282CC14(0, 81, 1);
		unk_0xC9621A9AD282CC14(0, 82, 1);
		unk_0xC9621A9AD282CC14(0, 86, 1);
		unk_0xC9621A9AD282CC14(0, 59, 1);
		unk_0xC9621A9AD282CC14(0, 60, 1);
		unk_0xC9621A9AD282CC14(0, 61, 1);
		unk_0xC9621A9AD282CC14(0, 62, 1);
		unk_0xC9621A9AD282CC14(0, 63, 1);
		unk_0xC9621A9AD282CC14(0, 64, 1);
		unk_0xC9621A9AD282CC14(0, 87, 1);
		unk_0xC9621A9AD282CC14(0, 88, 1);
		unk_0xC9621A9AD282CC14(0, 89, 1);
		unk_0xC9621A9AD282CC14(0, 90, 1);
		unk_0xC9621A9AD282CC14(0, 107, 1);
		unk_0xC9621A9AD282CC14(0, 108, 1);
		unk_0xC9621A9AD282CC14(0, 109, 1);
		unk_0xC9621A9AD282CC14(0, 110, 1);
		unk_0xC9621A9AD282CC14(0, 111, 1);
		unk_0xC9621A9AD282CC14(0, 112, 1);
		unk_0xC9621A9AD282CC14(0, 113, 1);
		unk_0xC9621A9AD282CC14(0, 114, 1);
		unk_0xC9621A9AD282CC14(0, 91, 1);
		unk_0xC9621A9AD282CC14(0, 92, 1);
		unk_0xC9621A9AD282CC14(0, 68, 1);
		unk_0xC9621A9AD282CC14(0, 102, 1);
		unk_0xC9621A9AD282CC14(0, 136, 1);
		unk_0xC9621A9AD282CC14(0, 137, 1);
		unk_0xC9621A9AD282CC14(0, 138, 1);
		unk_0xC9621A9AD282CC14(0, 139, 1);
		unk_0xC9621A9AD282CC14(0, 102, 1);
	}
}

int func_114()
{
	var uVar0;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			uVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x00E962E9D49FD6C4(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x3251C2B06497863C(uVar0, -1, 0) == unk_0x0031992CA618A445())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_115()
{
	var uVar0;
	
	func_122(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_121())
	{
		return 1;
	}
	if (Global_2457338)
	{
		return 1;
	}
	if (func_120())
	{
		return 1;
	}
	if (func_119(157))
	{
		if (!func_118())
		{
			return 1;
		}
	}
	if (func_119(155))
	{
		return 1;
	}
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_116() != 0)
	{
		if (unk_0x7832F791572D5809(func_116()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_116()
{
	switch (func_117())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_117()
{
	return Global_25222;
}

bool func_118()
{
	return Global_2445582.f_579;
}

int func_119(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_120()
{
	return Global_2455114;
}

bool func_121()
{
	return Global_2445582.f_574;
}

void func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_123(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_123(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_125(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(iVar3))
			{
				if (unk_0x90219307C9D2728D(iVar3, 0))
				{
					iVar4 = unk_0xCFA31F1E461A6BB5(iVar3, 0);
					if (unk_0x095622A3608A0D06(iVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_124(iVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_124(int iParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0xCC234795142FC2D2(iParam0))
		{
			if (unk_0x8D0F418585E0886B(iParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(iParam0)))
				{
					unk_0x1581691D748490F3(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(iParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_125(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_126()
{
	if (iLocal_156 == 1)
	{
		unk_0xBD1C47D856010F09(7);
		unk_0xBD1C47D856010F09(1);
		unk_0xBD1C47D856010F09(3);
		unk_0xBD1C47D856010F09(4);
		unk_0xBD1C47D856010F09(6);
		unk_0xBD1C47D856010F09(8);
		unk_0xBD1C47D856010F09(9);
		unk_0xBD1C47D856010F09(2);
	}
	else
	{
		unk_0x7CDDB154852DA508();
	}
}

void func_127(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

void func_128()
{
	if (func_129())
	{
		unk_0xACC9D5E1022A36CE();
		if (unk_0x04883857D0379A35(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16782 = 1;
			Global_14443.f_1 = 3;
			unk_0xFE185FFD730A31A1();
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
				if (unk_0x77FA56883245AD26(uLocal_140))
				{
					if (func_139())
					{
						if (Global_2606867 == 0)
						{
							if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
							{
								func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x2A3398C6222EB190(Global_2608142, 2))
						{
							func_131(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x77FA56883245AD26(uLocal_140))
			{
				func_131(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_131(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0xFE185FFD730A31A1();
	}
}

int func_129()
{
	if (Global_1641087.f_111182 == 1)
	{
		if (Global_70785)
		{
			return 0;
		}
	}
	if (Global_1641087.f_111183 == 1)
	{
		if (Global_70785)
		{
			return 0;
		}
	}
	if (unk_0x8BCF3CDD10AB0F3C() || unk_0x6EC0C21CF01F429C())
	{
		if (unk_0x2A3398C6222EB190(Global_2314, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_130(var uParam0, char* sParam1)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x1C703A54AB4B12F6();
}

void func_131(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x1C703A54AB4B12F6();
}

int func_132()
{
	if (Global_70785)
	{
		Global_14443 = 3;
	}
	else
	{
		Global_14443 = func_11();
	}
	if (Global_14443 > 3)
	{
		Global_14443 = 3;
	}
	return Global_104439.f_13912[Global_14443 /*20*/].f_7;
}

void func_133()
{
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 8;
	}
	Global_16781 = 0;
	iLocal_127 = 0;
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		Local_67 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
	}
	if (Global_14385)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_109();
			func_77();
			unk_0x5535802AD071DF09();
		}
		func_130(uLocal_140, "OPEN_SHUTTER");
		func_126();
		func_100();
		iLocal_129 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_93(1, 1);
		func_97(1);
		func_55();
		func_98();
		func_53(0);
		iLocal_115 = 1;
	}
}

void func_134(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 15);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 15);
	}
}

bool func_135()
{
	return Global_1312830;
}

void func_136()
{
}

int func_137(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && bParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_138()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (unk_0x99B9CD9BF58651B0(unk_0x0031992CA618A445()))
		{
			unk_0x492D173FBA5C0419(unk_0x0031992CA618A445(), 0, 0);
			unk_0x3EA86D584BC5CF85(fLocal_157);
			unk_0x7A09463FC7F3252F(fLocal_158);
			unk_0x2C953830EE7D3327(fLocal_159);
		}
		else
		{
			unk_0x3EA86D584BC5CF85(fLocal_157);
			unk_0x7A09463FC7F3252F(fLocal_158);
			unk_0x2C953830EE7D3327(fLocal_159);
		}
	}
	unk_0x11F3F18C83AFDB06(fLocal_160);
	unk_0x0437B32860D7C66E(fLocal_161);
	unk_0x6F71C5DCBE1BC0AA(fLocal_162);
	unk_0x0779BAAC22A85AF6(fLocal_163);
	func_52();
}

int func_139()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}


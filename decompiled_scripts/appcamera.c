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
	unk_0xB64A6F2B8046CEF8();
	if (unk_0x70C239EC67257485() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_135())
	{
		Global_2576645 = 99;
		Global_2576646 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_2576645 = 0;
		Global_2576646 = 0;
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
	func_134();
	if (func_133(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_132();
	iLocal_112 = unk_0x2657E29E0DD8087E();
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
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (unk_0xD9DB08A2400AAAC5(unk_0xA0081090911D13E5()))
		{
			Global_16778 = 1;
		}
		if (unk_0x0B55E0BF05EEDCB5())
		{
			Global_16778 = 1;
		}
		if (unk_0x1F1B2B6E500380C5(unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5()), 0))
		{
			Global_16778 = 1;
		}
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
		{
			Global_16778 = 1;
		}
		if (unk_0x18BDDD7BAAC039DA(unk_0xA0081090911D13E5()))
		{
			Global_16778 = 1;
		}
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16778 = 1;
			}
			uLocal_149 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if ((unk_0x705BC1BB91F530B5(uLocal_149) == joaat("rhino") || unk_0x705BC1BB91F530B5(iLocal_149) == joaat("cutter")) || unk_0x705BC1BB91F530B5(iLocal_149) == joaat("submersible"))
			{
				Global_16778 = 1;
			}
			else if (unk_0x8FD32443A080784B(iLocal_149, -1, 0) == unk_0xA0081090911D13E5())
			{
				if (unk_0xC00FEF88F7C3E2FB(iLocal_149) > 0f)
				{
					if (!Global_69617)
					{
						if (!func_131())
						{
							unk_0xC7A9E9D688D679E8(unk_0xA0081090911D13E5(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_69617)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			unk_0xDA26AC0F41ABF2D6(unk_0x0C1D3C552325765B(), 0);
		}
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 21);
	func_130(0);
	unk_0x88B0F0DC270164B7(&Global_2313, 17);
	if (Global_14385 == 0)
	{
		func_129();
	}
	else
	{
		uLocal_140 = unk_0x474309DF4921072A("camera_gallery");
		uLocal_141 = unk_0x474309DF4921072A("instructional_buttons");
		while (!unk_0x1E3F61C2C1E29520(uLocal_140) || !unk_0x1E3F61C2C1E29520(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x527ED47EF44C8E1E();
			unk_0xABC36CFE4F3421A0(0, 25, 1);
		}
		if (Global_69617)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_128())
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
		func_127(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_126(uLocal_140, "CLOSE_SHUTTER");
		unk_0xB9D4F4DE7E7EC038(Global_14424, "DISPLAY_VIEW");
		unk_0x7CBFB9F4AF33C67E(16);
		unk_0xE73340DA551C95E1();
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
		unk_0x09C86C0C5CA26B1E(&Global_2315, 3);
	}
	func_124();
	unk_0x1373E5003F76E429(4);
	if (unk_0xEAD46FA5CC88AD11())
	{
	}
	if (Global_1626500.f_97570)
	{
	}
	if (Global_1626500.f_97572 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x527ED47EF44C8E1E();
		unk_0xABC36CFE4F3421A0(0, 25, 1);
		unk_0xABC36CFE4F3421A0(0, 0, 1);
		if (!Global_101553.f_12906.f_81)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2577921, 13))
			{
				if (!unk_0x598A9E990F05F82C())
				{
					if (!unk_0x08BA6DD398CA197C(Global_2314, 28))
					{
						if (iLocal_128 && iLocal_131 == 0)
						{
							unk_0x88B0F0DC270164B7(&Global_2577921, 13);
							Global_101553.f_12906.f_81 = 1;
							func_123("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x84C71F36E7D97756())
		{
			if (Global_1626500.f_97569 == 0 && Global_1626500.f_97570 == 0)
			{
				unk_0x9EAFA57A34157CEF(15, 0f, -0.0375f);
			}
			unk_0x7ABD1B29E6C2963D(7);
			func_122();
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 200, 1);
			}
			unk_0xABC36CFE4F3421A0(0, 44, 1);
			unk_0xABC36CFE4F3421A0(0, 47, 1);
			unk_0xABC36CFE4F3421A0(0, 91, 1);
			unk_0xABC36CFE4F3421A0(0, 92, 1);
			unk_0xABC36CFE4F3421A0(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0xCEEF85C0FC6A898F(0, Global_14416);
			}
			unk_0xCEEF85C0FC6A898F(0, Global_14413);
			if (unk_0x2C22E7D1C80A53EF() || unk_0x44F90FBF2C1E8021())
			{
				iLocal_130 = 1;
				Global_14443.f_1 = 3;
				unk_0x6B0F857FD4BCD4AB(0);
			}
			if (unk_0x780D34E966DDA53A())
			{
				Global_14443.f_1 = 3;
				unk_0x6B0F857FD4BCD4AB(0);
			}
			if (unk_0x08BA6DD398CA197C(Global_2314, 3))
			{
				Global_14443.f_1 = 3;
				unk_0x6B0F857FD4BCD4AB(0);
			}
			if (unk_0xA86CA03D9749EEB3())
			{
				if (func_111())
				{
					Global_14443.f_1 = 3;
					unk_0x6B0F857FD4BCD4AB(0);
				}
			}
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0))
				{
					Global_14443.f_1 = 3;
					unk_0x6B0F857FD4BCD4AB(0);
				}
				if ((unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0x033EB0D34BDA6698(unk_0x0C1D3C552325765B()))
				{
					if (func_110())
					{
					}
					else
					{
						Global_14443.f_1 = 3;
						unk_0x6B0F857FD4BCD4AB(0);
					}
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()) || unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					if (Global_69617 == 1)
					{
						Global_14443.f_1 = 3;
					}
				}
				if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
				{
					if (unk_0x2C40672AED29B6F4(unk_0xA0081090911D13E5()) > 0.3f)
					{
						Global_14443.f_1 = 3;
					}
				}
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					func_109();
					iLocal_149 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					if (unk_0xC00FEF88F7C3E2FB(iLocal_149) < 0f)
					{
						func_107(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0x0F71CB36473AE086())
							{
								func_107(0);
							}
						}
						else if (!unk_0x0F71CB36473AE086())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x527ED47EF44C8E1E();
						}
					}
				}
				else if (Global_69617 == 0)
				{
					if (unk_0x08BA6DD398CA197C(Global_2313, 18))
					{
						func_106();
						if ((Global_14443 == 0 || Global_14443 == 1) || Global_14443 == 2)
						{
							if (!unk_0x0256D99B330069EE(unk_0xA0081090911D13E5()))
							{
								if (unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
								{
								}
								else
								{
									Global_14443.f_1 = 3;
									unk_0x6B0F857FD4BCD4AB(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_105();
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
									func_103();
									if (Global_16783 == 0 && Global_16780 == 6)
									{
										unk_0x436DCF1E1ED3DA7A(0, 1);
										unk_0x39C6D32CD560BA7C();
										iLocal_150 = 0;
										func_102();
										if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
										{
											Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
										}
										func_101();
										iLocal_109++;
										if (func_135())
										{
											func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
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
										unk_0x39C6D32CD560BA7C();
										if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
										{
											Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
										}
										func_99();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
										if (func_135())
										{
											if (Global_2576646 == 0)
											{
												if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
												{
													func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
										{
											func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
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
												unk_0x6B0F857FD4BCD4AB(0);
												unk_0x15761381A3072BFA(iLocal_112);
												iLocal_143 = 0;
												if (Global_16778 == 0)
												{
													func_101();
													Global_16778 = 1;
													unk_0x436DCF1E1ED3DA7A(0, 1);
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
													func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x598A9E990F05F82C())
										{
											func_89();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x598A9E990F05F82C())
									{
										func_89();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0x08BA6DD398CA197C(Global_2313, 28))
										{
											func_89();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0x08BA6DD398CA197C(Global_2313, 28))
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
												if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
												{
													if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
													{
														func_126(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0xDF658EB6CA91DFBC();
														while (unk_0xDF658EB6CA91DFBC() < (iLocal_135 + iLocal_137) && Global_14443.f_1 > 3)
														{
															func_122();
															func_105();
															func_77();
															unk_0x527ED47EF44C8E1E();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_135())
												{
													if (Global_2576646 == 0)
													{
														if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
														{
															func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
												{
													func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_105();
												func_122();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_100();
												iLocal_136 = 0;
												func_126(uLocal_140, "OPEN_SHUTTER");
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
											unk_0x88B0F0DC270164B7(&Global_2313, 18);
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
					if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0xBECAD780226FC009() || unk_0xD95D58B9AAC86D55())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0x955B8C8F89CC3AC0())
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
					iVar0 = unk_0x60254F8D86D3ADE9();
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
					if (unk_0x2A57AED61E15C7C7(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
					}
					if (unk_0x2A57AED61E15C7C7(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x382DB2E6C29D0F23(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_154 = 0;
							unk_0xA51450F672876A02("Gallery");
							unk_0xEB0E53201DA3859C();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0xD95D58B9AAC86D55())
					{
						if (unk_0x2A57AED61E15C7C7(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x2A57AED61E15C7C7(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0xD95D58B9AAC86D55())
					{
						if (unk_0x2A57AED61E15C7C7(2, Global_14415))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							if (unk_0x08BA6DD398CA197C(Global_2314, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0xDF658EB6CA91DFBC();
							unk_0xA277E4B082D5CF00(1);
						}
					}
				}
				else if (unk_0x2A57AED61E15C7C7(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_90(0, 1);
				}
			}
		}
		iLocal_108 = unk_0xDF658EB6CA91DFBC();
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
			unk_0xA12A0D38735CCBF2(&uLocal_140);
			unk_0xA12A0D38735CCBF2(&uLocal_141);
			unk_0x6B0F857FD4BCD4AB(0);
			if (Global_14606 == 1)
			{
				unk_0x88B0F0DC270164B7(&Global_2313, 17);
			}
			else
			{
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			}
			unk_0x436DCF1E1ED3DA7A(0, 1);
			unk_0xDA26AC0F41ABF2D6(unk_0x0C1D3C552325765B(), 1);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 3);
			unk_0x09C86C0C5CA26B1E(&Global_2577921, 3);
			unk_0xC667A7C5CE24C569(15);
			Global_16782 = 1;
			unk_0x15761381A3072BFA(iLocal_112);
			unk_0xC8656944A36C8E78(iLocal_112);
			unk_0x39C6D32CD560BA7C();
			func_92();
			unk_0xDB435D3A31C452A8(0);
			unk_0xEB2F8B403B8A1ED2(0);
			unk_0x94C4AA6E3353EB1E(1f);
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				unk_0x20236B414672EFAE(unk_0xA0081090911D13E5(), "Mood_Normal_1", 0);
				unk_0x42E3993926E1ADFF(unk_0xA0081090911D13E5());
			}
			if (Global_2576646 > 0 && Global_2576646 < 13)
			{
				unk_0xB14EE32074164477(sLocal_33[Global_2576646]);
			}
			unk_0x09C86C0C5CA26B1E(&Global_2313, 18);
			func_90(0, 1);
			if (func_133(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0x78C587487CD40B92();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x1D4D254951F74442(1);
		}
		else if (Global_14443.f_1 > 3)
		{
			unk_0x1D4D254951F74442(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xCCC8FE2C71D0E93E();
	iVar1 = unk_0x819C3E64C255229B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2578135 || iVar2)
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
	iLocal_106 = unk_0xEC672F23962FFE62(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x279AA2C25A21C610();
			iLocal_110 = unk_0xDC882C74B7DE7403();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0x1E3F61C2C1E29520(uLocal_140))
					{
						if (func_135())
						{
							if (Global_2576646 == 0)
							{
								if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
								{
									func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
							{
								func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x1E3F61C2C1E29520(uLocal_140))
				{
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0x39C6D32CD560BA7C();
			break;
		
		case 1:
			if (!unk_0xF0BFAF163DAA4888())
			{
				unk_0xDC96797B53DF25D3("CELL_SPINNER2");
				unk_0x6349285C2B22C0E9(1);
			}
			break;
		
		case 2:
			if (unk_0x08BA6DD398CA197C(Global_2314, 28))
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
			unk_0x39C6D32CD560BA7C();
			break;
	}
}

void func_5()
{
	if (func_95(2, Global_14412, 0))
	{
		func_1(0);
		if (unk_0x08BA6DD398CA197C(Global_2314, 28))
		{
			unk_0x6B0F857FD4BCD4AB(0);
			unk_0x5AE11BC36633DE4E(0);
			func_102();
			iLocal_127 = 0;
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			}
			func_101();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0x08BA6DD398CA197C(Global_2314, 14))
			{
				func_123("CELL_299", -1);
			}
			else
			{
				func_101();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_90(1, 1);
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2313, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_122();
			unk_0x527ED47EF44C8E1E();
			func_77();
			func_109();
			func_105();
		}
		unk_0x6B0F857FD4BCD4AB(0);
		func_102();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
		}
		func_100();
		func_101();
	}
	if (func_95(2, Global_14416, 0))
	{
		func_1(0);
		if (func_94() || unk_0x08BA6DD398CA197C(Global_2314, 28))
		{
		}
		else
		{
			unk_0x6B0F857FD4BCD4AB(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_102();
			iLocal_127 = 0;
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			}
			func_101();
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2313, 28))
	{
		if (func_95(2, Global_14415, 0))
		{
			func_1(0);
			unk_0x6B0F857FD4BCD4AB(0);
			unk_0x3B21CA2F785A4CB2(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x527ED47EF44C8E1E();
			func_122();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x527ED47EF44C8E1E();
			func_122();
			unk_0x1C5F1EAD464EA72F();
			unk_0x2EABAFFCF17E1E52();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_90(0, 1);
			Global_16778 = 1;
			unk_0x436DCF1E1ED3DA7A(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0x88B0F0DC270164B7(&Global_2313, 9);
			iLocal_142 = 0;
			func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Accept", &Global_14432, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x8F24B7634E2C72BC(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16783 = 1;
	unk_0x436DCF1E1ED3DA7A(0, 1);
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
	
	if (unk_0x4255B5ECB9D34344(2))
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
		fLocal_73 = unk_0x7D6F3EA7A4634D65();
		fLocal_74 = unk_0xF81B1BC329E97BDD();
		if (iLocal_133 == 0)
		{
			if (unk_0x7F6103BD34B839B0(2, iVar0) && !unk_0x7F6103BD34B839B0(2, iVar1))
			{
				iLocal_133 = 1;
				func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x08BA6DD398CA197C(Global_2313, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(2, 179, 1), "CELL_287");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0xB9D4F4DE7E7EC038(uLocal_141, "SET_MAX_WIDTH");
				unk_0x0FFE3C1DBBA72236(fLocal_77);
				unk_0xE73340DA551C95E1();
				func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x7F6103BD34B839B0(2, iVar0) || unk_0x7F6103BD34B839B0(2, iVar1))
		{
			iLocal_133 = 0;
			func_100();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x7F6103BD34B839B0(2, iVar1) && !unk_0x7F6103BD34B839B0(2, iVar0))
			{
				iLocal_134 = 1;
				func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x08BA6DD398CA197C(Global_2313, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(2, 179, 1), "CELL_287");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(0, 177, 1), "CELL_281");
				}
				func_59();
				unk_0xB9D4F4DE7E7EC038(uLocal_141, "SET_MAX_WIDTH");
				unk_0x0FFE3C1DBBA72236(fLocal_77);
				unk_0xE73340DA551C95E1();
				func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x7F6103BD34B839B0(2, iVar1) || unk_0x7F6103BD34B839B0(2, iVar0))
		{
			iLocal_134 = 0;
			func_100();
		}
	}
	else
	{
		unk_0xFF61FA1A24898079(0, 2, 1);
		unk_0xFF61FA1A24898079(0, 1, 1);
	}
	if (unk_0xFF9B577A7F80CFDD(2))
	{
		func_100();
	}
	func_109();
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 200, 1);
	}
	if (unk_0x2A57AED61E15C7C7(2, 183) && iLocal_156 == 0)
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (!unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
			{
				if (unk_0x08BA6DD398CA197C(Global_2577921, 2))
				{
					unk_0x09C86C0C5CA26B1E(&Global_2577921, 2);
					if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
					{
						func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x88B0F0DC270164B7(&Global_2577921, 2);
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0xB9D4F4DE7E7EC038(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x5CC02BB872FEF340(0);
			func_58("CELL_FOCUS");
			unk_0x5CC02BB872FEF340(1);
			unk_0xE73340DA551C95E1();
		}
		if (!func_57(14))
		{
			if (unk_0x08BA6DD398CA197C(Global_2577921, 10))
			{
				if ((Global_69617 == 0 && unk_0xA96867DD0A63C62C(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0xB9D4F4DE7E7EC038(uLocal_140, "SET_FOCUS_LOCK");
					unk_0x5CC02BB872FEF340(1);
					unk_0x709662CF2BD061A4("CELL_ACTTL");
					unk_0xDA35BDB37E728640(unk_0xFFC9DE7E93AEAE21(&Global_2578635));
					unk_0x1E77BE8F4283FA05();
					unk_0x5CC02BB872FEF340(0);
					unk_0xE73340DA551C95E1();
					unk_0x09C86C0C5CA26B1E(&Global_2577921, 10);
				}
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_2577921, 10))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2577921, 10);
		}
		iLocal_66 = unk_0xDF658EB6CA91DFBC();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				Local_70 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
				if (unk_0x999A157665D69393(Local_70, Local_67, 1) > 5f)
				{
					Global_14443.f_1 = 3;
					unk_0x6B0F857FD4BCD4AB(0);
				}
				iLocal_65 = unk_0xDF658EB6CA91DFBC();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x7F6103BD34B839B0(0, 182))
		{
			unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_132 = 0;
			unk_0xB9D4F4DE7E7EC038(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x5CC02BB872FEF340(0);
			func_58("CELL_FOCUS");
			unk_0x5CC02BB872FEF340(1);
			unk_0xE73340DA551C95E1();
		}
	}
	else if (unk_0x7F6103BD34B839B0(0, 182))
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
		iLocal_132 = 1;
		if (!func_57(14))
		{
			unk_0xB9D4F4DE7E7EC038(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x5CC02BB872FEF340(1);
			func_58("CELL_FOCUS");
			unk_0x5CC02BB872FEF340(1);
			unk_0xE73340DA551C95E1();
		}
	}
	if (func_135())
	{
		if (unk_0x2A57AED61E15C7C7(2, 186) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
					{
						unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
						unk_0x20236B414672EFAE(unk_0xA0081090911D13E5(), "Mood_Normal_1", 0);
						unk_0x42E3993926E1ADFF(unk_0xA0081090911D13E5());
						if (Global_14443 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x9C84A6C416EAB87E(unk_0xA0081090911D13E5(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x9C84A6C416EAB87E(unk_0xA0081090911D13E5(), 1);
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
											unk_0x20236B414672EFAE(unk_0xA0081090911D13E5(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0x20236B414672EFAE(unk_0xA0081090911D13E5(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0x20236B414672EFAE(unk_0xA0081090911D13E5(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0x20236B414672EFAE(unk_0xA0081090911D13E5(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
					{
						unk_0x20236B414672EFAE(unk_0xA0081090911D13E5(), "Mood_Normal_1", 0);
						unk_0x42E3993926E1ADFF(unk_0xA0081090911D13E5());
						unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
					}
				}
			}
		}
		if (unk_0x2A57AED61E15C7C7(2, 185) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x28C1B9853548BD8E(sLocal_19[Global_2576645], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xDB435D3A31C452A8(1);
							unk_0xEB2F8B403B8A1ED2(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0xDB435D3A31C452A8(0);
						unk_0xEB2F8B403B8A1ED2(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0xDB435D3A31C452A8(1);
					unk_0xEB2F8B403B8A1ED2(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0xDB435D3A31C452A8(0);
					unk_0xEB2F8B403B8A1ED2(0);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		if (unk_0x2A57AED61E15C7C7(0, 172) && iLocal_156 == 0)
		{
			if (func_135())
			{
				Global_2576646++;
				unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
			}
			if (Global_2576646 == 13)
			{
				func_97(0);
				unk_0x94C4AA6E3353EB1E(1f);
				unk_0xB14EE32074164477(sLocal_33[(Global_2576646 - 1)]);
				Global_2576646 = 0;
				func_55();
				if (iLocal_47 == 1)
				{
					unk_0x09C86C0C5CA26B1E(&Global_2577921, 2);
					iLocal_47 = 0;
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2576646 > 0 && Global_2576646 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0xC41E276F33F448DD(sLocal_33[Global_2576646], 0);
			}
		}
	}
	if (Global_2576646 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0xC04F047A523E9370(sLocal_33[Global_2576646]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0xD9A19FC06D13EE6D())
				{
					func_97(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0x88B0F0DC270164B7(&Global_2577921, 2);
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x94C4AA6E3353EB1E(0.25f);
				unk_0x4D72F3F9E91DF973(sLocal_33[Global_2576646], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_2576646 == 1 || Global_2576646 == 3)
			{
			}
			if (Global_2576646 == 2 || Global_2576646 == 4)
			{
			}
		}
	}
	if (unk_0x2A57AED61E15C7C7(0, 173) && iLocal_156 == 0)
	{
		if (func_135())
		{
			func_92();
			Global_2576645++;
			unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
		}
		if (Global_2576645 == 13)
		{
			Global_2576645 = 0;
		}
		if (Global_2576645 == 0)
		{
			if (func_135())
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
	if (unk_0x5E429C409D2CBD68(0, 184) && iLocal_156 == 0)
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && !unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
			{
				Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
				unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_126(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0xDF658EB6CA91DFBC();
				while (unk_0xDF658EB6CA91DFBC() < (iLocal_135 + iLocal_139) && Global_14443.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					unk_0x527ED47EF44C8E1E();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0x15761381A3072BFA(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					unk_0x88B0F0DC270164B7(&Global_2315, 3);
					iLocal_65 = unk_0xDF658EB6CA91DFBC();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					unk_0x09C86C0C5CA26B1E(&Global_2315, 3);
				}
				iLocal_135 = unk_0xDF658EB6CA91DFBC();
				while (unk_0xDF658EB6CA91DFBC() < (iLocal_135 + iLocal_137) && Global_14443.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					unk_0x527ED47EF44C8E1E();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_126(uLocal_140, "OPEN_SHUTTER");
				if (func_135())
				{
					if (Global_2576646 == 0)
					{
						if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
						{
							func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
				{
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_105();
				func_122();
				if (unk_0x08BA6DD398CA197C(Global_2313, 28))
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
			if (unk_0x2A57AED61E15C7C7(0, 40) || unk_0x2A57AED61E15C7C7(0, 41))
			{
				fLocal_114 = unk_0xE08072E3BF45CBDE();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x7DFD3CAC2CF49957(iLocal_112))
					{
						unk_0xAB16AADE80707D47(iLocal_112, "Camera_Zoom", &Global_14432, 1);
					}
				}
				else
				{
					unk_0x15761381A3072BFA(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x7F6103BD34B839B0(0, 40) || unk_0x7F6103BD34B839B0(0, 41))
		{
			fLocal_114 = unk_0xE08072E3BF45CBDE();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x7DFD3CAC2CF49957(iLocal_112))
				{
					unk_0xAB16AADE80707D47(iLocal_112, "Camera_Zoom", &Global_14432, 1);
				}
			}
			else
			{
				unk_0x15761381A3072BFA(iLocal_112);
			}
		}
		else
		{
			unk_0x15761381A3072BFA(iLocal_112);
		}
	}
	if (func_95(2, Global_14412, 0))
	{
		fLocal_75 = unk_0x7D6F3EA7A4634D65();
		fLocal_76 = unk_0xF81B1BC329E97BDD();
		unk_0x3B21CA2F785A4CB2(0, 0);
		unk_0x88B0F0DC270164B7(&Global_2313, 21);
		unk_0x15761381A3072BFA(iLocal_112);
		iLocal_127 = 1;
		func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xAB16AADE80707D47(-1, "Camera_Shoot", &Global_14432, 1);
		func_126(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0x222F4890F7AA7AD6(Local_84, 0);
		if (!func_135())
		{
			func_92();
		}
		Global_16781 = 1;
		unk_0x436DCF1E1ED3DA7A(0, 1);
		while (Global_16780 < 6 && Global_14443.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			func_109();
			unk_0x527ED47EF44C8E1E();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x59C51CE36969EDE5(0, 0);
		if (Global_14385)
		{
			func_1(1);
		}
		iLocal_135 = unk_0xDF658EB6CA91DFBC();
		while (unk_0xDF658EB6CA91DFBC() < (iLocal_135 + iLocal_138) && Global_14443.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			unk_0x527ED47EF44C8E1E();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_126(uLocal_140, "OPEN_SHUTTER");
		unk_0x09C86C0C5CA26B1E(&Global_2313, 21);
		func_100();
		if (Global_14443.f_1 > 3)
		{
			if (Global_69617)
			{
				func_20(1079, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0xD3363C33C5D52A45(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0xD3363C33C5D52A45(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0xD3363C33C5D52A45(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_97(0);
		}
		func_105();
	}
	if (unk_0x08BA6DD398CA197C(Global_2313, 28))
	{
		if (func_95(2, Global_14415, 0))
		{
			unk_0x3B21CA2F785A4CB2(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x527ED47EF44C8E1E();
			func_122();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x527ED47EF44C8E1E();
			func_122();
			unk_0x1C5F1EAD464EA72F();
			unk_0x2EABAFFCF17E1E52();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16778 = 1;
			unk_0x436DCF1E1ED3DA7A(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0x88B0F0DC270164B7(&Global_2313, 9);
			unk_0x6B0F857FD4BCD4AB(0);
			iLocal_142 = 0;
			func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_15(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_14(unk_0xA0081090911D13E5());
			if (func_13(iVar0) && (!func_57(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_13(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
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
		Global_2451682[iVar0] = iParam0;
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
		if (Global_2451682[iVar1] == 0)
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
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	if (!unk_0x08BA6DD398CA197C(Global_2314, 28))
	{
		if (unk_0xEAD46FA5CC88AD11() == 0)
		{
			if (unk_0x65121BA303717C5B())
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
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_25(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_25(uParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_25(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_25(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_25(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_25(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_25(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_25(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_25(uParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_25(uParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_25(uParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_25(uParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_25(uParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_25(uParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_25(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_25(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_25(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_25(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_25(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_25(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_25(uParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_25(uParam2)] = iParam1;
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
	iVar0 = Global_2491469[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
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
	uVar0 = Global_2491469[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
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
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312731;
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
		func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 176, 1), "CELL_280");
		if (iLocal_131)
		{
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
				{
					if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_69617 == 0 && unk_0xA96867DD0A63C62C(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
			{
				if (!unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x62B1FF1B5EE703A7(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x62B1FF1B5EE703A7(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x62B1FF1B5EE703A7(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x62B1FF1B5EE703A7(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xB9D4F4DE7E7EC038(uLocal_141, "SET_MAX_WIDTH");
		unk_0x0FFE3C1DBBA72236(fLocal_77);
		unk_0xE73340DA551C95E1();
		func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x62B1FF1B5EE703A7(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_44(Global_2508303, Global_2508304))
		{
			if (iParam0 == 0 || !func_30(Global_2508303, Global_2508304, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0xA0081090911D13E5(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar4;
	var uVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	uVar0 = 3;
	uVar4 = 3;
	uVar8 = 3;
	if (iParam1 == 0)
	{
		iVar15 = 3;
	}
	else if (bParam3)
	{
		iVar15 = 1;
	}
	else if (bParam4)
	{
		iVar15 = 2;
	}
	else
	{
		iVar15 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar4, &uVar8, iVar15, bParam5);
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0x705BC1BB91F530B5(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar12 = func_38(iParam0);
			if (!iVar12 == -1)
			{
				if (func_37(&uVar0, iVar12))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar13 = func_36(iParam0);
			if (!iVar13 == -1)
			{
				if (func_34(&uVar4, iVar13))
				{
					return 1;
				}
			}
		}
		if (unk_0xA86CA03D9749EEB3())
		{
			iVar14 = func_33(iParam0);
			if (!iVar14 == 0)
			{
				if (func_32(&uVar8, iVar14))
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
	if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x0604A0F4F09283DF(iParam0, 1);
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
	if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9C84A6C416EAB87E(iParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9C84A6C416EAB87E(iParam0, 0);
	return uVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
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
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 5, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 7, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 33, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 10:
					func_40(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 4, 1);
						func_43(uParam3, 6, 1);
						func_43(uParam3, 10, 1);
						func_43(uParam3, 54, 1);
						func_43(uParam3, 55, 1);
						func_43(uParam3, 56, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 37, 1);
						func_43(uParam3, 39, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 9, 1);
						func_41(uParam2, 10, 1);
						func_41(uParam2, 53, 1);
						func_41(uParam2, 56, 1);
						func_41(uParam2, 55, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 36, 1);
						func_41(uParam2, 38, 1);
						func_41(uParam2, 55, 1);
					}
					func_40(uParam4, 2, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 19, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_43(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_40(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 8, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 7, 1);
						func_43(uParam3, 0, 1);
						func_43(uParam3, 12, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 15, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 17, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 62, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 21, 1);
						func_43(uParam3, 25, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 30, 1);
						func_43(uParam3, 31, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 39, 1);
						func_43(uParam3, 37, 1);
						func_43(uParam3, 55, 1);
						func_41(uParam2, 0, 1);
						func_41(uParam2, 2, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 7, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 11, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 15, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 17, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 62, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 19, 1);
						func_41(uParam2, 20, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 22, 1);
						func_41(uParam2, 54, 1);
						func_41(uParam2, 24, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 30, 1);
						func_41(uParam2, 31, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 38, 1);
						func_41(uParam2, 36, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
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
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 4, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 43, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 2:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 31, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 62, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 43, 1);
							func_40(uParam4, 29, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
					}
					break;
				
				case 29:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 66, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 77, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
					}
					break;
				
				case 30:
					func_43(uParam3, 67, 1);
					func_43(uParam3, 68, 1);
					func_43(uParam3, 69, 1);
					func_43(uParam3, 70, 1);
					func_43(uParam3, 71, 1);
					func_43(uParam3, 72, 1);
					func_43(uParam3, 73, 1);
					func_43(uParam3, 74, 1);
					func_43(uParam3, 78, 1);
					func_43(uParam3, 79, 1);
					func_43(uParam3, 80, 1);
					func_43(uParam3, 81, 1);
					func_43(uParam3, 82, 1);
					func_43(uParam3, 91, 1);
					func_43(uParam3, 92, 1);
					func_41(uParam2, 66, 1);
					func_41(uParam2, 67, 1);
					func_41(uParam2, 68, 1);
					func_41(uParam2, 69, 1);
					func_41(uParam2, 70, 1);
					func_41(uParam2, 71, 1);
					func_41(uParam2, 72, 1);
					func_41(uParam2, 73, 1);
					func_41(uParam2, 77, 1);
					func_41(uParam2, 78, 1);
					func_41(uParam2, 79, 1);
					func_41(uParam2, 80, 1);
					func_41(uParam2, 81, 1);
					func_41(uParam2, 90, 1);
					func_41(uParam2, 91, 1);
					break;
				
				case 31:
					func_43(uParam3, 67, 1);
					func_43(uParam3, 68, 1);
					func_43(uParam3, 69, 1);
					func_43(uParam3, 70, 1);
					func_43(uParam3, 71, 1);
					func_43(uParam3, 72, 1);
					func_43(uParam3, 73, 1);
					func_43(uParam3, 74, 1);
					func_43(uParam3, 78, 1);
					func_43(uParam3, 79, 1);
					func_43(uParam3, 80, 1);
					func_43(uParam3, 81, 1);
					func_43(uParam3, 82, 1);
					func_43(uParam3, 91, 1);
					func_43(uParam3, 92, 1);
					func_41(uParam2, 66, 1);
					func_41(uParam2, 67, 1);
					func_41(uParam2, 68, 1);
					func_41(uParam2, 69, 1);
					func_41(uParam2, 70, 1);
					func_41(uParam2, 71, 1);
					func_41(uParam2, 72, 1);
					func_41(uParam2, 73, 1);
					func_41(uParam2, 77, 1);
					func_41(uParam2, 78, 1);
					func_41(uParam2, 79, 1);
					func_41(uParam2, 80, 1);
					func_41(uParam2, 81, 1);
					func_41(uParam2, 90, 1);
					func_41(uParam2, 91, 1);
					break;
				
				case 32:
				case 33:
				case 34:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 2:
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 54, 1);
							func_43(uParam3, 55, 1);
							func_43(uParam3, 56, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 55, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							func_43(uParam3, 65, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 76, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 64, 1);
							func_41(uParam2, 65, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 75, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 19, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 55, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							func_43(uParam3, 65, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 76, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 64, 1);
							func_41(uParam2, 65, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 75, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_43(uParam3, 65, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 76, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 64, 1);
							func_41(uParam2, 65, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 75, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 2:
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 4, 1);
							break;
						
						case 1:
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 2:
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 43, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 37, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 36, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							func_43(uParam3, 65, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 76, 1);
							func_43(uParam3, 77, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 64, 1);
							func_41(uParam2, 65, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 75, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							func_43(uParam3, 65, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 76, 1);
							func_43(uParam3, 77, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 64, 1);
							func_41(uParam2, 65, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 75, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
						
						case 2:
							func_43(uParam3, 1, 1);
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 5, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 54, 1);
							func_43(uParam3, 55, 1);
							func_43(uParam3, 56, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 62, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 1, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 5, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 12, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 14, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 62, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 23, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 29, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 33, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 32, 1);
							func_43(uParam3, 65, 1);
							func_43(uParam3, 67, 1);
							func_43(uParam3, 68, 1);
							func_43(uParam3, 69, 1);
							func_43(uParam3, 70, 1);
							func_43(uParam3, 71, 1);
							func_43(uParam3, 72, 1);
							func_43(uParam3, 73, 1);
							func_43(uParam3, 74, 1);
							func_43(uParam3, 75, 1);
							func_43(uParam3, 76, 1);
							func_43(uParam3, 77, 1);
							func_43(uParam3, 78, 1);
							func_43(uParam3, 79, 1);
							func_43(uParam3, 80, 1);
							func_43(uParam3, 81, 1);
							func_43(uParam3, 82, 1);
							func_43(uParam3, 91, 1);
							func_43(uParam3, 92, 1);
							func_41(uParam2, 64, 1);
							func_41(uParam2, 65, 1);
							func_41(uParam2, 66, 1);
							func_41(uParam2, 67, 1);
							func_41(uParam2, 68, 1);
							func_41(uParam2, 69, 1);
							func_41(uParam2, 70, 1);
							func_41(uParam2, 71, 1);
							func_41(uParam2, 72, 1);
							func_41(uParam2, 73, 1);
							func_41(uParam2, 74, 1);
							func_41(uParam2, 75, 1);
							func_41(uParam2, 77, 1);
							func_41(uParam2, 78, 1);
							func_41(uParam2, 79, 1);
							func_41(uParam2, 80, 1);
							func_41(uParam2, 81, 1);
							func_41(uParam2, 90, 1);
							func_41(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
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
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0x88B0F0DC270164B7(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_41(var uParam0, int iParam1, bool bParam2)
{
	func_42(uParam0, iParam1, bParam2);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0x88B0F0DC270164B7(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	func_42(uParam0, iParam1, bParam2);
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
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x62B1FF1B5EE703A7(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	if (Global_1748305 == 1)
	{
		fParam0 = -1f;
	}
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x62B1FF1B5EE703A7(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 183, 1), "CELL_GRID");
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_69617 == 0 && unk_0xA96867DD0A63C62C(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0xB9D4F4DE7E7EC038(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x5CC02BB872FEF340(1);
			unk_0x709662CF2BD061A4("CELL_ACTTL");
			unk_0xDA35BDB37E728640(unk_0xFFC9DE7E93AEAE21(&Global_2578635));
			unk_0x1E77BE8F4283FA05();
			unk_0x5CC02BB872FEF340(0);
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_48(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x62B1FF1B5EE703A7(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(0, 177, 1), "CELL_281");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 176, 1), "CELL_280");
	unk_0xB9D4F4DE7E7EC038(uLocal_141, "SET_MAX_WIDTH");
	unk_0x0FFE3C1DBBA72236(fLocal_77);
	unk_0xE73340DA551C95E1();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
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
		func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(2, 179, 1), "CELL_287");
		if (iLocal_131)
		{
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
				{
					if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_69617 == 0 && unk_0xA96867DD0A63C62C(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) || unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
			{
				if (!unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x62B1FF1B5EE703A7(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xC4E0C3DEFA9F32C8(unk_0xA0081090911D13E5()) == 2)
			{
				if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x62B1FF1B5EE703A7(2, 183, 1), "CELL_GRID");
				func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
				func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x62B1FF1B5EE703A7(0, 39, 1), "CELL_284");
				if (func_135())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_63)
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 182, 1), "CELL_FOCUS");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(4f);
						func_45(5f);
						func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x62B1FF1B5EE703A7(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xB9D4F4DE7E7EC038(uLocal_141, "SET_MAX_WIDTH");
		unk_0x0FFE3C1DBBA72236(fLocal_77);
		unk_0xE73340DA551C95E1();
		func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(2, 179, 1), "CELL_287");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 177, 1), "CELL_281");
	unk_0xB9D4F4DE7E7EC038(uLocal_141, "SET_MAX_WIDTH");
	unk_0x0FFE3C1DBBA72236(fLocal_77);
	unk_0xE73340DA551C95E1();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_131)
	{
		unk_0x2A7D387AD73F1D15(fLocal_73, 1065353216);
		unk_0x8BDD755F07063522(fLocal_74);
	}
}

void func_53(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_1626500.f_97569 == 1)
	{
	}
	else if (Global_1626500.f_97570 == 1)
	{
	}
	else
	{
		unk_0xC99D8A3B5BE50C1E(iParam0);
	}
}

void func_54()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x28C1B9853548BD8E(sLocal_19[Global_2576645], "phone_cam12DUMMY"))
		{
			unk_0xDB435D3A31C452A8(0);
			unk_0xEB2F8B403B8A1ED2(0);
		}
		else
		{
			unk_0xDB435D3A31C452A8(1);
			unk_0xEB2F8B403B8A1ED2(1);
		}
	}
}

void func_55()
{
	func_127(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_135())
	{
		if (Global_1748305 == 0)
		{
			unk_0x4C7432C4305D9BE4("phone_cam");
		}
	}
}

int func_56()
{
	if (func_57(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if ((unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/] || unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/]) || unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
	return Global_35775 == iParam0;
}

void func_58(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_59()
{
	if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x4255B5ECB9D34344(2))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 30, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x611F82FE2F038F7C(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 1, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x611F82FE2F038F7C(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (unk_0x4255B5ECB9D34344(2) || unk_0xD95D58B9AAC86D55())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x62B1FF1B5EE703A7(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x611F82FE2F038F7C(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x62B1FF1B5EE703A7(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x62B1FF1B5EE703A7(0, 39, 1), "CELL_LT_LSTICKZ");
		func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x62B1FF1B5EE703A7(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_61(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x509383441597090D(uParam3))
	{
		func_62(uParam3);
	}
	if (!unk_0x509383441597090D(sParam4))
	{
		func_58(sParam4);
	}
	unk_0xE73340DA551C95E1();
}

void func_62(var uParam0)
{
	unk_0x481EA0389B099920(uParam0);
}

void func_63()
{
	if (Global_69617)
	{
		switch (Global_16862)
		{
			case 0:
				if (unk_0x4255B5ECB9D34344(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16862++;
				break;
			
			case 1:
				if (!unk_0x598A9E990F05F82C())
				{
					if (unk_0x4255B5ECB9D34344(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
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
				if (unk_0x4255B5ECB9D34344(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16861++;
				break;
			
			case 1:
				if (!unk_0x598A9E990F05F82C())
				{
					if (unk_0x4255B5ECB9D34344(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
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
	
	if (unk_0x4255B5ECB9D34344(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x7F6103BD34B839B0(2, iVar10) && !unk_0x7F6103BD34B839B0(2, iVar9))
	{
		unk_0xABC36CFE4F3421A0(0, 2, 1);
		unk_0xABC36CFE4F3421A0(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 2)) * 127;
		if (unk_0x4255B5ECB9D34344(2))
		{
			if (unk_0x9ABCEFB6E400C9FB(iVar0) > 28 || unk_0x9ABCEFB6E400C9FB(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x9ABCEFB6E400C9FB(iVar2) > 28 || unk_0x9ABCEFB6E400C9FB(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0x4255B5ECB9D34344(2))
		{
			fVar7 = unk_0xBC901F1C15EF7F84(0, 290);
			fVar8 = unk_0xBC901F1C15EF7F84(0, 291);
			if (unk_0x1C49F15E8235C041())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x9ABCEFB6E400C9FB(iVar0) > 28 || unk_0x9ABCEFB6E400C9FB(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_67(fVar5);
		func_66(fVar6);
		func_65(fVar4);
	}
	else if (!unk_0x7F6103BD34B839B0(2, iVar9))
	{
		unk_0xFF61FA1A24898079(0, 2, 1);
		unk_0xFF61FA1A24898079(0, 1, 1);
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
	unk_0x6E7177B675352B96(fLocal_161);
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
	unk_0x51B8947DC9740712(fLocal_162);
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
	unk_0xED2F239BF63E9E2C(fLocal_163);
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
	
	if (unk_0x4255B5ECB9D34344(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x7F6103BD34B839B0(2, iVar10))
		{
			if (unk_0x2A57AED61E15C7C7(2, 178))
			{
				unk_0x81465147C623A216(0.5f);
				unk_0xE4C2BCAB0B8B2A01(0.85f);
				unk_0x8C5214A738044087(0.5f);
				unk_0xE8D3D88AC748F627(-0.25f);
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
	if (unk_0x7F6103BD34B839B0(2, iVar10) && !unk_0x7F6103BD34B839B0(2, iVar11))
	{
		if (unk_0x2A57AED61E15C7C7(2, 178))
		{
			unk_0x81465147C623A216(0.5f);
			unk_0xE4C2BCAB0B8B2A01(0.85f);
			unk_0x8C5214A738044087(0.5f);
			unk_0xE8D3D88AC748F627(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0xABC36CFE4F3421A0(0, 2, 1);
		unk_0xABC36CFE4F3421A0(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 2)) * 127;
		if (unk_0x4255B5ECB9D34344(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 39)) * 127;
			fVar8 = unk_0xBC901F1C15EF7F84(0, 290);
			fVar9 = unk_0xBC901F1C15EF7F84(0, 291);
			if (unk_0x1C49F15E8235C041())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x9ABCEFB6E400C9FB(iVar2) > 15 || unk_0x9ABCEFB6E400C9FB(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x9ABCEFB6E400C9FB(iVar0) > 28 || unk_0x9ABCEFB6E400C9FB(iVar1) > 28)
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
	else if (!unk_0xFEB2816B7220E998(2, iVar11))
	{
		unk_0xFF61FA1A24898079(0, 2, 1);
		unk_0xFF61FA1A24898079(0, 1, 1);
	}
	if (!unk_0xFEB2816B7220E998(2, iVar10) && !unk_0xFEB2816B7220E998(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBC901F1C15EF7F84(0, 293)) * 127;
		if (unk_0x9ABCEFB6E400C9FB(iVar2) > 28 || unk_0x9ABCEFB6E400C9FB(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x9ABCEFB6E400C9FB(iVar0) > 28 || unk_0x9ABCEFB6E400C9FB(iVar1) > 28)
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
	unk_0x8C5214A738044087(fLocal_159);
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
	unk_0xE8D3D88AC748F627(fLocal_160);
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
	unk_0xE4C2BCAB0B8B2A01(fLocal_158);
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
	unk_0x81465147C623A216(fLocal_157);
}

void func_73()
{
	if (Global_69877 || Global_69878)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_1626500.f_97569 == 0 && Global_1626500.f_97570 == 0)
			{
				unk_0x0F83039847376F53(uLocal_141, 255, 255, 255, 0, 0);
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
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, iParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xBF14E70921AA4E54(0.4f, 0.4f);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(1, 0, 0, 0, 205);
	unk_0x7B17291A00C79516(1);
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xDEB22FE9E351379F(iParam0, iParam1, iParam2, iParam3);
}

void func_76()
{
	unk_0x2A7D387AD73F1D15(fLocal_75, 1065353216);
	unk_0x8BDD755F07063522(fLocal_76);
}

void func_77()
{
	unk_0xABC36CFE4F3421A0(0, 25, 1);
	unk_0xABC36CFE4F3421A0(0, 44, 1);
	unk_0xABC36CFE4F3421A0(0, 3, 1);
	unk_0xABC36CFE4F3421A0(0, 4, 1);
	unk_0xABC36CFE4F3421A0(0, 5, 1);
	unk_0xABC36CFE4F3421A0(0, 6, 1);
	unk_0xABC36CFE4F3421A0(0, 1, 1);
	unk_0xABC36CFE4F3421A0(0, 2, 1);
	unk_0xABC36CFE4F3421A0(0, 39, 1);
	unk_0xABC36CFE4F3421A0(0, 47, 1);
	unk_0xABC36CFE4F3421A0(0, 56, 1);
}

void func_78()
{
	Local_87 = { Global_14396[Global_14388 /*3*/] };
	if (Global_14385)
	{
		if (func_81())
		{
			unk_0x4788913DF846A969(&Local_93);
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
		if (unk_0x08BA6DD398CA197C(Global_2315, 4))
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
			if (unk_0x08BA6DD398CA197C(Global_2315, 4))
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
		unk_0x6D68EB69A9260608(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0x222F4890F7AA7AD6(Local_84, 0);
			if (!unk_0x08BA6DD398CA197C(Global_2313, 22))
			{
				if (unk_0x08BA6DD398CA197C(Global_2313, 28))
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
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x08BA6DD398CA197C(Global_2314, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xB9D4F4DE7E7EC038(uLocal_141, "SET_MAX_WIDTH");
	unk_0x0FFE3C1DBBA72236(fLocal_77);
	unk_0xE73340DA551C95E1();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_80()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x08BA6DD398CA197C(Global_2314, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x62B1FF1B5EE703A7(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x62B1FF1B5EE703A7(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x62B1FF1B5EE703A7(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xB9D4F4DE7E7EC038(uLocal_141, "SET_MAX_WIDTH");
	unk_0x0FFE3C1DBBA72236(fLocal_77);
	unk_0xE73340DA551C95E1();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
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
		if (unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0))
		{
			return 0;
		}
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			if (!unk_0x7CC73BBA898B4C38())
			{
				if (unk_0xB46E03E529421E99(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x019057DADA219C94(unk_0xA0081090911D13E5()) || unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5())) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0xBA27A740ED6E91CC(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
		if (Global_100601)
		{
			return 0;
		}
	}
	if (Global_69617)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xCCC8FE2C71D0E93E();
	iVar1 = unk_0x819C3E64C255229B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x7CC73BBA898B4C38()))
	{
		iVar2 = 1;
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				iVar3 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				if ((((((((unk_0xBFD32C1D4D54E09B(unk_0x705BC1BB91F530B5(iVar3)) || unk_0xC388189407833D70(unk_0x705BC1BB91F530B5(iVar3))) || unk_0xA727EEDD175A1189(unk_0x705BC1BB91F530B5(iVar3))) || unk_0x705BC1BB91F530B5(iVar3) == joaat("seashark")) || unk_0x705BC1BB91F530B5(iVar3) == joaat("seashark2")) || unk_0x705BC1BB91F530B5(iVar3) == joaat("rhino")) || unk_0x705BC1BB91F530B5(iVar3) == joaat("submersible")) || unk_0x705BC1BB91F530B5(iVar3) == joaat("submersible2")) || unk_0x705BC1BB91F530B5(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2578135 || iVar2 == 1)
	{
		if (unk_0xA96867DD0A63C62C(joaat("apptrackify")) > 0 || Global_101553.f_12906.f_89)
		{
			if (unk_0xA96867DD0A63C62C(joaat("michael2")) > 0)
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
	unk_0xABC36CFE4F3421A0(0, 47, 1);
	unk_0xCEEF85C0FC6A898F(0, Global_14413);
	Local_84 = { Global_14403 };
	Local_87 = { Global_14396[Global_14388 /*3*/] };
	if (func_81())
	{
		unk_0x1FB56391BC31C285(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0x4788913DF846A969(&Local_93);
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
		func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (unk_0x08BA6DD398CA197C(Global_2313, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_83();
		}
		if (iLocal_121)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 9))
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
				unk_0x222F4890F7AA7AD6(Local_78, 0);
				unk_0x6D68EB69A9260608(Local_81);
			}
			func_90(0, 1);
		}
		else if (func_81() == 0)
		{
			unk_0x222F4890F7AA7AD6(Local_78, 0);
			unk_0x6D68EB69A9260608(Local_81);
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
	unk_0x222F4890F7AA7AD6(Local_78, 0);
}

void func_83()
{
	func_1(0);
	if (func_81() == 0)
	{
		if (unk_0x08BA6DD398CA197C(Global_2313, 30))
		{
			unk_0x6D68EB69A9260608(Global_14389[Global_14388 /*3*/]);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14396[Global_14388 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0x222F4890F7AA7AD6(Local_78, 0);
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
	if (unk_0x1E3F61C2C1E29520(uLocal_140))
	{
		func_126(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x527ED47EF44C8E1E();
	unk_0xA12A0D38735CCBF2(&uLocal_141);
	unk_0xA12A0D38735CCBF2(&uLocal_140);
	if (Global_14606 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 17);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 18);
	unk_0x09C86C0C5CA26B1E(&Global_2313, 21);
	unk_0x436DCF1E1ED3DA7A(0, 1);
	unk_0x09C86C0C5CA26B1E(&Global_2315, 3);
	unk_0x09C86C0C5CA26B1E(&Global_2577921, 3);
	unk_0x6B0F857FD4BCD4AB(0);
	unk_0xDA26AC0F41ABF2D6(unk_0x0C1D3C552325765B(), 1);
	unk_0xC667A7C5CE24C569(15);
	Global_16782 = 1;
	unk_0x15761381A3072BFA(iLocal_112);
	unk_0xC8656944A36C8E78(iLocal_112);
	unk_0x39C6D32CD560BA7C();
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0x20236B414672EFAE(unk_0xA0081090911D13E5(), "Mood_Normal_1", 0);
		unk_0x42E3993926E1ADFF(unk_0xA0081090911D13E5());
	}
	func_92();
	unk_0xDB435D3A31C452A8(0);
	unk_0xEB2F8B403B8A1ED2(0);
	unk_0x94C4AA6E3353EB1E(1f);
	if (Global_2576646 > 0 && Global_2576646 < 13)
	{
		unk_0xB14EE32074164477(sLocal_33[Global_2576646]);
	}
	func_90(0, 1);
	if (func_133(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0x78C587487CD40B92();
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
	while (!unk_0x1E3F61C2C1E29520(Global_14424))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14443.f_1)
	{
		case 6:
			func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_2918);
			if (Global_2918 == 1)
			{
				func_127(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14447), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14447;
			}
			else
			{
				func_127(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14448), -1082130432, -1082130432, -1082130432);
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
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			}
			else if (Global_69617)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
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
				unk_0x88B0F0DC270164B7(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			if (unk_0x08BA6DD398CA197C(Global_2313, 20))
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
				func_127(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101553.f_12906[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(4);
					unk_0x7CBFB9F4AF33C67E(0);
					unk_0x7CBFB9F4AF33C67E(2);
					unk_0x709662CF2BD061A4("CELL_CONDFON");
					unk_0xDA35BDB37E728640(&Global_15760);
					unk_0x1E77BE8F4283FA05();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0xE73340DA551C95E1();
				}
				else if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), "CELL_217", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
				}
				func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_127(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101553.f_12906[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_86();
				if (Global_15758)
				{
					unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(4);
					unk_0x7CBFB9F4AF33C67E(0);
					unk_0x7CBFB9F4AF33C67E(2);
					unk_0x709662CF2BD061A4("CELL_CONDFON");
					unk_0xDA35BDB37E728640(&Global_15760);
					unk_0x1E77BE8F4283FA05();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0xE73340DA551C95E1();
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
					if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), &Var0, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
					}
				}
				func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	if (unk_0x1E3F61C2C1E29520(Global_14424))
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
			else if (unk_0x08BA6DD398CA197C(Global_2313, 20))
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
		}
		else
		{
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			if (unk_0x08BA6DD398CA197C(Global_2313, 20))
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
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2578133)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_87(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0x509383441597090D(iParam8))
	{
		func_58(iParam8);
	}
	if (!unk_0x509383441597090D(iParam9))
	{
		func_58(iParam9);
	}
	if (!unk_0x509383441597090D(iParam10))
	{
		func_58(iParam10);
	}
	if (!unk_0x509383441597090D(iParam11))
	{
		func_58(iParam11);
	}
	unk_0xE73340DA551C95E1();
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
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
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
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
			unk_0x436DCF1E1ED3DA7A(0, 1);
			if (unk_0x08BA6DD398CA197C(Global_2313, 28))
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
			if (!unk_0x08BA6DD398CA197C(Global_2313, 22))
			{
				unk_0x436DCF1E1ED3DA7A(0, 1);
				if (unk_0x08BA6DD398CA197C(Global_2313, 28))
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
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_91(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
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
	if ((Global_1626500.f_97569 == 0 && Global_1626500.f_97570 == 0) && Global_1748305 == 0)
	{
		unk_0x5A58126D345E3A13();
	}
}

void func_93(int iParam0, int iParam1)
{
	if (Global_1626500.f_97569 == 1)
	{
	}
	else if (Global_1626500.f_97570 == 1)
	{
	}
	else
	{
		unk_0x59C51CE36969EDE5(iParam0, iParam1);
	}
}

int func_94()
{
	if (unk_0x08BA6DD398CA197C(Global_2313, 15))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x2A57AED61E15C7C7(iParam0, uParam1) || (iParam2 == 1 && unk_0x5E429C409D2CBD68(iParam0, iParam1)))
	{
		if (unk_0x955B8C8F89CC3AC0())
		{
			if (unk_0xC5400265B5C1CEB3() == 0 || (unk_0x04781D6F82022E77() && unk_0x4255B5ECB9D34344(2)))
			{
				return 0;
			}
		}
		if (unk_0x84C71F36E7D97756() || unk_0xCD755B20D2481736())
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
			unk_0x1FB56391BC31C285(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0x4788913DF846A969(&Local_93);
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
			unk_0x222F4890F7AA7AD6(Local_78, 0);
			unk_0x6D68EB69A9260608(Local_81);
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
		unk_0x222F4890F7AA7AD6(Local_78, 0);
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
				unk_0x222F4890F7AA7AD6(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x6D68EB69A9260608(Local_81);
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
				func_105();
				func_127(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
				{
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_129();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0x222F4890F7AA7AD6(Local_78, 0);
		Global_16779 = 0;
	}
}

void func_97(bool bParam0)
{
	if (func_135())
	{
		if (bParam0)
		{
			if (!unk_0xD9A19FC06D13EE6D())
			{
				unk_0x9F750EDBF364679A(1);
				if (Global_2576646 > 0 && Global_2576646 < 99)
				{
					unk_0x4D72F3F9E91DF973(sLocal_33[Global_2576646], 0);
					unk_0x94C4AA6E3353EB1E(0.25f);
				}
			}
		}
		else if (unk_0xD9A19FC06D13EE6D())
		{
			unk_0x9F750EDBF364679A(0);
		}
	}
}

void func_98()
{
	if (Global_2576645 > 0 && Global_2576645 < 99)
	{
		if (Global_1748305 == 0)
		{
			unk_0x4C7432C4305D9BE4(sLocal_19[Global_2576645]);
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
	if (iLocal_127 == 0)
	{
		if (unk_0x08BA6DD398CA197C(Global_2313, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (unk_0x28C1B9853548BD8E(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

void func_101()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Back", &Global_14432, 1);
	}
}

void func_102()
{
	unk_0x3B21CA2F785A4CB2(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_103()
{
	func_104();
}

void func_104()
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

void func_105()
{
	if (Global_14443.f_1 > 3)
	{
		if (!unk_0x84C71F36E7D97756())
		{
			unk_0x04F50370A3D0809C(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_106()
{
	if (func_57(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_107(int iParam0)
{
	if (Global_14604)
	{
		func_90(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_108())
	{
		Global_14443.f_1 = 3;
	}
}

int func_108()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	unk_0xABC36CFE4F3421A0(0, 0, 1);
	unk_0xABC36CFE4F3421A0(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0xCEEF85C0FC6A898F(0, Global_14416);
		unk_0xCEEF85C0FC6A898F(0, Global_14413);
		unk_0xABC36CFE4F3421A0(0, 278, 1);
		unk_0xABC36CFE4F3421A0(0, 279, 1);
		unk_0xABC36CFE4F3421A0(0, 280, 1);
		unk_0xABC36CFE4F3421A0(0, 281, 1);
		unk_0xABC36CFE4F3421A0(0, 282, 1);
		unk_0xABC36CFE4F3421A0(0, 282, 1);
		unk_0xABC36CFE4F3421A0(0, 284, 1);
		unk_0xABC36CFE4F3421A0(0, 285, 1);
		unk_0xABC36CFE4F3421A0(0, 69, 1);
		unk_0xABC36CFE4F3421A0(0, 70, 1);
		unk_0xABC36CFE4F3421A0(0, 114, 1);
		unk_0xABC36CFE4F3421A0(0, 71, 1);
		unk_0xABC36CFE4F3421A0(0, 72, 1);
		unk_0xABC36CFE4F3421A0(0, 74, 1);
		unk_0xABC36CFE4F3421A0(0, 75, 1);
		unk_0xABC36CFE4F3421A0(0, 76, 1);
		unk_0xABC36CFE4F3421A0(0, 73, 1);
		unk_0xABC36CFE4F3421A0(0, 77, 1);
		unk_0xABC36CFE4F3421A0(0, 78, 1);
		unk_0xABC36CFE4F3421A0(0, 286, 1);
		unk_0xABC36CFE4F3421A0(0, 287, 1);
		unk_0xABC36CFE4F3421A0(0, 79, 1);
		unk_0xABC36CFE4F3421A0(0, 80, 1);
		unk_0xABC36CFE4F3421A0(0, 81, 1);
		unk_0xABC36CFE4F3421A0(0, 82, 1);
		unk_0xABC36CFE4F3421A0(0, 86, 1);
		unk_0xABC36CFE4F3421A0(0, 59, 1);
		unk_0xABC36CFE4F3421A0(0, 60, 1);
		unk_0xABC36CFE4F3421A0(0, 61, 1);
		unk_0xABC36CFE4F3421A0(0, 62, 1);
		unk_0xABC36CFE4F3421A0(0, 63, 1);
		unk_0xABC36CFE4F3421A0(0, 64, 1);
		unk_0xABC36CFE4F3421A0(0, 87, 1);
		unk_0xABC36CFE4F3421A0(0, 88, 1);
		unk_0xABC36CFE4F3421A0(0, 89, 1);
		unk_0xABC36CFE4F3421A0(0, 90, 1);
		unk_0xABC36CFE4F3421A0(0, 107, 1);
		unk_0xABC36CFE4F3421A0(0, 108, 1);
		unk_0xABC36CFE4F3421A0(0, 109, 1);
		unk_0xABC36CFE4F3421A0(0, 110, 1);
		unk_0xABC36CFE4F3421A0(0, 111, 1);
		unk_0xABC36CFE4F3421A0(0, 112, 1);
		unk_0xABC36CFE4F3421A0(0, 113, 1);
		unk_0xABC36CFE4F3421A0(0, 114, 1);
		unk_0xABC36CFE4F3421A0(0, 91, 1);
		unk_0xABC36CFE4F3421A0(0, 92, 1);
		unk_0xABC36CFE4F3421A0(0, 68, 1);
		unk_0xABC36CFE4F3421A0(0, 102, 1);
		unk_0xABC36CFE4F3421A0(0, 136, 1);
		unk_0xABC36CFE4F3421A0(0, 137, 1);
		unk_0xABC36CFE4F3421A0(0, 138, 1);
		unk_0xABC36CFE4F3421A0(0, 139, 1);
		unk_0xABC36CFE4F3421A0(0, 102, 1);
	}
}

int func_110()
{
	var uVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			uVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (unk_0x6315EBE95A97CADF(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x8FD32443A080784B(uVar0, -1, 0) == unk_0xA0081090911D13E5())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_111()
{
	bool bVar0;
	var uVar1;
	
	func_118(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_115(157))
	{
		if (!func_114())
		{
			return 1;
		}
	}
	if (func_115(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_112() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_112()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_112()
{
	switch (func_113())
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

int func_113()
{
	return Global_25185;
}

bool func_114()
{
	return Global_2442442.f_576;
}

int func_115(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_2451777;
}

bool func_117()
{
	return Global_2442442.f_571;
}

void func_118(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_119(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_119(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_121(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(iVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					iVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(iVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_120(iVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_120(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_122()
{
	if (iLocal_156 == 1)
	{
		unk_0x7ABD1B29E6C2963D(7);
		unk_0x7ABD1B29E6C2963D(1);
		unk_0x7ABD1B29E6C2963D(3);
		unk_0x7ABD1B29E6C2963D(4);
		unk_0x7ABD1B29E6C2963D(6);
		unk_0x7ABD1B29E6C2963D(8);
		unk_0x7ABD1B29E6C2963D(9);
		unk_0x7ABD1B29E6C2963D(2);
	}
	else
	{
		unk_0xB477A2D8CA963C52();
	}
}

void func_123(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_124()
{
	if (func_125())
	{
		unk_0x3CED9A09E07FD10E();
		if (unk_0x992F4AFC5BA52B73(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16782 = 1;
			Global_14443.f_1 = 3;
			unk_0x39C6D32CD560BA7C();
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
				if (unk_0x1E3F61C2C1E29520(uLocal_140))
				{
					if (func_135())
					{
						if (Global_2576646 == 0)
						{
							if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
							{
								func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x08BA6DD398CA197C(Global_2577921, 2))
						{
							func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x1E3F61C2C1E29520(uLocal_140))
			{
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0x39C6D32CD560BA7C();
	}
}

int func_125()
{
	if (Global_1626500.f_97569 == 1)
	{
		if (Global_69617)
		{
			return 0;
		}
	}
	if (Global_1626500.f_97570 == 1)
	{
		if (Global_69617)
		{
			return 0;
		}
	}
	if (unk_0x65121BA303717C5B() || unk_0xBECAD780226FC009())
	{
		if (unk_0x08BA6DD398CA197C(Global_2314, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_126(var uParam0, char* sParam1)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0xE73340DA551C95E1();
}

void func_127(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

int func_128()
{
	if (Global_69617)
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
	return Global_101553.f_12906[Global_14443 /*20*/].f_7;
}

void func_129()
{
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 8;
	}
	Global_16781 = 0;
	iLocal_127 = 0;
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		Local_67 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
	}
	if (Global_14385)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_105();
			func_77();
			unk_0x527ED47EF44C8E1E();
		}
		func_126(uLocal_140, "OPEN_SHUTTER");
		func_122();
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

void func_130(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 15);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 15);
	}
}

bool func_131()
{
	return Global_1315206;
}

void func_132()
{
}

int func_133(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && bParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_134()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (unk_0x0E993EC7F4BA9325(unk_0xA0081090911D13E5()))
		{
			unk_0x645BA9420353EC0E(unk_0xA0081090911D13E5(), 0, 0);
			unk_0x81465147C623A216(fLocal_157);
			unk_0xE4C2BCAB0B8B2A01(fLocal_158);
			unk_0x8C5214A738044087(fLocal_159);
		}
		else
		{
			unk_0x81465147C623A216(fLocal_157);
			unk_0xE4C2BCAB0B8B2A01(fLocal_158);
			unk_0x8C5214A738044087(fLocal_159);
		}
	}
	unk_0xE8D3D88AC748F627(fLocal_160);
	unk_0x6E7177B675352B96(fLocal_161);
	unk_0x51B8947DC9740712(fLocal_162);
	unk_0xED2F239BF63E9E2C(fLocal_163);
	func_52();
}

int func_135()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}


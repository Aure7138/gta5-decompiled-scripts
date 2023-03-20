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
	unk_0x69BC3CC82D2BC993();
	if (unk_0x7B22015BCC2AAAAE() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_135())
	{
		Global_2557481 = 99;
		Global_2557482 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_2557481 = 0;
		Global_2557482 = 0;
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
	iLocal_112 = unk_0xBE8BBC6340F2B731();
	if (Global_14358 == 0)
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
	Global_16745 = 0;
	Global_16746 = 0;
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (unk_0x05F99AF78BDDF58E(unk_0x77F050A399DB77ED()))
		{
			Global_16745 = 1;
		}
		if (unk_0xE646EE093644B2DE())
		{
			Global_16745 = 1;
		}
		if (unk_0x968EA16107097324(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED()), 0))
		{
			Global_16745 = 1;
		}
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
		{
			Global_16745 = 1;
		}
		if (unk_0x90953832F162AE6A(unk_0x77F050A399DB77ED()))
		{
			Global_16745 = 1;
		}
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16745 = 1;
			}
			uLocal_149 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
			if ((unk_0xDF1398076E26B0E4(uLocal_149) == joaat("rhino") || unk_0xDF1398076E26B0E4(iLocal_149) == joaat("cutter")) || unk_0xDF1398076E26B0E4(iLocal_149) == joaat("submersible"))
			{
				Global_16745 = 1;
			}
			else if (unk_0x07A8845F7F106A38(iLocal_149, -1) == unk_0x77F050A399DB77ED())
			{
				if (unk_0x8ED30F31356C7C7C(iLocal_149) > 0f)
				{
					if (!Global_69317)
					{
						if (!func_131())
						{
							unk_0x19A678020762B54A(unk_0x77F050A399DB77ED(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_69317)
	{
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			unk_0x75DB0CE3FFF922AB(unk_0x8ACD527A7E574590(), 0);
		}
	}
	unk_0xA5F70A8B83BDFA49(&Global_2283, 21);
	func_130(0);
	unk_0x573691DB812DC8AA(&Global_2283, 17);
	if (Global_14355 == 0)
	{
		func_129();
	}
	else
	{
		uLocal_140 = unk_0x2F14983962462691("camera_gallery");
		uLocal_141 = unk_0x2F14983962462691("instructional_buttons");
		while (!unk_0xEDE19C6ED6E2F478(uLocal_140) || !unk_0xEDE19C6ED6E2F478(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0xC08831A338A1D76E();
			unk_0x6E20845D23D3DFD4(0, 25, 1);
		}
		if (Global_69317)
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
		unk_0x758017413321C628(Global_14394, "DISPLAY_VIEW");
		unk_0x4D57F6B69CCB6D95(16);
		unk_0x098CA28C04E62E55();
	}
	Local_78 = { Global_14373 };
	Local_81 = { Global_14366[Global_14358 /*3*/] };
	Global_16746 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0xA5F70A8B83BDFA49(&Global_2285, 3);
	}
	func_124();
	unk_0x227C85DAD96E2942(4);
	if (unk_0x94EBBBE6BBF5A445())
	{
	}
	if (Global_1612768.f_79567)
	{
	}
	if (Global_1612768.f_79569 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xC08831A338A1D76E();
		unk_0x6E20845D23D3DFD4(0, 25, 1);
		unk_0x6E20845D23D3DFD4(0, 0, 1);
		if (!Global_99250.f_12669.f_81)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 13))
			{
				if (!unk_0x8E9825258F5C145C())
				{
					if (!unk_0xB56FEBC510E7E9DE(Global_2284, 28))
					{
						if (iLocal_128 && iLocal_131 == 0)
						{
							unk_0x573691DB812DC8AA(&Global_2558757, 13);
							Global_99250.f_12669.f_81 = 1;
							func_123("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x4F297F09162EFB5D())
		{
			if (Global_1612768.f_79566 == 0 && Global_1612768.f_79567 == 0)
			{
				unk_0xD994B5E39F03448F(15, 0f, -0.0375f);
			}
			unk_0xCA3D1FCD234B8E0B(7);
			func_122();
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				unk_0xD214B72C983BCE75(unk_0x77F050A399DB77ED(), 200, 1);
			}
			unk_0x6E20845D23D3DFD4(0, 44, 1);
			unk_0x6E20845D23D3DFD4(0, 47, 1);
			unk_0x6E20845D23D3DFD4(0, 91, 1);
			unk_0x6E20845D23D3DFD4(0, 92, 1);
			unk_0x6E20845D23D3DFD4(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0xE494527A450B8456(0, Global_14386);
			}
			unk_0xE494527A450B8456(0, Global_14383);
			if (unk_0x2CC731F9E664299E() || unk_0x8DD09BB8ACF9E623())
			{
				iLocal_130 = 1;
				Global_14413.f_1 = 3;
				unk_0xADD55DEFB7B8CB4F(0);
			}
			if (unk_0xF612EE8D8472E871())
			{
				Global_14413.f_1 = 3;
				unk_0xADD55DEFB7B8CB4F(0);
			}
			if (unk_0xB56FEBC510E7E9DE(Global_2284, 3))
			{
				Global_14413.f_1 = 3;
				unk_0xADD55DEFB7B8CB4F(0);
			}
			if (unk_0x4C779B19E6DDCDA2())
			{
				if (func_111())
				{
					Global_14413.f_1 = 3;
					unk_0xADD55DEFB7B8CB4F(0);
				}
			}
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x0B6380E19682EA99(unk_0x77F050A399DB77ED(), 0))
				{
					Global_14413.f_1 = 3;
					unk_0xADD55DEFB7B8CB4F(0);
				}
				if ((unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0xA35DF80DCE8538ED(unk_0x8ACD527A7E574590()))
				{
					if (func_110())
					{
					}
					else
					{
						Global_14413.f_1 = 3;
						unk_0xADD55DEFB7B8CB4F(0);
					}
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()) || unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					if (Global_69317 == 1)
					{
						Global_14413.f_1 = 3;
					}
				}
				if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x93EAB997D09AC4A7(unk_0x77F050A399DB77ED()) > 0.3f)
					{
						Global_14413.f_1 = 3;
					}
				}
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					func_109();
					iLocal_149 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x8ED30F31356C7C7C(iLocal_149) < 0f)
					{
						func_107(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0xDD2CE9863CFA42F9())
							{
								func_107(0);
							}
						}
						else if (!unk_0xDD2CE9863CFA42F9())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0xC08831A338A1D76E();
						}
					}
				}
				else if (Global_69317 == 0)
				{
					if (unk_0xB56FEBC510E7E9DE(Global_2283, 18))
					{
						func_106();
						if ((Global_14413 == 0 || Global_14413 == 1) || Global_14413 == 2)
						{
							if (!unk_0xBA1F4275167B58F4(unk_0x77F050A399DB77ED()))
							{
								if (unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
								{
								}
								else
								{
									Global_14413.f_1 = 3;
									unk_0xADD55DEFB7B8CB4F(0);
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
			if (Global_14413.f_1 < 4)
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
							if (Global_14413.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_103();
									if (Global_16750 == 0 && Global_16747 == 6)
									{
										unk_0xFA40EE73003A9B13(0, 1);
										unk_0x07C99DDDC3BEDD69();
										iLocal_150 = 0;
										func_102();
										if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
										{
											Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
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
									if (Global_16747 == 0)
									{
										iLocal_150 = 0;
										unk_0x07C99DDDC3BEDD69();
										if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
										{
											Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
										}
										func_99();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
										if (func_135())
										{
											if (Global_2557482 == 0)
											{
												if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
												{
													func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
										{
											func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_98();
										func_97(1);
									}
								}
								else if (Global_14413.f_1 != 9)
								{
									if (Global_16746 == 1)
									{
										if (Global_16745 == 0)
										{
											func_96();
										}
									}
									else if ((Global_2891 - Global_2890) > Global_2892)
									{
										if (func_95(2, Global_14381, 0))
										{
											if (func_94() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0xADD55DEFB7B8CB4F(0);
												unk_0xE24358A92698B60D(iLocal_112);
												iLocal_143 = 0;
												if (Global_16745 == 0)
												{
													func_101();
													Global_16745 = 1;
													unk_0xFA40EE73003A9B13(0, 1);
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
													func_127(Global_14394, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x8E9825258F5C145C())
										{
											func_89();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x8E9825258F5C145C())
									{
										func_89();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
										{
											func_89();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0xB56FEBC510E7E9DE(Global_2283, 28))
									{
										func_89();
										iLocal_102 = 0;
									}
									if (Global_16745 == 1)
									{
										func_82();
									}
									else if (Global_14413.f_1 > 4)
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
												if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
												{
													if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
													{
														func_126(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x3EAC9995EC220C5A();
														while (unk_0x3EAC9995EC220C5A() < (iLocal_135 + iLocal_137) && Global_14413.f_1 > 3)
														{
															func_122();
															func_105();
															func_77();
															unk_0xC08831A338A1D76E();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_135())
												{
													if (Global_2557482 == 0)
													{
														if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
														{
															func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
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
											unk_0x573691DB812DC8AA(&Global_2283, 18);
											if (Global_16745 == 0)
											{
												func_90(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_16745 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_16748 == 0)
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
					if (Global_14413.f_1 > 3)
					{
						if (Global_16746 == 1)
						{
							if (Global_16745 == 0)
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
					if (unk_0x48318B6DD4499562() || unk_0xBB3DCD23C363D187())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0xF10A9EEADE6FD3EB() || unk_0xA24A81C5933F1B29())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0x2C063B4379F0C076())
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
					iVar0 = unk_0x57532473D046D7AE();
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
					if (unk_0x618071F6827C232E(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
					}
					if (unk_0x618071F6827C232E(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0xCCA0765A3DB2A871(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_154 = 0;
							unk_0x16ACFE79C302F987("Gallery");
							unk_0xACDAF406C8CBFE12();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0xA24A81C5933F1B29())
					{
						if (unk_0x618071F6827C232E(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x618071F6827C232E(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0xA24A81C5933F1B29())
					{
						if (unk_0x618071F6827C232E(2, Global_14385))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							if (unk_0xB56FEBC510E7E9DE(Global_2284, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x3EAC9995EC220C5A();
							unk_0xF045BFDDA5E88F97(1);
						}
					}
				}
				else if (unk_0x618071F6827C232E(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_90(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x3EAC9995EC220C5A();
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			Global_16745 = 0;
			Global_16746 = 0;
			Global_16748 = 0;
			unk_0xD2E03CEA477E4E3D(&uLocal_140);
			unk_0xD2E03CEA477E4E3D(&uLocal_141);
			unk_0xADD55DEFB7B8CB4F(0);
			if (Global_14573 == 1)
			{
				unk_0x573691DB812DC8AA(&Global_2283, 17);
			}
			else
			{
				unk_0xA5F70A8B83BDFA49(&Global_2283, 17);
			}
			unk_0xFA40EE73003A9B13(0, 1);
			unk_0x75DB0CE3FFF922AB(unk_0x8ACD527A7E574590(), 1);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 3);
			unk_0xA5F70A8B83BDFA49(&Global_2558757, 3);
			unk_0x2CFB33EDB2933AD4(15);
			Global_16749 = 1;
			unk_0xE24358A92698B60D(iLocal_112);
			unk_0xA92DDFCD9C825944(iLocal_112);
			unk_0x07C99DDDC3BEDD69();
			func_92();
			unk_0x5751DB4C77976313(0);
			unk_0xC826DF2631CACF67(0);
			unk_0x4FB64D40EF5E12D8(1f);
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				unk_0xDB661C5591B418B0(unk_0x77F050A399DB77ED(), "Mood_Normal_1", 0);
				unk_0xC0F0E9FED24E7138(unk_0x77F050A399DB77ED());
			}
			if (Global_2557482 > 0 && Global_2557482 < 13)
			{
				unk_0x18D66253D62D657B(sLocal_33[Global_2557482]);
			}
			unk_0xA5F70A8B83BDFA49(&Global_2283, 18);
			func_90(0, 1);
			if (func_133(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0x2F798BA2098FDADE();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x84A9A2DC69A80C9D(1);
		}
		else if (Global_14413.f_1 > 3)
		{
			unk_0x84A9A2DC69A80C9D(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69317)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x1B5ACB4894956DC7();
	iVar1 = unk_0x7DF7F572759C0E1B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2558965 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = unk_0xBF7DC20DA70354C4(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x79C4AFA1592CF3E3();
			iLocal_110 = unk_0xAB283F4500CE8118();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0xEDE19C6ED6E2F478(uLocal_140))
					{
						if (func_135())
						{
							if (Global_2557482 == 0)
							{
								if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
								{
									func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
							{
								func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xEDE19C6ED6E2F478(uLocal_140))
				{
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0x07C99DDDC3BEDD69();
			break;
		
		case 1:
			if (!unk_0x27EB300D83772332())
			{
				unk_0xA98BC8ED930E21F6("CELL_SPINNER2");
				unk_0x59CB77404932B485(1);
			}
			break;
		
		case 2:
			if (unk_0xB56FEBC510E7E9DE(Global_2284, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_14413.f_1 = 3;
				Global_16749 = 1;
			}
			unk_0x07C99DDDC3BEDD69();
			break;
	}
}

void func_5()
{
	if (func_95(2, Global_14382, 0))
	{
		func_1(0);
		if (unk_0xB56FEBC510E7E9DE(Global_2284, 28))
		{
			unk_0xADD55DEFB7B8CB4F(0);
			unk_0x5AE11BC36633DE4E(0);
			func_102();
			iLocal_127 = 0;
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			}
			func_101();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2284, 14))
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
	if (unk_0xB56FEBC510E7E9DE(Global_2283, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_122();
			unk_0xC08831A338A1D76E();
			func_77();
			func_109();
			func_105();
		}
		unk_0xADD55DEFB7B8CB4F(0);
		func_102();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
		}
		func_100();
		func_101();
	}
	if (func_95(2, Global_14386, 0))
	{
		func_1(0);
		if (func_94() || unk_0xB56FEBC510E7E9DE(Global_2284, 28))
		{
		}
		else
		{
			unk_0xADD55DEFB7B8CB4F(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_102();
			iLocal_127 = 0;
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			}
			func_101();
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
	{
		if (func_95(2, Global_14385, 0))
		{
			func_1(0);
			unk_0xADD55DEFB7B8CB4F(0);
			unk_0x86FB51B425980296(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xC08831A338A1D76E();
			func_122();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xC08831A338A1D76E();
			func_122();
			unk_0x60BA1BE7A7D299C8();
			unk_0xF7B98BF773B92B4F();
			Global_16749 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_90(0, 1);
			Global_16745 = 1;
			unk_0xFA40EE73003A9B13(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0x573691DB812DC8AA(&Global_2283, 9);
			iLocal_142 = 0;
			func_127(Global_14394, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0xBBEB613A917D7EE8(-1, "Menu_Accept", &Global_14402, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x7FAEFC2A1124B9C2(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16750 = 1;
	unk_0xFA40EE73003A9B13(0, 1);
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
	if (Global_14413.f_1 < 4)
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
	
	if (unk_0x417D84639C1F982B(2))
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
		fLocal_73 = unk_0x7DDEB566E0BA7997();
		fLocal_74 = unk_0xFF0A476770B22BE9();
		if (iLocal_133 == 0)
		{
			if (unk_0xE721293454745300(2, iVar0) && !unk_0xE721293454745300(2, iVar1))
			{
				iLocal_133 = 1;
				func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(2, 179, 1), "CELL_287");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0x758017413321C628(uLocal_141, "SET_MAX_WIDTH");
				unk_0xBA93E45C163C745D(fLocal_77);
				unk_0x098CA28C04E62E55();
				func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xE721293454745300(2, iVar0) || unk_0xE721293454745300(2, iVar1))
		{
			iLocal_133 = 0;
			func_100();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0xE721293454745300(2, iVar1) && !unk_0xE721293454745300(2, iVar0))
			{
				iLocal_134 = 1;
				func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(2, 179, 1), "CELL_287");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(0, 177, 1), "CELL_281");
				}
				func_59();
				unk_0x758017413321C628(uLocal_141, "SET_MAX_WIDTH");
				unk_0xBA93E45C163C745D(fLocal_77);
				unk_0x098CA28C04E62E55();
				func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xE721293454745300(2, iVar1) || unk_0xE721293454745300(2, iVar0))
		{
			iLocal_134 = 0;
			func_100();
		}
	}
	else
	{
		unk_0x8925C274703E7EF6(0, 2, 1);
		unk_0x8925C274703E7EF6(0, 1, 1);
	}
	if (unk_0x18670847D587698A(2))
	{
		func_100();
	}
	func_109();
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0xD214B72C983BCE75(unk_0x77F050A399DB77ED(), 200, 1);
	}
	if (unk_0x618071F6827C232E(2, 183) && iLocal_156 == 0)
	{
		unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
			{
				if (unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
				{
					unk_0xA5F70A8B83BDFA49(&Global_2558757, 2);
					if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
					{
						func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x573691DB812DC8AA(&Global_2558757, 2);
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
			unk_0x758017413321C628(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x360FCC9A8FE84159(0);
			func_58("CELL_FOCUS");
			unk_0x360FCC9A8FE84159(1);
			unk_0x098CA28C04E62E55();
		}
		if (!func_57(14))
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2558757, 10))
			{
				if ((Global_69317 == 0 && unk_0xB1A77D5C890711F9(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0x758017413321C628(uLocal_140, "SET_FOCUS_LOCK");
					unk_0x360FCC9A8FE84159(1);
					unk_0xC976485333F81CE8("CELL_ACTTL");
					unk_0x82E0649BF28E05D3(unk_0x366B33759CCFE37B(&Global_2559465));
					unk_0xC8C5D5B9E15EB2E2();
					unk_0x360FCC9A8FE84159(0);
					unk_0x098CA28C04E62E55();
					unk_0xA5F70A8B83BDFA49(&Global_2558757, 10);
				}
			}
		}
		else if (unk_0xB56FEBC510E7E9DE(Global_2558757, 10))
		{
			unk_0xA5F70A8B83BDFA49(&Global_2558757, 10);
		}
		iLocal_66 = unk_0x3EAC9995EC220C5A();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				Local_70 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
				if (unk_0xA2490B3CE6382FBB(Local_70, Local_67, 1) > 5f)
				{
					Global_14413.f_1 = 3;
					unk_0xADD55DEFB7B8CB4F(0);
				}
				iLocal_65 = unk_0x3EAC9995EC220C5A();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0xE721293454745300(0, 182))
		{
			unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
			iLocal_132 = 0;
			unk_0x758017413321C628(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x360FCC9A8FE84159(0);
			func_58("CELL_FOCUS");
			unk_0x360FCC9A8FE84159(1);
			unk_0x098CA28C04E62E55();
		}
	}
	else if (unk_0xE721293454745300(0, 182))
	{
		unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
		iLocal_132 = 1;
		if (!func_57(14))
		{
			unk_0x758017413321C628(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x360FCC9A8FE84159(1);
			func_58("CELL_FOCUS");
			unk_0x360FCC9A8FE84159(1);
			unk_0x098CA28C04E62E55();
		}
	}
	if (func_135())
	{
		if (unk_0x618071F6827C232E(2, 186) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
					{
						unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
						unk_0xDB661C5591B418B0(unk_0x77F050A399DB77ED(), "Mood_Normal_1", 0);
						unk_0xC0F0E9FED24E7138(unk_0x77F050A399DB77ED());
						if (Global_14413 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xB7A83E90E95B3E76(unk_0x77F050A399DB77ED(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xB7A83E90E95B3E76(unk_0x77F050A399DB77ED(), 1);
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
											unk_0xDB661C5591B418B0(unk_0x77F050A399DB77ED(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0xDB661C5591B418B0(unk_0x77F050A399DB77ED(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0xDB661C5591B418B0(unk_0x77F050A399DB77ED(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0xDB661C5591B418B0(unk_0x77F050A399DB77ED(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
					{
						unk_0xDB661C5591B418B0(unk_0x77F050A399DB77ED(), "Mood_Normal_1", 0);
						unk_0xC0F0E9FED24E7138(unk_0x77F050A399DB77ED());
						unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
					}
				}
			}
		}
		if (unk_0x618071F6827C232E(2, 185) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x35D1CAD6ADAB6491(sLocal_19[Global_2557481], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x5751DB4C77976313(1);
							unk_0xC826DF2631CACF67(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0x5751DB4C77976313(0);
						unk_0xC826DF2631CACF67(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0x5751DB4C77976313(1);
					unk_0xC826DF2631CACF67(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0x5751DB4C77976313(0);
					unk_0xC826DF2631CACF67(0);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		if (unk_0x618071F6827C232E(0, 172) && iLocal_156 == 0)
		{
			if (func_135())
			{
				Global_2557482++;
				unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
			}
			if (Global_2557482 == 13)
			{
				func_97(0);
				unk_0x4FB64D40EF5E12D8(1f);
				unk_0x18D66253D62D657B(sLocal_33[(Global_2557482 - 1)]);
				Global_2557482 = 0;
				func_55();
				if (iLocal_47 == 1)
				{
					unk_0xA5F70A8B83BDFA49(&Global_2558757, 2);
					iLocal_47 = 0;
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2557482 > 0 && Global_2557482 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0x011CAFBB4767F059(sLocal_33[Global_2557482], 0);
			}
		}
	}
	if (Global_2557482 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0x234DE5FAACE83930(sLocal_33[Global_2557482]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0xFB30FA50814DE733())
				{
					func_97(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0x573691DB812DC8AA(&Global_2558757, 2);
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x4FB64D40EF5E12D8(0.25f);
				unk_0xF0C4B26898E1C6CE(sLocal_33[Global_2557482], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_2557482 == 1 || Global_2557482 == 3)
			{
			}
			if (Global_2557482 == 2 || Global_2557482 == 4)
			{
			}
		}
	}
	if (unk_0x618071F6827C232E(0, 173) && iLocal_156 == 0)
	{
		if (func_135())
		{
			func_92();
			Global_2557481++;
			unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
		}
		if (Global_2557481 == 13)
		{
			Global_2557481 = 0;
		}
		if (Global_2557481 == 0)
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
	if (unk_0x09097C4EB51A520B(0, 184) && iLocal_156 == 0)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
			{
				Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
				unk_0xBBEB613A917D7EE8(-1, "Menu_Navigate", &Global_14402, 1);
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_126(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x3EAC9995EC220C5A();
				while (unk_0x3EAC9995EC220C5A() < (iLocal_135 + iLocal_139) && Global_14413.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					unk_0xC08831A338A1D76E();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0xE24358A92698B60D(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					unk_0x573691DB812DC8AA(&Global_2285, 3);
					iLocal_65 = unk_0x3EAC9995EC220C5A();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					unk_0xA5F70A8B83BDFA49(&Global_2285, 3);
				}
				iLocal_135 = unk_0x3EAC9995EC220C5A();
				while (unk_0x3EAC9995EC220C5A() < (iLocal_135 + iLocal_137) && Global_14413.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					unk_0xC08831A338A1D76E();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_126(uLocal_140, "OPEN_SHUTTER");
				if (func_135())
				{
					if (Global_2557482 == 0)
					{
						if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
						{
							func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
				{
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_105();
				func_122();
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
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
			if (unk_0x618071F6827C232E(0, 40) || unk_0x618071F6827C232E(0, 41))
			{
				fLocal_114 = unk_0x93D37D2E659B22CC();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x4FB4BC44492DEE8D(iLocal_112))
					{
						unk_0xBBEB613A917D7EE8(iLocal_112, "Camera_Zoom", &Global_14402, 1);
					}
				}
				else
				{
					unk_0xE24358A92698B60D(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0xE721293454745300(0, 40) || unk_0xE721293454745300(0, 41))
		{
			fLocal_114 = unk_0x93D37D2E659B22CC();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x4FB4BC44492DEE8D(iLocal_112))
				{
					unk_0xBBEB613A917D7EE8(iLocal_112, "Camera_Zoom", &Global_14402, 1);
				}
			}
			else
			{
				unk_0xE24358A92698B60D(iLocal_112);
			}
		}
		else
		{
			unk_0xE24358A92698B60D(iLocal_112);
		}
	}
	if (func_95(2, Global_14382, 0))
	{
		fLocal_75 = unk_0x7DDEB566E0BA7997();
		fLocal_76 = unk_0xFF0A476770B22BE9();
		unk_0x86FB51B425980296(0, 0);
		unk_0x573691DB812DC8AA(&Global_2283, 21);
		unk_0xE24358A92698B60D(iLocal_112);
		iLocal_127 = 1;
		func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xBBEB613A917D7EE8(-1, "Camera_Shoot", &Global_14402, 1);
		func_126(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0x10A6F9B0D827F1EB(Local_84, 0);
		if (!func_135())
		{
			func_92();
		}
		Global_16748 = 1;
		unk_0xFA40EE73003A9B13(0, 1);
		while (Global_16747 < 6 && Global_14413.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			func_109();
			unk_0xC08831A338A1D76E();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x5D6CFDE9FC4E178C(0, 0);
		if (Global_14355)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x3EAC9995EC220C5A();
		while (unk_0x3EAC9995EC220C5A() < (iLocal_135 + iLocal_138) && Global_14413.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			unk_0xC08831A338A1D76E();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_126(uLocal_140, "OPEN_SHUTTER");
		unk_0xA5F70A8B83BDFA49(&Global_2283, 21);
		func_100();
		if (Global_14413.f_1 > 3)
		{
			if (Global_69317)
			{
				func_20(1076, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x2DE8883060AD8C67(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x2DE8883060AD8C67(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x2DE8883060AD8C67(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_97(0);
		}
		func_105();
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
	{
		if (func_95(2, Global_14385, 0))
		{
			unk_0x86FB51B425980296(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xC08831A338A1D76E();
			func_122();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xC08831A338A1D76E();
			func_122();
			unk_0x60BA1BE7A7D299C8();
			unk_0xF7B98BF773B92B4F();
			Global_16749 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16745 = 1;
			unk_0xFA40EE73003A9B13(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0x573691DB812DC8AA(&Global_2283, 9);
			unk_0xADD55DEFB7B8CB4F(0);
			iLocal_142 = 0;
			func_127(Global_14394, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_15(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_14(unk_0x77F050A399DB77ED());
			if (func_13(iVar0) && (!func_57(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_13(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
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
		return Global_99250.f_32503[iParam0 /*29*/];
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
		Global_2440882[iVar0] = iParam0;
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
		if (Global_2440882[iVar1] == 0)
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
	if (Global_1315898)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315910) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_14350 = { Global_14366[Global_14358 /*3*/] };
	func_90(0, 1);
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	if (!unk_0xB56FEBC510E7E9DE(Global_2284, 28))
	{
		if (unk_0x94EBBBE6BBF5A445() == 0)
		{
			if (unk_0x48318B6DD4499562())
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
		func_22(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347555[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347561[func_25(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347567[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347573[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347531[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347537[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347543[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347549[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347507[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347513[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347519[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347525[func_25(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347579[func_25(uParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347585[func_25(uParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347591[func_25(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347597[func_25(uParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347603[func_25(uParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347609[func_25(uParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347615[func_25(uParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2488752[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2488752[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2488752[2 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2488752[3 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3683:
			Global_2488803[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347621[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347627[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347633[func_25(uParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347639[func_25(uParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2488777[0 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2488777[1 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2488777[2 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2488777[3 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2488777[4 /*5*/][func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1347488)
	{
		switch (iParam0)
		{
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
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2902:
			case 3030:
			case 3683:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
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
	uVar0 = Global_2466327[iParam0 /*5*/][func_25(uParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
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
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312746;
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
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 176, 1), "CELL_280");
		if (iLocal_131)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
				{
					if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_69317 == 0 && unk_0xB1A77D5C890711F9(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
			{
				if (!unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x7DD16933DB23299D(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x7DD16933DB23299D(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x7DD16933DB23299D(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x7DD16933DB23299D(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x758017413321C628(uLocal_141, "SET_MAX_WIDTH");
		unk_0xBA93E45C163C745D(fLocal_77);
		unk_0x098CA28C04E62E55();
		func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x7DD16933DB23299D(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_44(Global_2489300, Global_2489301))
		{
			if (iParam0 == 0 || !func_30(Global_2489300, Global_2489301, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x77F050A399DB77ED(), iParam0, iParam1, bParam2, bParam3, bParam4);
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
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0xDF1398076E26B0E4(iParam0) == joaat("mp_f_freemode_01"))
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
		if (unk_0x4C779B19E6DDCDA2())
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
	if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB2833E96F49D3CDC(iParam0, 1);
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
	if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB7A83E90E95B3E76(iParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB7A83E90E95B3E76(iParam0, 0);
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
						func_43(uParam3, 60, 1);
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
						func_43(uParam3, 60, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 60, 1);
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
						func_43(uParam3, 60, 1);
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
						func_41(uParam2, 60, 1);
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
						func_43(uParam3, 60, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 60, 1);
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
						func_43(uParam3, 60, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 60, 1);
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
						func_43(uParam3, 60, 1);
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
						func_41(uParam2, 60, 1);
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
							break;
					}
					break;
				
				case 5:
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
							func_43(uParam3, 60, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 60, 1);
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
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 60, 1);
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
							break;
					}
					break;
				
				case 26:
					switch (iParam5)
					{
						case 0:
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 60, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 60, 1);
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
				
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
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
							func_43(uParam3, 60, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
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
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
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
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 60, 1);
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
							break;
						
						case 2:
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 60, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
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
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
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
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
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
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
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
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
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
							func_41(uParam2, 60, 1);
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
							func_43(uParam3, 60, 1);
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
							func_41(uParam2, 60, 1);
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
					func_39(2, 26, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 27, uParam2, uParam3, uParam4, 0, 0);
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
		unk_0x573691DB812DC8AA(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
		unk_0x573691DB812DC8AA(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x7DD16933DB23299D(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	if (Global_1715994 == 1)
	{
		fParam0 = -1f;
	}
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x7DD16933DB23299D(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 183, 1), "CELL_GRID");
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_69317 == 0 && unk_0xB1A77D5C890711F9(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0x758017413321C628(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x360FCC9A8FE84159(1);
			unk_0xC976485333F81CE8("CELL_ACTTL");
			unk_0x82E0649BF28E05D3(unk_0x366B33759CCFE37B(&Global_2559465));
			unk_0xC8C5D5B9E15EB2E2();
			unk_0x360FCC9A8FE84159(0);
			unk_0x098CA28C04E62E55();
		}
	}
}

void func_48(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x7DD16933DB23299D(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(0, 177, 1), "CELL_281");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 176, 1), "CELL_280");
	unk_0x758017413321C628(uLocal_141, "SET_MAX_WIDTH");
	unk_0xBA93E45C163C745D(fLocal_77);
	unk_0x098CA28C04E62E55();
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
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(2, 179, 1), "CELL_287");
		if (iLocal_131)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
				{
					if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_69317 == 0 && unk_0xB1A77D5C890711F9(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) || unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
			{
				if (!unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x7DD16933DB23299D(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED()) == 2)
			{
				if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x7DD16933DB23299D(2, 183, 1), "CELL_GRID");
				func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
				func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x7DD16933DB23299D(0, 39, 1), "CELL_284");
				if (func_135())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_63)
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 182, 1), "CELL_FOCUS");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(4f);
						func_45(5f);
						func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x7DD16933DB23299D(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x758017413321C628(uLocal_141, "SET_MAX_WIDTH");
		unk_0xBA93E45C163C745D(fLocal_77);
		unk_0x098CA28C04E62E55();
		func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(2, 179, 1), "CELL_287");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 177, 1), "CELL_281");
	unk_0x758017413321C628(uLocal_141, "SET_MAX_WIDTH");
	unk_0xBA93E45C163C745D(fLocal_77);
	unk_0x098CA28C04E62E55();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_131)
	{
		unk_0xABF261CA61470DE0(fLocal_73, 1065353216);
		unk_0x8793DE27084C2CBD(fLocal_74);
	}
}

void func_53(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_1612768.f_79566 == 1)
	{
	}
	else if (Global_1612768.f_79567 == 1)
	{
	}
	else
	{
		unk_0x50E09296DFC2A725(iParam0);
	}
}

void func_54()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x35D1CAD6ADAB6491(sLocal_19[Global_2557481], "phone_cam12DUMMY"))
		{
			unk_0x5751DB4C77976313(0);
			unk_0xC826DF2631CACF67(0);
		}
		else
		{
			unk_0x5751DB4C77976313(1);
			unk_0xC826DF2631CACF67(1);
		}
	}
}

void func_55()
{
	func_127(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_135())
	{
		if (Global_1715994 == 0)
		{
			unk_0x124DCCB446B6B289("phone_cam");
		}
	}
}

int func_56()
{
	if (func_57(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if ((unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/] || unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/]) || unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
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
	return Global_35700 == iParam0;
}

void func_58(char* sParam0)
{
	unk_0xC976485333F81CE8(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

void func_59()
{
	if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x417D84639C1F982B(2))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 30, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEC039E3BEB450805(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 1, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEC039E3BEB450805(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (unk_0x417D84639C1F982B(2) || unk_0xA24A81C5933F1B29())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x7DD16933DB23299D(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xEC039E3BEB450805(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x7DD16933DB23299D(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x7DD16933DB23299D(0, 39, 1), "CELL_LT_LSTICKZ");
		func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x7DD16933DB23299D(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_61(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x758017413321C628(uParam0, sParam1);
	unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x0AAC2160036975D9(uParam3))
	{
		func_62(uParam3);
	}
	if (!unk_0x0AAC2160036975D9(sParam4))
	{
		func_58(sParam4);
	}
	unk_0x098CA28C04E62E55();
}

void func_62(var uParam0)
{
	unk_0x2747B3A98BE1082E(uParam0);
}

void func_63()
{
	if (Global_69317)
	{
		switch (Global_16829)
		{
			case 0:
				if (unk_0x417D84639C1F982B(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16829++;
				break;
			
			case 1:
				if (!unk_0x8E9825258F5C145C())
				{
					if (unk_0x417D84639C1F982B(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16829++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16828)
		{
			case 0:
				if (unk_0x417D84639C1F982B(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16828++;
				break;
			
			case 1:
				if (!unk_0x8E9825258F5C145C())
				{
					if (unk_0x417D84639C1F982B(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16828++;
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
	
	if (unk_0x417D84639C1F982B(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0xE721293454745300(2, iVar10) && !unk_0xE721293454745300(2, iVar9))
	{
		unk_0x6E20845D23D3DFD4(0, 2, 1);
		unk_0x6E20845D23D3DFD4(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 2)) * 127;
		if (unk_0x417D84639C1F982B(2))
		{
			if (unk_0x737E62570AEFEFAA(iVar0) > 28 || unk_0x737E62570AEFEFAA(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x737E62570AEFEFAA(iVar2) > 28 || unk_0x737E62570AEFEFAA(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0x417D84639C1F982B(2))
		{
			fVar7 = unk_0x731EA99C28C37D4B(0, 290);
			fVar8 = unk_0x731EA99C28C37D4B(0, 291);
			if (unk_0xD71D2F9EE73B2497())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x737E62570AEFEFAA(iVar0) > 28 || unk_0x737E62570AEFEFAA(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_67(fVar5);
		func_66(fVar6);
		func_65(fVar4);
	}
	else if (!unk_0xE721293454745300(2, iVar9))
	{
		unk_0x8925C274703E7EF6(0, 2, 1);
		unk_0x8925C274703E7EF6(0, 1, 1);
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
	unk_0x98BF57B9545F24D4(fLocal_161);
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
	unk_0x0A36B158F9D2D28A(fLocal_162);
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
	unk_0x75B5A06FBFCF64A9(fLocal_163);
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
	
	if (unk_0x417D84639C1F982B(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0xE721293454745300(2, iVar10))
		{
			if (unk_0x618071F6827C232E(2, 178))
			{
				unk_0x84827A3FE318AAB2(0.5f);
				unk_0x986D0930A021A8C0(0.85f);
				unk_0x12B9B7355F1B2DDA(0.5f);
				unk_0x63AF0B64EA676FD5(-0.25f);
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
	if (unk_0xE721293454745300(2, iVar10) && !unk_0xE721293454745300(2, iVar11))
	{
		if (unk_0x618071F6827C232E(2, 178))
		{
			unk_0x84827A3FE318AAB2(0.5f);
			unk_0x986D0930A021A8C0(0.85f);
			unk_0x12B9B7355F1B2DDA(0.5f);
			unk_0x63AF0B64EA676FD5(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0x6E20845D23D3DFD4(0, 2, 1);
		unk_0x6E20845D23D3DFD4(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 2)) * 127;
		if (unk_0x417D84639C1F982B(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 39)) * 127;
			fVar8 = unk_0x731EA99C28C37D4B(0, 290);
			fVar9 = unk_0x731EA99C28C37D4B(0, 291);
			if (unk_0xD71D2F9EE73B2497())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x737E62570AEFEFAA(iVar2) > 15 || unk_0x737E62570AEFEFAA(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x737E62570AEFEFAA(iVar0) > 28 || unk_0x737E62570AEFEFAA(iVar1) > 28)
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
	else if (!unk_0xECDBFACBE670BD70(2, iVar11))
	{
		unk_0x8925C274703E7EF6(0, 2, 1);
		unk_0x8925C274703E7EF6(0, 1, 1);
	}
	if (!unk_0xECDBFACBE670BD70(2, iVar10) && !unk_0xECDBFACBE670BD70(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x731EA99C28C37D4B(0, 293)) * 127;
		if (unk_0x737E62570AEFEFAA(iVar2) > 28 || unk_0x737E62570AEFEFAA(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x737E62570AEFEFAA(iVar0) > 28 || unk_0x737E62570AEFEFAA(iVar1) > 28)
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
	unk_0x12B9B7355F1B2DDA(fLocal_159);
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
	unk_0x63AF0B64EA676FD5(fLocal_160);
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
	unk_0x986D0930A021A8C0(fLocal_158);
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
	unk_0x84827A3FE318AAB2(fLocal_157);
}

void func_73()
{
	if (Global_69577 || Global_69578)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_1612768.f_79566 == 0 && Global_1612768.f_79567 == 0)
			{
				unk_0xE636AA747867BC3D(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_14355)
		{
			if (Global_14571)
			{
				if (iLocal_150 == 0)
				{
					if (Global_14413.f_1 > 3)
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
	else if (Global_14355)
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
	unk_0x978803CE12B5FCBA(sParam2);
	unk_0x1AC4FC30A9B7577A(fParam0, fParam1, iParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x812DA59718C7CF24(0.4f, 0.4f);
	unk_0x52E12C3A7A66F903(0, 0, 0, 0, 0);
	unk_0xB10C338B29F8D8D2(1, 0, 0, 0, 205);
	unk_0x72EF5D316D39CA40(1);
	unk_0x7C2084C68CEC316C(0);
	unk_0x3F570C434DAE03B3(iParam0, iParam1, iParam2, iParam3);
}

void func_76()
{
	unk_0xABF261CA61470DE0(fLocal_75, 1065353216);
	unk_0x8793DE27084C2CBD(fLocal_76);
}

void func_77()
{
	unk_0x6E20845D23D3DFD4(0, 25, 1);
	unk_0x6E20845D23D3DFD4(0, 44, 1);
	unk_0x6E20845D23D3DFD4(0, 3, 1);
	unk_0x6E20845D23D3DFD4(0, 4, 1);
	unk_0x6E20845D23D3DFD4(0, 5, 1);
	unk_0x6E20845D23D3DFD4(0, 6, 1);
	unk_0x6E20845D23D3DFD4(0, 1, 1);
	unk_0x6E20845D23D3DFD4(0, 2, 1);
	unk_0x6E20845D23D3DFD4(0, 39, 1);
	unk_0x6E20845D23D3DFD4(0, 47, 1);
	unk_0x6E20845D23D3DFD4(0, 56, 1);
}

void func_78()
{
	Local_87 = { Global_14366[Global_14358 /*3*/] };
	if (Global_14355)
	{
		if (func_81())
		{
			unk_0x3E337B53281459DC(&Local_93);
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
		if (unk_0xB56FEBC510E7E9DE(Global_2285, 4))
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
			if (unk_0xB56FEBC510E7E9DE(Global_2285, 4))
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
			Local_87 = { Global_14359[Global_14358 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x4317F0DBC6457B31(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0x10A6F9B0D827F1EB(Local_84, 0);
			if (!unk_0xB56FEBC510E7E9DE(Global_2283, 22))
			{
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
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
	if (unk_0xB56FEBC510E7E9DE(Global_2284, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x758017413321C628(uLocal_141, "SET_MAX_WIDTH");
	unk_0xBA93E45C163C745D(fLocal_77);
	unk_0x098CA28C04E62E55();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_80()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xB56FEBC510E7E9DE(Global_2284, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x7DD16933DB23299D(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x7DD16933DB23299D(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x7DD16933DB23299D(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x758017413321C628(uLocal_141, "SET_MAX_WIDTH");
	unk_0xBA93E45C163C745D(fLocal_77);
	unk_0x098CA28C04E62E55();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						if (Global_15712 != 2)
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
		if (unk_0x0B6380E19682EA99(unk_0x77F050A399DB77ED(), 0))
		{
			return 0;
		}
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (!unk_0x6B38913015031866())
			{
				if (unk_0xAB5BBCD9D3B6625D(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED()) || unk_0xB02023EA36B0E559(unk_0x77F050A399DB77ED())) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x7D041A1EBC50222E(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
		if (Global_98298)
		{
			return 0;
		}
	}
	if (Global_69317)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x1B5ACB4894956DC7();
	iVar1 = unk_0x7DF7F572759C0E1B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x6B38913015031866()))
	{
		iVar2 = 1;
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				iVar3 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
				if ((((((((unk_0x9FAD4C61F8FD96DE(unk_0xDF1398076E26B0E4(iVar3)) || unk_0x583E994764B3211E(unk_0xDF1398076E26B0E4(iVar3))) || unk_0x93FA2C9C44279C1C(unk_0xDF1398076E26B0E4(iVar3))) || unk_0xDF1398076E26B0E4(iVar3) == joaat("seashark")) || unk_0xDF1398076E26B0E4(iVar3) == joaat("seashark2")) || unk_0xDF1398076E26B0E4(iVar3) == joaat("rhino")) || unk_0xDF1398076E26B0E4(iVar3) == joaat("submersible")) || unk_0xDF1398076E26B0E4(iVar3) == joaat("submersible2")) || unk_0xDF1398076E26B0E4(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2558965 || iVar2 == 1)
	{
		if (unk_0xB1A77D5C890711F9(joaat("apptrackify")) > 0 || Global_99250.f_12669.f_89)
		{
			if (unk_0xB1A77D5C890711F9(joaat("michael2")) > 0)
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
	unk_0x6E20845D23D3DFD4(0, 47, 1);
	unk_0xE494527A450B8456(0, Global_14383);
	Local_84 = { Global_14373 };
	Local_87 = { Global_14366[Global_14358 /*3*/] };
	if (func_81())
	{
		unk_0x9C5ACBD3BE03807D(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0x3E337B53281459DC(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14355)
	{
		func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (unk_0xB56FEBC510E7E9DE(Global_2283, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_83();
		}
		if (iLocal_121)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
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
				unk_0x10A6F9B0D827F1EB(Local_78, 0);
				unk_0x4317F0DBC6457B31(Local_81);
			}
			func_90(0, 1);
		}
		else if (func_81() == 0)
		{
			unk_0x10A6F9B0D827F1EB(Local_78, 0);
			unk_0x4317F0DBC6457B31(Local_81);
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
	unk_0x10A6F9B0D827F1EB(Local_78, 0);
}

void func_83()
{
	func_1(0);
	if (func_81() == 0)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2283, 30))
		{
			unk_0x4317F0DBC6457B31(Global_14359[Global_14358 /*3*/]);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14366[Global_14358 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0x10A6F9B0D827F1EB(Local_78, 0);
	}
	Global_16745 = 0;
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	Global_14400 = 1;
	Global_16748 = 0;
	if (Global_14413.f_1 > 4)
	{
		Global_14413.f_1 = 6;
		Global_14391 = 1;
		func_84();
	}
	if (unk_0xEDE19C6ED6E2F478(uLocal_140))
	{
		func_126(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0xC08831A338A1D76E();
	unk_0xD2E03CEA477E4E3D(&uLocal_141);
	unk_0xD2E03CEA477E4E3D(&uLocal_140);
	if (Global_14573 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 17);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 17);
	}
	unk_0xA5F70A8B83BDFA49(&Global_2283, 18);
	unk_0xA5F70A8B83BDFA49(&Global_2283, 21);
	unk_0xFA40EE73003A9B13(0, 1);
	unk_0xA5F70A8B83BDFA49(&Global_2285, 3);
	unk_0xA5F70A8B83BDFA49(&Global_2558757, 3);
	unk_0xADD55DEFB7B8CB4F(0);
	unk_0x75DB0CE3FFF922AB(unk_0x8ACD527A7E574590(), 1);
	unk_0x2CFB33EDB2933AD4(15);
	Global_16749 = 1;
	unk_0xE24358A92698B60D(iLocal_112);
	unk_0xA92DDFCD9C825944(iLocal_112);
	unk_0x07C99DDDC3BEDD69();
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0xDB661C5591B418B0(unk_0x77F050A399DB77ED(), "Mood_Normal_1", 0);
		unk_0xC0F0E9FED24E7138(unk_0x77F050A399DB77ED());
	}
	func_92();
	unk_0x5751DB4C77976313(0);
	unk_0xC826DF2631CACF67(0);
	unk_0x4FB64D40EF5E12D8(1f);
	if (Global_2557482 > 0 && Global_2557482 < 13)
	{
		unk_0x18D66253D62D657B(sLocal_33[Global_2557482]);
	}
	func_90(0, 1);
	if (func_133(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0x2F798BA2098FDADE();
}

void func_84()
{
	struct<3> Var0;
	
	if (Global_14396 == 1)
	{
		return;
	}
	if (Global_14413.f_1 < 4)
	{
		return;
	}
	while (!unk_0xEDE19C6ED6E2F478(Global_14394))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14413.f_1)
	{
		case 6:
			func_127(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_2888);
			if (Global_2888 == 1)
			{
				func_127(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_127(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xA5F70A8B83BDFA49(&Global_2283, 17);
			}
			else if (Global_69317)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xA5F70A8B83BDFA49(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_87(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_87(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_87(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_87(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x573691DB812DC8AA(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_127(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_87(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xA5F70A8B83BDFA49(&Global_2283, 17);
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 20))
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_86();
				func_127(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_99250.f_12669[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					unk_0x758017413321C628(Global_14394, "SET_DATA_SLOT");
					unk_0x4D57F6B69CCB6D95(4);
					unk_0x4D57F6B69CCB6D95(0);
					unk_0x4D57F6B69CCB6D95(2);
					unk_0xC976485333F81CE8("CELL_CONDFON");
					unk_0x82E0649BF28E05D3(&Global_15727);
					unk_0xC8C5D5B9E15EB2E2();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0x098CA28C04E62E55();
				}
				else if (Global_99250.f_32503[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_99250.f_32503[Global_1598 /*29*/].f_3), &(Global_99250.f_32503[Global_1598 /*29*/].f_7), "CELL_217", &(Global_99250.f_32503[Global_1598 /*29*/].f_3), 0);
				}
				func_127(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_127(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_99250.f_12669[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_86();
				if (Global_15725)
				{
					unk_0x758017413321C628(Global_14394, "SET_DATA_SLOT");
					unk_0x4D57F6B69CCB6D95(4);
					unk_0x4D57F6B69CCB6D95(0);
					unk_0x4D57F6B69CCB6D95(2);
					unk_0xC976485333F81CE8("CELL_CONDFON");
					unk_0x82E0649BF28E05D3(&Global_15727);
					unk_0xC8C5D5B9E15EB2E2();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0x098CA28C04E62E55();
				}
				else
				{
					if (Global_15970)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_99250.f_32503[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_127(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_127(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_99250.f_32503[Global_1598 /*29*/].f_3), &(Global_99250.f_32503[Global_1598 /*29*/].f_7), &Var0, &(Global_99250.f_32503[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_127(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	if (unk_0xEDE19C6ED6E2F478(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xB56FEBC510E7E9DE(Global_2283, 20))
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xA5F70A8B83BDFA49(&Global_2283, 17);
		}
		else
		{
			func_87(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xA5F70A8B83BDFA49(&Global_2283, 17);
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 20))
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_86()
{
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (Global_14413 == 0)
		{
			switch (Global_99250.f_12669[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 0);
					break;
				
				case 2:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 1);
					break;
				
				case 3:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 2);
					break;
				
				case 4:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 3);
					break;
				
				case 5:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 4);
					break;
				
				case 6:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 5);
					break;
				
				case 7:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_99250.f_12669[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 6);
					break;
				
				case 2:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 0);
					break;
				
				case 3:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 1);
					break;
				
				case 4:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 2);
					break;
				
				case 5:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 3);
					break;
				
				case 6:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 4);
					break;
				
				case 7:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_99250.f_12669[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 5);
					break;
				
				case 2:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 6);
					break;
				
				case 3:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 1);
					break;
				
				case 4:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 0);
					break;
				
				case 5:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 2);
					break;
				
				case 6:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 3);
					break;
				
				case 7:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2558963)
			{
				case 1:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 0);
					break;
				
				case 2:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 1);
					break;
				
				case 3:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 2);
					break;
				
				case 4:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 3);
					break;
				
				case 5:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 4);
					break;
				
				case 6:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 5);
					break;
				
				case 7:
					unk_0x43ED60EB9A3298D0(unk_0x8ACD527A7E574590(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_87(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x758017413321C628(uParam0, sParam1);
	unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0AAC2160036975D9(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0x0AAC2160036975D9(iParam8))
	{
		func_58(iParam8);
	}
	if (!unk_0x0AAC2160036975D9(iParam9))
	{
		func_58(iParam9);
	}
	if (!unk_0x0AAC2160036975D9(iParam10))
	{
		func_58(iParam10);
	}
	if (!unk_0x0AAC2160036975D9(iParam11))
	{
		func_58(iParam11);
	}
	unk_0x098CA28C04E62E55();
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xB56FEBC510E7E9DE(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x758017413321C628(Global_14394, "SET_DATA_SLOT");
								unk_0x4D57F6B69CCB6D95(1);
								unk_0x4D57F6B69CCB6D95(iVar0);
								unk_0x4D57F6B69CCB6D95(Global_2290[iVar1 /*15*/].f_10);
								unk_0x4D57F6B69CCB6D95(0);
								func_58(&(Global_2290[iVar1 /*15*/]));
								unk_0x4D57F6B69CCB6D95(iVar2);
								unk_0x098CA28C04E62E55();
							}
							if (Global_2440973)
							{
								if (iVar1 == 14)
								{
									func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_99250.f_12759[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_99250.f_12759[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_99250.f_12759[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69317)
								{
									iVar4 = 0;
									iVar4 = Global_2557491;
									func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36755;
											break;
										
										case 1:
											iVar5 = Global_36756;
											break;
										
										case 2:
											iVar5 = Global_36757;
											break;
										
										default:
											break;
									}
									func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x758017413321C628(Global_14394, "SET_DATA_SLOT");
								unk_0x4D57F6B69CCB6D95(1);
								unk_0x4D57F6B69CCB6D95(iVar0);
								unk_0x4D57F6B69CCB6D95(Global_2290[iVar1 /*15*/].f_10);
								unk_0x4D57F6B69CCB6D95(0);
								func_58(&(Global_2290[iVar1 /*15*/]));
								unk_0x4D57F6B69CCB6D95(Global_2289);
								unk_0x098CA28C04E62E55();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB56FEBC510E7E9DE(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x758017413321C628(Global_14394, "SET_DATA_SLOT");
								unk_0x4D57F6B69CCB6D95(1);
								unk_0x4D57F6B69CCB6D95(iVar0);
								unk_0x4D57F6B69CCB6D95(Global_2290[iVar1 /*15*/].f_10);
								unk_0x4D57F6B69CCB6D95(0);
								func_58(&(Global_2290[iVar1 /*15*/]));
								unk_0x4D57F6B69CCB6D95(iVar6);
								unk_0x098CA28C04E62E55();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB56FEBC510E7E9DE(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x758017413321C628(Global_14394, "SET_DATA_SLOT");
								unk_0x4D57F6B69CCB6D95(1);
								unk_0x4D57F6B69CCB6D95(iVar0);
								unk_0x4D57F6B69CCB6D95(Global_2290[iVar1 /*15*/].f_10);
								unk_0x4D57F6B69CCB6D95(0);
								func_58(&(Global_2290[iVar1 /*15*/]));
								unk_0x4D57F6B69CCB6D95(iVar7);
								unk_0x098CA28C04E62E55();
							}
							else if (iVar1 == 8)
							{
								unk_0x758017413321C628(Global_14394, "SET_DATA_SLOT");
								unk_0x4D57F6B69CCB6D95(1);
								unk_0x4D57F6B69CCB6D95(iVar0);
								unk_0x4D57F6B69CCB6D95(Global_2290[iVar1 /*15*/].f_10);
								unk_0x4D57F6B69CCB6D95(0);
								func_58(&(Global_2290[iVar1 /*15*/]));
								unk_0x4D57F6B69CCB6D95(42);
								unk_0x098CA28C04E62E55();
							}
							else if ((iVar1 == 23 && unk_0x35D1CAD6ADAB6491(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB56FEBC510E7E9DE(Global_2284, 6))
							{
								unk_0x758017413321C628(Global_14394, "SET_DATA_SLOT");
								unk_0x4D57F6B69CCB6D95(1);
								unk_0x4D57F6B69CCB6D95(iVar0);
								unk_0x4D57F6B69CCB6D95(Global_2290[iVar1 /*15*/].f_10);
								unk_0x4D57F6B69CCB6D95(0);
								func_58(&(Global_2290[iVar1 /*15*/]));
								unk_0x4D57F6B69CCB6D95(42);
								unk_0x098CA28C04E62E55();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1606894.f_1;
								func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_87(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
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
			unk_0xFA40EE73003A9B13(0, 1);
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
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
			if (!unk_0xB56FEBC510E7E9DE(Global_2283, 22))
			{
				unk_0xFA40EE73003A9B13(0, 1);
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
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
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_91(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	if ((Global_1612768.f_79566 == 0 && Global_1612768.f_79567 == 0) && Global_1715994 == 0)
	{
		unk_0x3127460861FB17B2();
	}
}

void func_93(int iParam0, int iParam1)
{
	if (Global_1612768.f_79566 == 1)
	{
	}
	else if (Global_1612768.f_79567 == 1)
	{
	}
	else
	{
		unk_0x5D6CFDE9FC4E178C(iParam0, iParam1);
	}
}

int func_94()
{
	if (unk_0xB56FEBC510E7E9DE(Global_2283, 15))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x618071F6827C232E(iParam0, uParam1) || (iParam2 == 1 && unk_0x09097C4EB51A520B(iParam0, iParam1)))
	{
		if (unk_0x2C063B4379F0C076())
		{
			if (unk_0x4240922EF24527F4() == 0 || (unk_0x5E694571CFF565ED() && unk_0x417D84639C1F982B(2)))
			{
				return 0;
			}
		}
		if (unk_0x4F297F09162EFB5D() || unk_0x29E1357119AD22B2())
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
	if (Global_14355)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_81())
		{
			unk_0x9C5ACBD3BE03807D(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0x3E337B53281459DC(&Local_93);
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
			unk_0x10A6F9B0D827F1EB(Local_78, 0);
			unk_0x4317F0DBC6457B31(Local_81);
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
		unk_0x10A6F9B0D827F1EB(Local_78, 0);
	}
	if (Global_14355)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_81())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0x10A6F9B0D827F1EB(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x4317F0DBC6457B31(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_16746 = 0;
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
				if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
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
		unk_0x10A6F9B0D827F1EB(Local_78, 0);
		Global_16746 = 0;
	}
}

void func_97(bool bParam0)
{
	if (func_135())
	{
		if (bParam0)
		{
			if (!unk_0xFB30FA50814DE733())
			{
				unk_0x785CE832B3541FE1(1);
				if (Global_2557482 > 0 && Global_2557482 < 99)
				{
					unk_0xF0C4B26898E1C6CE(sLocal_33[Global_2557482], 0);
					unk_0x4FB64D40EF5E12D8(0.25f);
				}
			}
		}
		else if (unk_0xFB30FA50814DE733())
		{
			unk_0x785CE832B3541FE1(0);
		}
	}
}

void func_98()
{
	if (Global_2557481 > 0 && Global_2557481 < 99)
	{
		if (Global_1715994 == 0)
		{
			unk_0x124DCCB446B6B289(sLocal_19[Global_2557481]);
		}
	}
}

void func_99()
{
	if (Global_14355)
	{
		iLocal_125 = 0;
		func_55();
		func_90(1, 1);
		func_93(1, 1);
		iLocal_115 = 1;
		Global_16749 = 1;
	}
}

void func_100()
{
	if (iLocal_127 == 0)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2283, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (unk_0x35D1CAD6ADAB6491(&cLocal_145, "DUMMYCOMPARISON"))
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
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0xBBEB613A917D7EE8(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_102()
{
	unk_0x86FB51B425980296(0, 0);
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
	if (Global_14413.f_1 > 3)
	{
		if (!unk_0x4F297F09162EFB5D())
		{
			unk_0x50137349427F6296(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_106()
{
	if (func_57(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_11();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_107(int iParam0)
{
	if (Global_14571)
	{
		func_90(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_108())
	{
		Global_14413.f_1 = 3;
	}
}

int func_108()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	unk_0x6E20845D23D3DFD4(0, 0, 1);
	unk_0x6E20845D23D3DFD4(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0xE494527A450B8456(0, Global_14386);
		unk_0xE494527A450B8456(0, Global_14383);
		unk_0x6E20845D23D3DFD4(0, 278, 1);
		unk_0x6E20845D23D3DFD4(0, 279, 1);
		unk_0x6E20845D23D3DFD4(0, 280, 1);
		unk_0x6E20845D23D3DFD4(0, 281, 1);
		unk_0x6E20845D23D3DFD4(0, 282, 1);
		unk_0x6E20845D23D3DFD4(0, 282, 1);
		unk_0x6E20845D23D3DFD4(0, 284, 1);
		unk_0x6E20845D23D3DFD4(0, 285, 1);
		unk_0x6E20845D23D3DFD4(0, 69, 1);
		unk_0x6E20845D23D3DFD4(0, 70, 1);
		unk_0x6E20845D23D3DFD4(0, 114, 1);
		unk_0x6E20845D23D3DFD4(0, 71, 1);
		unk_0x6E20845D23D3DFD4(0, 72, 1);
		unk_0x6E20845D23D3DFD4(0, 74, 1);
		unk_0x6E20845D23D3DFD4(0, 75, 1);
		unk_0x6E20845D23D3DFD4(0, 76, 1);
		unk_0x6E20845D23D3DFD4(0, 73, 1);
		unk_0x6E20845D23D3DFD4(0, 77, 1);
		unk_0x6E20845D23D3DFD4(0, 78, 1);
		unk_0x6E20845D23D3DFD4(0, 286, 1);
		unk_0x6E20845D23D3DFD4(0, 287, 1);
		unk_0x6E20845D23D3DFD4(0, 79, 1);
		unk_0x6E20845D23D3DFD4(0, 80, 1);
		unk_0x6E20845D23D3DFD4(0, 81, 1);
		unk_0x6E20845D23D3DFD4(0, 82, 1);
		unk_0x6E20845D23D3DFD4(0, 86, 1);
		unk_0x6E20845D23D3DFD4(0, 59, 1);
		unk_0x6E20845D23D3DFD4(0, 60, 1);
		unk_0x6E20845D23D3DFD4(0, 61, 1);
		unk_0x6E20845D23D3DFD4(0, 62, 1);
		unk_0x6E20845D23D3DFD4(0, 63, 1);
		unk_0x6E20845D23D3DFD4(0, 64, 1);
		unk_0x6E20845D23D3DFD4(0, 87, 1);
		unk_0x6E20845D23D3DFD4(0, 88, 1);
		unk_0x6E20845D23D3DFD4(0, 89, 1);
		unk_0x6E20845D23D3DFD4(0, 90, 1);
		unk_0x6E20845D23D3DFD4(0, 107, 1);
		unk_0x6E20845D23D3DFD4(0, 108, 1);
		unk_0x6E20845D23D3DFD4(0, 109, 1);
		unk_0x6E20845D23D3DFD4(0, 110, 1);
		unk_0x6E20845D23D3DFD4(0, 111, 1);
		unk_0x6E20845D23D3DFD4(0, 112, 1);
		unk_0x6E20845D23D3DFD4(0, 113, 1);
		unk_0x6E20845D23D3DFD4(0, 114, 1);
		unk_0x6E20845D23D3DFD4(0, 91, 1);
		unk_0x6E20845D23D3DFD4(0, 92, 1);
		unk_0x6E20845D23D3DFD4(0, 68, 1);
		unk_0x6E20845D23D3DFD4(0, 102, 1);
		unk_0x6E20845D23D3DFD4(0, 136, 1);
		unk_0x6E20845D23D3DFD4(0, 137, 1);
		unk_0x6E20845D23D3DFD4(0, 138, 1);
		unk_0x6E20845D23D3DFD4(0, 139, 1);
		unk_0x6E20845D23D3DFD4(0, 102, 1);
	}
}

int func_110()
{
	var uVar0;
	
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
			if (unk_0x9A2BADF8B8CE0E2A(uVar0, -1))
			{
				return 1;
			}
			else if (!unk_0x07A8845F7F106A38(uVar0, -1) == unk_0x77F050A399DB77ED())
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
	
	func_118(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315885 == 0)
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			return 1;
		}
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_2442895)
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
	if (!unk_0x3A691B47D5DE2593())
	{
		return 1;
	}
	if (func_112() != 0)
	{
		if (unk_0xB1A77D5C890711F9(func_112()) == 0)
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
	return Global_25115;
}

bool func_114()
{
	return Global_2432717.f_573;
}

int func_115(int iParam0)
{
	if (unk_0xF5F50153667BD068(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_2440977;
}

bool func_117()
{
	return Global_2432717.f_568;
}

void func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE8F73785A0FB2F57(1))
	{
		iVar1 = unk_0x6688A198308BEB5E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xA961A8FBAD16D683(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 315:
					func_119(iVar0);
					break;
				
				case 2:
					unk_0xA961A8FBAD16D683(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
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
	
	if (unk_0xA961A8FBAD16D683(1, iParam0, &Var0, 3))
	{
		if (func_121(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0xF555CE342BA0C333(Var0.f_1);
			if (unk_0x1F2158D615BC4B25(iVar3))
			{
				if (unk_0xB42592B9FFEB5EDE(iVar3, 0))
				{
					iVar4 = unk_0xF8D66A34AF0C53A5(iVar3, 0);
					if (unk_0x8F41BA1B6610A17B(iVar4, Var0.f_2) && unk_0xCD9901F3C995D4B9())
					{
						if (func_120(iVar4, &bVar5))
						{
							unk_0x8534CE5144691854(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB84D4C251623B60C(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_120(int iParam0, var uParam1)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x335346A332B62CA2(iParam0))
		{
			if (unk_0xA203F67D4FCA77C8(iParam0))
			{
				unk_0x8D429A827A931AC9(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x95CBA891BCA778AA(iParam0, 0))
		{
			if (unk_0xE8BD4B74271ABDCC(iParam0))
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
	if (unk_0x860CE5C791DC28F5(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x6DF20EAB8093DF19(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_122()
{
	if (iLocal_156 == 1)
	{
		unk_0xCA3D1FCD234B8E0B(7);
		unk_0xCA3D1FCD234B8E0B(1);
		unk_0xCA3D1FCD234B8E0B(3);
		unk_0xCA3D1FCD234B8E0B(4);
		unk_0xCA3D1FCD234B8E0B(6);
		unk_0xCA3D1FCD234B8E0B(8);
		unk_0xCA3D1FCD234B8E0B(9);
		unk_0xCA3D1FCD234B8E0B(2);
	}
	else
	{
		unk_0xC04F3ABD290057B0();
	}
}

void func_123(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

void func_124()
{
	if (func_125())
	{
		unk_0xE33DEAF520AF05BD();
		if (unk_0x8F3EBF2A3ED1B391(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16749 = 1;
			Global_14413.f_1 = 3;
			unk_0x07C99DDDC3BEDD69();
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
				if (unk_0xEDE19C6ED6E2F478(uLocal_140))
				{
					if (func_135())
					{
						if (Global_2557482 == 0)
						{
							if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
							{
								func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 2))
						{
							func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xEDE19C6ED6E2F478(uLocal_140))
			{
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0x07C99DDDC3BEDD69();
	}
}

int func_125()
{
	if (Global_1612768.f_79566 == 1)
	{
		if (Global_69317)
		{
			return 0;
		}
	}
	if (Global_1612768.f_79567 == 1)
	{
		if (Global_69317)
		{
			return 0;
		}
	}
	if (unk_0x48318B6DD4499562() || unk_0xF10A9EEADE6FD3EB())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2284, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_126(var uParam0, char* sParam1)
{
	unk_0x758017413321C628(uParam0, sParam1);
	unk_0x098CA28C04E62E55();
}

void func_127(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x758017413321C628(uParam0, sParam1);
	unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x098CA28C04E62E55();
}

int func_128()
{
	if (Global_69317)
	{
		Global_14413 = 3;
	}
	else
	{
		Global_14413 = func_11();
	}
	if (Global_14413 > 3)
	{
		Global_14413 = 3;
	}
	return Global_99250.f_12669[Global_14413 /*20*/].f_7;
}

void func_129()
{
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 8;
	}
	Global_16748 = 0;
	iLocal_127 = 0;
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		Local_67 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
	}
	if (Global_14355)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_105();
			func_77();
			unk_0xC08831A338A1D76E();
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
		unk_0x573691DB812DC8AA(&Global_2283, 15);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 15);
	}
}

bool func_131()
{
	return Global_1315885;
}

void func_132()
{
}

int func_133(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && bParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_134()
{
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xC8201A94B3738F43(unk_0x77F050A399DB77ED()))
		{
			unk_0x052B307FE35BC588(unk_0x77F050A399DB77ED(), 0, 0);
			unk_0x84827A3FE318AAB2(fLocal_157);
			unk_0x986D0930A021A8C0(fLocal_158);
			unk_0x12B9B7355F1B2DDA(fLocal_159);
		}
		else
		{
			unk_0x84827A3FE318AAB2(fLocal_157);
			unk_0x986D0930A021A8C0(fLocal_158);
			unk_0x12B9B7355F1B2DDA(fLocal_159);
		}
	}
	unk_0x63AF0B64EA676FD5(fLocal_160);
	unk_0x98BF57B9545F24D4(fLocal_161);
	unk_0x0A36B158F9D2D28A(fLocal_162);
	unk_0x75B5A06FBFCF64A9(fLocal_163);
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


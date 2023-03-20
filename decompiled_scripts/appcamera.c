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
	var uLocal_17 = 0;
	char* sLocal_18[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_32[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_46 = 0;
	char* sLocal_47[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	int iLocal_99 = 0;
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
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
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
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	char cLocal_144[16] = "";
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
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
	iLocal_58 = 1;
	bLocal_61 = true;
	bLocal_62 = true;
	fLocal_72 = 0f;
	fLocal_73 = 172f;
	fLocal_76 = 1f;
	iLocal_136 = 1200;
	iLocal_137 = 1200;
	iLocal_138 = 166;
	fLocal_155 = 0.5f;
	fLocal_156 = 0.85f;
	fLocal_157 = 0.5f;
	fLocal_158 = -0.25f;
	fLocal_159 = 0.25f;
	fLocal_160 = 0.3f;
	fLocal_161 = 0.3f;
	fLocal_162 = 0.075f;
	unk_0x20A629A7D3DC97F2();
	if (!func_135())
	{
		Global_2541351 = 99;
		Global_2541352 = 99;
		iLocal_56 = 99;
	}
	else
	{
		Global_2541351 = 0;
		Global_2541352 = 0;
	}
	sLocal_18[0] = "No_Filter";
	sLocal_18[1] = "phone_cam1";
	sLocal_18[2] = "phone_cam2";
	sLocal_18[3] = "phone_cam3";
	sLocal_18[4] = "phone_cam4";
	sLocal_18[5] = "phone_cam5";
	sLocal_18[6] = "phone_cam6";
	sLocal_18[7] = "phone_cam7";
	sLocal_18[8] = "phone_cam8";
	sLocal_18[9] = "phone_cam9";
	sLocal_18[10] = "phone_cam10";
	sLocal_18[11] = "phone_cam11";
	sLocal_18[12] = "phone_cam12";
	sLocal_32[0] = "No_Border";
	sLocal_32[1] = "frame1";
	sLocal_32[2] = "frame2";
	sLocal_32[3] = "frame3";
	sLocal_32[4] = "frame4";
	sLocal_32[5] = "frame5";
	sLocal_32[6] = "frame6";
	sLocal_32[7] = "frame7";
	sLocal_32[8] = "frame8";
	sLocal_32[9] = "frame9";
	sLocal_32[10] = "frame10";
	sLocal_32[11] = "frame11";
	sLocal_32[12] = "frame12";
	sLocal_47[0] = "No_Expression";
	sLocal_47[1] = "mood_Aiming_1";
	sLocal_47[2] = "mood_Happy_1";
	sLocal_47[3] = "mood_smug_1";
	sLocal_47[4] = "mood_Injured_1";
	sLocal_47[5] = "mood_sulk_1";
	sLocal_47[6] = "mood_Angry_1";
	func_134();
	if (func_133(1, 1, !iLocal_63))
	{
		iLocal_63 = 1;
	}
	func_132();
	iLocal_111 = unk_0x74F076F396F8C361();
	if (Global_14339 == 0)
	{
		fLocal_95 = 0.207f;
		fLocal_96 = 0.158f;
		fLocal_97 = 0.207f;
		fLocal_98 = 0.335f;
	}
	else
	{
		fLocal_95 = 0.24f;
		fLocal_96 = 0.258f;
		fLocal_97 = 0.24f;
		fLocal_98 = 0.435f;
	}
	Global_16726 = 0;
	Global_16727 = 0;
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x15803F55C7C5B063(unk_0xA16EC202D9D35357()))
		{
			Global_16726 = 1;
		}
		if (unk_0xDE543C66CC073569())
		{
			Global_16726 = 1;
		}
		if (unk_0xECFECDAD51A6184F(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()), 0))
		{
			Global_16726 = 1;
		}
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
		{
			Global_16726 = 1;
		}
		if (unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357()))
		{
			Global_16726 = 1;
		}
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			if (iLocal_130 == 1)
			{
				Global_16726 = 1;
			}
			uLocal_148 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if ((unk_0xA609E58449080951(uLocal_148) == joaat("rhino") || unk_0xA609E58449080951(iLocal_148) == joaat("cutter")) || unk_0xA609E58449080951(iLocal_148) == joaat("submersible"))
			{
				Global_16726 = 1;
			}
			else if (unk_0xD8A521688BDBE867(iLocal_148, -1) == unk_0xA16EC202D9D35357())
			{
				if (unk_0x70C5C50D16D2D8AB(iLocal_148) > 0f)
				{
					if (!Global_68325)
					{
						if (!func_131())
						{
							unk_0x270A587A7AD98455(unk_0xA16EC202D9D35357(), iLocal_148, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_68325)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			unk_0xF012F775F4310266(unk_0x1788E93557766241(), 0);
		}
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 21);
	func_130(0);
	unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
	if (Global_14336 == 0)
	{
		func_129();
	}
	else
	{
		uLocal_139 = unk_0x36ECDA4DD9A3F08D("camera_gallery");
		uLocal_140 = unk_0x36ECDA4DD9A3F08D("instructional_buttons");
		while (!unk_0xC8378A96673BCC40(uLocal_139) || !unk_0xC8378A96673BCC40(uLocal_140))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA7CEB400EFD58154();
			unk_0x4B404C739A9AFC7A(0, 25, 1);
		}
		if (Global_68325)
		{
			iLocal_143 = 2;
		}
		else
		{
			switch (func_128())
			{
				case 0:
					iLocal_143 = 2;
					break;
				
				case 2:
					iLocal_143 = 2;
					break;
				
				case 3:
					iLocal_143 = 2;
					break;
				}
		}
		func_127(uLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
		func_126(uLocal_139, "CLOSE_SHUTTER");
		unk_0xB067107D878E9585(Global_14375, "DISPLAY_VIEW");
		unk_0x26221D1D76579618(16);
		unk_0xD3DF251F2DF3B257();
	}
	Local_77 = { Global_14354 };
	Local_80 = { Global_14347[Global_14339 /*3*/] };
	Global_16727 = 1;
	iLocal_117 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 8;
	}
	if (iLocal_130 == 0)
	{
		unk_0x29DB79DD4D939B38(&Global_2266, 3);
	}
	func_124();
	unk_0xFA5652FA48ED466D(4);
	if (unk_0x1F2A3895C2D22D77())
	{
	}
	if (Global_1604248.f_71977)
	{
	}
	if (unk_0x4766AC67087E1839())
	{
		fLocal_76 = 1f;
	}
	else
	{
		fLocal_76 = 1f;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xA7CEB400EFD58154();
		unk_0x4B404C739A9AFC7A(0, 25, 1);
		unk_0x4B404C739A9AFC7A(0, 0, 1);
		if (!Global_97439.f_12305.f_81)
		{
			if (!unk_0x889D01384B54BCE3(Global_2542626, 13))
			{
				if (!unk_0x11A809BBE3889742())
				{
					if (!unk_0x889D01384B54BCE3(Global_2265, 28))
					{
						if (iLocal_127 && iLocal_130 == 0)
						{
							unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 13);
							Global_97439.f_12305.f_81 = 1;
							func_123("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x2B0FFD431FD5A9FA())
		{
			if (Global_1604248.f_71976 == 0 && Global_1604248.f_71977 == 0)
			{
				unk_0xAD871E75FA8292BF(15, 0f, -0.0375f);
			}
			unk_0x8A5A9834DB717F2D(7);
			unk_0x6C5CE54692FA7CB8();
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 200, 1);
			}
			unk_0x4B404C739A9AFC7A(0, 44, 1);
			unk_0x4B404C739A9AFC7A(0, 47, 1);
			unk_0x4B404C739A9AFC7A(0, 91, 1);
			unk_0x4B404C739A9AFC7A(0, 92, 1);
			unk_0x4B404C739A9AFC7A(0, 68, 1);
			if (iLocal_149 == 0)
			{
				unk_0xA6ED15B28077401E(0, Global_14367);
			}
			unk_0xA6ED15B28077401E(0, Global_14364);
			if (unk_0xF4C685E933068D23() || unk_0xE9A5FF67266655B2())
			{
				iLocal_129 = 1;
				Global_14394.f_1 = 3;
				unk_0x8D033DA6320BDCF9(0);
			}
			if (unk_0xEBF6FB15C1788FAE())
			{
				Global_14394.f_1 = 3;
				unk_0x8D033DA6320BDCF9(0);
			}
			if (unk_0x889D01384B54BCE3(Global_2265, 3))
			{
				Global_14394.f_1 = 3;
				unk_0x8D033DA6320BDCF9(0);
			}
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (func_112())
				{
					Global_14394.f_1 = 3;
					unk_0x8D033DA6320BDCF9(0);
				}
			}
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0))
				{
					Global_14394.f_1 = 3;
					unk_0x8D033DA6320BDCF9(0);
				}
				if ((unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0xC121BFE894DB4BDB(unk_0x1788E93557766241()))
				{
					if (func_111())
					{
					}
					else
					{
						Global_14394.f_1 = 3;
						unk_0x8D033DA6320BDCF9(0);
					}
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					if (Global_68325 == 1)
					{
						Global_14394.f_1 = 3;
					}
				}
				if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
				{
					if (unk_0xB3657CF9F85DD6EB(unk_0xA16EC202D9D35357()) > 0.3f)
					{
						Global_14394.f_1 = 3;
					}
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					func_110();
					iLocal_148 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0x70C5C50D16D2D8AB(iLocal_148) < 0f)
					{
						func_108(0);
					}
					if (iLocal_114 == 1)
					{
						if (iLocal_115 == 1)
						{
							if (!unk_0x65B10E7657FABBA4())
							{
								func_108(0);
							}
						}
						else if (!unk_0x65B10E7657FABBA4())
						{
							iLocal_115 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0xA7CEB400EFD58154();
						}
					}
				}
				else if (Global_68325 == 0)
				{
					if (unk_0x889D01384B54BCE3(Global_2264, 18))
					{
						func_107();
						if ((Global_14394 == 0 || Global_14394 == 1) || Global_14394 == 2)
						{
							if (!unk_0xEFDD5F3C780DA371(unk_0xA16EC202D9D35357()))
							{
								if (unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
								{
								}
								else
								{
									Global_14394.f_1 = 3;
									unk_0x8D033DA6320BDCF9(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_141)
			{
				func_106();
			}
			if (Global_14394.f_1 < 4)
			{
			}
			if (iLocal_152 == 0)
			{
				if (iLocal_102 == 0)
				{
					if (iLocal_103 == 0)
					{
						if (iLocal_110 == 0)
						{
							if (Global_14394.f_1 > 3)
							{
								if (iLocal_149)
								{
									func_104();
									if (Global_16731 == 0 && Global_16728 == 6)
									{
										unk_0x0A0906BD8781AB7B(0, 1);
										unk_0x6B2B2A9AA84D01C4();
										iLocal_149 = 0;
										func_103();
										if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
										{
											Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
										}
										func_102();
										iLocal_108++;
										if (func_135())
										{
											func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_101();
									}
									if (Global_16728 == 0)
									{
										iLocal_149 = 0;
										unk_0x6B2B2A9AA84D01C4();
										if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
										{
											Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
										}
										func_100();
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_101();
										if (func_135())
										{
											if (Global_2541352 == 0)
											{
												if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
												{
													func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
										{
											func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_99();
										func_98(1);
									}
								}
								else if (Global_14394.f_1 != 9)
								{
									if (Global_16727 == 1)
									{
										if (Global_16726 == 0)
										{
											func_97();
										}
									}
									else if ((Global_2872 - Global_2871) > Global_2873)
									{
										if (func_96(2, Global_14362, 0))
										{
											if (func_95() && iLocal_126)
											{
											}
											else if (iLocal_126 == 0)
											{
												unk_0x8D033DA6320BDCF9(0);
												unk_0x7CB5477E93D6A302(iLocal_111);
												iLocal_142 = 0;
												if (Global_16726 == 0)
												{
													func_102();
													Global_16726 = 1;
													unk_0x0A0906BD8781AB7B(0, 1);
													iLocal_127 = 0;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													func_94(0, 0);
													func_98(0);
													iLocal_114 = 0;
													func_93();
													iLocal_141 = 0;
													func_91(0, 1);
													func_127(Global_14375, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_100 == 0)
									{
										if (unk_0x11A809BBE3889742())
										{
											func_90();
											iLocal_100 = 1;
										}
									}
									else if (!unk_0x11A809BBE3889742())
									{
										func_90();
										iLocal_100 = 0;
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x889D01384B54BCE3(Global_2264, 28))
										{
											func_90();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x889D01384B54BCE3(Global_2264, 28))
									{
										func_90();
										iLocal_101 = 0;
									}
									if (Global_16726 == 1)
									{
										func_83();
									}
									else if (Global_14394.f_1 > 4)
									{
										if (iLocal_123 == 1 && iLocal_124 == 0)
										{
											func_79();
										}
										if (iLocal_123 == 0 && iLocal_124 == 1)
										{
											func_100();
											if (iLocal_135 == 1 || iLocal_135 == 0)
											{
												if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
												{
													if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
													{
														func_126(uLocal_139, "CLOSE_SHUTTER");
														iLocal_134 = unk_0x09560C7DE2A384BD();
														while (unk_0x09560C7DE2A384BD() < (iLocal_134 + iLocal_136) && Global_14394.f_1 > 3)
														{
															unk_0x6C5CE54692FA7CB8();
															func_106();
															func_78();
															unk_0xA7CEB400EFD58154();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_135())
												{
													if (Global_2541352 == 0)
													{
														if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
														{
															func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
												{
													func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_106();
												unk_0x6C5CE54692FA7CB8();
												iLocal_131 = 0;
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_126 = 0;
												func_101();
												iLocal_135 = 0;
												func_126(uLocal_139, "OPEN_SHUTTER");
											}
											func_99();
											func_98(1);
											func_77();
										}
									}
									if (iLocal_142 == 1)
									{
										func_74();
									}
									if (iLocal_128)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_127 = 1;
											iLocal_128 = 0;
											unk_0xD0E2BFCE93AE3ABD(&Global_2264, 18);
											if (Global_16726 == 0)
											{
												func_91(1, 1);
											}
										}
									}
									if (iLocal_126 == 0)
									{
										if (iLocal_127 && Global_16726 == 0)
										{
											if ((iLocal_129 == 0 && iLocal_124 == 0) && Global_16729 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_78();
										}
									}
									else if (iLocal_123 == 0)
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
					if (Global_14394.f_1 > 3)
					{
						if (Global_16727 == 1)
						{
							if (Global_16726 == 0)
							{
								func_97();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_154 == 1)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_151, "CELL_CAM_FW_2", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 7)
				{
					if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0xF6BAF9F0C2863FFE())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_151, "", 0, -1, "", "", 1);
					}
				}
				if (iLocal_154 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_151, "CELL_CAM_CCW_2", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 5)
				{
					iVar0 = unk_0x6FCC4772DF3303AD();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_151, "", 0, -1, "", "", 1);
							break;
						}
				}
				if (iLocal_154 == 0)
				{
				}
				if (iLocal_154 == 2 || iLocal_154 == 3)
				{
					if (unk_0x1453F50088A91E4E(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_91(0, 1);
					}
					if (unk_0x1453F50088A91E4E(2, 201))
					{
						iLocal_153 = 1;
					}
					if (iLocal_153 == 1)
					{
						if (unk_0x51104159A21A8E40(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_91(0, 1);
							iLocal_153 = 0;
							unk_0xD57D307ECCA5D744("Gallery");
							unk_0xDDAE99904D5CEB72();
						}
					}
				}
				else if (iLocal_154 == 7)
				{
					if (unk_0x660675ADB09E441F())
					{
						if (unk_0x1453F50088A91E4E(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_91(0, 1);
							iLocal_110 = 0;
						}
					}
					else if (unk_0x1453F50088A91E4E(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_91(0, 1);
						iLocal_110 = 0;
					}
					if (!unk_0x660675ADB09E441F())
					{
						if (unk_0x1453F50088A91E4E(2, Global_14366))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_91(0, 1);
							if (unk_0x889D01384B54BCE3(Global_2265, 28))
							{
								iLocal_110 = 0;
							}
							else
							{
								iLocal_110 = 2;
							}
							iLocal_106 = unk_0x09560C7DE2A384BD();
							unk_0x31F1910118B60FDC(1);
						}
					}
				}
				else if (unk_0x1453F50088A91E4E(2, 201))
				{
					iLocal_152 = 0;
					iLocal_154 = 0;
					func_91(0, 1);
				}
			}
		}
		iLocal_107 = unk_0x09560C7DE2A384BD();
		if (func_3() || iLocal_129)
		{
			func_1(0);
			func_94(0, 0);
			func_98(0);
			iLocal_114 = 0;
			func_93();
			Global_16726 = 0;
			Global_16727 = 0;
			Global_16729 = 0;
			unk_0x7559DFAB61B017F2(&uLocal_139);
			unk_0x7559DFAB61B017F2(&uLocal_140);
			unk_0x8D033DA6320BDCF9(0);
			if (Global_14554 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
			}
			else
			{
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			unk_0x0A0906BD8781AB7B(0, 1);
			unk_0xF012F775F4310266(unk_0x1788E93557766241(), 1);
			unk_0x29DB79DD4D939B38(&Global_2266, 3);
			unk_0x29DB79DD4D939B38(&Global_2542626, 3);
			unk_0x2F2EE906A0CF46A3(15);
			Global_16730 = 1;
			unk_0x7CB5477E93D6A302(iLocal_111);
			unk_0x0D992EF9B9F0C8E3(iLocal_111);
			unk_0x6B2B2A9AA84D01C4();
			func_93();
			unk_0xB4EF9F4150A1D7C8(0);
			unk_0x3223E33A81D8BE4C(0);
			unk_0x00DCFA1CF0438004(1f);
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				unk_0xBEB7C924FCBF3C50(unk_0xA16EC202D9D35357(), "Mood_Normal_1", 0);
				unk_0xC645CDA4EE3EECBC(unk_0xA16EC202D9D35357());
			}
			if (Global_2541352 > 0 && Global_2541352 < 13)
			{
				unk_0x4A79FCCDF915C20B(sLocal_32[Global_2541352]);
			}
			unk_0x29DB79DD4D939B38(&Global_2264, 18);
			func_91(0, 1);
			if (func_133(0, 1, iLocal_63))
			{
				iLocal_63 = 0;
			}
			unk_0x82706E6C897B0FA1();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x1C9E388844BB16BC(1);
		}
		else if (Global_14394.f_1 > 3)
		{
			unk_0x1C9E388844BB16BC(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68325)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x862704CFD32408F9();
	iVar1 = unk_0x95AD511976EEFC6B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2542828 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_105 = unk_0xD6BB66A9984406B7(0);
	switch (iLocal_105)
	{
		case 0:
			iLocal_102 = 0;
			iLocal_108 = unk_0x92C8A7CF2B2C9BEE();
			iLocal_109 = unk_0xF1534DC4F8DB9138();
			if (iLocal_103 == 1)
			{
				if (iLocal_126 == 0)
				{
					if (unk_0xC8378A96673BCC40(uLocal_139))
					{
						if (func_135())
						{
							if (Global_2541352 == 0)
							{
								if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
								{
									func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
							{
								func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xC8378A96673BCC40(uLocal_139))
				{
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				}
				iLocal_103 = 0;
			}
			unk_0x6B2B2A9AA84D01C4();
			break;
		
		case 1:
			if (!unk_0x9F30406EEA9F0DA0())
			{
				unk_0x02BE7CB219E9E516("CELL_SPINNER2");
				unk_0xCDAFCC561991EEFD(1);
			}
			break;
		
		case 2:
			if (unk_0x889D01384B54BCE3(Global_2265, 28))
			{
				iLocal_102 = 0;
				iLocal_108 = 0;
				iLocal_109 = 0;
			}
			else
			{
				Global_14394.f_1 = 3;
				Global_16730 = 1;
			}
			unk_0x6B2B2A9AA84D01C4();
			break;
	}
}

void func_5()
{
	if (func_96(2, Global_14363, 0))
	{
		func_1(0);
		if (unk_0x889D01384B54BCE3(Global_2265, 28))
		{
			unk_0x8D033DA6320BDCF9(0);
			unk_0x5AE11BC36633DE4E(0);
			func_103();
			iLocal_126 = 0;
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			}
			func_102();
			iLocal_135 = 1;
		}
		else if (func_9())
		{
			if (unk_0x889D01384B54BCE3(Global_2265, 14))
			{
				func_123("CELL_299", -1);
			}
			else
			{
				func_102();
				func_8();
			}
		}
		else
		{
			iLocal_152 = 1;
			func_91(1, 1);
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2264, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x6C5CE54692FA7CB8();
			unk_0xA7CEB400EFD58154();
			func_78();
			func_110();
			func_106();
		}
		unk_0x8D033DA6320BDCF9(0);
		func_103();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_126 = 0;
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		}
		func_101();
		func_102();
	}
	if (func_96(2, Global_14367, 0))
	{
		func_1(0);
		if (func_95() || unk_0x889D01384B54BCE3(Global_2265, 28))
		{
		}
		else
		{
			unk_0x8D033DA6320BDCF9(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_135 = 1;
			func_103();
			iLocal_126 = 0;
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			}
			func_102();
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2264, 28))
	{
		if (func_96(2, Global_14366, 0))
		{
			func_1(0);
			unk_0x8D033DA6320BDCF9(0);
			unk_0xF633032BFA53124C(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA7CEB400EFD58154();
			unk_0x6C5CE54692FA7CB8();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA7CEB400EFD58154();
			unk_0x6C5CE54692FA7CB8();
			unk_0x55B79079C0618C1E();
			unk_0x25769A19F024631D();
			Global_16730 = 1;
			iLocal_142 = 0;
			iLocal_125 = 0;
			func_91(0, 1);
			Global_16726 = 1;
			unk_0x0A0906BD8781AB7B(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_114 = 0;
			func_93();
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 9);
			iLocal_141 = 0;
			func_127(Global_14375, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Accept", &Global_14383, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0xF3258052227E3274(5);
	}
}

void func_8()
{
	iLocal_149 = 1;
	Global_16731 = 1;
	unk_0x0A0906BD8781AB7B(0, 1);
}

int func_9()
{
	if (iLocal_106 == iLocal_107)
	{
		if (iLocal_104)
		{
			iLocal_104 = 1;
		}
	}
	if (Global_14394.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_108 == iLocal_109 || iLocal_108 > iLocal_109)
	{
		iLocal_154 = 1;
		iLocal_151 = 2;
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
	
	if (unk_0x3E512F3AB14225D6(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_130)
	{
		func_69();
		func_65();
		func_64();
		fLocal_72 = unk_0x512EEDFAB6B93744();
		fLocal_73 = unk_0x1D937C480AC563EA();
		if (iLocal_132 == 0)
		{
			if (unk_0xF49761626882E968(2, iVar0) && !unk_0xF49761626882E968(2, iVar1))
			{
				iLocal_132 = 1;
				func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x889D01384B54BCE3(Global_2264, 28))
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 177, 1), "CELL_281");
					func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(2, 179, 1), "CELL_287");
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 176, 1), "CELL_280");
					func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(0, 177, 1), "CELL_281");
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_61();
				unk_0xB067107D878E9585(uLocal_140, "SET_MAX_WIDTH");
				unk_0x50050D925C27B388(fLocal_76);
				unk_0xD3DF251F2DF3B257();
				func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF49761626882E968(2, iVar0) || unk_0xF49761626882E968(2, iVar1))
		{
			iLocal_132 = 0;
			func_101();
		}
		if (iLocal_133 == 0)
		{
			if (unk_0xF49761626882E968(2, iVar1) && !unk_0xF49761626882E968(2, iVar0))
			{
				iLocal_133 = 1;
				func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x889D01384B54BCE3(Global_2264, 28))
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 177, 1), "CELL_281");
					func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(2, 179, 1), "CELL_287");
				}
				else
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 176, 1), "CELL_280");
					func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(0, 177, 1), "CELL_281");
				}
				func_60();
				unk_0xB067107D878E9585(uLocal_140, "SET_MAX_WIDTH");
				unk_0x50050D925C27B388(fLocal_76);
				unk_0xD3DF251F2DF3B257();
				func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF49761626882E968(2, iVar1) || unk_0xF49761626882E968(2, iVar0))
		{
			iLocal_133 = 0;
			func_101();
		}
	}
	else
	{
		unk_0x7D98754083C1D605(0, 2, 1);
		unk_0x7D98754083C1D605(0, 1, 1);
	}
	if (unk_0xABDBD87CEACB4A79(2))
	{
		func_101();
	}
	func_110();
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 200, 1);
	}
	if (unk_0x1453F50088A91E4E(2, 183))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
			{
				if (unk_0x889D01384B54BCE3(Global_2542626, 2))
				{
					unk_0x29DB79DD4D939B38(&Global_2542626, 2);
					if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
					{
						func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 2);
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_130)
	{
		if (iLocal_131 == 1)
		{
			iLocal_131 = 0;
			unk_0xB067107D878E9585(uLocal_139, "SET_FOCUS_LOCK");
			unk_0xF34EF2C628F5B47B(0);
			func_59("CELL_FOCUS");
			unk_0xF34EF2C628F5B47B(1);
			unk_0xD3DF251F2DF3B257();
		}
		if (!func_58(14))
		{
			if (unk_0x889D01384B54BCE3(Global_2542626, 10))
			{
				if ((Global_68325 == 0 && unk_0x16CDA1894CFE0781(joaat("pi_menu")) > 0) && func_57())
				{
					unk_0xB067107D878E9585(uLocal_139, "SET_FOCUS_LOCK");
					unk_0xF34EF2C628F5B47B(1);
					unk_0xEBC0B3BDAD1250BE("CELL_ACTTL");
					unk_0x94E086BCAE8856C1(unk_0x69C910B9EE514763(&Global_2543322));
					unk_0x9F94C7B5E8C04AB3();
					unk_0xF34EF2C628F5B47B(0);
					unk_0xD3DF251F2DF3B257();
					unk_0x29DB79DD4D939B38(&Global_2542626, 10);
				}
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_2542626, 10))
		{
			unk_0x29DB79DD4D939B38(&Global_2542626, 10);
		}
		iLocal_65 = unk_0x09560C7DE2A384BD();
		if ((iLocal_65 - iLocal_64) > 1500)
		{
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				Local_69 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
				if (unk_0x4970185D4CC64616(Local_69, Local_66, 1) > 5f)
				{
					Global_14394.f_1 = 3;
					unk_0x8D033DA6320BDCF9(0);
				}
				iLocal_64 = unk_0x09560C7DE2A384BD();
			}
		}
	}
	else if (iLocal_131)
	{
		if (!unk_0xF49761626882E968(0, 182))
		{
			unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
			iLocal_131 = 0;
			unk_0xB067107D878E9585(uLocal_139, "SET_FOCUS_LOCK");
			unk_0xF34EF2C628F5B47B(0);
			func_59("CELL_FOCUS");
			unk_0xF34EF2C628F5B47B(1);
			unk_0xD3DF251F2DF3B257();
		}
	}
	else if (unk_0xF49761626882E968(0, 182))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
		iLocal_131 = 1;
		if (!func_58(14))
		{
			unk_0xB067107D878E9585(uLocal_139, "SET_FOCUS_LOCK");
			unk_0xF34EF2C628F5B47B(1);
			func_59("CELL_FOCUS");
			unk_0xF34EF2C628F5B47B(1);
			unk_0xD3DF251F2DF3B257();
		}
	}
	if (func_135())
	{
		if (unk_0x1453F50088A91E4E(2, 186))
		{
			if (iLocal_130)
			{
				iLocal_56++;
				if (iLocal_56 > 0 && iLocal_56 < 7)
				{
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
					{
						unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
						unk_0xBEB7C924FCBF3C50(unk_0xA16EC202D9D35357(), "Mood_Normal_1", 0);
						unk_0xC645CDA4EE3EECBC(unk_0xA16EC202D9D35357());
						if (Global_14394 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xA8E98142ED49A114(unk_0xA16EC202D9D35357(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xA8E98142ED49A114(unk_0xA16EC202D9D35357(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_56 == 2 || iLocal_56 == 3) || iLocal_56 == 4) || iLocal_56 == 8) || iLocal_56 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_56 == 3)
										{
											unk_0xBEB7C924FCBF3C50(unk_0xA16EC202D9D35357(), sLocal_47[iLocal_56], 0);
										}
									}
								}
								else
								{
									unk_0xBEB7C924FCBF3C50(unk_0xA16EC202D9D35357(), sLocal_47[iLocal_56], 0);
								}
							}
							else
							{
								unk_0xBEB7C924FCBF3C50(unk_0xA16EC202D9D35357(), sLocal_47[iLocal_56], 0);
							}
						}
						else
						{
							unk_0xBEB7C924FCBF3C50(unk_0xA16EC202D9D35357(), sLocal_47[iLocal_56], 0);
						}
					}
				}
				if (iLocal_56 == 7 || iLocal_56 > 7)
				{
					iLocal_56 = 0;
				}
				if (iLocal_56 == 0)
				{
					if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
					{
						unk_0xBEB7C924FCBF3C50(unk_0xA16EC202D9D35357(), "Mood_Normal_1", 0);
						unk_0xC645CDA4EE3EECBC(unk_0xA16EC202D9D35357());
						unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
					}
				}
			}
		}
		if (unk_0x1453F50088A91E4E(2, 185))
		{
			if (iLocal_130)
			{
				if (bLocal_61 == 1)
				{
					unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
					if (iLocal_60 == 0)
					{
						iLocal_60 = 1;
						iLocal_59 = 1;
						if (unk_0x9BA82E09A986BA4B(sLocal_18[Global_2541351], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xB4EF9F4150A1D7C8(1);
							unk_0x3223E33A81D8BE4C(1);
						}
					}
					else
					{
						iLocal_60 = 0;
						iLocal_59 = 0;
						unk_0xB4EF9F4150A1D7C8(0);
						unk_0x3223E33A81D8BE4C(0);
					}
				}
			}
			else if (bLocal_62 == 1)
			{
				if (iLocal_59 == 0)
				{
					iLocal_59 = 1;
					iLocal_60 = 1;
					unk_0xB4EF9F4150A1D7C8(1);
					unk_0x3223E33A81D8BE4C(1);
				}
				else
				{
					iLocal_59 = 0;
					iLocal_60 = 0;
					unk_0xB4EF9F4150A1D7C8(0);
					unk_0x3223E33A81D8BE4C(0);
				}
			}
		}
	}
	if (iLocal_58 == 1)
	{
		if (unk_0x1453F50088A91E4E(0, 172))
		{
			if (func_135())
			{
				Global_2541352++;
				unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
			}
			if (Global_2541352 == 13)
			{
				func_98(0);
				unk_0x00DCFA1CF0438004(1f);
				unk_0x4A79FCCDF915C20B(sLocal_32[(Global_2541352 - 1)]);
				Global_2541352 = 0;
				func_56();
				if (iLocal_46 == 1)
				{
					unk_0x29DB79DD4D939B38(&Global_2542626, 2);
					iLocal_46 = 0;
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2541352 > 0 && Global_2541352 < 13)
			{
				iLocal_58 = 0;
				iLocal_57 = 0;
				unk_0x52964052BC489DDD(sLocal_32[Global_2541352], 0);
			}
		}
	}
	if (Global_2541352 > 0)
	{
		if (iLocal_58 == 0)
		{
			if (unk_0xDC8071F347A8DD3F(sLocal_32[Global_2541352]))
			{
				iLocal_57 = 1;
				iLocal_58 = 1;
				if (!unk_0x8C77F13CEF88AA0B())
				{
					func_98(1);
				}
				if (iLocal_46 == 0)
				{
					if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
					{
						iLocal_46 = 1;
					}
				}
				unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 2);
				func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x00DCFA1CF0438004(0.25f);
				unk_0xDD02979805B7650C(sLocal_32[Global_2541352], 0);
			}
		}
		if (iLocal_57 == 1)
		{
			if (Global_2541352 == 1 || Global_2541352 == 3)
			{
			}
			if (Global_2541352 == 2 || Global_2541352 == 4)
			{
			}
		}
	}
	if (unk_0x1453F50088A91E4E(0, 173))
	{
		if (func_135())
		{
			func_93();
			Global_2541351++;
			unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
		}
		if (Global_2541351 == 13)
		{
			Global_2541351 = 0;
		}
		if (Global_2541351 == 0)
		{
			if (func_135())
			{
				func_93();
			}
		}
		else
		{
			func_99();
		}
		func_55();
	}
	if (unk_0x63D2949B11643BBA(0, 184))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
			{
				Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
				unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
				func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_126(uLocal_139, "CLOSE_SHUTTER");
				iLocal_134 = unk_0x09560C7DE2A384BD();
				while (unk_0x09560C7DE2A384BD() < (iLocal_134 + iLocal_138) && Global_14394.f_1 > 3)
				{
					unk_0x6C5CE54692FA7CB8();
					func_106();
					func_78();
					unk_0xA7CEB400EFD58154();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_130 == 0)
				{
					unk_0x7CB5477E93D6A302(iLocal_111);
					iLocal_130 = 1;
					func_54(1);
					func_53();
					unk_0xD0E2BFCE93AE3ABD(&Global_2266, 3);
					iLocal_64 = unk_0x09560C7DE2A384BD();
				}
				else
				{
					iLocal_132 = 0;
					iLocal_133 = 0;
					func_54(0);
					iLocal_130 = 0;
					unk_0x29DB79DD4D939B38(&Global_2266, 3);
				}
				iLocal_134 = unk_0x09560C7DE2A384BD();
				while (unk_0x09560C7DE2A384BD() < (iLocal_134 + iLocal_136) && Global_14394.f_1 > 3)
				{
					unk_0x6C5CE54692FA7CB8();
					func_106();
					func_78();
					unk_0xA7CEB400EFD58154();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_126(uLocal_139, "OPEN_SHUTTER");
				if (func_135())
				{
					if (Global_2541352 == 0)
					{
						if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
						{
							func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
				{
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_106();
				unk_0x6C5CE54692FA7CB8();
				if (unk_0x889D01384B54BCE3(Global_2264, 28))
				{
					StringCopy(&cLocal_144, "CELL_296", 16);
					func_52();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_130 == 0)
	{
		if (iLocal_112 == 0)
		{
			if (unk_0x1453F50088A91E4E(0, 40) || unk_0x1453F50088A91E4E(0, 41))
			{
				fLocal_113 = unk_0x60E3395C2059AC38();
				if (fLocal_113 > 1f && fLocal_113 < 4.5f)
				{
					if (unk_0xB834C37F11282062(iLocal_111))
					{
						unk_0xC2E1777941B4536E(iLocal_111, "Camera_Zoom", &Global_14383, 1);
					}
				}
				else
				{
					unk_0x7CB5477E93D6A302(iLocal_111);
				}
				iLocal_112 = 1;
			}
		}
		else if (unk_0xF49761626882E968(0, 40) || unk_0xF49761626882E968(0, 41))
		{
			fLocal_113 = unk_0x60E3395C2059AC38();
			if (fLocal_113 > 1f && fLocal_113 < 4.5f)
			{
				if (unk_0xB834C37F11282062(iLocal_111))
				{
					unk_0xC2E1777941B4536E(iLocal_111, "Camera_Zoom", &Global_14383, 1);
				}
			}
			else
			{
				unk_0x7CB5477E93D6A302(iLocal_111);
			}
		}
		else
		{
			unk_0x7CB5477E93D6A302(iLocal_111);
		}
	}
	if (func_96(2, Global_14363, 0))
	{
		fLocal_74 = unk_0x512EEDFAB6B93744();
		fLocal_75 = unk_0x1D937C480AC563EA();
		unk_0xF633032BFA53124C(0, 0);
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 21);
		unk_0x7CB5477E93D6A302(iLocal_111);
		iLocal_126 = 1;
		func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_139, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xC2E1777941B4536E(-1, "Camera_Shoot", &Global_14383, 1);
		func_126(uLocal_139, "CLOSE_SHUTTER");
		Local_83 = { -90.3f, 0f, 90f };
		unk_0x3F65562A61D88419(Local_83, 0);
		if (!func_135())
		{
			func_93();
		}
		Global_16729 = 1;
		unk_0x0A0906BD8781AB7B(0, 1);
		while (Global_16728 < 6 && Global_14394.f_1 > 3)
		{
			unk_0x6C5CE54692FA7CB8();
			func_106();
			func_78();
			func_110();
			unk_0xA7CEB400EFD58154();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x88984D95FABA7B2D(0, 0);
		if (Global_14336)
		{
			func_1(1);
		}
		iLocal_134 = unk_0x09560C7DE2A384BD();
		while (unk_0x09560C7DE2A384BD() < (iLocal_134 + iLocal_137) && Global_14394.f_1 > 3)
		{
			unk_0x6C5CE54692FA7CB8();
			func_106();
			func_78();
			unk_0xA7CEB400EFD58154();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_126(uLocal_139, "OPEN_SHUTTER");
		unk_0x29DB79DD4D939B38(&Global_2264, 21);
		func_101();
		if (Global_14394.f_1 > 3)
		{
			if (Global_68325)
			{
				func_20(1081, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x2FCA9E6E26A3EE86(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x2FCA9E6E26A3EE86(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x2FCA9E6E26A3EE86(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_98(0);
		}
		func_106();
	}
	if (unk_0x889D01384B54BCE3(Global_2264, 28))
	{
		if (func_96(2, Global_14366, 0))
		{
			unk_0xF633032BFA53124C(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA7CEB400EFD58154();
			unk_0x6C5CE54692FA7CB8();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xA7CEB400EFD58154();
			unk_0x6C5CE54692FA7CB8();
			unk_0x55B79079C0618C1E();
			unk_0x25769A19F024631D();
			Global_16730 = 1;
			iLocal_142 = 0;
			iLocal_125 = 1;
			Global_16726 = 1;
			unk_0x0A0906BD8781AB7B(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_114 = 0;
			func_93();
			unk_0xD0E2BFCE93AE3ABD(&Global_2264, 9);
			unk_0x8D033DA6320BDCF9(0);
			iLocal_141 = 0;
			func_127(Global_14375, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_15(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_14(unk_0xA16EC202D9D35357());
			if (func_13(iVar0) && (!func_58(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
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
		Global_2435463[iVar0] = iParam0;
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
		if (Global_2435463[iVar1] == 0)
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
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	Global_14331 = { Global_14347[Global_14339 /*3*/] };
	func_91(0, 1);
	func_94(0, 0);
	func_98(0);
	iLocal_114 = 0;
	func_93();
	if (!unk_0x889D01384B54BCE3(Global_2265, 28))
	{
		if (unk_0x1F2A3895C2D22D77() == 0)
		{
			if (unk_0xD5560895105F1405())
			{
				if (iLocal_116 == 0)
				{
					iLocal_116 = 1;
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
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_25(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_25(uParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_25(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_25(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_25(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_25(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_25(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_25(uParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_25(uParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_25(uParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_25(uParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_25(uParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1336370)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
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
	uVar0 = Global_2455246[iParam0 /*5*/][func_25(uParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312729;
}

void func_27()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(0, 177, 1), "CELL_281");
		func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 176, 1), "CELL_280");
		if (iLocal_130)
		{
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
				{
					if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_68325 == 0 && unk_0x16CDA1894CFE0781(joaat("pi_menu")) > 0) && func_57())
				{
					func_50();
				}
				else
				{
					if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(2, 183, 1), "CELL_GRID");
					func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_49(5f);
						func_48(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_62(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_62(uLocal_140, "SET_DATA_SLOT", 7f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
			{
				if (!unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA71FB26FF9682F08(2, 183, 1), "CELL_GRID");
					func_62(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xA71FB26FF9682F08(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_49(6f);
						func_48(7f);
						if (bLocal_62)
						{
							func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(0, 182, 1), "CELL_FOCUS");
						}
						func_62(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_49(3f);
						func_48(4f);
						func_62(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA71FB26FF9682F08(2, 183, 1), "CELL_GRID");
					func_62(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					func_62(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xA71FB26FF9682F08(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_49(7f);
						func_48(8f);
						if (bLocal_62)
						{
							func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(0, 182, 1), "CELL_FOCUS");
						}
						func_62(uLocal_140, "SET_DATA_SLOT", 9f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_49(3f);
						func_48(4f);
						func_62(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xB067107D878E9585(uLocal_140, "SET_MAX_WIDTH");
		unk_0x50050D925C27B388(fLocal_76);
		unk_0xD3DF251F2DF3B257();
		func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_62(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xA71FB26FF9682F08(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_47(Global_2474326, Global_2474327))
		{
			if (iParam0 == 0 || !func_30(Global_2474326, Global_2474327, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0xA16EC202D9D35357(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	uVar0 = 2;
	uVar3 = 2;
	uVar6 = 2;
	if (iParam1 == 0)
	{
		iVar12 = 3;
	}
	else if (bParam3)
	{
		iVar12 = 1;
	}
	else if (bParam4)
	{
		iVar12 = 2;
	}
	else
	{
		iVar12 = 0;
	}
	func_42(iParam1, iParam2, &uVar0, &uVar3, &uVar6, iVar12, bParam5);
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		if (unk_0xA609E58449080951(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar9 = func_40(iParam0);
			if (!iVar9 == -1)
			{
				if (func_39(&uVar0, iVar9))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar10 = func_37(iParam0);
			if (!iVar10 == -1)
			{
				if (func_35(&uVar3, iVar10))
				{
					return 1;
				}
			}
		}
		if (unk_0x1DAD7CE53BEE7710())
		{
			iVar11 = func_33(iParam0);
			if (!iVar11 == 0)
			{
				if (func_32(&uVar6, iVar11))
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
	if (unk_0x889D01384B54BCE3((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x95AD4DE218A9F9E5(iParam0, 1);
	if (iVar0 <= 58)
	{
		return unk_0x95AD4DE218A9F9E5(iParam0, 1);
	}
	return func_34(unk_0x51ACEC7238AE9673(iParam0, 1, iVar0, 0));
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_REPLAY_M_BERD_0_0"):
		case joaat("DLC_MP_REPLAY_F_BERD_0_0"):
			return 59;
			break;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (unk_0x889D01384B54BCE3((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA8E98142ED49A114(iParam0, 0);
	if (iVar0 <= 54)
	{
		return iVar0;
	}
	return func_38(unk_0x3DCA93178BE73756(iParam0, 0, iVar0, 0));
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1;
			break;
	}
	return -1;
}

bool func_39(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA8E98142ED49A114(iParam0, 0);
	if (iVar0 <= 54)
	{
		return iVar0;
	}
	return func_41(unk_0x3DCA93178BE73756(iParam0, 0, iVar0, 0));
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1;
			break;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
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
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
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
					break;
				
				case 1:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
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
					break;
				
				case 10:
					func_43(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 4, 1);
						func_46(uParam3, 6, 1);
						func_46(uParam3, 10, 1);
						func_46(uParam3, 54, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 39, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 9, 1);
						func_44(uParam2, 10, 1);
						func_44(uParam2, 53, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 36, 1);
						func_44(uParam2, 38, 1);
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
					break;
				
				case 15:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 19, 1);
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
					break;
				
				case 18:
					if (bParam6)
					{
						func_46(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_43(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
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
					break;
				
				case 21:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 7, 1);
						func_46(uParam3, 0, 1);
						func_46(uParam3, 12, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 15, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 17, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 21, 1);
						func_46(uParam3, 25, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 30, 1);
						func_46(uParam3, 31, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 37, 1);
						func_44(uParam2, 0, 1);
						func_44(uParam2, 2, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 7, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 11, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 15, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 17, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 19, 1);
						func_44(uParam2, 20, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 22, 1);
						func_44(uParam2, 24, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 30, 1);
						func_44(uParam2, 31, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 36, 1);
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
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							break;
						
						case 1:
							func_46(uParam3, 4, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 43, 1);
							break;
						
						case 2:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 38, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 31, 1);
							break;
					}
					break;
				
				case 5:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
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
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
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
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
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
							break;
					}
					break;
				
				case 21:
					switch (iParam5)
					{
						case 0:
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
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
							break;
					}
					break;
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
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
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
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
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 19, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
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
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 38, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
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
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 19, 1);
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
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
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
							break;
						
						case 2:
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
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
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 4, 1);
							break;
						
						case 1:
							func_43(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
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
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
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
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
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
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 37, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 36, 1);
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
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 38, 1);
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
							break;
						
						case 2:
							func_46(uParam3, 1, 1);
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 5, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 1, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 5, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 12, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 23, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 29, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 33, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
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
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
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
					func_42(2, 21, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_42(2, 22, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x29DB79DD4D939B38(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_45(uParam0, iParam1, bParam2);
}

void func_45(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x29DB79DD4D939B38(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	func_45(uParam0, iParam1, bParam2);
}

int func_47(int iParam0, int iParam1)
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

void func_48(float fParam0)
{
	func_62(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xA71FB26FF9682F08(0, 172, 1), "CELL_BORDER");
}

void func_49(float fParam0)
{
	func_62(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xA71FB26FF9682F08(0, 173, 1), "CELL_FILTER");
}

void func_50()
{
	if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(0, 183, 1), "CELL_GRID");
	func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
	func_49(5f);
	func_48(6f);
	func_51(7f);
	func_28(8f);
	if (bLocal_61)
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 9f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_58(14))
	{
		if ((Global_68325 == 0 && unk_0x16CDA1894CFE0781(joaat("pi_menu")) > 0) && func_57())
		{
			unk_0xB067107D878E9585(uLocal_139, "SET_FOCUS_LOCK");
			unk_0xF34EF2C628F5B47B(1);
			unk_0xEBC0B3BDAD1250BE("CELL_ACTTL");
			unk_0x94E086BCAE8856C1(unk_0x69C910B9EE514763(&Global_2543322));
			unk_0x9F94C7B5E8C04AB3();
			unk_0xF34EF2C628F5B47B(0);
			unk_0xD3DF251F2DF3B257();
		}
	}
}

void func_51(float fParam0)
{
	func_62(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xA71FB26FF9682F08(0, 175, 1), "CELL_ACCYC");
}

void func_52()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 177, 1), "CELL_281");
		func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(2, 179, 1), "CELL_287");
		if (iLocal_130)
		{
			if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
				{
					if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_135())
					{
						func_49(3f);
						func_48(4f);
					}
				}
				else if ((Global_68325 == 0 && unk_0x16CDA1894CFE0781(joaat("pi_menu")) > 0) && func_57())
				{
					func_50();
				}
				else
				{
					if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(2, 183, 1), "CELL_GRID");
					func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_49(5f);
						func_48(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_62(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_62(uLocal_140, "SET_DATA_SLOT", 7f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
			{
				if (!unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(2, 183, 1), "CELL_GRID");
					func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					func_62(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xA71FB26FF9682F08(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_49(6f);
						func_48(7f);
						func_62(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_49(3f);
						func_48(4f);
						func_62(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x9EAFC8B61ACBB2DB(unk_0xA16EC202D9D35357()) == 2)
			{
				if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA71FB26FF9682F08(2, 183, 1), "CELL_GRID");
				func_62(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
				func_62(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xA71FB26FF9682F08(0, 39, 1), "CELL_284");
				if (func_135())
				{
					func_49(7f);
					func_48(8f);
					if (bLocal_62)
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(0, 182, 1), "CELL_FOCUS");
					}
					func_62(uLocal_140, "SET_DATA_SLOT", 9f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_49(4f);
						func_48(5f);
						func_62(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xA71FB26FF9682F08(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xB067107D878E9585(uLocal_140, "SET_MAX_WIDTH");
		unk_0x50050D925C27B388(fLocal_76);
		unk_0xD3DF251F2DF3B257();
		func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_53()
{
	if (iLocal_130)
	{
		unk_0x60365B850FB7354F(fLocal_72, 1065353216);
		unk_0x20D6E0EA145DF751(fLocal_73);
	}
}

void func_54(int iParam0)
{
	if (Global_1604248.f_71976 == 1)
	{
	}
	else if (Global_1604248.f_71977 == 1)
	{
	}
	else
	{
		unk_0x2C233A0568946665(iParam0);
	}
}

void func_55()
{
	if (iLocal_60 == 1)
	{
		if (unk_0x9BA82E09A986BA4B(sLocal_18[Global_2541351], "phone_cam12DUMMY"))
		{
			unk_0xB4EF9F4150A1D7C8(0);
			unk_0x3223E33A81D8BE4C(0);
		}
		else
		{
			unk_0xB4EF9F4150A1D7C8(1);
			unk_0x3223E33A81D8BE4C(1);
		}
	}
}

void func_56()
{
	func_127(uLocal_139, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_135())
	{
		unk_0x8260D92D3C52E921("phone_cam");
	}
}

int func_57()
{
	if (func_58(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if ((unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/] || unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/]) || unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
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

bool func_58(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_59(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_60()
{
	if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x3E512F3AB14225D6(2))
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(0, 30, 1), "CELL_RT_RSTICK");
		func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x8766516556CDFB2B(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(0, 1, 1), "CELL_RT_RSTICK");
		func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x8766516556CDFB2B(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_61()
{
	if (unk_0x3E512F3AB14225D6(2) || unk_0x660675ADB09E441F())
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA71FB26FF9682F08(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_62(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x8766516556CDFB2B(0, 1, 1), "CELL_LT_RSTICK");
	if (func_58(14))
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xA71FB26FF9682F08(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xA71FB26FF9682F08(0, 39, 1), "CELL_LT_LSTICKZ");
		func_62(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xA71FB26FF9682F08(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_62(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x06771AF7795B3ECF(uParam3))
	{
		func_63(uParam3);
	}
	if (!unk_0x06771AF7795B3ECF(sParam4))
	{
		func_59(sParam4);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_63(var uParam0)
{
	unk_0xB51F3A5C13620EE6(uParam0);
}

void func_64()
{
	if (Global_68325)
	{
		switch (Global_16810)
		{
			case 0:
				if (unk_0x3E512F3AB14225D6(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16810++;
				break;
			
			case 1:
				if (!unk_0x11A809BBE3889742())
				{
					if (unk_0x3E512F3AB14225D6(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16810++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16809)
		{
			case 0:
				if (unk_0x3E512F3AB14225D6(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16809++;
				break;
			
			case 1:
				if (!unk_0x11A809BBE3889742())
				{
					if (unk_0x3E512F3AB14225D6(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16809++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_65()
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
	
	if (unk_0x3E512F3AB14225D6(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0xF49761626882E968(2, iVar10) && !unk_0xF49761626882E968(2, iVar9))
	{
		unk_0x4B404C739A9AFC7A(0, 2, 1);
		unk_0x4B404C739A9AFC7A(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 2)) * 127;
		if (unk_0x3E512F3AB14225D6(2))
		{
			if (unk_0x045E73D0141F51B4(iVar0) > 28 || unk_0x045E73D0141F51B4(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			}
		}
		else if (unk_0x045E73D0141F51B4(iVar2) > 28 || unk_0x045E73D0141F51B4(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
		}
		if (unk_0x3E512F3AB14225D6(2))
		{
			fVar7 = unk_0x1B4C2FFB891F18F5(0, 290);
			fVar8 = unk_0x1B4C2FFB891F18F5(0, 291);
			if (unk_0x5FF0F6B7DF5DCE12())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x045E73D0141F51B4(iVar0) > 28 || unk_0x045E73D0141F51B4(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_162);
		}
		func_68(fVar5);
		func_67(fVar6);
		func_66(fVar4);
	}
	else if (!unk_0xF49761626882E968(2, iVar9))
	{
		unk_0x7D98754083C1D605(0, 2, 1);
		unk_0x7D98754083C1D605(0, 1, 1);
	}
}

void func_66(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < -1f)
	{
		fLocal_159 = -1f;
	}
	unk_0xDD54637176BBACF8(fLocal_159);
}

void func_67(float fParam0)
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
	unk_0x9BE7954EFF59CA3D(fLocal_160);
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
	unk_0x32679193F1B3606B(fLocal_161);
}

void func_69()
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
	
	if (unk_0x3E512F3AB14225D6(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0xF49761626882E968(2, iVar10))
		{
			if (unk_0x1453F50088A91E4E(2, 178))
			{
				unk_0x9B9AC14279277B7E(0.5f);
				unk_0xD5EA3C42922E96E0(0.85f);
				unk_0x22C07F4285F6E614(0.5f);
				unk_0x7D76DCF17D889CCF(-0.25f);
				fLocal_155 = 0.5f;
				fLocal_156 = 0.85f;
				fLocal_157 = 0.5f;
				fLocal_158 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0xF49761626882E968(2, iVar10) && !unk_0xF49761626882E968(2, iVar11))
	{
		if (unk_0x1453F50088A91E4E(2, 178))
		{
			unk_0x9B9AC14279277B7E(0.5f);
			unk_0xD5EA3C42922E96E0(0.85f);
			unk_0x22C07F4285F6E614(0.5f);
			unk_0x7D76DCF17D889CCF(-0.25f);
			fLocal_155 = 0.5f;
			fLocal_156 = 0.85f;
			fLocal_157 = 0.5f;
			fLocal_158 = -0.25f;
		}
		unk_0x4B404C739A9AFC7A(0, 2, 1);
		unk_0x4B404C739A9AFC7A(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 2)) * 127;
		if (unk_0x3E512F3AB14225D6(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 39)) * 127;
			fVar8 = unk_0x1B4C2FFB891F18F5(0, 290);
			fVar9 = unk_0x1B4C2FFB891F18F5(0, 291);
			if (unk_0x5FF0F6B7DF5DCE12())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x045E73D0141F51B4(iVar2) > 15 || unk_0x045E73D0141F51B4(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0x045E73D0141F51B4(iVar0) > 28 || unk_0x045E73D0141F51B4(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		func_73(fVar6);
		func_72(fVar7);
		func_71(fVar4);
		if (!func_58(14))
		{
			func_70(fVar5);
		}
	}
	else if (!unk_0x4E151C54AB29940C(2, iVar11))
	{
		unk_0x7D98754083C1D605(0, 2, 1);
		unk_0x7D98754083C1D605(0, 1, 1);
	}
	if (!unk_0x4E151C54AB29940C(2, iVar10) && !unk_0x4E151C54AB29940C(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x1B4C2FFB891F18F5(0, 293)) * 127;
		if (unk_0x045E73D0141F51B4(iVar2) > 28 || unk_0x045E73D0141F51B4(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0x045E73D0141F51B4(iVar0) > 28 || unk_0x045E73D0141F51B4(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		if (!func_58(14))
		{
			func_70(fVar5);
		}
	}
}

void func_70(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 1f)
	{
		fLocal_157 = 1f;
	}
	else if (fLocal_157 < 0f)
	{
		fLocal_157 = 0f;
	}
	unk_0x22C07F4285F6E614(fLocal_157);
}

void func_71(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1f)
	{
		fLocal_158 = 1f;
	}
	else if (fLocal_158 < -1f)
	{
		fLocal_158 = -1f;
	}
	unk_0x7D76DCF17D889CCF(fLocal_158);
}

void func_72(float fParam0)
{
	fLocal_156 = (fLocal_156 + fParam0);
	if (fLocal_156 > 1.5f)
	{
		fLocal_156 = 1.5f;
	}
	else if (fLocal_156 < 0.5f)
	{
		fLocal_156 = 0.5f;
	}
	unk_0xD5EA3C42922E96E0(fLocal_156);
}

void func_73(float fParam0)
{
	fLocal_155 = (fLocal_155 + fParam0);
	if (fLocal_155 > 2f)
	{
		fLocal_155 = 2f;
	}
	else if (fLocal_155 < -1.7f)
	{
		fLocal_155 = -1.7f;
	}
	unk_0x9B9AC14279277B7E(fLocal_155);
}

void func_74()
{
	if (Global_68585 || Global_68586)
	{
		return;
	}
	if (iLocal_123 == 0)
	{
		if (!iLocal_149)
		{
			if (Global_1604248.f_71976 == 0 && Global_1604248.f_71977 == 0)
			{
				unk_0x27BDF28219C810BA(uLocal_140, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_126 == 0)
	{
		if (Global_14336)
		{
			if (Global_14552)
			{
				if (iLocal_149 == 0)
				{
					if (Global_14394.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_76(255, 255, 255, 255);
			func_75(0.059f, 0.644f, "CELL_284", 0);
			func_76(255, 255, 255, 255);
			func_75(0.165f, 0.644f, "CELL_285", 0);
			func_76(255, 255, 255, 255);
			func_75(0.275f, 0.75f, "CELL_280", 0);
			func_76(255, 255, 255, 255);
			func_75(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14336)
	{
	}
	else
	{
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.75f, "CELL_287", 0);
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.79f, "CELL_286", 0);
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_75(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, iParam3);
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x892A8C0426DC3D40(0.4f, 0.4f);
	unk_0x3547043C94E650B3(0, 0, 0, 0, 0);
	unk_0x5FC53677129F4597(1, 0, 0, 0, 205);
	unk_0x3EDCEDE9C739FA86(1);
	unk_0xDF9D373BEABBC157(0);
	unk_0xB8662CE6B21E98E9(iParam0, iParam1, iParam2, iParam3);
}

void func_77()
{
	unk_0x60365B850FB7354F(fLocal_74, 1065353216);
	unk_0x20D6E0EA145DF751(fLocal_75);
}

void func_78()
{
	unk_0x4B404C739A9AFC7A(0, 25, 1);
	unk_0x4B404C739A9AFC7A(0, 44, 1);
	unk_0x4B404C739A9AFC7A(0, 3, 1);
	unk_0x4B404C739A9AFC7A(0, 4, 1);
	unk_0x4B404C739A9AFC7A(0, 5, 1);
	unk_0x4B404C739A9AFC7A(0, 6, 1);
	unk_0x4B404C739A9AFC7A(0, 1, 1);
	unk_0x4B404C739A9AFC7A(0, 2, 1);
	unk_0x4B404C739A9AFC7A(0, 39, 1);
	unk_0x4B404C739A9AFC7A(0, 47, 1);
	unk_0x4B404C739A9AFC7A(0, 56, 1);
}

void func_79()
{
	Local_86 = { Global_14347[Global_14339 /*3*/] };
	if (Global_14336)
	{
		if (func_82())
		{
			unk_0x42F219BEF3DE3A7F(&Local_92);
			Local_86 = { Local_92 };
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
		}
		func_1(1);
		if (iLocal_120)
		{
			Local_80.f_0 = (Local_80.f_0 + 12f);
		}
		if (Local_80.f_0 > Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
		{
			Local_80.f_0 = Local_86.f_0;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_80.f_1 = (Local_80.f_1 - 6f);
		}
		if (unk_0x889D01384B54BCE3(Global_2266, 4))
		{
			if (Local_80.f_1 < (Local_86.f_1 + 15f) || Local_80.f_1 == (Local_86.f_1 + 15f))
			{
				Local_80.f_1 = (Local_86.f_1 + 15f);
				iLocal_121 = 0;
			}
		}
		else if (Local_80.f_1 < (Local_86.f_1 + 10f) || Local_80.f_1 == (Local_86.f_1 + 10f))
		{
			Local_80.f_1 = (Local_86.f_1 + 10f);
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_80.f_2 = (Local_80.f_2 - 10f);
		}
		if (Local_80.f_2 < Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
		{
			Local_80.f_2 = Local_86.f_2;
			iLocal_122 = 0;
		}
		if (func_82() == 0)
		{
			if (unk_0x889D01384B54BCE3(Global_2266, 4))
			{
				Local_86.f_1 = (Local_86.f_1 + 15f);
			}
			else
			{
				Local_86.f_1 = (Local_86.f_1 + 10f);
			}
			Local_86.f_0 = (Local_86.f_0 - 14f);
		}
		else
		{
			Local_86 = { Global_14340[Global_14339 /*3*/] };
		}
		Local_80 = { Local_86 };
		iLocal_122 = 0;
		iLocal_121 = 0;
		iLocal_120 = 0;
		unk_0x6CE18C954519D281(Local_80);
		if ((iLocal_120 == 0 && iLocal_121 == 0) && iLocal_122 == 0)
		{
			iLocal_123 = 0;
			Local_83 = { -90.3f, 0f, 90f };
			unk_0x3F65562A61D88419(Local_83, 0);
			if (!unk_0x889D01384B54BCE3(Global_2264, 22))
			{
				if (unk_0x889D01384B54BCE3(Global_2264, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_80();
				}
				iLocal_99 = 2;
			}
		}
	}
}

void func_80()
{
	func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x889D01384B54BCE3(Global_2265, 28))
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 176, 1), "CELL_286");
	}
	else
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(2, 178, 1), "CELL_277");
		func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xB067107D878E9585(uLocal_140, "SET_MAX_WIDTH");
	unk_0x50050D925C27B388(fLocal_76);
	unk_0xD3DF251F2DF3B257();
	func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_81()
{
	func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x889D01384B54BCE3(Global_2265, 28))
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(2, 179, 1), "CELL_287");
		func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 176, 1), "CELL_286");
	}
	else
	{
		func_62(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA71FB26FF9682F08(2, 179, 1), "CELL_287");
		func_62(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xA71FB26FF9682F08(2, 178, 1), "CELL_277");
		func_62(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xA71FB26FF9682F08(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xB067107D878E9585(uLocal_140, "SET_MAX_WIDTH");
	unk_0x50050D925C27B388(fLocal_76);
	unk_0xD3DF251F2DF3B257();
	func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			if (Global_14337 == 0)
			{
				if (Global_1579 != 128)
				{
					if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (Global_15693 != 2)
						{
						}
					}
				}
			}
		}
		if (func_58(14))
		{
			return 0;
		}
		if (unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0))
		{
			return 0;
		}
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			if (!unk_0xA8B5F35FA25FC7BC())
			{
				if (unk_0x21FF064386DC6A0A(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357()) || unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357())) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0079313340731F9C(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		if (Global_96487)
		{
			return 0;
		}
	}
	if (Global_68325)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x862704CFD32408F9();
	iVar1 = unk_0x95AD511976EEFC6B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA8B5F35FA25FC7BC()))
	{
		iVar2 = 1;
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				iVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if ((((((((unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(iVar3)) || unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(iVar3))) || unk_0x74FBEA30BE72F22B(unk_0xA609E58449080951(iVar3))) || unk_0xA609E58449080951(iVar3) == joaat("seashark")) || unk_0xA609E58449080951(iVar3) == joaat("seashark2")) || unk_0xA609E58449080951(iVar3) == joaat("rhino")) || unk_0xA609E58449080951(iVar3) == joaat("submersible")) || unk_0xA609E58449080951(iVar3) == joaat("submersible2")) || unk_0xA609E58449080951(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2542828 || iVar2 == 1)
	{
		if (unk_0x16CDA1894CFE0781(joaat("apptrackify")) > 0 || Global_97439.f_12305.f_89)
		{
			if (unk_0x16CDA1894CFE0781(joaat("michael2")) > 0)
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

void func_83()
{
	unk_0x4B404C739A9AFC7A(0, 47, 1);
	unk_0xA6ED15B28077401E(0, Global_14364);
	Local_83 = { Global_14354 };
	Local_86 = { Global_14347[Global_14339 /*3*/] };
	if (func_82())
	{
		unk_0x6B7EB76FEC248DEE(&Local_89, 0);
		Local_83 = { Local_89 };
		unk_0x42F219BEF3DE3A7F(&Local_92);
		Local_86 = { Local_92 };
		iLocal_117 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
	}
	if (Global_14336)
	{
		func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_54(0);
		iLocal_130 = 0;
		if (unk_0x889D01384B54BCE3(Global_2264, 30))
		{
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			func_84();
		}
		if (iLocal_120)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 9))
			{
				Local_80.f_0 = (Local_80.f_0 + 2f);
			}
			else
			{
				Local_80.f_0 = (Local_80.f_0 + 12f);
			}
		}
		if (Local_80.f_0 > Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
		{
			Local_80.f_0 = Local_86.f_0;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_80.f_1 = (Local_80.f_1 - 6f);
		}
		if (Local_80.f_1 < Local_86.f_1 || Local_80.f_1 == Local_86.f_1)
		{
			Local_80.f_1 = Local_86.f_1;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_80.f_2 = (Local_80.f_2 - 10f);
		}
		if (Local_80.f_2 < Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
		{
			Local_80.f_2 = Local_86.f_2;
			iLocal_122 = 0;
		}
		if (iLocal_122 == 0)
		{
			if (iLocal_117)
			{
				Local_77.f_0 = (Local_77.f_0 + 1f);
			}
			if (Local_77.f_0 > Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
			{
				Local_77.f_0 = Local_83.f_0;
				iLocal_117 = 0;
			}
			if (iLocal_118)
			{
				Local_77.f_1 = (Local_77.f_1 - 2f);
			}
			if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
			{
				Local_77.f_1 = Local_83.f_1;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_77.f_2 = (Local_77.f_2 - 14f);
			}
			if (Local_77.f_2 < Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
			{
				Local_77.f_2 = Local_83.f_2;
				iLocal_119 = 0;
			}
		}
		if (iLocal_125)
		{
			Local_77 = { Local_83 };
			Local_80 = { Local_86 };
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			if (func_82() == 0)
			{
				unk_0x3F65562A61D88419(Local_77, 0);
				unk_0x6CE18C954519D281(Local_80);
			}
			func_91(0, 1);
		}
		else if (func_82() == 0)
		{
			unk_0x3F65562A61D88419(Local_77, 0);
			unk_0x6CE18C954519D281(Local_80);
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_84();
		}
	}
	else
	{
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 + 1f);
		}
		if (Local_77.f_0 > Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 - 2f);
		}
		if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 - 7f);
		}
		if (Local_77.f_2 < Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			iLocal_119 = 0;
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_84();
		}
	}
	unk_0x3F65562A61D88419(Local_77, 0);
}

void func_84()
{
	func_1(0);
	if (func_82() == 0)
	{
		if (unk_0x889D01384B54BCE3(Global_2264, 30))
		{
			unk_0x6CE18C954519D281(Global_14340[Global_14339 /*3*/]);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14347[Global_14339 /*3*/]);
		}
		Local_77 = { Local_83 };
		unk_0x3F65562A61D88419(Local_77, 0);
	}
	Global_16726 = 0;
	func_94(0, 0);
	func_98(0);
	iLocal_114 = 0;
	func_93();
	Global_14381 = 1;
	Global_16729 = 0;
	if (Global_14394.f_1 > 4)
	{
		Global_14394.f_1 = 6;
		Global_14372 = 1;
		func_85();
	}
	if (unk_0xC8378A96673BCC40(uLocal_139))
	{
		func_126(uLocal_139, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0xA7CEB400EFD58154();
	unk_0x7559DFAB61B017F2(&uLocal_140);
	unk_0x7559DFAB61B017F2(&uLocal_139);
	if (Global_14554 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 17);
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 18);
	unk_0x29DB79DD4D939B38(&Global_2264, 21);
	unk_0x0A0906BD8781AB7B(0, 1);
	unk_0x29DB79DD4D939B38(&Global_2266, 3);
	unk_0x29DB79DD4D939B38(&Global_2542626, 3);
	unk_0x8D033DA6320BDCF9(0);
	unk_0xF012F775F4310266(unk_0x1788E93557766241(), 1);
	unk_0x2F2EE906A0CF46A3(15);
	Global_16730 = 1;
	unk_0x7CB5477E93D6A302(iLocal_111);
	unk_0x0D992EF9B9F0C8E3(iLocal_111);
	unk_0x6B2B2A9AA84D01C4();
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xBEB7C924FCBF3C50(unk_0xA16EC202D9D35357(), "Mood_Normal_1", 0);
		unk_0xC645CDA4EE3EECBC(unk_0xA16EC202D9D35357());
	}
	func_93();
	unk_0xB4EF9F4150A1D7C8(0);
	unk_0x3223E33A81D8BE4C(0);
	unk_0x00DCFA1CF0438004(1f);
	if (Global_2541352 > 0 && Global_2541352 < 13)
	{
		unk_0x4A79FCCDF915C20B(sLocal_32[Global_2541352]);
	}
	func_91(0, 1);
	if (func_133(0, 1, iLocal_63))
	{
		iLocal_63 = 0;
	}
	unk_0x82706E6C897B0FA1();
}

void func_85()
{
	struct<3> Var0;
	
	if (Global_14377 == 1)
	{
		return;
	}
	if (Global_14394.f_1 < 4)
	{
		return;
	}
	while (!unk_0xC8378A96673BCC40(Global_14375))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14394.f_1)
	{
		case 6:
			func_127(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_89(Global_2869);
			if (Global_2869 == 1)
			{
				func_127(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14398;
			}
			else
			{
				func_127(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14399), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14399;
			}
			if (Global_14382)
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14554 == 0)
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			else if (Global_68325)
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			else
			{
				if (Global_14553 == 1)
				{
					if (Global_14382)
					{
						func_88(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_88(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14382)
				{
					func_88(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_88(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_127(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
			if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14393 == 1)
			{
				func_87();
				func_127(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97439.f_12305[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15706)
				{
					unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
					unk_0x26221D1D76579618(4);
					unk_0x26221D1D76579618(0);
					unk_0x26221D1D76579618(2);
					unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
					unk_0x94E086BCAE8856C1(&Global_15708);
					unk_0x9F94C7B5E8C04AB3();
					func_59("CELL_300");
					func_59("CELL_217");
					func_59("CELL_217");
					unk_0xD3DF251F2DF3B257();
				}
				else if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), "CELL_217", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
				}
				func_127(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15693 == 4 || Global_15693 == 3)
			{
				func_127(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97439.f_12305[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_87();
				if (Global_15706)
				{
					unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
					unk_0x26221D1D76579618(4);
					unk_0x26221D1D76579618(0);
					unk_0x26221D1D76579618(2);
					unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
					unk_0x94E086BCAE8856C1(&Global_15708);
					unk_0x9F94C7B5E8C04AB3();
					func_59("CELL_300");
					func_59("CELL_219");
					func_59("CELL_219");
					unk_0xD3DF251F2DF3B257();
				}
				else
				{
					if (Global_15951)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
					{
						func_127(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_127(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), &Var0, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
					}
				}
				func_127(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_86();
			break;
		
		default:
			break;
	}
}

void func_86()
{
	if (unk_0xC8378A96673BCC40(Global_14375))
	{
		if (Global_14393 == 1)
		{
			if (Global_14382)
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15740)
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_88(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
		}
		else
		{
			func_88(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
			if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_87()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (Global_14394 == 0)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 1)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 2)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 3)
		{
			switch (Global_2542826)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_88(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_59(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(iParam8))
	{
		func_59(iParam8);
	}
	if (!unk_0x06771AF7795B3ECF(iParam9))
	{
		func_59(iParam9);
	}
	if (!unk_0x06771AF7795B3ECF(iParam10))
	{
		func_59(iParam10);
	}
	if (!unk_0x06771AF7795B3ECF(iParam11))
	{
		func_59(iParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_89(int iParam0)
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
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_58(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_59(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar2);
								unk_0xD3DF251F2DF3B257();
							}
							if (Global_2435552)
							{
								if (iVar1 == 14)
								{
									func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97439.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97439.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97439.f_12395[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68325)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2541361[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2541361[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2541361[iVar4 /*104*/].f_99[Global_14394] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar6 = Global_35970;
											break;
										
										case 1:
											iVar6 = Global_35971;
											break;
										
										case 2:
											iVar6 = Global_35972;
											break;
										
										default:
											break;
									}
									func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_59(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(Global_2270);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_59(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar7);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar8 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_59(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar8);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 8)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_59(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(42);
								unk_0xD3DF251F2DF3B257();
							}
							else
							{
								func_88(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_90()
{
	switch (iLocal_99)
	{
		case 1:
			unk_0x0A0906BD8781AB7B(0, 1);
			if (unk_0x889D01384B54BCE3(Global_2264, 28))
			{
				StringCopy(&cLocal_144, "CELL_296", 16);
				func_52();
			}
			else
			{
				StringCopy(&cLocal_144, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_2264, 22))
			{
				unk_0x0A0906BD8781AB7B(0, 1);
				if (unk_0x889D01384B54BCE3(Global_2264, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_80();
				}
				iLocal_99 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_91(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_92(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_92(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_93()
{
	if (Global_1604248.f_71976 == 0 && Global_1604248.f_71977 == 0)
	{
		unk_0x2116F20DFA679353();
	}
}

void func_94(int iParam0, int iParam1)
{
	if (Global_1604248.f_71976 == 1)
	{
	}
	else if (Global_1604248.f_71977 == 1)
	{
	}
	else
	{
		unk_0x88984D95FABA7B2D(iParam0, iParam1);
	}
}

int func_95()
{
	if (unk_0x889D01384B54BCE3(Global_2264, 15))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1453F50088A91E4E(iParam0, uParam1) || (iParam2 == 1 && unk_0x63D2949B11643BBA(iParam0, iParam1)))
	{
		if (unk_0xF6BAF9F0C2863FFE())
		{
			if (unk_0xCB70128095B6956E() == 0 || (unk_0x6E6ED37B068198D0() && unk_0x3E512F3AB14225D6(2)))
			{
				return 0;
			}
		}
		if (unk_0x2B0FFD431FD5A9FA() || unk_0x34CC8D9406FED489())
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

void func_97()
{
	if (Global_14336)
	{
		Local_83 = { -90.3f, 0f, 90f };
		Local_86 = { 1.5f, 0f, -17f };
		if (func_82())
		{
			unk_0x6B7EB76FEC248DEE(&Local_89, 0);
			Local_83 = { Local_89 };
			unk_0x42F219BEF3DE3A7F(&Local_92);
			Local_86 = { Local_92 };
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
		}
		if (iLocal_119 == 0)
		{
			if (iLocal_120)
			{
				Local_80.f_0 = (Local_80.f_0 - 14f);
			}
			if (Local_80.f_0 < Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
			{
				iLocal_120 = 0;
			}
			if (iLocal_121)
			{
				Local_80.f_1 = (Local_80.f_1 + 7f);
			}
			if (Local_80.f_1 > Local_86.f_1 || Local_80.f_1 == Local_86.f_1)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_80.f_2 = (Local_80.f_2 + 12f);
			}
			if (Local_80.f_2 > Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
			{
				iLocal_122 = 0;
			}
		}
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 - 1f);
		}
		if (Local_77.f_0 < Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			Local_77.f_0 = Local_83.f_0;
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 - 0.5f);
		}
		if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			Local_77.f_1 = Local_83.f_1;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 + 11f);
		}
		if (Local_77.f_2 > Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			Local_77.f_2 = Local_83.f_2;
			iLocal_119 = 0;
		}
		if (func_82() == 0)
		{
			unk_0x3F65562A61D88419(Local_77, 0);
			unk_0x6CE18C954519D281(Local_80);
		}
	}
	else
	{
		Local_83 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 - 1f);
		}
		if (Local_77.f_0 < Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 + 2f);
		}
		if (Local_77.f_1 > Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 + 7f);
		}
		if (Local_77.f_2 > Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			iLocal_119 = 0;
		}
		unk_0x3F65562A61D88419(Local_77, 0);
	}
	if (Global_14336)
	{
		if (((((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0)
		{
			if (func_82())
			{
			}
			else
			{
				Local_77 = { Local_83 };
				unk_0x3F65562A61D88419(Local_77, 0);
				Local_80 = { Local_86 };
				unk_0x6CE18C954519D281(Local_80);
			}
			if (iLocal_102 == 0)
			{
				Global_16727 = 0;
				func_94(1, 1);
				iLocal_114 = 1;
				func_98(1);
				func_56();
				func_99();
				func_54(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_141 = 1;
				iLocal_142 = 1;
				func_106();
				func_127(uLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
				{
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				func_129();
			}
		}
	}
	else if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
	{
		Local_77 = { Local_83 };
		unk_0x3F65562A61D88419(Local_77, 0);
		Global_16727 = 0;
	}
}

void func_98(bool bParam0)
{
	if (func_135())
	{
		if (bParam0)
		{
			if (!unk_0x8C77F13CEF88AA0B())
			{
				unk_0xE78013E09F3D646A(1);
				if (Global_2541352 > 0 && Global_2541352 < 99)
				{
					unk_0xDD02979805B7650C(sLocal_32[Global_2541352], 0);
					unk_0x00DCFA1CF0438004(0.25f);
				}
			}
		}
		else if (unk_0x8C77F13CEF88AA0B())
		{
			unk_0xE78013E09F3D646A(0);
		}
	}
}

void func_99()
{
	if (Global_2541351 > 0 && Global_2541351 < 99)
	{
		unk_0x8260D92D3C52E921(sLocal_18[Global_2541351]);
	}
}

void func_100()
{
	if (Global_14336)
	{
		iLocal_124 = 0;
		func_56();
		func_91(1, 1);
		func_94(1, 1);
		iLocal_114 = 1;
		Global_16730 = 1;
	}
}

void func_101()
{
	if (iLocal_126 == 0)
	{
		if (unk_0x889D01384B54BCE3(Global_2264, 28))
		{
			StringCopy(&cLocal_144, "CELL_296", 16);
			func_52();
		}
		else
		{
			StringCopy(&cLocal_144, "CELL_295", 16);
			func_27();
		}
		if (unk_0x9BA82E09A986BA4B(&cLocal_144, "DUMMYCOMPARISON"))
		{
			fLocal_97 = fLocal_98;
			fLocal_95 = fLocal_96;
			fLocal_98 = fLocal_97;
			fLocal_96 = fLocal_95;
		}
		iLocal_99 = 1;
	}
}

void func_102()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Back", &Global_14383, 1);
	}
}

void func_103()
{
	unk_0xF633032BFA53124C(0, 0);
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 1;
}

void func_104()
{
	func_105();
}

void func_105()
{
	if (iLocal_150)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_150 = 0;
		}
	}
	if (iLocal_150 == 0)
	{
	}
}

void func_106()
{
	if (Global_14394.f_1 > 3)
	{
		if (!unk_0x2B0FFD431FD5A9FA())
		{
			unk_0x782CAB485999E384(uLocal_139, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_107()
{
	if (func_58(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_11();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_108(int iParam0)
{
	if (Global_14552)
	{
		func_91(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_109())
	{
		Global_14394.f_1 = 3;
	}
}

int func_109()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_110()
{
	unk_0x4B404C739A9AFC7A(0, 0, 1);
	unk_0x4B404C739A9AFC7A(0, 56, 1);
	if (iLocal_149 == 0)
	{
		unk_0xA6ED15B28077401E(0, Global_14367);
		unk_0xA6ED15B28077401E(0, Global_14364);
		unk_0x4B404C739A9AFC7A(0, 278, 1);
		unk_0x4B404C739A9AFC7A(0, 279, 1);
		unk_0x4B404C739A9AFC7A(0, 280, 1);
		unk_0x4B404C739A9AFC7A(0, 281, 1);
		unk_0x4B404C739A9AFC7A(0, 282, 1);
		unk_0x4B404C739A9AFC7A(0, 282, 1);
		unk_0x4B404C739A9AFC7A(0, 284, 1);
		unk_0x4B404C739A9AFC7A(0, 285, 1);
		unk_0x4B404C739A9AFC7A(0, 69, 1);
		unk_0x4B404C739A9AFC7A(0, 70, 1);
		unk_0x4B404C739A9AFC7A(0, 114, 1);
		unk_0x4B404C739A9AFC7A(0, 71, 1);
		unk_0x4B404C739A9AFC7A(0, 72, 1);
		unk_0x4B404C739A9AFC7A(0, 74, 1);
		unk_0x4B404C739A9AFC7A(0, 75, 1);
		unk_0x4B404C739A9AFC7A(0, 76, 1);
		unk_0x4B404C739A9AFC7A(0, 73, 1);
		unk_0x4B404C739A9AFC7A(0, 77, 1);
		unk_0x4B404C739A9AFC7A(0, 78, 1);
		unk_0x4B404C739A9AFC7A(0, 286, 1);
		unk_0x4B404C739A9AFC7A(0, 287, 1);
		unk_0x4B404C739A9AFC7A(0, 79, 1);
		unk_0x4B404C739A9AFC7A(0, 80, 1);
		unk_0x4B404C739A9AFC7A(0, 81, 1);
		unk_0x4B404C739A9AFC7A(0, 82, 1);
		unk_0x4B404C739A9AFC7A(0, 86, 1);
		unk_0x4B404C739A9AFC7A(0, 59, 1);
		unk_0x4B404C739A9AFC7A(0, 60, 1);
		unk_0x4B404C739A9AFC7A(0, 61, 1);
		unk_0x4B404C739A9AFC7A(0, 62, 1);
		unk_0x4B404C739A9AFC7A(0, 63, 1);
		unk_0x4B404C739A9AFC7A(0, 64, 1);
		unk_0x4B404C739A9AFC7A(0, 87, 1);
		unk_0x4B404C739A9AFC7A(0, 88, 1);
		unk_0x4B404C739A9AFC7A(0, 89, 1);
		unk_0x4B404C739A9AFC7A(0, 90, 1);
		unk_0x4B404C739A9AFC7A(0, 107, 1);
		unk_0x4B404C739A9AFC7A(0, 108, 1);
		unk_0x4B404C739A9AFC7A(0, 109, 1);
		unk_0x4B404C739A9AFC7A(0, 110, 1);
		unk_0x4B404C739A9AFC7A(0, 111, 1);
		unk_0x4B404C739A9AFC7A(0, 112, 1);
		unk_0x4B404C739A9AFC7A(0, 113, 1);
		unk_0x4B404C739A9AFC7A(0, 114, 1);
		unk_0x4B404C739A9AFC7A(0, 91, 1);
		unk_0x4B404C739A9AFC7A(0, 92, 1);
		unk_0x4B404C739A9AFC7A(0, 68, 1);
		unk_0x4B404C739A9AFC7A(0, 102, 1);
		unk_0x4B404C739A9AFC7A(0, 136, 1);
		unk_0x4B404C739A9AFC7A(0, 137, 1);
		unk_0x4B404C739A9AFC7A(0, 138, 1);
		unk_0x4B404C739A9AFC7A(0, 139, 1);
		unk_0x4B404C739A9AFC7A(0, 102, 1);
	}
}

int func_111()
{
	var uVar0;
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if (unk_0x557C6E696286C67A(uVar0, -1))
			{
				return 1;
			}
			else if (!unk_0xD8A521688BDBE867(uVar0, -1) == unk_0xA16EC202D9D35357())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_112()
{
	bool bVar0;
	
	func_119(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_118())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_117())
	{
		return 1;
	}
	if (func_116(157))
	{
		if (!func_115())
		{
			return 1;
		}
	}
	if (func_116(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_113() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_113()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_113()
{
	switch (func_114())
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

int func_114()
{
	return Global_24446;
}

bool func_115()
{
	return Global_2428577.f_572;
}

int func_116(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_117()
{
	return Global_2435556;
}

bool func_118()
{
	return Global_2428577.f_567;
}

void func_119(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_120(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_120(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_122(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(iVar3))
			{
				if (unk_0x202EF5D8203705EF(iVar3, 0))
				{
					iVar4 = unk_0x6ADAC08D70C79DE5(iVar3, 0);
					if (unk_0xA7FB2A2F471A969B(iVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_121(iVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_121(int iParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0x22349EC06EA5B08B(iParam0))
		{
			if (unk_0xFD9706CAB35EA810(iParam0))
			{
				unk_0x7B9576B4E099FB1F(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(iParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0x38FA37FE3518BA38(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_123(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_124()
{
	if (func_125())
	{
		unk_0x6C6451BC75BF9534();
		if (unk_0xB109C01469B1CF88(0))
		{
			iLocal_102 = 1;
			iLocal_110 = 0;
		}
		else
		{
			Global_16730 = 1;
			Global_14394.f_1 = 3;
			unk_0x6B2B2A9AA84D01C4();
		}
	}
	else
	{
		iLocal_108 = 0;
		iLocal_109 = 0;
		if (iLocal_103 == 1)
		{
			if (iLocal_126 == 0)
			{
				if (unk_0xC8378A96673BCC40(uLocal_139))
				{
					if (func_135())
					{
						if (Global_2541352 == 0)
						{
							if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
							{
								func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x889D01384B54BCE3(Global_2542626, 2))
						{
							func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xC8378A96673BCC40(uLocal_139))
			{
				func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
			}
			iLocal_103 = 0;
		}
		iLocal_110 = 0;
		unk_0x6B2B2A9AA84D01C4();
	}
}

int func_125()
{
	if (Global_1604248.f_71976 == 1)
	{
		if (Global_68325)
		{
			return 0;
		}
	}
	if (Global_1604248.f_71977 == 1)
	{
		if (Global_68325)
		{
			return 0;
		}
	}
	if (unk_0xD5560895105F1405() || unk_0x75C4BB2E54262038())
	{
		if (unk_0x889D01384B54BCE3(Global_2265, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_126(var uParam0, char* sParam1)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0xD3DF251F2DF3B257();
}

void func_127(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

int func_128()
{
	if (Global_68325)
	{
		Global_14394 = 3;
	}
	else
	{
		Global_14394 = func_11();
	}
	if (Global_14394 > 3)
	{
		Global_14394 = 3;
	}
	return Global_97439.f_12305[Global_14394 /*20*/].f_7;
}

void func_129()
{
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 8;
	}
	Global_16729 = 0;
	iLocal_126 = 0;
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		Local_66 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
	}
	if (Global_14336)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_136)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_106();
			func_78();
			unk_0xA7CEB400EFD58154();
		}
		func_126(uLocal_139, "OPEN_SHUTTER");
		unk_0x6C5CE54692FA7CB8();
		func_101();
		iLocal_128 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_94(1, 1);
		func_98(1);
		func_56();
		func_99();
		func_54(0);
		iLocal_114 = 1;
	}
}

void func_130(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 15);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 15);
	}
}

bool func_131()
{
	return Global_1315866;
}

void func_132()
{
}

int func_133(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && bParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, iParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_134()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x690EB620C80E4D58(unk_0xA16EC202D9D35357()))
		{
			unk_0xAE5253EA258993E7(unk_0xA16EC202D9D35357(), 0, 0);
			unk_0x9B9AC14279277B7E(fLocal_155);
			unk_0xD5EA3C42922E96E0(fLocal_156);
			unk_0x22C07F4285F6E614(fLocal_157);
		}
		else
		{
			unk_0x9B9AC14279277B7E(fLocal_155);
			unk_0xD5EA3C42922E96E0(fLocal_156);
			unk_0x22C07F4285F6E614(fLocal_157);
		}
	}
	unk_0x7D76DCF17D889CCF(fLocal_158);
	unk_0xDD54637176BBACF8(fLocal_159);
	unk_0x9BE7954EFF59CA3D(fLocal_160);
	unk_0x32679193F1B3606B(fLocal_161);
	func_53();
}

int func_135()
{
	if (iLocal_55 == 0)
	{
		iLocal_55 = 1;
	}
	return 1;
}


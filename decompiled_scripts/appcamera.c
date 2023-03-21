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
	unk_0x945226432ACF160F();
	if (unk_0xBC8CC6C19B70E1C4() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_138())
	{
		Global_2599409 = 99;
		Global_2599410 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_2599409 = 0;
		Global_2599410 = 0;
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
	func_137();
	if (func_136(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_135();
	iLocal_112 = unk_0x9FF6FFD9EB30D086();
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
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0xAF830E801BD7DBFF(unk_0x2A5EB8B0FE590B91()))
		{
			Global_16778 = 1;
		}
		if (unk_0x4534489079BC2D8E())
		{
			Global_16778 = 1;
		}
		if (unk_0x7FAC45D56235AB39(unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91()), 0))
		{
			Global_16778 = 1;
		}
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
		{
			Global_16778 = 1;
		}
		if (unk_0x833B8D234938E4CD(unk_0x2A5EB8B0FE590B91()))
		{
			Global_16778 = 1;
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16778 = 1;
			}
			uLocal_149 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if ((unk_0xD3B21CE53AA7BE51(uLocal_149) == joaat("rhino") || unk_0xD3B21CE53AA7BE51(iLocal_149) == joaat("cutter")) || unk_0xD3B21CE53AA7BE51(iLocal_149) == joaat("submersible"))
			{
				Global_16778 = 1;
			}
			else if (unk_0x8F8E5C33266ED978(iLocal_149, -1, 0) == unk_0x2A5EB8B0FE590B91())
			{
				if (unk_0x3A564E53FCAA6917(iLocal_149) > 0f)
				{
					if (!Global_69800)
					{
						if (!func_134())
						{
							unk_0xA05ED0EFFC6C6A11(unk_0x2A5EB8B0FE590B91(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_69800)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0x0557F3AE1FDE40F1(unk_0x0FFED3E94261A832(), 0);
		}
	}
	unk_0x507FE690B1271947(&Global_2313, 21);
	func_133(0);
	unk_0xF6082E2ADA1C795B(&Global_2313, 17);
	if (Global_14385 == 0)
	{
		func_132();
	}
	else
	{
		uLocal_140 = unk_0x4D6D22510A2467D9("camera_gallery");
		uLocal_141 = unk_0x4D6D22510A2467D9("instructional_buttons");
		while (!unk_0xA8AF99BD8D81CFB7(uLocal_140) || !unk_0xA8AF99BD8D81CFB7(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x117BBA4FCB43C905();
			unk_0x4E6996123FABDB93(0, 25, 1);
		}
		if (Global_69800)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_131())
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
		func_130(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_129(uLocal_140, "CLOSE_SHUTTER");
		unk_0xD1FCC52F87A98873(Global_14424, "DISPLAY_VIEW");
		unk_0x4CECF13AF144A8F6(16);
		unk_0x8123397DC676E794();
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
		unk_0x507FE690B1271947(&Global_2315, 3);
	}
	func_127();
	unk_0xFF4C3B41848CE5CD(4);
	if (unk_0xABEFADB88310290B())
	{
	}
	if (Global_1638223.f_107888)
	{
	}
	if (Global_1638223.f_107890 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x712F381D6DC979A0(0, Global_14412);
		unk_0x712F381D6DC979A0(0, 186);
		unk_0x117BBA4FCB43C905();
		unk_0x4E6996123FABDB93(0, 25, 1);
		unk_0x4E6996123FABDB93(0, 0, 1);
		if (!Global_103236.f_13832.f_81)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 13))
			{
				if (!unk_0x6235C49EA2DBA22D())
				{
					if (!unk_0xAA4F14DA15DB0B51(Global_2314, 28))
					{
						if (iLocal_128 && iLocal_131 == 0)
						{
							unk_0xF6082E2ADA1C795B(&Global_2600685, 13);
							Global_103236.f_13832.f_81 = 1;
							func_126("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x9E5289F5D782437C())
		{
			if (Global_1638223.f_107887 == 0 && Global_1638223.f_107888 == 0)
			{
				unk_0xBDDB704977480993(15, 0f, -0.0375f);
			}
			unk_0x47BFFB0507046AE3(7);
			func_125();
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 200, 1);
			}
			unk_0x4E6996123FABDB93(0, 44, 1);
			unk_0x4E6996123FABDB93(0, 47, 1);
			unk_0x4E6996123FABDB93(0, 91, 1);
			unk_0x4E6996123FABDB93(0, 92, 1);
			unk_0x4E6996123FABDB93(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0x712F381D6DC979A0(0, Global_14416);
			}
			unk_0x712F381D6DC979A0(0, Global_14413);
			if (unk_0xF4EE9D6C8E60AE22() || unk_0xEF08C8E0C4679477())
			{
				iLocal_130 = 1;
				Global_14443.f_1 = 3;
				unk_0x8850034223654421(0);
			}
			if (unk_0xD7A41E28148D0C9A())
			{
				Global_14443.f_1 = 3;
				unk_0x8850034223654421(0);
			}
			if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
			{
				Global_14443.f_1 = 3;
				unk_0x8850034223654421(0);
			}
			if (unk_0x591AF4C50B46E014())
			{
				if (func_114())
				{
					Global_14443.f_1 = 3;
					unk_0x8850034223654421(0);
				}
			}
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
				{
					Global_14443.f_1 = 3;
					unk_0x8850034223654421(0);
				}
				if ((unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC32BACC88ED0B681(unk_0x0FFED3E94261A832()))
				{
					if (func_113())
					{
					}
					else
					{
						Global_14443.f_1 = 3;
						unk_0x8850034223654421(0);
					}
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()) || unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					if (Global_69800 == 1)
					{
						Global_14443.f_1 = 3;
					}
				}
				if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0x6827BD0B033EC308(unk_0x2A5EB8B0FE590B91()) > 0.3f)
					{
						Global_14443.f_1 = 3;
					}
				}
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					func_112();
					iLocal_149 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
					if (unk_0x3A564E53FCAA6917(iLocal_149) < 0f)
					{
						func_110(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0x5CA285C83BB55EAA())
							{
								func_110(0);
							}
						}
						else if (!unk_0x5CA285C83BB55EAA())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x117BBA4FCB43C905();
						}
					}
				}
				else if (Global_69800 == 0)
				{
					if (unk_0xAA4F14DA15DB0B51(Global_2313, 18))
					{
						func_109();
						if ((Global_14443 == 0 || Global_14443 == 1) || Global_14443 == 2)
						{
							if (!unk_0xCA5D509838A05A3E(unk_0x2A5EB8B0FE590B91()))
							{
								if (unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
								{
								}
								else
								{
									Global_14443.f_1 = 3;
									unk_0x8850034223654421(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_108();
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
									func_106();
									if (Global_16783 == 0 && Global_16780 == 6)
									{
										unk_0xCE563FE94BCF6479(0, 1);
										unk_0xF07571B6B1209821();
										iLocal_150 = 0;
										func_105();
										if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
										{
											Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
										}
										func_104();
										iLocal_109++;
										if (func_138())
										{
											func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
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
										unk_0xF07571B6B1209821();
										if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
										{
											Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
										}
										func_99();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
										if (func_138())
										{
											if (Global_2599410 == 0)
											{
												if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
												{
													func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
										{
											func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
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
												unk_0x8850034223654421(0);
												unk_0xDC0343058D861402(iLocal_112);
												iLocal_143 = 0;
												if (Global_16778 == 0)
												{
													func_104();
													Global_16778 = 1;
													unk_0xCE563FE94BCF6479(0, 1);
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
													func_130(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x6235C49EA2DBA22D())
										{
											func_89();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x6235C49EA2DBA22D())
									{
										func_89();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
										{
											func_89();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0xAA4F14DA15DB0B51(Global_2313, 28))
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
												if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
												{
													if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
													{
														func_129(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x3732B96D7A1859B4();
														while (unk_0x3732B96D7A1859B4() < (iLocal_135 + iLocal_137) && Global_14443.f_1 > 3)
														{
															func_125();
															func_108();
															func_77();
															unk_0x117BBA4FCB43C905();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_138())
												{
													if (Global_2599410 == 0)
													{
														if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
														{
															func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
												{
													func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_108();
												func_125();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_100();
												iLocal_136 = 0;
												func_129(uLocal_140, "OPEN_SHUTTER");
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
											unk_0xF6082E2ADA1C795B(&Global_2313, 18);
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
					if (unk_0xC1A8588DDF7A118E() || unk_0x97FFE0491AC179A2())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0xCF690C88B391CFA3() || unk_0x429A1F8C699BEE23())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0x5018862FF5D9F844())
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
					iVar0 = unk_0x84032C4BD24ED8B0();
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
					if (unk_0x92BC4A8239BDDACC(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
					}
					if (unk_0x92BC4A8239BDDACC(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x69EEC6F255864D43(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_154 = 0;
							unk_0x06B3DC41DA0F0774("Gallery");
							unk_0xB512F71B93859A35();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0x429A1F8C699BEE23())
					{
						if (unk_0x92BC4A8239BDDACC(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x92BC4A8239BDDACC(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0x429A1F8C699BEE23())
					{
						if (unk_0x92BC4A8239BDDACC(2, Global_14415))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							if (unk_0xAA4F14DA15DB0B51(Global_2314, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x3732B96D7A1859B4();
							unk_0x0F12C1DF9C37B6AE(1);
						}
					}
				}
				else if (unk_0x92BC4A8239BDDACC(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_90(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x3732B96D7A1859B4();
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
			unk_0x73F5E7B6BB964839(&uLocal_140);
			unk_0x73F5E7B6BB964839(&uLocal_141);
			unk_0x8850034223654421(0);
			if (Global_14606 == 1)
			{
				unk_0xF6082E2ADA1C795B(&Global_2313, 17);
			}
			else
			{
				unk_0x507FE690B1271947(&Global_2313, 17);
			}
			unk_0xCE563FE94BCF6479(0, 1);
			unk_0x0557F3AE1FDE40F1(unk_0x0FFED3E94261A832(), 1);
			unk_0x507FE690B1271947(&Global_2315, 3);
			unk_0x507FE690B1271947(&Global_2600685, 3);
			unk_0x58553FD5FAFD566B(15);
			Global_16782 = 1;
			unk_0xDC0343058D861402(iLocal_112);
			unk_0x15BA16B33BC155D8(iLocal_112);
			unk_0xF07571B6B1209821();
			func_92();
			unk_0x2B4BC1049E76026C(0);
			unk_0xC13E8D8CB768BDD3(0);
			unk_0x3704D8839A11B269(1f);
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				unk_0xBBC80F08DA023D82(unk_0x2A5EB8B0FE590B91(), "Mood_Normal_1", 0);
				unk_0x252EC060FAC0EDEF(unk_0x2A5EB8B0FE590B91());
			}
			if (Global_2599410 > 0 && Global_2599410 < 13)
			{
				unk_0x2FCDEAA8BCC22D85(sLocal_33[Global_2599410]);
			}
			unk_0x507FE690B1271947(&Global_2313, 18);
			func_90(0, 1);
			if (func_136(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0xA232817B0B36F2E5();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0xDCFC0B6BC5B4F50F(1);
		}
		else if (Global_14443.f_1 > 3)
		{
			unk_0xDCFC0B6BC5B4F50F(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x8EEB10CA57B82F27();
	iVar1 = unk_0xC1A55CEDE7782B6F(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2600899 || iVar2)
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
	iLocal_106 = unk_0x07E702C850AE7BD0(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x855922C8551C84E8();
			iLocal_110 = unk_0xB171273DA42642E9();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0xA8AF99BD8D81CFB7(uLocal_140))
					{
						if (func_138())
						{
							if (Global_2599410 == 0)
							{
								if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
								{
									func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
							{
								func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xA8AF99BD8D81CFB7(uLocal_140))
				{
					func_130(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0xF07571B6B1209821();
			break;
		
		case 1:
			if (!unk_0xC7FA29E4B70508E6())
			{
				unk_0x4A1154920DC947F7("CELL_SPINNER2");
				unk_0x6B60B2318195A182(1);
			}
			break;
		
		case 2:
			if (unk_0xAA4F14DA15DB0B51(Global_2314, 28))
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
			unk_0xF07571B6B1209821();
			break;
	}
}

void func_5()
{
	if (func_95(2, Global_14412, 0))
	{
		func_1(0);
		if (unk_0xAA4F14DA15DB0B51(Global_2314, 28))
		{
			unk_0x8850034223654421(0);
			unk_0x5AE11BC36633DE4E(0);
			func_105();
			iLocal_127 = 0;
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			}
			func_104();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2314, 14))
			{
				func_126("CELL_299", -1);
			}
			else
			{
				func_104();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_90(1, 1);
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_125();
			unk_0x117BBA4FCB43C905();
			func_77();
			func_112();
			func_108();
		}
		unk_0x8850034223654421(0);
		func_105();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
		}
		func_100();
		func_104();
	}
	if (func_95(2, Global_14416, 0))
	{
		func_1(0);
		if (func_94() || unk_0xAA4F14DA15DB0B51(Global_2314, 28))
		{
		}
		else
		{
			unk_0x8850034223654421(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_105();
			iLocal_127 = 0;
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			}
			func_104();
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
	{
		if (func_95(2, Global_14415, 0))
		{
			func_1(0);
			unk_0x8850034223654421(0);
			unk_0x7E5D07A08817D595(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x117BBA4FCB43C905();
			func_125();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x117BBA4FCB43C905();
			func_125();
			unk_0x97AB5C57CB1EDDA9();
			unk_0x3C45520A6111E770();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_90(0, 1);
			Global_16778 = 1;
			unk_0xCE563FE94BCF6479(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0xF6082E2ADA1C795B(&Global_2313, 9);
			iLocal_142 = 0;
			func_130(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Accept", &Global_14432, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0xFDAF8983B14992F8(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16783 = 1;
	unk_0xCE563FE94BCF6479(0, 1);
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
	
	if (unk_0x3A473E888D0CF9FD(2))
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
		fLocal_73 = unk_0xF1E9EF5B95132962();
		fLocal_74 = unk_0x62E4F9815CB76173();
		if (iLocal_133 == 0)
		{
			if (unk_0x83F6A1E4E653AD75(2, iVar0) && !unk_0x83F6A1E4E653AD75(2, iVar1))
			{
				iLocal_133 = 1;
				func_130(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_130(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(2, 179, 1), "CELL_287");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0xD1FCC52F87A98873(uLocal_141, "SET_MAX_WIDTH");
				unk_0xD3A4A11E4FDC9D63(fLocal_77);
				unk_0x8123397DC676E794();
				func_130(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x83F6A1E4E653AD75(2, iVar0) || unk_0x83F6A1E4E653AD75(2, iVar1))
		{
			iLocal_133 = 0;
			func_100();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x83F6A1E4E653AD75(2, iVar1) && !unk_0x83F6A1E4E653AD75(2, iVar0))
			{
				iLocal_134 = 1;
				func_130(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_130(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(2, 179, 1), "CELL_287");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(0, 177, 1), "CELL_281");
				}
				func_59();
				unk_0xD1FCC52F87A98873(uLocal_141, "SET_MAX_WIDTH");
				unk_0xD3A4A11E4FDC9D63(fLocal_77);
				unk_0x8123397DC676E794();
				func_130(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x83F6A1E4E653AD75(2, iVar1) || unk_0x83F6A1E4E653AD75(2, iVar0))
		{
			iLocal_134 = 0;
			func_100();
		}
	}
	else
	{
		unk_0x2C6CBE6F28447D42(0, 2, 1);
		unk_0x2C6CBE6F28447D42(0, 1, 1);
	}
	if (unk_0x94CC8BB8EDADFF62(2))
	{
		func_100();
	}
	func_112();
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 200, 1);
	}
	if (unk_0x92BC4A8239BDDACC(2, 183) && iLocal_156 == 0)
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
				{
					unk_0x507FE690B1271947(&Global_2600685, 2);
					if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
					{
						func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xF6082E2ADA1C795B(&Global_2600685, 2);
					func_130(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0xD1FCC52F87A98873(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD426F7366505EADF(0);
			func_58("CELL_FOCUS");
			unk_0xD426F7366505EADF(1);
			unk_0x8123397DC676E794();
		}
		if (!func_57(14))
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2600685, 10))
			{
				if ((Global_69800 == 0 && unk_0x09952BA662A7629B(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0xD1FCC52F87A98873(uLocal_140, "SET_FOCUS_LOCK");
					unk_0xD426F7366505EADF(1);
					unk_0xADBDBA2DF8443753("CELL_ACTTL");
					unk_0xCF6846167A5EFE98(unk_0x91D2F083AE17E209(&Global_2601593));
					unk_0xF7D95CCE1364B5CE();
					unk_0xD426F7366505EADF(0);
					unk_0x8123397DC676E794();
					unk_0x507FE690B1271947(&Global_2600685, 10);
				}
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_2600685, 10))
		{
			unk_0x507FE690B1271947(&Global_2600685, 10);
		}
		iLocal_66 = unk_0x3732B96D7A1859B4();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				Local_70 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				if (unk_0x4A2E6F541CD8C36E(Local_70, Local_67, 1) > 5f)
				{
					Global_14443.f_1 = 3;
					unk_0x8850034223654421(0);
				}
				iLocal_65 = unk_0x3732B96D7A1859B4();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x83F6A1E4E653AD75(0, 182))
		{
			unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_132 = 0;
			unk_0xD1FCC52F87A98873(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD426F7366505EADF(0);
			func_58("CELL_FOCUS");
			unk_0xD426F7366505EADF(1);
			unk_0x8123397DC676E794();
		}
	}
	else if (unk_0x83F6A1E4E653AD75(0, 182))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
		iLocal_132 = 1;
		if (!func_57(14))
		{
			unk_0xD1FCC52F87A98873(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD426F7366505EADF(1);
			func_58("CELL_FOCUS");
			unk_0xD426F7366505EADF(1);
			unk_0x8123397DC676E794();
		}
	}
	if (func_138())
	{
		if (unk_0x92BC4A8239BDDACC(2, 186) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
					{
						unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
						unk_0xBBC80F08DA023D82(unk_0x2A5EB8B0FE590B91(), "Mood_Normal_1", 0);
						unk_0x252EC060FAC0EDEF(unk_0x2A5EB8B0FE590B91());
						if (Global_14443 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x6FDEA34AE915A47D(unk_0x2A5EB8B0FE590B91(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x6FDEA34AE915A47D(unk_0x2A5EB8B0FE590B91(), 1);
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
											unk_0xBBC80F08DA023D82(unk_0x2A5EB8B0FE590B91(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0xBBC80F08DA023D82(unk_0x2A5EB8B0FE590B91(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0xBBC80F08DA023D82(unk_0x2A5EB8B0FE590B91(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0xBBC80F08DA023D82(unk_0x2A5EB8B0FE590B91(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
					{
						unk_0xBBC80F08DA023D82(unk_0x2A5EB8B0FE590B91(), "Mood_Normal_1", 0);
						unk_0x252EC060FAC0EDEF(unk_0x2A5EB8B0FE590B91());
						unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
					}
				}
			}
		}
		if (unk_0x92BC4A8239BDDACC(2, 185) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x35302CD5A5D37EED(sLocal_19[Global_2599409], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x2B4BC1049E76026C(1);
							unk_0xC13E8D8CB768BDD3(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0x2B4BC1049E76026C(0);
						unk_0xC13E8D8CB768BDD3(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0x2B4BC1049E76026C(1);
					unk_0xC13E8D8CB768BDD3(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0x2B4BC1049E76026C(0);
					unk_0xC13E8D8CB768BDD3(0);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		if (unk_0x92BC4A8239BDDACC(0, 172) && iLocal_156 == 0)
		{
			if (func_138())
			{
				Global_2599410++;
				unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
			}
			if (Global_2599410 == 13)
			{
				func_97(0);
				unk_0x3704D8839A11B269(1f);
				unk_0x2FCDEAA8BCC22D85(sLocal_33[(Global_2599410 - 1)]);
				Global_2599410 = 0;
				func_55();
				if (iLocal_47 == 1)
				{
					unk_0x507FE690B1271947(&Global_2600685, 2);
					iLocal_47 = 0;
					func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2599410 > 0 && Global_2599410 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0x91A9530585A5AF03(sLocal_33[Global_2599410], 0);
			}
		}
	}
	if (Global_2599410 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0xB5ABADF6417115F2(sLocal_33[Global_2599410]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0x29F3ECECE1383BF4())
				{
					func_97(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xF6082E2ADA1C795B(&Global_2600685, 2);
				func_130(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x3704D8839A11B269(0.25f);
				unk_0xD84C2C19BCCA3172(sLocal_33[Global_2599410], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_2599410 == 1 || Global_2599410 == 3)
			{
			}
			if (Global_2599410 == 2 || Global_2599410 == 4)
			{
			}
		}
	}
	if (unk_0x92BC4A8239BDDACC(0, 173) && iLocal_156 == 0)
	{
		if (func_138())
		{
			func_92();
			Global_2599409++;
			unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
		}
		if (Global_2599409 == 13)
		{
			Global_2599409 = 0;
		}
		if (Global_2599409 == 0)
		{
			if (func_138())
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
	if (unk_0xBA36AFDE947F5C56(0, 184) && iLocal_156 == 0)
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
			{
				Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
				func_130(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_129(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x3732B96D7A1859B4();
				while (unk_0x3732B96D7A1859B4() < (iLocal_135 + iLocal_139) && Global_14443.f_1 > 3)
				{
					func_125();
					func_108();
					func_77();
					unk_0x117BBA4FCB43C905();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0xDC0343058D861402(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					unk_0xF6082E2ADA1C795B(&Global_2315, 3);
					iLocal_65 = unk_0x3732B96D7A1859B4();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					unk_0x507FE690B1271947(&Global_2315, 3);
				}
				iLocal_135 = unk_0x3732B96D7A1859B4();
				while (unk_0x3732B96D7A1859B4() < (iLocal_135 + iLocal_137) && Global_14443.f_1 > 3)
				{
					func_125();
					func_108();
					func_77();
					unk_0x117BBA4FCB43C905();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_129(uLocal_140, "OPEN_SHUTTER");
				if (func_138())
				{
					if (Global_2599410 == 0)
					{
						if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
						{
							func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
				{
					func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_108();
				func_125();
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
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
			if (unk_0x92BC4A8239BDDACC(0, 40) || unk_0x92BC4A8239BDDACC(0, 41))
			{
				fLocal_114 = unk_0x722E616FB39172A0();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0xBB6A424DD700764B(iLocal_112))
					{
						unk_0x08BE237DBCD9CBD9(iLocal_112, "Camera_Zoom", &Global_14432, 1);
					}
				}
				else
				{
					unk_0xDC0343058D861402(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x83F6A1E4E653AD75(0, 40) || unk_0x83F6A1E4E653AD75(0, 41))
		{
			fLocal_114 = unk_0x722E616FB39172A0();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0xBB6A424DD700764B(iLocal_112))
				{
					unk_0x08BE237DBCD9CBD9(iLocal_112, "Camera_Zoom", &Global_14432, 1);
				}
			}
			else
			{
				unk_0xDC0343058D861402(iLocal_112);
			}
		}
		else
		{
			unk_0xDC0343058D861402(iLocal_112);
		}
	}
	if (func_95(2, Global_14412, 0))
	{
		fLocal_75 = unk_0xF1E9EF5B95132962();
		fLocal_76 = unk_0x62E4F9815CB76173();
		unk_0x7E5D07A08817D595(0, 0);
		unk_0xF6082E2ADA1C795B(&Global_2313, 21);
		unk_0xDC0343058D861402(iLocal_112);
		iLocal_127 = 1;
		func_130(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_130(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x08BE237DBCD9CBD9(-1, "Camera_Shoot", &Global_14432, 1);
		func_129(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0x2D9B76A7E5712CA4(Local_84, 0);
		if (!func_138())
		{
			func_92();
		}
		Global_16781 = 1;
		unk_0xCE563FE94BCF6479(0, 1);
		while (Global_16780 < 6 && Global_14443.f_1 > 3)
		{
			func_125();
			func_108();
			func_77();
			func_112();
			unk_0x117BBA4FCB43C905();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6395383BCE361F3C(0, 0);
		if (Global_14385)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x3732B96D7A1859B4();
		while (unk_0x3732B96D7A1859B4() < (iLocal_135 + iLocal_138) && Global_14443.f_1 > 3)
		{
			func_125();
			func_108();
			func_77();
			unk_0x117BBA4FCB43C905();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_129(uLocal_140, "OPEN_SHUTTER");
		unk_0x507FE690B1271947(&Global_2313, 21);
		func_100();
		if (Global_14443.f_1 > 3)
		{
			if (Global_69800)
			{
				func_20(1082, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x1DC107DCBFD6EC2F(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x1DC107DCBFD6EC2F(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x1DC107DCBFD6EC2F(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_97(0);
		}
		func_108();
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
	{
		if (func_95(2, Global_14415, 0))
		{
			unk_0x7E5D07A08817D595(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x117BBA4FCB43C905();
			func_125();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x117BBA4FCB43C905();
			func_125();
			unk_0x97AB5C57CB1EDDA9();
			unk_0x3C45520A6111E770();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16778 = 1;
			unk_0xCE563FE94BCF6479(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0xF6082E2ADA1C795B(&Global_2313, 9);
			unk_0x8850034223654421(0);
			iLocal_142 = 0;
			func_130(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_15(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_14(unk_0x2A5EB8B0FE590B91());
			if (func_13(iVar0) && (!func_57(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_13(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
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
		Global_2454613[iVar0] = iParam0;
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
		if (Global_2454613[iVar1] == 0)
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
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	if (!unk_0xAA4F14DA15DB0B51(Global_2314, 28))
	{
		if (unk_0xABEFADB88310290B() == 0)
		{
			if (unk_0xC1A8588DDF7A118E())
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
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_25(uParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_25(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_25(uParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_25(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_25(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_25(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_25(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_25(uParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_25(uParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_25(uParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_25(uParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_25(uParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_25(uParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_25(uParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_25(uParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_25(uParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_25(uParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_25(uParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_25(uParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_25(uParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_25(uParam2)] = iParam1;
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
	iVar0 = Global_2507378[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
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
	uVar0 = Global_2507378[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
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
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
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
		func_130(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_130(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 176, 1), "CELL_280");
		if (iLocal_131)
		{
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
				{
					if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_69800 == 0 && unk_0x09952BA662A7629B(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					if (func_138())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
			{
				if (!unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xD1DCA39DE7949204(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xD1DCA39DE7949204(0, 39, 1), "CELL_284");
					if (func_138())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					if (func_138())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xD1DCA39DE7949204(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xD1DCA39DE7949204(0, 39, 1), "CELL_284");
					if (func_138())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					if (func_138())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xD1FCC52F87A98873(uLocal_141, "SET_MAX_WIDTH");
		unk_0xD3A4A11E4FDC9D63(fLocal_77);
		unk_0x8123397DC676E794();
		func_130(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xD1DCA39DE7949204(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_44(Global_2529332, Global_2529333))
		{
			if (iParam0 == 0 || !func_30(Global_2529332, Global_2529333, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x2A5EB8B0FE590B91(), iParam0, iParam1, bParam2, bParam3, bParam4);
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
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0xD3B21CE53AA7BE51(iParam0) == joaat("mp_f_freemode_01"))
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
		if (unk_0x591AF4C50B46E014())
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
	if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x29D988205B5459BD(iParam0, 1);
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
	if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6FDEA34AE915A47D(iParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6FDEA34AE915A47D(iParam0, 0);
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
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 38, 1);
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
		unk_0xF6082E2ADA1C795B(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x507FE690B1271947(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
		unk_0xF6082E2ADA1C795B(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x507FE690B1271947(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xD1DCA39DE7949204(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	if (Global_1770934 == 1)
	{
		fParam0 = -1f;
	}
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xD1DCA39DE7949204(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 183, 1), "CELL_GRID");
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_69800 == 0 && unk_0x09952BA662A7629B(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0xD1FCC52F87A98873(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD426F7366505EADF(1);
			unk_0xADBDBA2DF8443753("CELL_ACTTL");
			unk_0xCF6846167A5EFE98(unk_0x91D2F083AE17E209(&Global_2601593));
			unk_0xF7D95CCE1364B5CE();
			unk_0xD426F7366505EADF(0);
			unk_0x8123397DC676E794();
		}
	}
}

void func_48(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xD1DCA39DE7949204(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	func_130(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_130(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(0, 177, 1), "CELL_281");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 176, 1), "CELL_280");
	unk_0xD1FCC52F87A98873(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD3A4A11E4FDC9D63(fLocal_77);
	unk_0x8123397DC676E794();
	func_130(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
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
		func_130(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_130(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(2, 179, 1), "CELL_287");
		if (iLocal_131)
		{
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
				{
					if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_138())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_69800 == 0 && unk_0x09952BA662A7629B(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					if (func_138())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
			{
				if (!unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xD1DCA39DE7949204(0, 39, 1), "CELL_284");
					if (func_138())
					{
						func_46(6f);
						func_45(7f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					if (func_138())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xE17D97D6D348472B(unk_0x2A5EB8B0FE590B91()) == 2)
			{
				if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xD1DCA39DE7949204(2, 183, 1), "CELL_GRID");
				func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
				func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xD1DCA39DE7949204(0, 39, 1), "CELL_284");
				if (func_138())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_63)
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 182, 1), "CELL_FOCUS");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
					if (func_138())
					{
						func_46(4f);
						func_45(5f);
						func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xD1DCA39DE7949204(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xD1FCC52F87A98873(uLocal_141, "SET_MAX_WIDTH");
		unk_0xD3A4A11E4FDC9D63(fLocal_77);
		unk_0x8123397DC676E794();
		func_130(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_130(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_130(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(2, 179, 1), "CELL_287");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 177, 1), "CELL_281");
	unk_0xD1FCC52F87A98873(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD3A4A11E4FDC9D63(fLocal_77);
	unk_0x8123397DC676E794();
	func_130(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_131)
	{
		unk_0x61C3B2A4FEFA1D6D(fLocal_73, 1065353216);
		unk_0x164CA344DBD7B6F3(fLocal_74);
	}
}

void func_53(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_1638223.f_107887 == 1)
	{
	}
	else if (Global_1638223.f_107888 == 1)
	{
	}
	else
	{
		unk_0x2491A93618B7D838(iParam0);
	}
}

void func_54()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x35302CD5A5D37EED(sLocal_19[Global_2599409], "phone_cam12DUMMY"))
		{
			unk_0x2B4BC1049E76026C(0);
			unk_0xC13E8D8CB768BDD3(0);
		}
		else
		{
			unk_0x2B4BC1049E76026C(1);
			unk_0xC13E8D8CB768BDD3(1);
		}
	}
}

void func_55()
{
	func_130(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_138())
	{
		if (Global_1770934 == 0)
		{
			unk_0x7BBCA8A7F92B5FFC("phone_cam");
		}
	}
}

int func_56()
{
	if (func_57(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if ((unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/] || unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/]) || unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_59()
{
	if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x3A473E888D0CF9FD(2))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 30, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x1A850B9F74B34C7A(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 1, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x1A850B9F74B34C7A(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (unk_0x3A473E888D0CF9FD(2) || unk_0x429A1F8C699BEE23())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xD1DCA39DE7949204(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x1A850B9F74B34C7A(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xD1DCA39DE7949204(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xD1DCA39DE7949204(0, 39, 1), "CELL_LT_LSTICKZ");
		func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xD1DCA39DE7949204(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_61(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x58478145CAF8429C(uParam3))
	{
		func_62(uParam3);
	}
	if (!unk_0x58478145CAF8429C(sParam4))
	{
		func_58(sParam4);
	}
	unk_0x8123397DC676E794();
}

void func_62(var uParam0)
{
	unk_0x7B7BB0114231AF09(uParam0);
}

void func_63()
{
	if (Global_69800)
	{
		switch (Global_16862)
		{
			case 0:
				if (unk_0x3A473E888D0CF9FD(2))
				{
					func_126("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_126("CELL_CAM_SELFIE_0", -1);
				}
				Global_16862++;
				break;
			
			case 1:
				if (!unk_0x6235C49EA2DBA22D())
				{
					if (unk_0x3A473E888D0CF9FD(2))
					{
						func_126("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_126("CELL_CAM_SELFIE_1", -1);
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
				if (unk_0x3A473E888D0CF9FD(2))
				{
					func_126("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_126("CELL_CAM_SELFIE_0", -1);
				}
				Global_16861++;
				break;
			
			case 1:
				if (!unk_0x6235C49EA2DBA22D())
				{
					if (unk_0x3A473E888D0CF9FD(2))
					{
						func_126("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_126("CELL_CAM_SELFIE_1", -1);
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
	
	if (unk_0x3A473E888D0CF9FD(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x83F6A1E4E653AD75(2, iVar10) && !unk_0x83F6A1E4E653AD75(2, iVar9))
	{
		unk_0x4E6996123FABDB93(0, 2, 1);
		unk_0x4E6996123FABDB93(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 2)) * 127;
		if (unk_0x3A473E888D0CF9FD(2))
		{
			if (unk_0xEF76CA199A0C9035(iVar0) > 28 || unk_0xEF76CA199A0C9035(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0xEF76CA199A0C9035(iVar2) > 28 || unk_0xEF76CA199A0C9035(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0x3A473E888D0CF9FD(2))
		{
			fVar7 = unk_0xDC21082B45236352(0, 290);
			fVar8 = unk_0xDC21082B45236352(0, 291);
			if (unk_0x35BD21A9AEEFFA28())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xEF76CA199A0C9035(iVar0) > 28 || unk_0xEF76CA199A0C9035(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_67(fVar5);
		func_66(fVar6);
		func_65(fVar4);
	}
	else if (!unk_0x83F6A1E4E653AD75(2, iVar9))
	{
		unk_0x2C6CBE6F28447D42(0, 2, 1);
		unk_0x2C6CBE6F28447D42(0, 1, 1);
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
	unk_0x8B52BC17B803F6D5(fLocal_161);
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
	unk_0x6A8C75AA44DE5E21(fLocal_162);
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
	unk_0x29E931E8432A81DA(fLocal_163);
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
	
	if (unk_0x3A473E888D0CF9FD(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x83F6A1E4E653AD75(2, iVar10))
		{
			if (unk_0x92BC4A8239BDDACC(2, 178))
			{
				unk_0x74CCD93B09F31639(0.5f);
				unk_0xDDC4CE96C5C85FE6(0.85f);
				unk_0x73CBC4C445F8EE12(0.5f);
				unk_0x77E998D48C2025E6(-0.25f);
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
	if (unk_0x83F6A1E4E653AD75(2, iVar10) && !unk_0x83F6A1E4E653AD75(2, iVar11))
	{
		if (unk_0x92BC4A8239BDDACC(2, 178))
		{
			unk_0x74CCD93B09F31639(0.5f);
			unk_0xDDC4CE96C5C85FE6(0.85f);
			unk_0x73CBC4C445F8EE12(0.5f);
			unk_0x77E998D48C2025E6(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0x4E6996123FABDB93(0, 2, 1);
		unk_0x4E6996123FABDB93(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 2)) * 127;
		if (unk_0x3A473E888D0CF9FD(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 39)) * 127;
			fVar8 = unk_0xDC21082B45236352(0, 290);
			fVar9 = unk_0xDC21082B45236352(0, 291);
			if (unk_0x35BD21A9AEEFFA28())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xEF76CA199A0C9035(iVar2) > 15 || unk_0xEF76CA199A0C9035(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0xEF76CA199A0C9035(iVar0) > 28 || unk_0xEF76CA199A0C9035(iVar1) > 28)
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
	else if (!unk_0xC20E8B2E17B46871(2, iVar11))
	{
		unk_0x2C6CBE6F28447D42(0, 2, 1);
		unk_0x2C6CBE6F28447D42(0, 1, 1);
	}
	if (!unk_0xC20E8B2E17B46871(2, iVar10) && !unk_0xC20E8B2E17B46871(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDC21082B45236352(0, 293)) * 127;
		if (unk_0xEF76CA199A0C9035(iVar2) > 28 || unk_0xEF76CA199A0C9035(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0xEF76CA199A0C9035(iVar0) > 28 || unk_0xEF76CA199A0C9035(iVar1) > 28)
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
	unk_0x73CBC4C445F8EE12(fLocal_159);
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
	unk_0x77E998D48C2025E6(fLocal_160);
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
	unk_0xDDC4CE96C5C85FE6(fLocal_158);
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
	unk_0x74CCD93B09F31639(fLocal_157);
}

void func_73()
{
	if (Global_70060 || Global_70061)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_1638223.f_107887 == 0 && Global_1638223.f_107888 == 0)
			{
				unk_0x792C5262A7BE057A(uLocal_141, 255, 255, 255, 0, 0);
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
	unk_0x13525DFE840376C7(sParam2);
	unk_0xAB829F64BD72CEC8(fParam0, fParam1, iParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xA039A39804D96298(0.4f, 0.4f);
	unk_0xA1E958C3A9A26FE2(0, 0, 0, 0, 0);
	unk_0x23D87A68AC373FA7(1, 0, 0, 0, 205);
	unk_0x13531E05CB3F0079(1);
	unk_0x5502B020FCAE0A34(0);
	unk_0x7A83819F1CCA85D1(iParam0, iParam1, iParam2, iParam3);
}

void func_76()
{
	unk_0x61C3B2A4FEFA1D6D(fLocal_75, 1065353216);
	unk_0x164CA344DBD7B6F3(fLocal_76);
}

void func_77()
{
	unk_0x4E6996123FABDB93(0, 25, 1);
	unk_0x4E6996123FABDB93(0, 44, 1);
	unk_0x4E6996123FABDB93(0, 3, 1);
	unk_0x4E6996123FABDB93(0, 4, 1);
	unk_0x4E6996123FABDB93(0, 5, 1);
	unk_0x4E6996123FABDB93(0, 6, 1);
	unk_0x4E6996123FABDB93(0, 1, 1);
	unk_0x4E6996123FABDB93(0, 2, 1);
	unk_0x4E6996123FABDB93(0, 39, 1);
	unk_0x4E6996123FABDB93(0, 47, 1);
	unk_0x4E6996123FABDB93(0, 56, 1);
}

void func_78()
{
	Local_87 = { Global_14396[Global_14388 /*3*/] };
	if (Global_14385)
	{
		if (func_81())
		{
			unk_0xE3812E52897ABBA5(&Local_93);
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
		if (unk_0xAA4F14DA15DB0B51(Global_2315, 4))
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
			if (unk_0xAA4F14DA15DB0B51(Global_2315, 4))
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
		unk_0x24E41EE5A159D7A3(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0x2D9B76A7E5712CA4(Local_84, 0);
			if (!unk_0xAA4F14DA15DB0B51(Global_2313, 22))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
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
	func_130(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_130(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xAA4F14DA15DB0B51(Global_2314, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xD1FCC52F87A98873(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD3A4A11E4FDC9D63(fLocal_77);
	unk_0x8123397DC676E794();
	func_130(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_80()
{
	func_130(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_130(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xAA4F14DA15DB0B51(Global_2314, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xD1DCA39DE7949204(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xD1DCA39DE7949204(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xD1DCA39DE7949204(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xD1FCC52F87A98873(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD3A4A11E4FDC9D63(fLocal_77);
	unk_0x8123397DC676E794();
	func_130(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
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
		if (unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xEC4D5A37A29CB49C())
			{
				if (unk_0xABCF7EB00A727656(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91()) || unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91())) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xABE7CC39119C8E2B(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		if (Global_102284)
		{
			return 0;
		}
	}
	if (Global_69800)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x8EEB10CA57B82F27();
	iVar1 = unk_0xC1A55CEDE7782B6F(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xEC4D5A37A29CB49C()))
	{
		iVar2 = 1;
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				iVar3 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if ((((((((unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iVar3)) || unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(iVar3))) || unk_0xD043D4D784E459B0(unk_0xD3B21CE53AA7BE51(iVar3))) || unk_0xD3B21CE53AA7BE51(iVar3) == joaat("seashark")) || unk_0xD3B21CE53AA7BE51(iVar3) == joaat("seashark2")) || unk_0xD3B21CE53AA7BE51(iVar3) == joaat("rhino")) || unk_0xD3B21CE53AA7BE51(iVar3) == joaat("submersible")) || unk_0xD3B21CE53AA7BE51(iVar3) == joaat("submersible2")) || unk_0xD3B21CE53AA7BE51(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2600899 || iVar2 == 1)
	{
		if (unk_0x09952BA662A7629B(joaat("apptrackify")) > 0 || Global_103236.f_13832.f_89)
		{
			if (unk_0x09952BA662A7629B(joaat("michael2")) > 0)
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
	unk_0x4E6996123FABDB93(0, 47, 1);
	unk_0x712F381D6DC979A0(0, Global_14413);
	Local_84 = { Global_14403 };
	Local_87 = { Global_14396[Global_14388 /*3*/] };
	if (func_81())
	{
		unk_0x65C77C41899B06DE(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0xE3812E52897ABBA5(&Local_93);
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
		func_130(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_83();
		}
		if (iLocal_121)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
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
				unk_0x2D9B76A7E5712CA4(Local_78, 0);
				unk_0x24E41EE5A159D7A3(Local_81);
			}
			func_90(0, 1);
		}
		else if (func_81() == 0)
		{
			unk_0x2D9B76A7E5712CA4(Local_78, 0);
			unk_0x24E41EE5A159D7A3(Local_81);
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
	unk_0x2D9B76A7E5712CA4(Local_78, 0);
}

void func_83()
{
	func_1(0);
	if (func_81() == 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 30))
		{
			unk_0x24E41EE5A159D7A3(Global_14389[Global_14388 /*3*/]);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14396[Global_14388 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0x2D9B76A7E5712CA4(Local_78, 0);
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
	if (unk_0xA8AF99BD8D81CFB7(uLocal_140))
	{
		func_129(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x117BBA4FCB43C905();
	unk_0x73F5E7B6BB964839(&uLocal_141);
	unk_0x73F5E7B6BB964839(&uLocal_140);
	if (Global_14606 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 17);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 17);
	}
	unk_0x507FE690B1271947(&Global_2313, 18);
	unk_0x507FE690B1271947(&Global_2313, 21);
	unk_0xCE563FE94BCF6479(0, 1);
	unk_0x507FE690B1271947(&Global_2315, 3);
	unk_0x507FE690B1271947(&Global_2600685, 3);
	unk_0x8850034223654421(0);
	unk_0x0557F3AE1FDE40F1(unk_0x0FFED3E94261A832(), 1);
	unk_0x58553FD5FAFD566B(15);
	Global_16782 = 1;
	unk_0xDC0343058D861402(iLocal_112);
	unk_0x15BA16B33BC155D8(iLocal_112);
	unk_0xF07571B6B1209821();
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0xBBC80F08DA023D82(unk_0x2A5EB8B0FE590B91(), "Mood_Normal_1", 0);
		unk_0x252EC060FAC0EDEF(unk_0x2A5EB8B0FE590B91());
	}
	func_92();
	unk_0x2B4BC1049E76026C(0);
	unk_0xC13E8D8CB768BDD3(0);
	unk_0x3704D8839A11B269(1f);
	if (Global_2599410 > 0 && Global_2599410 < 13)
	{
		unk_0x2FCDEAA8BCC22D85(sLocal_33[Global_2599410]);
	}
	func_90(0, 1);
	if (func_136(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0xA232817B0B36F2E5();
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
	while (!unk_0xA8AF99BD8D81CFB7(Global_14424))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14443.f_1)
	{
		case 6:
			func_130(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_2918);
			if (Global_2918 == 1)
			{
				func_130(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14447), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14447;
			}
			else
			{
				func_130(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14448), -1082130432, -1082130432, -1082130432);
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
				unk_0x507FE690B1271947(&Global_2313, 17);
			}
			else if (Global_69800)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x507FE690B1271947(&Global_2313, 17);
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
				unk_0xF6082E2ADA1C795B(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_130(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
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
				func_130(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_103236.f_13832[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(4);
					unk_0x4CECF13AF144A8F6(0);
					unk_0x4CECF13AF144A8F6(2);
					unk_0xADBDBA2DF8443753("CELL_CONDFON");
					unk_0xCF6846167A5EFE98(&Global_15760);
					unk_0xF7D95CCE1364B5CE();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0x8123397DC676E794();
				}
				else if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), "CELL_217", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
				}
				func_130(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_130(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_103236.f_13832[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_86();
				if (Global_15758)
				{
					unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(4);
					unk_0x4CECF13AF144A8F6(0);
					unk_0x4CECF13AF144A8F6(2);
					unk_0xADBDBA2DF8443753("CELL_CONDFON");
					unk_0xCF6846167A5EFE98(&Global_15760);
					unk_0xF7D95CCE1364B5CE();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0x8123397DC676E794();
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
					if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_130(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_130(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), &Var0, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
					}
				}
				func_130(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	if (unk_0xA8AF99BD8D81CFB7(Global_14424))
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
			else if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
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
			unk_0x507FE690B1271947(&Global_2313, 17);
		}
		else
		{
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
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
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2600897)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_87(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0x58478145CAF8429C(iParam8))
	{
		func_58(iParam8);
	}
	if (!unk_0x58478145CAF8429C(iParam9))
	{
		func_58(iParam9);
	}
	if (!unk_0x58478145CAF8429C(iParam10))
	{
		func_58(iParam10);
	}
	if (!unk_0x58478145CAF8429C(iParam11))
	{
		func_58(iParam11);
	}
	unk_0x8123397DC676E794();
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
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
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
									if (Global_103236.f_13922[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_103236.f_13922[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_103236.f_13922[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69800)
								{
									iVar4 = 0;
									iVar4 = Global_2599419;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2599420[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2599420[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2599420[iVar5 /*104*/].f_99[Global_14443] == 1)
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
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(Global_2319);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar7);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar8);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 8)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if ((iVar1 == 23 && unk_0x35302CD5A5D37EED(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xAA4F14DA15DB0B51(Global_2314, 6))
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
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
			unk_0xCE563FE94BCF6479(0, 1);
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
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
			if (!unk_0xAA4F14DA15DB0B51(Global_2313, 22))
			{
				unk_0xCE563FE94BCF6479(0, 1);
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
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
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_91(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
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
	if ((Global_1638223.f_107887 == 0 && Global_1638223.f_107888 == 0) && Global_1770934 == 0)
	{
		unk_0x64418B7144C47685();
	}
}

void func_93(int iParam0, int iParam1)
{
	if (Global_1638223.f_107887 == 1)
	{
	}
	else if (Global_1638223.f_107888 == 1)
	{
	}
	else
	{
		unk_0x6395383BCE361F3C(iParam0, iParam1);
	}
}

int func_94()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 15))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x92BC4A8239BDDACC(iParam0, uParam1) || (iParam2 == 1 && unk_0xBA36AFDE947F5C56(iParam0, iParam1)))
	{
		if (unk_0x5018862FF5D9F844())
		{
			if (unk_0x20CC52AB5EBEF40E() == 0 || (unk_0x2593BD27F8406EC2() && unk_0x3A473E888D0CF9FD(2)))
			{
				return 0;
			}
		}
		if (unk_0x9E5289F5D782437C() || unk_0x908783EBF098B817())
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
			unk_0x65C77C41899B06DE(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0xE3812E52897ABBA5(&Local_93);
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
			unk_0x2D9B76A7E5712CA4(Local_78, 0);
			unk_0x24E41EE5A159D7A3(Local_81);
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
		unk_0x2D9B76A7E5712CA4(Local_78, 0);
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
				unk_0x2D9B76A7E5712CA4(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x24E41EE5A159D7A3(Local_81);
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
				func_108();
				func_130(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
				{
					func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_132();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0x2D9B76A7E5712CA4(Local_78, 0);
		Global_16779 = 0;
	}
}

void func_97(bool bParam0)
{
	if (func_138())
	{
		if (bParam0)
		{
			if (!unk_0x29F3ECECE1383BF4())
			{
				unk_0x2661DFEF09188342(1);
				if (Global_2599410 > 0 && Global_2599410 < 99)
				{
					unk_0xD84C2C19BCCA3172(sLocal_33[Global_2599410], 0);
					unk_0x3704D8839A11B269(0.25f);
				}
			}
		}
		else if (unk_0x29F3ECECE1383BF4())
		{
			unk_0x2661DFEF09188342(0);
		}
	}
}

void func_98()
{
	if (Global_2599409 > 0 && Global_2599409 < 99)
	{
		if (Global_1770934 == 0)
		{
			unk_0x7BBCA8A7F92B5FFC(sLocal_19[Global_2599409]);
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
	if (Global_1638223.f_107887 == 1 && func_101())
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (unk_0x35302CD5A5D37EED(&cLocal_145, "DUMMYCOMPARISON"))
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
	if (func_103() || func_102())
	{
		return 1;
	}
	return 0;
}

var func_102()
{
	return Global_2445217.f_13;
}

var func_103()
{
	return Global_2445217.f_12;
}

void func_104()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Back", &Global_14432, 1);
	}
}

void func_105()
{
	unk_0x7E5D07A08817D595(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_106()
{
	func_107();
}

void func_107()
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

void func_108()
{
	if (Global_14443.f_1 > 3)
	{
		if (!unk_0x9E5289F5D782437C())
		{
			unk_0xED8A6509C85CF7A1(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_109()
{
	if (func_57(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_110(int iParam0)
{
	if (Global_14604)
	{
		func_90(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_111())
	{
		Global_14443.f_1 = 3;
	}
}

int func_111()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112()
{
	unk_0x4E6996123FABDB93(0, 0, 1);
	unk_0x4E6996123FABDB93(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0x712F381D6DC979A0(0, Global_14416);
		unk_0x712F381D6DC979A0(0, Global_14413);
		unk_0x4E6996123FABDB93(0, 278, 1);
		unk_0x4E6996123FABDB93(0, 279, 1);
		unk_0x4E6996123FABDB93(0, 280, 1);
		unk_0x4E6996123FABDB93(0, 281, 1);
		unk_0x4E6996123FABDB93(0, 282, 1);
		unk_0x4E6996123FABDB93(0, 282, 1);
		unk_0x4E6996123FABDB93(0, 284, 1);
		unk_0x4E6996123FABDB93(0, 285, 1);
		unk_0x4E6996123FABDB93(0, 69, 1);
		unk_0x4E6996123FABDB93(0, 70, 1);
		unk_0x4E6996123FABDB93(0, 114, 1);
		unk_0x4E6996123FABDB93(0, 71, 1);
		unk_0x4E6996123FABDB93(0, 72, 1);
		unk_0x4E6996123FABDB93(0, 74, 1);
		unk_0x4E6996123FABDB93(0, 75, 1);
		unk_0x4E6996123FABDB93(0, 76, 1);
		unk_0x4E6996123FABDB93(0, 73, 1);
		unk_0x4E6996123FABDB93(0, 77, 1);
		unk_0x4E6996123FABDB93(0, 78, 1);
		unk_0x4E6996123FABDB93(0, 286, 1);
		unk_0x4E6996123FABDB93(0, 287, 1);
		unk_0x4E6996123FABDB93(0, 79, 1);
		unk_0x4E6996123FABDB93(0, 80, 1);
		unk_0x4E6996123FABDB93(0, 81, 1);
		unk_0x4E6996123FABDB93(0, 82, 1);
		unk_0x4E6996123FABDB93(0, 86, 1);
		unk_0x4E6996123FABDB93(0, 59, 1);
		unk_0x4E6996123FABDB93(0, 60, 1);
		unk_0x4E6996123FABDB93(0, 61, 1);
		unk_0x4E6996123FABDB93(0, 62, 1);
		unk_0x4E6996123FABDB93(0, 63, 1);
		unk_0x4E6996123FABDB93(0, 64, 1);
		unk_0x4E6996123FABDB93(0, 87, 1);
		unk_0x4E6996123FABDB93(0, 88, 1);
		unk_0x4E6996123FABDB93(0, 89, 1);
		unk_0x4E6996123FABDB93(0, 90, 1);
		unk_0x4E6996123FABDB93(0, 107, 1);
		unk_0x4E6996123FABDB93(0, 108, 1);
		unk_0x4E6996123FABDB93(0, 109, 1);
		unk_0x4E6996123FABDB93(0, 110, 1);
		unk_0x4E6996123FABDB93(0, 111, 1);
		unk_0x4E6996123FABDB93(0, 112, 1);
		unk_0x4E6996123FABDB93(0, 113, 1);
		unk_0x4E6996123FABDB93(0, 114, 1);
		unk_0x4E6996123FABDB93(0, 91, 1);
		unk_0x4E6996123FABDB93(0, 92, 1);
		unk_0x4E6996123FABDB93(0, 68, 1);
		unk_0x4E6996123FABDB93(0, 102, 1);
		unk_0x4E6996123FABDB93(0, 136, 1);
		unk_0x4E6996123FABDB93(0, 137, 1);
		unk_0x4E6996123FABDB93(0, 138, 1);
		unk_0x4E6996123FABDB93(0, 139, 1);
		unk_0x4E6996123FABDB93(0, 102, 1);
	}
}

int func_113()
{
	var uVar0;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x457D9E478E06E354(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x8F8E5C33266ED978(uVar0, -1, 0) == unk_0x2A5EB8B0FE590B91())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_114()
{
	var uVar0;
	
	func_121(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_120())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_119())
	{
		return 1;
	}
	if (func_118(157))
	{
		if (!func_117())
		{
			return 1;
		}
	}
	if (func_118(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_115() != 0)
	{
		if (unk_0x09952BA662A7629B(func_115()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_115()
{
	switch (func_116())
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

int func_116()
{
	return Global_25222;
}

bool func_117()
{
	return Global_2445217.f_578;
}

int func_118(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return Global_2454709;
}

bool func_120()
{
	return Global_2445217.f_573;
}

void func_121(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_122(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_122(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_124(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(iVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					iVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(iVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_123(iVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_123(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_125()
{
	if (iLocal_156 == 1)
	{
		unk_0x47BFFB0507046AE3(7);
		unk_0x47BFFB0507046AE3(1);
		unk_0x47BFFB0507046AE3(3);
		unk_0x47BFFB0507046AE3(4);
		unk_0x47BFFB0507046AE3(6);
		unk_0x47BFFB0507046AE3(8);
		unk_0x47BFFB0507046AE3(9);
		unk_0x47BFFB0507046AE3(2);
	}
	else
	{
		unk_0x9BF32B79391A5A8E();
	}
}

void func_126(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_127()
{
	if (func_128())
	{
		unk_0xFC04CBE1A9183D1C();
		if (unk_0xA3F0044CC8BFC197(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16782 = 1;
			Global_14443.f_1 = 3;
			unk_0xF07571B6B1209821();
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
				if (unk_0xA8AF99BD8D81CFB7(uLocal_140))
				{
					if (func_138())
					{
						if (Global_2599410 == 0)
						{
							if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
							{
								func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xAA4F14DA15DB0B51(Global_2600685, 2))
						{
							func_130(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xA8AF99BD8D81CFB7(uLocal_140))
			{
				func_130(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_130(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0xF07571B6B1209821();
	}
}

int func_128()
{
	if (Global_1638223.f_107887 == 1)
	{
		if (Global_69800)
		{
			return 0;
		}
	}
	if (Global_1638223.f_107888 == 1)
	{
		if (Global_69800)
		{
			return 0;
		}
	}
	if (unk_0xC1A8588DDF7A118E() || unk_0xCF690C88B391CFA3())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2314, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_129(var uParam0, char* sParam1)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x8123397DC676E794();
}

void func_130(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

int func_131()
{
	if (Global_69800)
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
	return Global_103236.f_13832[Global_14443 /*20*/].f_7;
}

void func_132()
{
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 8;
	}
	Global_16781 = 0;
	iLocal_127 = 0;
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		Local_67 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
	}
	if (Global_14385)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_108();
			func_77();
			unk_0x117BBA4FCB43C905();
		}
		func_129(uLocal_140, "OPEN_SHUTTER");
		func_125();
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

void func_133(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 15);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 15);
	}
}

bool func_134()
{
	return Global_1312829;
}

void func_135()
{
}

int func_136(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && bParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_137()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0xE54DA6A5B710C410(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0x40C35C94A0106576(unk_0x2A5EB8B0FE590B91(), 0, 0);
			unk_0x74CCD93B09F31639(fLocal_157);
			unk_0xDDC4CE96C5C85FE6(fLocal_158);
			unk_0x73CBC4C445F8EE12(fLocal_159);
		}
		else
		{
			unk_0x74CCD93B09F31639(fLocal_157);
			unk_0xDDC4CE96C5C85FE6(fLocal_158);
			unk_0x73CBC4C445F8EE12(fLocal_159);
		}
	}
	unk_0x77E998D48C2025E6(fLocal_160);
	unk_0x8B52BC17B803F6D5(fLocal_161);
	unk_0x6A8C75AA44DE5E21(fLocal_162);
	unk_0x29E931E8432A81DA(fLocal_163);
	func_52();
}

int func_138()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}


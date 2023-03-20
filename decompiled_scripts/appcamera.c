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
	unk_0x1ED2FDBD02899869();
	if (!func_132())
	{
		Global_2544264 = 99;
		Global_2544265 = 99;
		iLocal_56 = 99;
	}
	else
	{
		Global_2544264 = 0;
		Global_2544265 = 0;
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
	func_131();
	if (func_130(1, 1, !iLocal_63))
	{
		iLocal_63 = 1;
	}
	func_129();
	iLocal_111 = unk_0x50798E25F4813F2F();
	if (Global_14338 == 0)
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
	Global_16725 = 0;
	Global_16726 = 0;
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xE3B645EC13EE2D8D(unk_0x9F92518438215DD0()))
		{
			Global_16725 = 1;
		}
		if (unk_0x5C2DECF07A5C811E())
		{
			Global_16725 = 1;
		}
		if (unk_0xFC38B241541883D3(unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0()), 0))
		{
			Global_16725 = 1;
		}
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
		{
			Global_16725 = 1;
		}
		if (unk_0x8E327DAF12E432F2(unk_0x9F92518438215DD0()))
		{
			Global_16725 = 1;
		}
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (iLocal_130 == 1)
			{
				Global_16725 = 1;
			}
			uLocal_148 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if ((unk_0xB6A50C909A8FABC3(uLocal_148) == joaat("rhino") || unk_0xB6A50C909A8FABC3(iLocal_148) == joaat("cutter")) || unk_0xB6A50C909A8FABC3(iLocal_148) == joaat("submersible"))
			{
				Global_16725 = 1;
			}
			else if (unk_0xB5BBEB12C77EE430(iLocal_148, -1) == unk_0x9F92518438215DD0())
			{
				if (unk_0xCC4F040D720C3035(iLocal_148) > 0f)
				{
					if (!Global_68245)
					{
						if (!func_128())
						{
							unk_0xF89257C590FF140F(unk_0x9F92518438215DD0(), iLocal_148, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_68245)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xFA941E13D6577B0A(unk_0xCFC72E446B0B3AD7(), 0);
		}
	}
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 21);
	func_127(0);
	unk_0xEDB9A377CD8B7F03(&Global_2263, 17);
	if (Global_14335 == 0)
	{
		func_126();
	}
	else
	{
		uLocal_139 = unk_0xC97D787CE7726A2F("camera_gallery");
		uLocal_140 = unk_0xC97D787CE7726A2F("instructional_buttons");
		while (!unk_0x5E3461E729DA646E(uLocal_139) || !unk_0x5E3461E729DA646E(uLocal_140))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x125C94DBA75FDFFA();
			unk_0x6A6A41C66448AD09(0, 25, 1);
		}
		if (Global_68245)
		{
			iLocal_143 = 2;
		}
		else
		{
			switch (func_125())
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
		func_124(uLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
		func_123(uLocal_139, "CLOSE_SHUTTER");
		unk_0x48F299599202B77A(Global_14374, "DISPLAY_VIEW");
		unk_0x4BD4D58838D3F8E5(16);
		unk_0x7E86CE5F658823DB();
	}
	Local_77 = { Global_14353 };
	Local_80 = { Global_14346[Global_14338 /*3*/] };
	Global_16726 = 1;
	iLocal_117 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	if (iLocal_130 == 0)
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2265, 3);
	}
	func_121();
	unk_0xF36D3CA21410B7D5(4);
	if (unk_0x264ED4AB1DD1ED11())
	{
	}
	if (Global_1603097.f_70853)
	{
	}
	if (unk_0x3016BBFD691EE89E())
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
		unk_0x125C94DBA75FDFFA();
		unk_0x6A6A41C66448AD09(0, 25, 1);
		unk_0x6A6A41C66448AD09(0, 0, 1);
		if (!Global_97358.f_12305.f_81)
		{
			if (!unk_0x94E72F17611BCD3C(Global_2545539, 13))
			{
				if (!unk_0xC9EED58014EF1F40())
				{
					if (!unk_0x94E72F17611BCD3C(Global_2264, 28))
					{
						if (iLocal_127 && iLocal_130 == 0)
						{
							unk_0xEDB9A377CD8B7F03(&Global_2545539, 13);
							Global_97358.f_12305.f_81 = 1;
							func_120("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xC8557993A78C1B3E())
		{
			if (Global_1603097.f_70852 == 0 && Global_1603097.f_70853 == 0)
			{
				unk_0x6DE6CA985EC34A26(15, 0f, -0.0375f);
			}
			unk_0xAB10BEEBB0614A3E(7);
			unk_0x10663E41E1571A19();
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 200, 1);
			}
			unk_0x6A6A41C66448AD09(0, 44, 1);
			unk_0x6A6A41C66448AD09(0, 47, 1);
			unk_0x6A6A41C66448AD09(0, 91, 1);
			unk_0x6A6A41C66448AD09(0, 92, 1);
			unk_0x6A6A41C66448AD09(0, 68, 1);
			if (iLocal_149 == 0)
			{
				unk_0x303F3ACCD1D0223D(0, Global_14366);
			}
			unk_0x303F3ACCD1D0223D(0, Global_14363);
			if (unk_0x2E9CF5C574019636() || unk_0x351E8373AE3D741D())
			{
				iLocal_129 = 1;
				Global_14393.f_1 = 3;
				unk_0xAA7F469826C4FBBF(0);
			}
			if (unk_0x970F55EB506DBB0C())
			{
				Global_14393.f_1 = 3;
				unk_0xAA7F469826C4FBBF(0);
			}
			if (unk_0x94E72F17611BCD3C(Global_2264, 3))
			{
				Global_14393.f_1 = 3;
				unk_0xAA7F469826C4FBBF(0);
			}
			if (unk_0x4B69FB3A5B09A1BA())
			{
				if (func_109())
				{
					Global_14393.f_1 = 3;
					unk_0xAA7F469826C4FBBF(0);
				}
			}
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0xFDFEC308151CBB48(unk_0x9F92518438215DD0(), 0))
				{
					Global_14393.f_1 = 3;
					unk_0xAA7F469826C4FBBF(0);
				}
				if ((unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0xA9526B5F78178A02(unk_0xCFC72E446B0B3AD7()))
				{
					if (func_108())
					{
					}
					else
					{
						Global_14393.f_1 = 3;
						unk_0xAA7F469826C4FBBF(0);
					}
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					if (Global_68245 == 1)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
				{
					if (unk_0x1CFEFA649EF60E6E(unk_0x9F92518438215DD0()) > 0.3f)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					func_107();
					iLocal_148 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0xCC4F040D720C3035(iLocal_148) < 0f)
					{
						func_105(0);
					}
					if (iLocal_114 == 1)
					{
						if (iLocal_115 == 1)
						{
							if (!unk_0x6F049B29EB7EE5FD())
							{
								func_105(0);
							}
						}
						else if (!unk_0x6F049B29EB7EE5FD())
						{
							iLocal_115 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x125C94DBA75FDFFA();
						}
					}
				}
				else if (Global_68245 == 0)
				{
					if (unk_0x94E72F17611BCD3C(Global_2263, 18))
					{
						func_104();
						if ((Global_14393 == 0 || Global_14393 == 1) || Global_14393 == 2)
						{
							if (!unk_0xFBFAB4A44A0232D6(unk_0x9F92518438215DD0()))
							{
								if (unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
								{
								}
								else
								{
									Global_14393.f_1 = 3;
									unk_0xAA7F469826C4FBBF(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_141)
			{
				func_103();
			}
			if (Global_14393.f_1 < 4)
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
							if (Global_14393.f_1 > 3)
							{
								if (iLocal_149)
								{
									func_101();
									if (Global_16730 == 0 && Global_16727 == 6)
									{
										unk_0xC15351F18B67BEDB(0, 1);
										unk_0xBFB1954F04B5BAEA();
										iLocal_149 = 0;
										func_100();
										if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
										{
											Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
										}
										func_99();
										iLocal_108++;
										if (func_132())
										{
											func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
									}
									if (Global_16727 == 0)
									{
										iLocal_149 = 0;
										unk_0xBFB1954F04B5BAEA();
										if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
										{
											Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
										}
										func_97();
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
										if (func_132())
										{
											if (Global_2544265 == 0)
											{
												if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
												{
													func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
										{
											func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_96();
										func_95(1);
									}
								}
								else if (Global_14393.f_1 != 9)
								{
									if (Global_16726 == 1)
									{
										if (Global_16725 == 0)
										{
											func_94();
										}
									}
									else if ((Global_2871 - Global_2870) > Global_2872)
									{
										if (func_93(2, Global_14361, 0))
										{
											if (func_92() && iLocal_126)
											{
											}
											else if (iLocal_126 == 0)
											{
												unk_0xAA7F469826C4FBBF(0);
												unk_0xC4370267C511F8E7(iLocal_111);
												iLocal_142 = 0;
												if (Global_16725 == 0)
												{
													func_99();
													Global_16725 = 1;
													unk_0xC15351F18B67BEDB(0, 1);
													iLocal_127 = 0;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													func_91(0, 0);
													func_95(0);
													iLocal_114 = 0;
													func_90();
													iLocal_141 = 0;
													func_88(0, 1);
													func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_100 == 0)
									{
										if (unk_0xC9EED58014EF1F40())
										{
											func_87();
											iLocal_100 = 1;
										}
									}
									else if (!unk_0xC9EED58014EF1F40())
									{
										func_87();
										iLocal_100 = 0;
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x94E72F17611BCD3C(Global_2263, 28))
										{
											func_87();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x94E72F17611BCD3C(Global_2263, 28))
									{
										func_87();
										iLocal_101 = 0;
									}
									if (Global_16725 == 1)
									{
										func_80();
									}
									else if (Global_14393.f_1 > 4)
									{
										if (iLocal_123 == 1 && iLocal_124 == 0)
										{
											func_76();
										}
										if (iLocal_123 == 0 && iLocal_124 == 1)
										{
											func_97();
											if (iLocal_135 == 1 || iLocal_135 == 0)
											{
												if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
												{
													if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
													{
														func_123(uLocal_139, "CLOSE_SHUTTER");
														iLocal_134 = unk_0x17103F66FBB44C3C();
														while (unk_0x17103F66FBB44C3C() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
														{
															unk_0x10663E41E1571A19();
															func_103();
															func_75();
															unk_0x125C94DBA75FDFFA();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_132())
												{
													if (Global_2544265 == 0)
													{
														if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
														{
															func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
												{
													func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_103();
												unk_0x10663E41E1571A19();
												iLocal_131 = 0;
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_126 = 0;
												func_98();
												iLocal_135 = 0;
												func_123(uLocal_139, "OPEN_SHUTTER");
											}
											func_96();
											func_95(1);
											func_74();
										}
									}
									if (iLocal_142 == 1)
									{
										func_71();
									}
									if (iLocal_128)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_127 = 1;
											iLocal_128 = 0;
											unk_0xEDB9A377CD8B7F03(&Global_2263, 18);
											if (Global_16725 == 0)
											{
												func_88(1, 1);
											}
										}
									}
									if (iLocal_126 == 0)
									{
										if (iLocal_127 && Global_16725 == 0)
										{
											if ((iLocal_129 == 0 && iLocal_124 == 0) && Global_16728 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_75();
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
					if (Global_14393.f_1 > 3)
					{
						if (Global_16726 == 1)
						{
							if (Global_16725 == 0)
							{
								func_94();
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
					if (unk_0x1B54267BB477DB52() || unk_0x035E2C7B598704F7())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x523427CCABD5EC9C() || unk_0x7F11C755C90EFEC5())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x708CE249B4F97BF8())
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
					iVar0 = unk_0x362F62634C5FB932();
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
					if (unk_0x205C5BF7277043DF(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_88(0, 1);
					}
					if (unk_0x205C5BF7277043DF(2, 201))
					{
						iLocal_153 = 1;
					}
					if (iLocal_153 == 1)
					{
						if (unk_0x98A0901522E89A7F(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							iLocal_153 = 0;
							unk_0x88D1C49324D231FD("Gallery");
							unk_0x94482D690855802F();
						}
					}
				}
				else if (iLocal_154 == 7)
				{
					if (unk_0x7F11C755C90EFEC5())
					{
						if (unk_0x205C5BF7277043DF(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							iLocal_110 = 0;
						}
					}
					else if (unk_0x205C5BF7277043DF(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_88(0, 1);
						iLocal_110 = 0;
					}
					if (!unk_0x7F11C755C90EFEC5())
					{
						if (unk_0x205C5BF7277043DF(2, Global_14365))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							if (unk_0x94E72F17611BCD3C(Global_2264, 28))
							{
								iLocal_110 = 0;
							}
							else
							{
								iLocal_110 = 2;
							}
							iLocal_106 = unk_0x17103F66FBB44C3C();
							unk_0x02C6B8F3FABD0EB9(1);
						}
					}
				}
				else if (unk_0x205C5BF7277043DF(2, 201))
				{
					iLocal_152 = 0;
					iLocal_154 = 0;
					func_88(0, 1);
				}
			}
		}
		iLocal_107 = unk_0x17103F66FBB44C3C();
		if (func_3() || iLocal_129)
		{
			func_1(0);
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			Global_16725 = 0;
			Global_16726 = 0;
			Global_16728 = 0;
			unk_0x76D57BAF1F432EA7(&uLocal_139);
			unk_0x76D57BAF1F432EA7(&uLocal_140);
			unk_0xAA7F469826C4FBBF(0);
			if (Global_14553 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&Global_2263, 17);
			}
			else
			{
				unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			}
			unk_0xC15351F18B67BEDB(0, 1);
			unk_0xFA941E13D6577B0A(unk_0xCFC72E446B0B3AD7(), 1);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 3);
			unk_0xF76EE56D3E7DAF1B(&Global_2545539, 3);
			unk_0xDEAFB44F1BAAE861(15);
			Global_16729 = 1;
			unk_0xC4370267C511F8E7(iLocal_111);
			unk_0xB5B1A17260769F4A(iLocal_111);
			unk_0xBFB1954F04B5BAEA();
			func_90();
			unk_0x614F315C702A78CF(0);
			unk_0xDF17D6901A4145C7(0);
			unk_0xCC56ED5F47117A35(1f);
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				unk_0xB4044E2B219C21F5(unk_0x9F92518438215DD0(), "Mood_Normal_1", 0);
				unk_0x81E2C9AAF397C44E(unk_0x9F92518438215DD0());
			}
			if (Global_2544265 > 0 && Global_2544265 < 13)
			{
				unk_0x4B48A2F5324596EE(sLocal_32[Global_2544265]);
			}
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 18);
			func_88(0, 1);
			if (func_130(0, 1, iLocal_63))
			{
				iLocal_63 = 0;
			}
			unk_0xE60DEFFB2A853900();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x18BEC98796D20EA3(1);
		}
		else if (Global_14393.f_1 > 3)
		{
			unk_0x18BEC98796D20EA3(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xB14E47EA29D7193F();
	iVar1 = unk_0xB49A1BEB8771FD4C(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2545741 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_105 = unk_0x30D562222CC0DC9B(0);
	switch (iLocal_105)
	{
		case 0:
			iLocal_102 = 0;
			iLocal_108 = unk_0x0CBF403BBEC2E67D();
			iLocal_109 = unk_0xB7A092FD04A87C21();
			if (iLocal_103 == 1)
			{
				if (iLocal_126 == 0)
				{
					if (unk_0x5E3461E729DA646E(uLocal_139))
					{
						if (func_132())
						{
							if (Global_2544265 == 0)
							{
								if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
								{
									func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
							{
								func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x5E3461E729DA646E(uLocal_139))
				{
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				}
				iLocal_103 = 0;
			}
			unk_0xBFB1954F04B5BAEA();
			break;
		
		case 1:
			if (!unk_0xF0C393944E5D9382())
			{
				unk_0xD2527DA9A2BC60B0("CELL_SPINNER2");
				unk_0x9D67E5549B880DF9(1);
			}
			break;
		
		case 2:
			if (unk_0x94E72F17611BCD3C(Global_2264, 28))
			{
				iLocal_102 = 0;
				iLocal_108 = 0;
				iLocal_109 = 0;
			}
			else
			{
				Global_14393.f_1 = 3;
				Global_16729 = 1;
			}
			unk_0xBFB1954F04B5BAEA();
			break;
	}
}

void func_5()
{
	if (func_93(2, Global_14362, 0))
	{
		func_1(0);
		if (unk_0x94E72F17611BCD3C(Global_2264, 28))
		{
			unk_0xAA7F469826C4FBBF(0);
			unk_0x5AE11BC36633DE4E(0);
			func_100();
			iLocal_126 = 0;
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			}
			func_99();
			iLocal_135 = 1;
		}
		else if (func_9())
		{
			if (unk_0x94E72F17611BCD3C(Global_2264, 14))
			{
				func_120("CELL_299", -1);
			}
			else
			{
				func_99();
				func_8();
			}
		}
		else
		{
			iLocal_152 = 1;
			func_88(1, 1);
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2263, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x10663E41E1571A19();
			unk_0x125C94DBA75FDFFA();
			func_75();
			func_107();
			func_103();
		}
		unk_0xAA7F469826C4FBBF(0);
		func_100();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_126 = 0;
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
		}
		func_98();
		func_99();
	}
	if (func_93(2, Global_14366, 0))
	{
		func_1(0);
		if (func_92() || unk_0x94E72F17611BCD3C(Global_2264, 28))
		{
		}
		else
		{
			unk_0xAA7F469826C4FBBF(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_135 = 1;
			func_100();
			iLocal_126 = 0;
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			}
			func_99();
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2263, 28))
	{
		if (func_93(2, Global_14365, 0))
		{
			func_1(0);
			unk_0xAA7F469826C4FBBF(0);
			unk_0xA695E73AF205B3C7(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x125C94DBA75FDFFA();
			unk_0x10663E41E1571A19();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x125C94DBA75FDFFA();
			unk_0x10663E41E1571A19();
			unk_0x67DD7C94D9E8219F();
			unk_0xD2EDF62087D3B509();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 0;
			func_88(0, 1);
			Global_16725 = 1;
			unk_0xC15351F18B67BEDB(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			unk_0xEDB9A377CD8B7F03(&Global_2263, 9);
			iLocal_141 = 0;
			func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x86F4B3D6FF8F65DE(-1, "Menu_Accept", &Global_14382, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x12E8F892A05375AB(5);
	}
}

void func_8()
{
	iLocal_149 = 1;
	Global_16730 = 1;
	unk_0xC15351F18B67BEDB(0, 1);
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
	if (Global_14393.f_1 < 4)
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
	
	if (unk_0x286FD331C17C5174(2))
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
		func_66();
		func_62();
		func_61();
		fLocal_72 = unk_0x0D28A3F7EFA7625F();
		fLocal_73 = unk_0xA4BE64FBDAC46152();
		if (iLocal_132 == 0)
		{
			if (unk_0x859C6F0CEF1CB9FE(2, iVar0) && !unk_0x859C6F0CEF1CB9FE(2, iVar1))
			{
				iLocal_132 = 1;
				func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x94E72F17611BCD3C(Global_2263, 28))
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(2, 179, 1), "CELL_287");
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 176, 1), "CELL_280");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_58();
				unk_0x48F299599202B77A(uLocal_140, "SET_MAX_WIDTH");
				unk_0xC4F81CF078CCB564(fLocal_76);
				unk_0x7E86CE5F658823DB();
				func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x859C6F0CEF1CB9FE(2, iVar0) || unk_0x859C6F0CEF1CB9FE(2, iVar1))
		{
			iLocal_132 = 0;
			func_98();
		}
		if (iLocal_133 == 0)
		{
			if (unk_0x859C6F0CEF1CB9FE(2, iVar1) && !unk_0x859C6F0CEF1CB9FE(2, iVar0))
			{
				iLocal_133 = 1;
				func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x94E72F17611BCD3C(Global_2263, 28))
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(2, 179, 1), "CELL_287");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 176, 1), "CELL_280");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(0, 177, 1), "CELL_281");
				}
				func_57();
				unk_0x48F299599202B77A(uLocal_140, "SET_MAX_WIDTH");
				unk_0xC4F81CF078CCB564(fLocal_76);
				unk_0x7E86CE5F658823DB();
				func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x859C6F0CEF1CB9FE(2, iVar1) || unk_0x859C6F0CEF1CB9FE(2, iVar0))
		{
			iLocal_133 = 0;
			func_98();
		}
	}
	else
	{
		unk_0xC805A7010638FA82(0, 2, 1);
		unk_0xC805A7010638FA82(0, 1, 1);
	}
	if (unk_0x54610002CC66A3C6(2))
	{
		func_98();
	}
	func_107();
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 200, 1);
	}
	if (unk_0x205C5BF7277043DF(2, 183))
	{
		unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
			{
				if (unk_0x94E72F17611BCD3C(Global_2545539, 2))
				{
					unk_0xF76EE56D3E7DAF1B(&Global_2545539, 2);
					if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
					{
						func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xEDB9A377CD8B7F03(&Global_2545539, 2);
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_130)
	{
		if (iLocal_131 == 1)
		{
			iLocal_131 = 0;
			unk_0x48F299599202B77A(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x63E5FA5DEE979BD6(0);
			func_56("CELL_FOCUS");
			unk_0x63E5FA5DEE979BD6(1);
			unk_0x7E86CE5F658823DB();
		}
		if (!func_55(14))
		{
			if (unk_0x94E72F17611BCD3C(Global_2545539, 10))
			{
				if ((Global_68245 == 0 && unk_0x7B47A371E2D93C2C(joaat("pi_menu")) > 0) && func_54())
				{
					unk_0x48F299599202B77A(uLocal_139, "SET_FOCUS_LOCK");
					unk_0x63E5FA5DEE979BD6(1);
					unk_0x0F79C8080022554A("CELL_ACTTL");
					unk_0x7FAFF3E791AF486A(unk_0x398E4CFB573BEBB7(&Global_2546230));
					unk_0xE6EC84BF3A7A64B6();
					unk_0x63E5FA5DEE979BD6(0);
					unk_0x7E86CE5F658823DB();
					unk_0xF76EE56D3E7DAF1B(&Global_2545539, 10);
				}
			}
		}
		else if (unk_0x94E72F17611BCD3C(Global_2545539, 10))
		{
			unk_0xF76EE56D3E7DAF1B(&Global_2545539, 10);
		}
		iLocal_65 = unk_0x17103F66FBB44C3C();
		if ((iLocal_65 - iLocal_64) > 1500)
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				Local_69 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
				if (unk_0x91EAD4F2F9B5B38A(Local_69, Local_66, 1) > 5f)
				{
					Global_14393.f_1 = 3;
					unk_0xAA7F469826C4FBBF(0);
				}
				iLocal_64 = unk_0x17103F66FBB44C3C();
			}
		}
	}
	else if (iLocal_131)
	{
		if (!unk_0x859C6F0CEF1CB9FE(0, 182))
		{
			unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
			iLocal_131 = 0;
			unk_0x48F299599202B77A(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x63E5FA5DEE979BD6(0);
			func_56("CELL_FOCUS");
			unk_0x63E5FA5DEE979BD6(1);
			unk_0x7E86CE5F658823DB();
		}
	}
	else if (unk_0x859C6F0CEF1CB9FE(0, 182))
	{
		unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
		iLocal_131 = 1;
		if (!func_55(14))
		{
			unk_0x48F299599202B77A(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x63E5FA5DEE979BD6(1);
			func_56("CELL_FOCUS");
			unk_0x63E5FA5DEE979BD6(1);
			unk_0x7E86CE5F658823DB();
		}
	}
	if (func_132())
	{
		if (unk_0x205C5BF7277043DF(2, 186))
		{
			if (iLocal_130)
			{
				iLocal_56++;
				if (iLocal_56 > 0 && iLocal_56 < 7)
				{
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
					{
						unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
						unk_0xB4044E2B219C21F5(unk_0x9F92518438215DD0(), "Mood_Normal_1", 0);
						unk_0x81E2C9AAF397C44E(unk_0x9F92518438215DD0());
						if (Global_14393 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xE4C3669C2BFF9D2E(unk_0x9F92518438215DD0(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xE4C3669C2BFF9D2E(unk_0x9F92518438215DD0(), 1);
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
											unk_0xB4044E2B219C21F5(unk_0x9F92518438215DD0(), sLocal_47[iLocal_56], 0);
										}
									}
								}
								else
								{
									unk_0xB4044E2B219C21F5(unk_0x9F92518438215DD0(), sLocal_47[iLocal_56], 0);
								}
							}
							else
							{
								unk_0xB4044E2B219C21F5(unk_0x9F92518438215DD0(), sLocal_47[iLocal_56], 0);
							}
						}
						else
						{
							unk_0xB4044E2B219C21F5(unk_0x9F92518438215DD0(), sLocal_47[iLocal_56], 0);
						}
					}
				}
				if (iLocal_56 == 7 || iLocal_56 > 7)
				{
					iLocal_56 = 0;
				}
				if (iLocal_56 == 0)
				{
					if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
					{
						unk_0xB4044E2B219C21F5(unk_0x9F92518438215DD0(), "Mood_Normal_1", 0);
						unk_0x81E2C9AAF397C44E(unk_0x9F92518438215DD0());
						unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
					}
				}
			}
		}
		if (unk_0x205C5BF7277043DF(2, 185))
		{
			if (iLocal_130)
			{
				if (bLocal_61 == 1)
				{
					unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
					if (iLocal_60 == 0)
					{
						iLocal_60 = 1;
						iLocal_59 = 1;
						if (unk_0x6B08EC9A88700FBB(sLocal_18[Global_2544264], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x614F315C702A78CF(1);
							unk_0xDF17D6901A4145C7(1);
						}
					}
					else
					{
						iLocal_60 = 0;
						iLocal_59 = 0;
						unk_0x614F315C702A78CF(0);
						unk_0xDF17D6901A4145C7(0);
					}
				}
			}
			else if (bLocal_62 == 1)
			{
				if (iLocal_59 == 0)
				{
					iLocal_59 = 1;
					iLocal_60 = 1;
					unk_0x614F315C702A78CF(1);
					unk_0xDF17D6901A4145C7(1);
				}
				else
				{
					iLocal_59 = 0;
					iLocal_60 = 0;
					unk_0x614F315C702A78CF(0);
					unk_0xDF17D6901A4145C7(0);
				}
			}
		}
	}
	if (iLocal_58 == 1)
	{
		if (unk_0x205C5BF7277043DF(0, 172))
		{
			if (func_132())
			{
				Global_2544265++;
				unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
			}
			if (Global_2544265 == 13)
			{
				func_95(0);
				unk_0xCC56ED5F47117A35(1f);
				unk_0x4B48A2F5324596EE(sLocal_32[(Global_2544265 - 1)]);
				Global_2544265 = 0;
				func_53();
				if (iLocal_46 == 1)
				{
					unk_0xF76EE56D3E7DAF1B(&Global_2545539, 2);
					iLocal_46 = 0;
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2544265 > 0 && Global_2544265 < 13)
			{
				iLocal_58 = 0;
				iLocal_57 = 0;
				unk_0x2EA266AD98E82E2A(sLocal_32[Global_2544265], 0);
			}
		}
	}
	if (Global_2544265 > 0)
	{
		if (iLocal_58 == 0)
		{
			if (unk_0x48125D4CA17FF2F9(sLocal_32[Global_2544265]))
			{
				iLocal_57 = 1;
				iLocal_58 = 1;
				if (!unk_0x4C774C25358157D4())
				{
					func_95(1);
				}
				if (iLocal_46 == 0)
				{
					if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
					{
						iLocal_46 = 1;
					}
				}
				unk_0xEDB9A377CD8B7F03(&Global_2545539, 2);
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xCC56ED5F47117A35(0.25f);
				unk_0xCB523D6B96468ADC(sLocal_32[Global_2544265], 0);
			}
		}
		if (iLocal_57 == 1)
		{
			if (Global_2544265 == 1 || Global_2544265 == 3)
			{
			}
			if (Global_2544265 == 2 || Global_2544265 == 4)
			{
			}
		}
	}
	if (unk_0x205C5BF7277043DF(0, 173))
	{
		if (func_132())
		{
			func_90();
			Global_2544264++;
			unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
		}
		if (Global_2544264 == 13)
		{
			Global_2544264 = 0;
		}
		if (Global_2544264 == 0)
		{
			if (func_132())
			{
				func_90();
			}
		}
		else
		{
			func_96();
		}
		func_52();
	}
	if (unk_0x4841051C33809BC4(0, 184))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && !unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
			{
				Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
				unk_0x86F4B3D6FF8F65DE(-1, "Menu_Navigate", &Global_14382, 1);
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_123(uLocal_139, "CLOSE_SHUTTER");
				iLocal_134 = unk_0x17103F66FBB44C3C();
				while (unk_0x17103F66FBB44C3C() < (iLocal_134 + iLocal_138) && Global_14393.f_1 > 3)
				{
					unk_0x10663E41E1571A19();
					func_103();
					func_75();
					unk_0x125C94DBA75FDFFA();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_130 == 0)
				{
					unk_0xC4370267C511F8E7(iLocal_111);
					iLocal_130 = 1;
					func_51(1);
					func_50();
					unk_0xEDB9A377CD8B7F03(&Global_2265, 3);
					iLocal_64 = unk_0x17103F66FBB44C3C();
				}
				else
				{
					iLocal_132 = 0;
					iLocal_133 = 0;
					func_51(0);
					iLocal_130 = 0;
					unk_0xF76EE56D3E7DAF1B(&Global_2265, 3);
				}
				iLocal_134 = unk_0x17103F66FBB44C3C();
				while (unk_0x17103F66FBB44C3C() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
				{
					unk_0x10663E41E1571A19();
					func_103();
					func_75();
					unk_0x125C94DBA75FDFFA();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_123(uLocal_139, "OPEN_SHUTTER");
				if (func_132())
				{
					if (Global_2544265 == 0)
					{
						if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
						{
							func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
				{
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_103();
				unk_0x10663E41E1571A19();
				if (unk_0x94E72F17611BCD3C(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_296", 16);
					func_49();
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
			if (unk_0x205C5BF7277043DF(0, 40) || unk_0x205C5BF7277043DF(0, 41))
			{
				fLocal_113 = unk_0x45DAFD253C29B370();
				if (fLocal_113 > 1f && fLocal_113 < 4.5f)
				{
					if (unk_0x38DBC7C4442DA796(iLocal_111))
					{
						unk_0x86F4B3D6FF8F65DE(iLocal_111, "Camera_Zoom", &Global_14382, 1);
					}
				}
				else
				{
					unk_0xC4370267C511F8E7(iLocal_111);
				}
				iLocal_112 = 1;
			}
		}
		else if (unk_0x859C6F0CEF1CB9FE(0, 40) || unk_0x859C6F0CEF1CB9FE(0, 41))
		{
			fLocal_113 = unk_0x45DAFD253C29B370();
			if (fLocal_113 > 1f && fLocal_113 < 4.5f)
			{
				if (unk_0x38DBC7C4442DA796(iLocal_111))
				{
					unk_0x86F4B3D6FF8F65DE(iLocal_111, "Camera_Zoom", &Global_14382, 1);
				}
			}
			else
			{
				unk_0xC4370267C511F8E7(iLocal_111);
			}
		}
		else
		{
			unk_0xC4370267C511F8E7(iLocal_111);
		}
	}
	if (func_93(2, Global_14362, 0))
	{
		fLocal_74 = unk_0x0D28A3F7EFA7625F();
		fLocal_75 = unk_0xA4BE64FBDAC46152();
		unk_0xA695E73AF205B3C7(0, 0);
		unk_0xEDB9A377CD8B7F03(&Global_2263, 21);
		unk_0xC4370267C511F8E7(iLocal_111);
		iLocal_126 = 1;
		func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_139, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x86F4B3D6FF8F65DE(-1, "Camera_Shoot", &Global_14382, 1);
		func_123(uLocal_139, "CLOSE_SHUTTER");
		Local_83 = { -90.3f, 0f, 90f };
		unk_0x0AA53CBA4AD863D3(Local_83, 0);
		if (!func_132())
		{
			func_90();
		}
		Global_16728 = 1;
		unk_0xC15351F18B67BEDB(0, 1);
		while (Global_16727 < 6 && Global_14393.f_1 > 3)
		{
			unk_0x10663E41E1571A19();
			func_103();
			func_75();
			func_107();
			unk_0x125C94DBA75FDFFA();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC08B818D89D2371E(0, 0);
		if (Global_14335)
		{
			func_1(1);
		}
		iLocal_134 = unk_0x17103F66FBB44C3C();
		while (unk_0x17103F66FBB44C3C() < (iLocal_134 + iLocal_137) && Global_14393.f_1 > 3)
		{
			unk_0x10663E41E1571A19();
			func_103();
			func_75();
			unk_0x125C94DBA75FDFFA();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_123(uLocal_139, "OPEN_SHUTTER");
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 21);
		func_98();
		if (Global_14393.f_1 > 3)
		{
			if (Global_68245)
			{
				func_20(1078, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0xDED50A15F91DE149(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0xDED50A15F91DE149(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0xDED50A15F91DE149(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_95(0);
		}
		func_103();
	}
	if (unk_0x94E72F17611BCD3C(Global_2263, 28))
	{
		if (func_93(2, Global_14365, 0))
		{
			unk_0xA695E73AF205B3C7(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x125C94DBA75FDFFA();
			unk_0x10663E41E1571A19();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x125C94DBA75FDFFA();
			unk_0x10663E41E1571A19();
			unk_0x67DD7C94D9E8219F();
			unk_0xD2EDF62087D3B509();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 1;
			Global_16725 = 1;
			unk_0xC15351F18B67BEDB(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			unk_0xEDB9A377CD8B7F03(&Global_2263, 9);
			unk_0xAA7F469826C4FBBF(0);
			iLocal_141 = 0;
			func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_15(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_14(unk_0x9F92518438215DD0());
			if (func_13(iVar0) && (!func_55(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
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
		Global_2435039[iVar0] = iParam0;
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
		if (Global_2435039[iVar1] == 0)
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
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_14330 = { Global_14346[Global_14338 /*3*/] };
	func_88(0, 1);
	func_91(0, 0);
	func_95(0);
	iLocal_114 = 0;
	func_90();
	if (!unk_0x94E72F17611BCD3C(Global_2264, 28))
	{
		if (unk_0x264ED4AB1DD1ED11() == 0)
		{
			if (unk_0x1B54267BB477DB52())
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
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 779:
			Global_1335551[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1335557[func_25(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1335563[func_25(uParam2)] = iParam1;
			break;
		
		case 782:
			Global_1335569[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1335527[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1335533[func_25(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1335539[func_25(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1335545[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1335503[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1335509[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1335515[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1335521[func_25(uParam2)] = iParam1;
			break;
		
		case 749:
			Global_1335575[func_25(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1335581[func_25(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1335587[func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335593[func_25(uParam2)] = iParam1;
			break;
		
		case 1294:
			Global_1335599[func_25(uParam2)] = iParam1;
			break;
		
		case 631:
			Global_1335605[func_25(uParam2)] = iParam1;
			break;
		
		case 1269:
			Global_1335611[func_25(uParam2)] = iParam1;
			break;
		
		case 1866:
			Global_2476789[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2476789[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335617[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335623[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335629[func_25(uParam2)] = iParam1;
			break;
		
		case 1227:
			Global_1335635[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 779:
			case 780:
			case 781:
			case 782:
			case 769:
			case 770:
			case 771:
			case 772:
			case 759:
			case 760:
			case 761:
			case 762:
			case 749:
			case 750:
			case 751:
			case 752:
			case 1294:
			case 631:
			case 1269:
			case 756:
			case 757:
			case 758:
			case 1227:
			case 1866:
			case 2255:
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
	uVar0 = Global_2454588[iParam0 /*6*/][func_25(uParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
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
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312737;
}

void func_27()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(0, 177, 1), "CELL_281");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 176, 1), "CELL_280");
		if (iLocal_130)
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) || unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
				{
					if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_68245 == 0 && unk_0x7B47A371E2D93C2C(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 7f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) || unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
			{
				if (!unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x34B4609B3C3F7CD6(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x34B4609B3C3F7CD6(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(0, 182, 1), "CELL_FOCUS");
						}
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x34B4609B3C3F7CD6(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0x34B4609B3C3F7CD6(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(0, 182, 1), "CELL_FOCUS");
						}
						func_59(uLocal_140, "SET_DATA_SLOT", 9f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x48F299599202B77A(uLocal_140, "SET_MAX_WIDTH");
		unk_0xC4F81CF078CCB564(fLocal_76);
		unk_0x7E86CE5F658823DB();
		func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0x34B4609B3C3F7CD6(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_44(Global_2477294, Global_2477295))
		{
			if (iParam0 == 0 || !func_30(Global_2477294, Global_2477295, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x9F92518438215DD0(), iParam0, iParam1, bParam2, bParam3, bParam4);
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
	func_39(iParam1, iParam2, &uVar0, &uVar3, &uVar6, iVar12, bParam5);
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xB6A50C909A8FABC3(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar9 = func_38(iParam0);
			if (!iVar9 == -1)
			{
				if (func_37(&uVar0, iVar9))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar10 = func_36(iParam0);
			if (!iVar10 == -1)
			{
				if (func_34(&uVar3, iVar10))
				{
					return 1;
				}
			}
		}
		if (unk_0x4B69FB3A5B09A1BA())
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
	if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	return unk_0x27F7C2FB848CD525(iParam0, 1);
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	return unk_0xE4C3669C2BFF9D2E(iParam0, 0);
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	return unk_0xE4C3669C2BFF9D2E(iParam0, 0);
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
							func_41(uParam2, 37, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
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
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
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
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
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
						func_43(uParam3, 13, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
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
						func_41(uParam2, 13, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 36, 1);
						func_41(uParam2, 38, 1);
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
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
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
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
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
						func_43(uParam3, 17, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
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
						func_41(uParam2, 17, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 19, 1);
						func_41(uParam2, 20, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 22, 1);
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
							func_43(uParam3, 38, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							break;
						
						case 1:
							func_43(uParam3, 4, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 20, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
				
				case 21:
					switch (iParam5)
					{
						case 0:
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
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
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
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
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
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
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
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
							func_43(uParam3, 38, 1);
							func_43(uParam3, 19, 1);
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
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
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
							func_43(uParam3, 39, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
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
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
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
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
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
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
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
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
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
							func_41(uParam2, 11, 1);
							func_41(uParam2, 12, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 14, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
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
					func_39(2, 21, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 22, uParam2, uParam3, uParam4, 0, 0);
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
		unk_0xEDB9A377CD8B7F03(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
		unk_0xEDB9A377CD8B7F03(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0x34B4609B3C3F7CD6(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0x34B4609B3C3F7CD6(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(0, 183, 1), "CELL_GRID");
	func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_61)
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 9f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_55(14))
	{
		if ((Global_68245 == 0 && unk_0x7B47A371E2D93C2C(joaat("pi_menu")) > 0) && func_54())
		{
			unk_0x48F299599202B77A(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x63E5FA5DEE979BD6(1);
			unk_0x0F79C8080022554A("CELL_ACTTL");
			unk_0x7FAFF3E791AF486A(unk_0x398E4CFB573BEBB7(&Global_2546230));
			unk_0xE6EC84BF3A7A64B6();
			unk_0x63E5FA5DEE979BD6(0);
			unk_0x7E86CE5F658823DB();
		}
	}
}

void func_48(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0x34B4609B3C3F7CD6(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 177, 1), "CELL_281");
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(2, 179, 1), "CELL_287");
		if (iLocal_130)
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) || unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
				{
					if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_68245 == 0 && unk_0x7B47A371E2D93C2C(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 7f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) || unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
			{
				if (!unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x34B4609B3C3F7CD6(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 2)
			{
				if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x34B4609B3C3F7CD6(2, 183, 1), "CELL_GRID");
				func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
				func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0x34B4609B3C3F7CD6(0, 39, 1), "CELL_284");
				if (func_132())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_62)
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(0, 182, 1), "CELL_FOCUS");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 9f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(4f);
						func_45(5f);
						func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0x34B4609B3C3F7CD6(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x48F299599202B77A(uLocal_140, "SET_MAX_WIDTH");
		unk_0xC4F81CF078CCB564(fLocal_76);
		unk_0x7E86CE5F658823DB();
		func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_50()
{
	if (iLocal_130)
	{
		unk_0x203B2685C1715644(fLocal_72, 1065353216);
		unk_0x5EF916489F3787FC(fLocal_73);
	}
}

void func_51(int iParam0)
{
	if (Global_1603097.f_70852 == 1)
	{
	}
	else if (Global_1603097.f_70853 == 1)
	{
	}
	else
	{
		unk_0x3B96EBA7C5C96926(iParam0);
	}
}

void func_52()
{
	if (iLocal_60 == 1)
	{
		if (unk_0x6B08EC9A88700FBB(sLocal_18[Global_2544264], "phone_cam12DUMMY"))
		{
			unk_0x614F315C702A78CF(0);
			unk_0xDF17D6901A4145C7(0);
		}
		else
		{
			unk_0x614F315C702A78CF(1);
			unk_0xDF17D6901A4145C7(1);
		}
	}
}

void func_53()
{
	func_124(uLocal_139, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_132())
	{
		unk_0x3E8B5C1CE2E77EEE("phone_cam");
	}
}

int func_54()
{
	if (func_55(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if ((unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/] || unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/]) || unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
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

bool func_55(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_56(char* sParam0)
{
	unk_0x0F79C8080022554A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_57()
{
	if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x286FD331C17C5174(2))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(0, 30, 1), "CELL_RT_RSTICK");
		func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x87872B5AB967B51E(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(0, 1, 1), "CELL_RT_RSTICK");
		func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x87872B5AB967B51E(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_58()
{
	if (unk_0x286FD331C17C5174(2) || unk_0x7F11C755C90EFEC5())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x34B4609B3C3F7CD6(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x87872B5AB967B51E(0, 1, 1), "CELL_LT_RSTICK");
	if (func_55(14))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x34B4609B3C3F7CD6(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x34B4609B3C3F7CD6(0, 39, 1), "CELL_LT_LSTICKZ");
		func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0x34B4609B3C3F7CD6(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_59(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x9E9AFDBF482248F6(uParam3))
	{
		func_60(uParam3);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam4))
	{
		func_56(sParam4);
	}
	unk_0x7E86CE5F658823DB();
}

void func_60(var uParam0)
{
	unk_0xD7A63C87F9B85B67(uParam0);
}

void func_61()
{
	if (Global_68245)
	{
		switch (Global_16809)
		{
			case 0:
				if (unk_0x286FD331C17C5174(2))
				{
					func_120("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_120("CELL_CAM_SELFIE_0", -1);
				}
				Global_16809++;
				break;
			
			case 1:
				if (!unk_0xC9EED58014EF1F40())
				{
					if (unk_0x286FD331C17C5174(2))
					{
						func_120("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_120("CELL_CAM_SELFIE_1", -1);
					}
					Global_16809++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16808)
		{
			case 0:
				if (unk_0x286FD331C17C5174(2))
				{
					func_120("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_120("CELL_CAM_SELFIE_0", -1);
				}
				Global_16808++;
				break;
			
			case 1:
				if (!unk_0xC9EED58014EF1F40())
				{
					if (unk_0x286FD331C17C5174(2))
					{
						func_120("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_120("CELL_CAM_SELFIE_1", -1);
					}
					Global_16808++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_62()
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
	
	if (unk_0x286FD331C17C5174(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x859C6F0CEF1CB9FE(2, iVar10) && !unk_0x859C6F0CEF1CB9FE(2, iVar9))
	{
		unk_0x6A6A41C66448AD09(0, 2, 1);
		unk_0x6A6A41C66448AD09(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 2)) * 127;
		if (unk_0x286FD331C17C5174(2))
		{
			if (unk_0xB65C49ABD0DAB270(iVar0) > 28 || unk_0xB65C49ABD0DAB270(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			}
		}
		else if (unk_0xB65C49ABD0DAB270(iVar2) > 28 || unk_0xB65C49ABD0DAB270(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
		}
		if (unk_0x286FD331C17C5174(2))
		{
			fVar7 = unk_0x3FE0388EF7B8DEFB(0, 290);
			fVar8 = unk_0x3FE0388EF7B8DEFB(0, 291);
			if (unk_0xD67D7DFAF4969260())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xB65C49ABD0DAB270(iVar0) > 28 || unk_0xB65C49ABD0DAB270(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_162);
		}
		func_65(fVar5);
		func_64(fVar6);
		func_63(fVar4);
	}
	else if (!unk_0x859C6F0CEF1CB9FE(2, iVar9))
	{
		unk_0xC805A7010638FA82(0, 2, 1);
		unk_0xC805A7010638FA82(0, 1, 1);
	}
}

void func_63(float fParam0)
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
	unk_0xAC9E10F3FFFD3DF3(fLocal_159);
}

void func_64(float fParam0)
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
	unk_0x4CF7DF1D39016A78(fLocal_160);
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
	unk_0xDCBA6E1E1D251C72(fLocal_161);
}

void func_66()
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
	
	if (unk_0x286FD331C17C5174(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x859C6F0CEF1CB9FE(2, iVar10))
		{
			if (unk_0x205C5BF7277043DF(2, 178))
			{
				unk_0x2AFD5726503D5FE2(0.5f);
				unk_0xEE235AC7E18DB665(0.85f);
				unk_0xE58508BBA8BBC051(0.5f);
				unk_0x699578423D87F954(-0.25f);
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
	if (unk_0x859C6F0CEF1CB9FE(2, iVar10) && !unk_0x859C6F0CEF1CB9FE(2, iVar11))
	{
		if (unk_0x205C5BF7277043DF(2, 178))
		{
			unk_0x2AFD5726503D5FE2(0.5f);
			unk_0xEE235AC7E18DB665(0.85f);
			unk_0xE58508BBA8BBC051(0.5f);
			unk_0x699578423D87F954(-0.25f);
			fLocal_155 = 0.5f;
			fLocal_156 = 0.85f;
			fLocal_157 = 0.5f;
			fLocal_158 = -0.25f;
		}
		unk_0x6A6A41C66448AD09(0, 2, 1);
		unk_0x6A6A41C66448AD09(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 2)) * 127;
		if (unk_0x286FD331C17C5174(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 39)) * 127;
			fVar8 = unk_0x3FE0388EF7B8DEFB(0, 290);
			fVar9 = unk_0x3FE0388EF7B8DEFB(0, 291);
			if (unk_0xD67D7DFAF4969260())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xB65C49ABD0DAB270(iVar2) > 15 || unk_0xB65C49ABD0DAB270(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0xB65C49ABD0DAB270(iVar0) > 28 || unk_0xB65C49ABD0DAB270(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		func_70(fVar6);
		func_69(fVar7);
		func_68(fVar4);
		if (!func_55(14))
		{
			func_67(fVar5);
		}
	}
	else if (!unk_0x9F02FE1D24674A84(2, iVar11))
	{
		unk_0xC805A7010638FA82(0, 2, 1);
		unk_0xC805A7010638FA82(0, 1, 1);
	}
	if (!unk_0x9F02FE1D24674A84(2, iVar10) && !unk_0x9F02FE1D24674A84(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x3FE0388EF7B8DEFB(0, 293)) * 127;
		if (unk_0xB65C49ABD0DAB270(iVar2) > 28 || unk_0xB65C49ABD0DAB270(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0xB65C49ABD0DAB270(iVar0) > 28 || unk_0xB65C49ABD0DAB270(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		if (!func_55(14))
		{
			func_67(fVar5);
		}
	}
}

void func_67(float fParam0)
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
	unk_0xE58508BBA8BBC051(fLocal_157);
}

void func_68(float fParam0)
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
	unk_0x699578423D87F954(fLocal_158);
}

void func_69(float fParam0)
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
	unk_0xEE235AC7E18DB665(fLocal_156);
}

void func_70(float fParam0)
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
	unk_0x2AFD5726503D5FE2(fLocal_155);
}

void func_71()
{
	if (Global_68505 || Global_68506)
	{
		return;
	}
	if (iLocal_123 == 0)
	{
		if (!iLocal_149)
		{
			if (Global_1603097.f_70852 == 0 && Global_1603097.f_70853 == 0)
			{
				unk_0x10243718C63A4D3E(uLocal_140, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_126 == 0)
	{
		if (Global_14335)
		{
			if (Global_14551)
			{
				if (iLocal_149 == 0)
				{
					if (Global_14393.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_73(255, 255, 255, 255);
			func_72(0.059f, 0.644f, "CELL_284", 0);
			func_73(255, 255, 255, 255);
			func_72(0.165f, 0.644f, "CELL_285", 0);
			func_73(255, 255, 255, 255);
			func_72(0.275f, 0.75f, "CELL_280", 0);
			func_73(255, 255, 255, 255);
			func_72(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14335)
	{
	}
	else
	{
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.75f, "CELL_287", 0);
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.79f, "CELL_286", 0);
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_72(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, iParam3);
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xC98C9F8951F37C8D(0.4f, 0.4f);
	unk_0xAF29B559F8450C01(0, 0, 0, 0, 0);
	unk_0x5146989773F7C58A(1, 0, 0, 0, 205);
	unk_0x1831D29D0F36A290(1);
	unk_0x13E02BCACABFC17A(0);
	unk_0x8DEED365C52CC9BE(iParam0, iParam1, iParam2, iParam3);
}

void func_74()
{
	unk_0x203B2685C1715644(fLocal_74, 1065353216);
	unk_0x5EF916489F3787FC(fLocal_75);
}

void func_75()
{
	unk_0x6A6A41C66448AD09(0, 25, 1);
	unk_0x6A6A41C66448AD09(0, 44, 1);
	unk_0x6A6A41C66448AD09(0, 3, 1);
	unk_0x6A6A41C66448AD09(0, 4, 1);
	unk_0x6A6A41C66448AD09(0, 5, 1);
	unk_0x6A6A41C66448AD09(0, 6, 1);
	unk_0x6A6A41C66448AD09(0, 1, 1);
	unk_0x6A6A41C66448AD09(0, 2, 1);
	unk_0x6A6A41C66448AD09(0, 39, 1);
	unk_0x6A6A41C66448AD09(0, 47, 1);
	unk_0x6A6A41C66448AD09(0, 56, 1);
}

void func_76()
{
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (Global_14335)
	{
		if (func_79())
		{
			unk_0xF490905A59C5583B(&Local_92);
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
		if (unk_0x94E72F17611BCD3C(Global_2265, 4))
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
		if (func_79() == 0)
		{
			if (unk_0x94E72F17611BCD3C(Global_2265, 4))
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
			Local_86 = { Global_14339[Global_14338 /*3*/] };
		}
		Local_80 = { Local_86 };
		iLocal_122 = 0;
		iLocal_121 = 0;
		iLocal_120 = 0;
		unk_0x25CC5D98FBA7C72B(Local_80);
		if ((iLocal_120 == 0 && iLocal_121 == 0) && iLocal_122 == 0)
		{
			iLocal_123 = 0;
			Local_83 = { -90.3f, 0f, 90f };
			unk_0x0AA53CBA4AD863D3(Local_83, 0);
			if (!unk_0x94E72F17611BCD3C(Global_2263, 22))
			{
				if (unk_0x94E72F17611BCD3C(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_77();
				}
				iLocal_99 = 2;
			}
		}
	}
}

void func_77()
{
	func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x94E72F17611BCD3C(Global_2264, 28))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(2, 178, 1), "CELL_277");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x48F299599202B77A(uLocal_140, "SET_MAX_WIDTH");
	unk_0xC4F81CF078CCB564(fLocal_76);
	unk_0x7E86CE5F658823DB();
	func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_78()
{
	func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x94E72F17611BCD3C(Global_2264, 28))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(2, 179, 1), "CELL_287");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x34B4609B3C3F7CD6(2, 179, 1), "CELL_287");
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x34B4609B3C3F7CD6(2, 178, 1), "CELL_277");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x34B4609B3C3F7CD6(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x48F299599202B77A(uLocal_140, "SET_MAX_WIDTH");
	unk_0xC4F81CF078CCB564(fLocal_76);
	unk_0x7E86CE5F658823DB();
	func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if (Global_15692 != 2)
						{
						}
					}
				}
			}
		}
		if (func_55(14))
		{
			return 0;
		}
		if (unk_0xFDFEC308151CBB48(unk_0x9F92518438215DD0(), 0))
		{
			return 0;
		}
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (!unk_0xD2E2E2E4739E1617())
			{
				if (unk_0x5BFFEED2EB6664D5(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xC8399522CF774929(unk_0x9F92518438215DD0()) || unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0())) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0xBB969630444F8B91(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		if (Global_96406)
		{
			return 0;
		}
	}
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xB14E47EA29D7193F();
	iVar1 = unk_0xB49A1BEB8771FD4C(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xD2E2E2E4739E1617()))
	{
		iVar2 = 1;
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iVar3 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if ((((((((unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(iVar3)) || unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(iVar3))) || unk_0x0724E81841E756B7(unk_0xB6A50C909A8FABC3(iVar3))) || unk_0xB6A50C909A8FABC3(iVar3) == joaat("seashark")) || unk_0xB6A50C909A8FABC3(iVar3) == joaat("seashark2")) || unk_0xB6A50C909A8FABC3(iVar3) == joaat("rhino")) || unk_0xB6A50C909A8FABC3(iVar3) == joaat("submersible")) || unk_0xB6A50C909A8FABC3(iVar3) == joaat("submersible2")) || unk_0xB6A50C909A8FABC3(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2545741 || iVar2 == 1)
	{
		if (unk_0x7B47A371E2D93C2C(joaat("apptrackify")) > 0 || Global_97358.f_12305.f_89)
		{
			if (unk_0x7B47A371E2D93C2C(joaat("michael2")) > 0)
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

void func_80()
{
	unk_0x6A6A41C66448AD09(0, 47, 1);
	unk_0x303F3ACCD1D0223D(0, Global_14363);
	Local_83 = { Global_14353 };
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (func_79())
	{
		unk_0x535D6B2FA67466B4(&Local_89, 0);
		Local_83 = { Local_89 };
		unk_0xF490905A59C5583B(&Local_92);
		Local_86 = { Local_92 };
		iLocal_117 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
	}
	if (Global_14335)
	{
		func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_51(0);
		iLocal_130 = 0;
		if (unk_0x94E72F17611BCD3C(Global_2263, 30))
		{
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			func_81();
		}
		if (iLocal_120)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 9))
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
			if (func_79() == 0)
			{
				unk_0x0AA53CBA4AD863D3(Local_77, 0);
				unk_0x25CC5D98FBA7C72B(Local_80);
			}
			func_88(0, 1);
		}
		else if (func_79() == 0)
		{
			unk_0x0AA53CBA4AD863D3(Local_77, 0);
			unk_0x25CC5D98FBA7C72B(Local_80);
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_81();
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
			func_81();
		}
	}
	unk_0x0AA53CBA4AD863D3(Local_77, 0);
}

void func_81()
{
	func_1(0);
	if (func_79() == 0)
	{
		if (unk_0x94E72F17611BCD3C(Global_2263, 30))
		{
			unk_0x25CC5D98FBA7C72B(Global_14339[Global_14338 /*3*/]);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14346[Global_14338 /*3*/]);
		}
		Local_77 = { Local_83 };
		unk_0x0AA53CBA4AD863D3(Local_77, 0);
	}
	Global_16725 = 0;
	func_91(0, 0);
	func_95(0);
	iLocal_114 = 0;
	func_90();
	Global_14380 = 1;
	Global_16728 = 0;
	if (Global_14393.f_1 > 4)
	{
		Global_14393.f_1 = 6;
		Global_14371 = 1;
		func_82();
	}
	if (unk_0x5E3461E729DA646E(uLocal_139))
	{
		func_123(uLocal_139, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x125C94DBA75FDFFA();
	unk_0x76D57BAF1F432EA7(&uLocal_140);
	unk_0x76D57BAF1F432EA7(&uLocal_139);
	if (Global_14553 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 17);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
	}
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 18);
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 21);
	unk_0xC15351F18B67BEDB(0, 1);
	unk_0xF76EE56D3E7DAF1B(&Global_2265, 3);
	unk_0xF76EE56D3E7DAF1B(&Global_2545539, 3);
	unk_0xAA7F469826C4FBBF(0);
	unk_0xFA941E13D6577B0A(unk_0xCFC72E446B0B3AD7(), 1);
	unk_0xDEAFB44F1BAAE861(15);
	Global_16729 = 1;
	unk_0xC4370267C511F8E7(iLocal_111);
	unk_0xB5B1A17260769F4A(iLocal_111);
	unk_0xBFB1954F04B5BAEA();
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0xB4044E2B219C21F5(unk_0x9F92518438215DD0(), "Mood_Normal_1", 0);
		unk_0x81E2C9AAF397C44E(unk_0x9F92518438215DD0());
	}
	func_90();
	unk_0x614F315C702A78CF(0);
	unk_0xDF17D6901A4145C7(0);
	unk_0xCC56ED5F47117A35(1f);
	if (Global_2544265 > 0 && Global_2544265 < 13)
	{
		unk_0x4B48A2F5324596EE(sLocal_32[Global_2544265]);
	}
	func_88(0, 1);
	if (func_130(0, 1, iLocal_63))
	{
		iLocal_63 = 0;
	}
	unk_0xE60DEFFB2A853900();
}

void func_82()
{
	struct<3> Var0;
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!unk_0x5E3461E729DA646E(Global_14374))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_86(Global_2868);
			if (Global_2868 == 1)
			{
				func_124(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				func_124(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			}
			else if (Global_68245)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xEDB9A377CD8B7F03(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_85(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			if (unk_0x94E72F17611BCD3C(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				func_84();
				func_124(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97358.f_12305[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(4);
					unk_0x4BD4D58838D3F8E5(0);
					unk_0x4BD4D58838D3F8E5(2);
					unk_0x0F79C8080022554A("CELL_CONDFON");
					unk_0x7FAFF3E791AF486A(&Global_15707);
					unk_0xE6EC84BF3A7A64B6();
					func_56("CELL_300");
					func_56("CELL_217");
					func_56("CELL_217");
					unk_0x7E86CE5F658823DB();
				}
				else if (Global_97358.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97358.f_29774[Global_1578 /*29*/].f_3), &(Global_97358.f_29774[Global_1578 /*29*/].f_7), "CELL_217", &(Global_97358.f_29774[Global_1578 /*29*/].f_3), 0);
				}
				func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_124(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97358.f_12305[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_84();
				if (Global_15705)
				{
					unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(4);
					unk_0x4BD4D58838D3F8E5(0);
					unk_0x4BD4D58838D3F8E5(2);
					unk_0x0F79C8080022554A("CELL_CONDFON");
					unk_0x7FAFF3E791AF486A(&Global_15707);
					unk_0xE6EC84BF3A7A64B6();
					func_56("CELL_300");
					func_56("CELL_219");
					func_56("CELL_219");
					unk_0x7E86CE5F658823DB();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_97358.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97358.f_29774[Global_1578 /*29*/].f_3), &(Global_97358.f_29774[Global_1578 /*29*/].f_7), &Var0, &(Global_97358.f_29774[Global_1578 /*29*/].f_3), 0);
					}
				}
				func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_83();
			break;
		
		default:
			break;
	}
}

void func_83()
{
	if (unk_0x5E3461E729DA646E(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x94E72F17611BCD3C(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
		}
		else
		{
			func_85(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			if (unk_0x94E72F17611BCD3C(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_84()
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97358.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 0);
					break;
				
				case 2:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 1);
					break;
				
				case 3:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 2);
					break;
				
				case 4:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 3);
					break;
				
				case 5:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 4);
					break;
				
				case 6:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 5);
					break;
				
				case 7:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_97358.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 6);
					break;
				
				case 2:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 0);
					break;
				
				case 3:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 1);
					break;
				
				case 4:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 2);
					break;
				
				case 5:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 3);
					break;
				
				case 6:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 4);
					break;
				
				case 7:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_97358.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 5);
					break;
				
				case 2:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 6);
					break;
				
				case 3:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 1);
					break;
				
				case 4:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 0);
					break;
				
				case 5:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 2);
					break;
				
				case 6:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 3);
					break;
				
				case 7:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2545739)
			{
				case 1:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 0);
					break;
				
				case 2:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 1);
					break;
				
				case 3:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 2);
					break;
				
				case 4:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 3);
					break;
				
				case 5:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 4);
					break;
				
				case 6:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 5);
					break;
				
				case 7:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_85(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9E9AFDBF482248F6(sParam7))
	{
		func_56(sParam7);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam8))
	{
		func_56(iParam8);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam9))
	{
		func_56(iParam9);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam10))
	{
		func_56(iParam10);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam11))
	{
		func_56(iParam11);
	}
	unk_0x7E86CE5F658823DB();
}

void func_86(int iParam0)
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_55(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar2);
								unk_0x7E86CE5F658823DB();
							}
							Global_2832[iVar0] = 1;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97358.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97358.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97358.f_12395[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2544274[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2544274[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2544274[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(Global_2269);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar7);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar8);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 8)
							{
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(42);
								unk_0x7E86CE5F658823DB();
							}
							else
							{
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_87()
{
	switch (iLocal_99)
	{
		case 1:
			unk_0xC15351F18B67BEDB(0, 1);
			if (unk_0x94E72F17611BCD3C(Global_2263, 28))
			{
				StringCopy(&cLocal_144, "CELL_296", 16);
				func_49();
			}
			else
			{
				StringCopy(&cLocal_144, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0x94E72F17611BCD3C(Global_2263, 22))
			{
				unk_0xC15351F18B67BEDB(0, 1);
				if (unk_0x94E72F17611BCD3C(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_77();
				}
				iLocal_99 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_88(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	if (Global_1603097.f_70852 == 0 && Global_1603097.f_70853 == 0)
	{
		unk_0x014430DA270E9A92();
	}
}

void func_91(int iParam0, int iParam1)
{
	if (Global_1603097.f_70852 == 1)
	{
	}
	else if (Global_1603097.f_70853 == 1)
	{
	}
	else
	{
		unk_0xC08B818D89D2371E(iParam0, iParam1);
	}
}

int func_92()
{
	if (unk_0x94E72F17611BCD3C(Global_2263, 15))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x205C5BF7277043DF(iParam0, uParam1) || (iParam2 == 1 && unk_0x4841051C33809BC4(iParam0, iParam1)))
	{
		if (unk_0x708CE249B4F97BF8())
		{
			if (unk_0x16F8ADED32EFC76D() == 0 || (unk_0xB693DB1187BBD585() && unk_0x286FD331C17C5174(2)))
			{
				return 0;
			}
		}
		if (unk_0xC8557993A78C1B3E() || unk_0x3B8CF48C3FC0CF62())
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

void func_94()
{
	if (Global_14335)
	{
		Local_83 = { -90.3f, 0f, 90f };
		Local_86 = { 1.5f, 0f, -17f };
		if (func_79())
		{
			unk_0x535D6B2FA67466B4(&Local_89, 0);
			Local_83 = { Local_89 };
			unk_0xF490905A59C5583B(&Local_92);
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
		if (func_79() == 0)
		{
			unk_0x0AA53CBA4AD863D3(Local_77, 0);
			unk_0x25CC5D98FBA7C72B(Local_80);
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
		unk_0x0AA53CBA4AD863D3(Local_77, 0);
	}
	if (Global_14335)
	{
		if (((((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0)
		{
			if (func_79())
			{
			}
			else
			{
				Local_77 = { Local_83 };
				unk_0x0AA53CBA4AD863D3(Local_77, 0);
				Local_80 = { Local_86 };
				unk_0x25CC5D98FBA7C72B(Local_80);
			}
			if (iLocal_102 == 0)
			{
				Global_16726 = 0;
				func_91(1, 1);
				iLocal_114 = 1;
				func_95(1);
				func_53();
				func_96();
				func_51(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_141 = 1;
				iLocal_142 = 1;
				func_103();
				func_124(uLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
				{
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				func_126();
			}
		}
	}
	else if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
	{
		Local_77 = { Local_83 };
		unk_0x0AA53CBA4AD863D3(Local_77, 0);
		Global_16726 = 0;
	}
}

void func_95(bool bParam0)
{
	if (func_132())
	{
		if (bParam0)
		{
			if (!unk_0x4C774C25358157D4())
			{
				unk_0x5B1BFEB853FCE63F(1);
				if (Global_2544265 > 0 && Global_2544265 < 99)
				{
					unk_0xCB523D6B96468ADC(sLocal_32[Global_2544265], 0);
					unk_0xCC56ED5F47117A35(0.25f);
				}
			}
		}
		else if (unk_0x4C774C25358157D4())
		{
			unk_0x5B1BFEB853FCE63F(0);
		}
	}
}

void func_96()
{
	if (Global_2544264 > 0 && Global_2544264 < 99)
	{
		unk_0x3E8B5C1CE2E77EEE(sLocal_18[Global_2544264]);
	}
}

void func_97()
{
	if (Global_14335)
	{
		iLocal_124 = 0;
		func_53();
		func_88(1, 1);
		func_91(1, 1);
		iLocal_114 = 1;
		Global_16729 = 1;
	}
}

void func_98()
{
	if (iLocal_126 == 0)
	{
		if (unk_0x94E72F17611BCD3C(Global_2263, 28))
		{
			StringCopy(&cLocal_144, "CELL_296", 16);
			func_49();
		}
		else
		{
			StringCopy(&cLocal_144, "CELL_295", 16);
			func_27();
		}
		if (unk_0x6B08EC9A88700FBB(&cLocal_144, "DUMMYCOMPARISON"))
		{
			fLocal_97 = fLocal_98;
			fLocal_95 = fLocal_96;
			fLocal_98 = fLocal_97;
			fLocal_96 = fLocal_95;
		}
		iLocal_99 = 1;
	}
}

void func_99()
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x86F4B3D6FF8F65DE(-1, "Menu_Back", &Global_14382, 1);
	}
}

void func_100()
{
	unk_0xA695E73AF205B3C7(0, 0);
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 1;
}

void func_101()
{
	func_102();
}

void func_102()
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

void func_103()
{
	if (Global_14393.f_1 > 3)
	{
		if (!unk_0xC8557993A78C1B3E())
		{
			unk_0x6FFAE2D893387C6F(uLocal_139, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_104()
{
	if (func_55(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_11();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_105(int iParam0)
{
	if (Global_14551)
	{
		func_88(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_106())
	{
		Global_14393.f_1 = 3;
	}
}

int func_106()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	unk_0x6A6A41C66448AD09(0, 0, 1);
	unk_0x6A6A41C66448AD09(0, 56, 1);
	if (iLocal_149 == 0)
	{
		unk_0x303F3ACCD1D0223D(0, Global_14366);
		unk_0x303F3ACCD1D0223D(0, Global_14363);
		unk_0x6A6A41C66448AD09(0, 278, 1);
		unk_0x6A6A41C66448AD09(0, 279, 1);
		unk_0x6A6A41C66448AD09(0, 280, 1);
		unk_0x6A6A41C66448AD09(0, 281, 1);
		unk_0x6A6A41C66448AD09(0, 282, 1);
		unk_0x6A6A41C66448AD09(0, 282, 1);
		unk_0x6A6A41C66448AD09(0, 284, 1);
		unk_0x6A6A41C66448AD09(0, 285, 1);
		unk_0x6A6A41C66448AD09(0, 69, 1);
		unk_0x6A6A41C66448AD09(0, 70, 1);
		unk_0x6A6A41C66448AD09(0, 114, 1);
		unk_0x6A6A41C66448AD09(0, 71, 1);
		unk_0x6A6A41C66448AD09(0, 72, 1);
		unk_0x6A6A41C66448AD09(0, 74, 1);
		unk_0x6A6A41C66448AD09(0, 75, 1);
		unk_0x6A6A41C66448AD09(0, 76, 1);
		unk_0x6A6A41C66448AD09(0, 73, 1);
		unk_0x6A6A41C66448AD09(0, 77, 1);
		unk_0x6A6A41C66448AD09(0, 78, 1);
		unk_0x6A6A41C66448AD09(0, 286, 1);
		unk_0x6A6A41C66448AD09(0, 287, 1);
		unk_0x6A6A41C66448AD09(0, 79, 1);
		unk_0x6A6A41C66448AD09(0, 80, 1);
		unk_0x6A6A41C66448AD09(0, 81, 1);
		unk_0x6A6A41C66448AD09(0, 82, 1);
		unk_0x6A6A41C66448AD09(0, 86, 1);
		unk_0x6A6A41C66448AD09(0, 59, 1);
		unk_0x6A6A41C66448AD09(0, 60, 1);
		unk_0x6A6A41C66448AD09(0, 61, 1);
		unk_0x6A6A41C66448AD09(0, 62, 1);
		unk_0x6A6A41C66448AD09(0, 63, 1);
		unk_0x6A6A41C66448AD09(0, 64, 1);
		unk_0x6A6A41C66448AD09(0, 87, 1);
		unk_0x6A6A41C66448AD09(0, 88, 1);
		unk_0x6A6A41C66448AD09(0, 89, 1);
		unk_0x6A6A41C66448AD09(0, 90, 1);
		unk_0x6A6A41C66448AD09(0, 107, 1);
		unk_0x6A6A41C66448AD09(0, 108, 1);
		unk_0x6A6A41C66448AD09(0, 109, 1);
		unk_0x6A6A41C66448AD09(0, 110, 1);
		unk_0x6A6A41C66448AD09(0, 111, 1);
		unk_0x6A6A41C66448AD09(0, 112, 1);
		unk_0x6A6A41C66448AD09(0, 113, 1);
		unk_0x6A6A41C66448AD09(0, 114, 1);
		unk_0x6A6A41C66448AD09(0, 91, 1);
		unk_0x6A6A41C66448AD09(0, 92, 1);
		unk_0x6A6A41C66448AD09(0, 68, 1);
		unk_0x6A6A41C66448AD09(0, 102, 1);
		unk_0x6A6A41C66448AD09(0, 136, 1);
		unk_0x6A6A41C66448AD09(0, 137, 1);
		unk_0x6A6A41C66448AD09(0, 138, 1);
		unk_0x6A6A41C66448AD09(0, 139, 1);
		unk_0x6A6A41C66448AD09(0, 102, 1);
	}
}

int func_108()
{
	var uVar0;
	
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0x4A33023BC86AAA7F(uVar0, -1))
			{
				return 1;
			}
			else if (!unk_0xB5BBEB12C77EE430(uVar0, -1) == unk_0x9F92518438215DD0())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109()
{
	bool bVar0;
	
	func_116(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_115())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_114())
	{
		return 1;
	}
	if (func_113(157))
	{
		if (!func_112())
		{
			return 1;
		}
	}
	if (func_113(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_110() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_110()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_110()
{
	switch (func_111())
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

int func_111()
{
	return Global_24444;
}

bool func_112()
{
	return Global_2428162.f_572;
}

int func_113(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_114()
{
	return Global_2435128;
}

bool func_115()
{
	return Global_2428162.f_567;
}

void func_116(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_117(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
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

void func_117(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_119(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(iVar3))
			{
				if (unk_0x827151D7B70CB853(iVar3, 0))
				{
					iVar4 = unk_0x1161215F69587BDA(iVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(iVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_118(iVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(iParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(iParam0))
			{
				unk_0x336AE92FD68DEF98(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(iParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xCB29E1C3D086FBAE(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_120(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

void func_121()
{
	if (func_122())
	{
		unk_0x19EEBEDC598DEAAB();
		if (unk_0x2A8B9181806564D7(0))
		{
			iLocal_102 = 1;
			iLocal_110 = 0;
		}
		else
		{
			Global_16729 = 1;
			Global_14393.f_1 = 3;
			unk_0xBFB1954F04B5BAEA();
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
				if (unk_0x5E3461E729DA646E(uLocal_139))
				{
					if (func_132())
					{
						if (Global_2544265 == 0)
						{
							if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
							{
								func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x94E72F17611BCD3C(Global_2545539, 2))
						{
							func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x5E3461E729DA646E(uLocal_139))
			{
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
			}
			iLocal_103 = 0;
		}
		iLocal_110 = 0;
		unk_0xBFB1954F04B5BAEA();
	}
}

int func_122()
{
	if (Global_1603097.f_70852 == 1)
	{
		if (Global_68245)
		{
			return 0;
		}
	}
	if (Global_1603097.f_70853 == 1)
	{
		if (Global_68245)
		{
			return 0;
		}
	}
	if (unk_0x1B54267BB477DB52() || unk_0x523427CCABD5EC9C())
	{
		if (unk_0x94E72F17611BCD3C(Global_2264, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_123(var uParam0, char* sParam1)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x7E86CE5F658823DB();
}

void func_124(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E86CE5F658823DB();
}

int func_125()
{
	if (Global_68245)
	{
		Global_14393 = 3;
	}
	else
	{
		Global_14393 = func_11();
	}
	if (Global_14393 > 3)
	{
		Global_14393 = 3;
	}
	return Global_97358.f_12305[Global_14393 /*20*/].f_7;
}

void func_126()
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	Global_16728 = 0;
	iLocal_126 = 0;
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		Local_66 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
	}
	if (Global_14335)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_136)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_103();
			func_75();
			unk_0x125C94DBA75FDFFA();
		}
		func_123(uLocal_139, "OPEN_SHUTTER");
		unk_0x10663E41E1571A19();
		func_98();
		iLocal_128 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_91(1, 1);
		func_95(1);
		func_53();
		func_96();
		func_51(0);
		iLocal_114 = 1;
	}
}

void func_127(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 15);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 15);
	}
}

bool func_128()
{
	return Global_1315874;
}

void func_129()
{
}

int func_130(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && bParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, iParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_131()
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x5A93BC8FB7B95A04(unk_0x9F92518438215DD0()))
		{
			unk_0xB06F4DE84BB274B5(unk_0x9F92518438215DD0(), 0, 0);
			unk_0x2AFD5726503D5FE2(fLocal_155);
			unk_0xEE235AC7E18DB665(fLocal_156);
			unk_0xE58508BBA8BBC051(fLocal_157);
		}
		else
		{
			unk_0x2AFD5726503D5FE2(fLocal_155);
			unk_0xEE235AC7E18DB665(fLocal_156);
			unk_0xE58508BBA8BBC051(fLocal_157);
		}
	}
	unk_0x699578423D87F954(fLocal_158);
	unk_0xAC9E10F3FFFD3DF3(fLocal_159);
	unk_0x4CF7DF1D39016A78(fLocal_160);
	unk_0xDCBA6E1E1D251C72(fLocal_161);
	func_50();
}

int func_132()
{
	if (iLocal_55 == 0)
	{
		iLocal_55 = 1;
	}
	return 1;
}


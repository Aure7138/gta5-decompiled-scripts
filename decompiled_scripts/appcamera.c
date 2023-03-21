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
	unk_0xC1A27D367CCA8C15();
	if (unk_0x83D607D7994DEF3A() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_141())
	{
		Global_4266190 = 99;
		Global_4266191 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4266190 = 0;
		Global_4266191 = 0;
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
	func_140();
	if (func_139(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_138();
	iLocal_112 = unk_0x2F079D1FC5F6CB99();
	if (Global_14438 == 0)
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
	Global_16833 = 0;
	Global_16834 = 0;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x58CB9BE52FDF3608(unk_0xBC25C936A095B5BA()))
		{
			Global_16833 = 1;
		}
		if (unk_0x673C9B15B29B7BBA())
		{
			Global_16833 = 1;
		}
		if (unk_0xE59B7F5A03335350(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()), 0))
		{
			Global_16833 = 1;
		}
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
		{
			Global_16833 = 1;
		}
		if (unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
		{
			Global_16833 = 1;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16833 = 1;
			}
			uLocal_149 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if ((((unk_0x6F79ECA8C83E4357(uLocal_149) == joaat("rhino") || unk_0x6F79ECA8C83E4357(iLocal_149) == joaat("cutter")) || unk_0x6F79ECA8C83E4357(iLocal_149) == joaat("submersible")) || unk_0x6F79ECA8C83E4357(iLocal_149) == joaat("khanjali")) || (unk_0x6F79ECA8C83E4357(iLocal_149) == joaat("barrage") && unk_0xE8E192A5EFE0253F(iLocal_149, func_137(unk_0xBC25C936A095B5BA(), 1))))
			{
				Global_16833 = 1;
			}
			else if (unk_0x3187EF5798B5D209(iLocal_149, -1, 0) == unk_0xBC25C936A095B5BA())
			{
				if (unk_0xEFA31351B754089B(iLocal_149) > 0f)
				{
					if (!Global_70978)
					{
						if (!func_136())
						{
							unk_0x194CCBD594974E0D(unk_0xBC25C936A095B5BA(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_70978)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 0);
		}
	}
	unk_0x7CB6FD92BE491AD9(&Global_2363, 21);
	func_135(0);
	unk_0xF0059F27F7BB6680(&Global_2363, 17);
	if (Global_14435 == 0)
	{
		func_134();
	}
	else
	{
		uLocal_140 = unk_0x9934FEFB3B8C6DB8("camera_gallery");
		uLocal_141 = unk_0x9934FEFB3B8C6DB8("instructional_buttons");
		while (!unk_0xA7F138B5B1AB2CF6(uLocal_140) || !unk_0xA7F138B5B1AB2CF6(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x2423B13D9CFAD1DD();
			unk_0xBBC4195AD74D153D(0, 25, 1);
		}
		if (Global_70978)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_133())
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
		func_132(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_131(uLocal_140, "CLOSE_SHUTTER");
		unk_0x29CD142125FE177B(Global_14474, "DISPLAY_VIEW");
		unk_0x1E1FB49121565EB6(16);
		unk_0xF9FBC2F3F73D94C9();
	}
	Local_78 = { Global_14453 };
	Local_81 = { Global_14446[Global_14438 /*3*/] };
	Global_16834 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14493.f_1 > 3)
	{
		Global_14493.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0x7CB6FD92BE491AD9(&Global_2365, 3);
	}
	func_129();
	unk_0x996AC9A66B2A5A3F(4);
	if (unk_0x215C26A962C2E3E1())
	{
	}
	if (Global_4456448.f_142988)
	{
	}
	if (Global_4456448.f_142990 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xD55638CE45B2B948(0, Global_14462);
		unk_0xD55638CE45B2B948(0, 186);
		unk_0x2423B13D9CFAD1DD();
		unk_0xBBC4195AD74D153D(0, 25, 1);
		unk_0xBBC4195AD74D153D(0, 0, 1);
		if (!Global_105220.f_14022.f_81)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_4267466, 13))
			{
				if (!unk_0xF16DAFF595E80F7C())
				{
					if (!unk_0xFA30DFD0084E92FE(Global_2364, 28))
					{
						if (iLocal_128 && iLocal_131 == 0)
						{
							unk_0xF0059F27F7BB6680(&Global_4267466, 13);
							Global_105220.f_14022.f_81 = 1;
							func_128("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xE186ACC7BE9B244E())
		{
			if (Global_4456448.f_142987 == 0 && Global_4456448.f_142988 == 0)
			{
				unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
			}
			unk_0x4E0EC60D119222B1(7);
			func_127();
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 200, 1);
			}
			unk_0xBBC4195AD74D153D(0, 44, 1);
			unk_0xBBC4195AD74D153D(0, 47, 1);
			unk_0xBBC4195AD74D153D(0, 91, 1);
			unk_0xBBC4195AD74D153D(0, 92, 1);
			unk_0xBBC4195AD74D153D(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0xD55638CE45B2B948(0, Global_14466);
			}
			unk_0xD55638CE45B2B948(0, Global_14463);
			if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
			{
				iLocal_130 = 1;
				Global_14493.f_1 = 3;
				unk_0x121BBDEFA4F0C22B(0);
			}
			if (unk_0x87DD8C3CB85096D5())
			{
				Global_14493.f_1 = 3;
				unk_0x121BBDEFA4F0C22B(0);
			}
			if (unk_0xFA30DFD0084E92FE(Global_2364, 3))
			{
				Global_14493.f_1 = 3;
				unk_0x121BBDEFA4F0C22B(0);
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				if (func_116())
				{
					Global_14493.f_1 = 3;
					unk_0x121BBDEFA4F0C22B(0);
				}
			}
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
				{
					Global_14493.f_1 = 3;
					unk_0x121BBDEFA4F0C22B(0);
				}
				if ((unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()))
				{
					if (func_115())
					{
					}
					else
					{
						Global_14493.f_1 = 3;
						unk_0x121BBDEFA4F0C22B(0);
					}
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					if (Global_70978 == 1)
					{
						Global_14493.f_1 = 3;
					}
				}
				if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x2C13E57F6AC776F8(unk_0xBC25C936A095B5BA()) > 0.3f)
					{
						Global_14493.f_1 = 3;
					}
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					func_114();
					iLocal_149 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0xEFA31351B754089B(iLocal_149) < 0f)
					{
						func_112(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0xF38DDD0729207956())
							{
								func_112(0);
							}
						}
						else if (!unk_0xF38DDD0729207956())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x2423B13D9CFAD1DD();
						}
					}
				}
				else if (Global_70978 == 0)
				{
					if (unk_0xFA30DFD0084E92FE(Global_2363, 18))
					{
						func_111();
						if ((Global_14493 == 0 || Global_14493 == 1) || Global_14493 == 2)
						{
							if (!unk_0x580F3FB55E3185B1(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
								{
								}
								else
								{
									Global_14493.f_1 = 3;
									unk_0x121BBDEFA4F0C22B(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_110();
			}
			if (Global_14493.f_1 < 4)
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
							if (Global_14493.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_108();
									if (Global_16838 == 0 && Global_16835 == 6)
									{
										unk_0x7A4219270DF1663F(0, 1);
										unk_0x21B00B24BEAA7264();
										iLocal_150 = 0;
										func_107();
										if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
										{
											Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
										}
										func_106();
										iLocal_109++;
										if (func_141())
										{
											func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_101();
									}
									if (Global_16835 == 0)
									{
										iLocal_150 = 0;
										unk_0x21B00B24BEAA7264();
										if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
										{
											Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
										}
										func_100();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_101();
										if (func_141())
										{
											if (Global_4266191 == 0)
											{
												if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
												{
													func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
										{
											func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_99();
										func_98(1);
									}
								}
								else if (Global_14493.f_1 != 9)
								{
									if (Global_16834 == 1)
									{
										if (Global_16833 == 0)
										{
											func_97();
										}
									}
									else if ((Global_2971 - Global_2970) > Global_2972)
									{
										if (func_96(2, Global_14461, 0))
										{
											if (func_95() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0x121BBDEFA4F0C22B(0);
												unk_0x38FF8CB6377D36F6(iLocal_112);
												iLocal_143 = 0;
												if (Global_16833 == 0)
												{
													func_106();
													Global_16833 = 1;
													unk_0x7A4219270DF1663F(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_94(0, 0);
													func_98(0);
													iLocal_115 = 0;
													func_93();
													iLocal_142 = 0;
													func_91(0, 1);
													func_132(Global_14474, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0xF16DAFF595E80F7C())
										{
											func_90();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0xF16DAFF595E80F7C())
									{
										func_90();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
										{
											func_90();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0xFA30DFD0084E92FE(Global_2363, 28))
									{
										func_90();
										iLocal_102 = 0;
									}
									if (Global_16833 == 1)
									{
										func_83();
									}
									else if (Global_14493.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_79();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_100();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
												{
													if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
													{
														func_131(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x105601648511CC64();
														while (unk_0x105601648511CC64() < (iLocal_135 + iLocal_137) && Global_14493.f_1 > 3)
														{
															func_127();
															func_110();
															func_78();
															unk_0x2423B13D9CFAD1DD();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_141())
												{
													if (Global_4266191 == 0)
													{
														if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
														{
															func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
												{
													func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_110();
												func_127();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_101();
												iLocal_136 = 0;
												func_131(uLocal_140, "OPEN_SHUTTER");
											}
											func_99();
											func_98(1);
											func_77();
										}
									}
									if (iLocal_143 == 1)
									{
										func_74();
									}
									if (iLocal_129)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0xF0059F27F7BB6680(&Global_2363, 18);
											if (Global_16833 == 0)
											{
												func_91(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_16833 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_16836 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_78();
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
					if (Global_14493.f_1 > 3)
					{
						if (Global_16834 == 1)
						{
							if (Global_16833 == 0)
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
					if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0x8ACB0C3FACC09467())
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
					iVar0 = unk_0x85CB9EFD5FE33ADA();
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
					if (unk_0x694514BD37EC4E94(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_91(0, 1);
					}
					if (unk_0x694514BD37EC4E94(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x093484B35A948BFC(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_91(0, 1);
							iLocal_154 = 0;
							unk_0x1D7117732BAA49CA("Gallery");
							unk_0x6898F3C29B2AC47F();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0xF7E138CFA19B55E7())
					{
						if (unk_0x694514BD37EC4E94(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_91(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x694514BD37EC4E94(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_91(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0xF7E138CFA19B55E7())
					{
						if (unk_0x694514BD37EC4E94(2, Global_14465))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_91(0, 1);
							if (unk_0xFA30DFD0084E92FE(Global_2364, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x105601648511CC64();
							unk_0xDF332625237EA533(1);
						}
					}
				}
				else if (unk_0x694514BD37EC4E94(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_91(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x105601648511CC64();
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_94(0, 0);
			func_98(0);
			iLocal_115 = 0;
			func_93();
			Global_16833 = 0;
			Global_16834 = 0;
			Global_16836 = 0;
			unk_0xB0B0FE33F4F22679(&uLocal_140);
			unk_0xB0B0FE33F4F22679(&uLocal_141);
			unk_0x121BBDEFA4F0C22B(0);
			if (Global_14661 == 1)
			{
				unk_0xF0059F27F7BB6680(&Global_2363, 17);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			}
			unk_0x7A4219270DF1663F(0, 1);
			unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 3);
			unk_0x7CB6FD92BE491AD9(&Global_4267466, 3);
			unk_0xC0404835F30391BB(15);
			Global_16837 = 1;
			unk_0x38FF8CB6377D36F6(iLocal_112);
			unk_0x26D344275839A25E(iLocal_112);
			unk_0x21B00B24BEAA7264();
			func_93();
			unk_0xFD068BE6296B968B(0);
			unk_0x696835D78F5EA372(0);
			unk_0x2273C07E7BC105FB(1f);
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), "Mood_Normal_1", 0);
				unk_0x851D6A4006011A10(unk_0xBC25C936A095B5BA());
			}
			if (Global_4266191 > 0 && Global_4266191 < 13)
			{
				unk_0x786556581D95BCB2(sLocal_33[Global_4266191]);
			}
			unk_0x7CB6FD92BE491AD9(&Global_2363, 18);
			func_91(0, 1);
			if (func_139(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0x95E4B6F3ED223F5A();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x1D21497755DD8FB3(1);
		}
		else if (Global_14493.f_1 > 3)
		{
			unk_0x1D21497755DD8FB3(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267680 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14493.f_1 == 1 || Global_14493.f_1 == 3) || Global_14493.f_1 == 0) || Global_14437 == 1)
	{
		Global_14480 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = unk_0xF3D63CE90CC538E5(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x1055DCEBEEDF9C9E();
			iLocal_110 = unk_0xBDB696689381DF2F();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0xA7F138B5B1AB2CF6(uLocal_140))
					{
						if (func_141())
						{
							if (Global_4266191 == 0)
							{
								if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
								{
									func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
							{
								func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xA7F138B5B1AB2CF6(uLocal_140))
				{
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0x21B00B24BEAA7264();
			break;
		
		case 1:
			if (!unk_0x258452E8294BD412())
			{
				unk_0xECBC4A7C88FEF9C3("CELL_SPINNER2");
				unk_0x465F4F702894A06C(1);
			}
			break;
		
		case 2:
			if (unk_0xFA30DFD0084E92FE(Global_2364, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_14493.f_1 = 3;
				Global_16837 = 1;
			}
			unk_0x21B00B24BEAA7264();
			break;
	}
}

void func_5()
{
	if (func_96(2, Global_14462, 0))
	{
		func_1(0);
		if (unk_0xFA30DFD0084E92FE(Global_2364, 28))
		{
			unk_0x121BBDEFA4F0C22B(0);
			unk_0x5AE11BC36633DE4E(0);
			func_107();
			iLocal_127 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			}
			func_106();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0xFA30DFD0084E92FE(Global_2364, 14))
			{
				func_128("CELL_299", -1);
			}
			else
			{
				func_106();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_91(1, 1);
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2363, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_127();
			unk_0x2423B13D9CFAD1DD();
			func_78();
			func_114();
			func_110();
		}
		unk_0x121BBDEFA4F0C22B(0);
		func_107();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		}
		func_101();
		func_106();
	}
	if (func_96(2, Global_14466, 0))
	{
		func_1(0);
		if (func_95() || unk_0xFA30DFD0084E92FE(Global_2364, 28))
		{
		}
		else
		{
			unk_0x121BBDEFA4F0C22B(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_107();
			iLocal_127 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			}
			func_106();
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
	{
		if (func_96(2, Global_14465, 0))
		{
			func_1(0);
			unk_0x121BBDEFA4F0C22B(0);
			unk_0x977063AC00E2E5B1(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x2423B13D9CFAD1DD();
			func_127();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x2423B13D9CFAD1DD();
			func_127();
			unk_0x87A26CF52879CC06();
			unk_0x517D352C6F5FA2BC();
			Global_16837 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_91(0, 1);
			Global_16833 = 1;
			unk_0x7A4219270DF1663F(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_115 = 0;
			func_93();
			if (!Global_2519572.f_6118)
			{
				unk_0xF0059F27F7BB6680(&Global_2363, 9);
			}
			iLocal_142 = 0;
			func_132(Global_14474, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_14482, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16838 = 1;
	unk_0x7A4219270DF1663F(0, 1);
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
	if (Global_14493.f_1 < 4)
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
	
	if (unk_0x50465D2C022B9E04(2))
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
		func_69();
		func_65();
		func_64();
		fLocal_73 = unk_0xB9C3E6DB633FD55A();
		fLocal_74 = unk_0x2F8612BDC07F4064();
		if (iLocal_133 == 0)
		{
			if (unk_0x8FCEEB789599BD9B(2, iVar0) && !unk_0x8FCEEB789599BD9B(2, iVar1))
			{
				iLocal_133 = 1;
				func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 177, 1), "CELL_281");
					func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, 1), func_61());
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, 1), "CELL_280");
					func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(0, 177, 1), "CELL_281");
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0x29CD142125FE177B(uLocal_141, "SET_MAX_WIDTH");
				unk_0xD44E04EBBDC4CE88(fLocal_77);
				unk_0xF9FBC2F3F73D94C9();
				func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x8FCEEB789599BD9B(2, iVar0) || unk_0x8FCEEB789599BD9B(2, iVar1))
		{
			iLocal_133 = 0;
			func_101();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x8FCEEB789599BD9B(2, iVar1) && !unk_0x8FCEEB789599BD9B(2, iVar0))
			{
				iLocal_134 = 1;
				func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 177, 1), "CELL_281");
					func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, 1), func_61());
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, 1), "CELL_280");
					func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(0, 177, 1), "CELL_281");
				}
				func_59();
				unk_0x29CD142125FE177B(uLocal_141, "SET_MAX_WIDTH");
				unk_0xD44E04EBBDC4CE88(fLocal_77);
				unk_0xF9FBC2F3F73D94C9();
				func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x8FCEEB789599BD9B(2, iVar1) || unk_0x8FCEEB789599BD9B(2, iVar0))
		{
			iLocal_134 = 0;
			func_101();
		}
	}
	else
	{
		unk_0x5EFA245B45A49778(0, 2, 1);
		unk_0x5EFA245B45A49778(0, 1, 1);
	}
	if (unk_0x8A0D8839261BAEEF(2))
	{
		func_101();
	}
	func_114();
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 200, 1);
	}
	if (unk_0x694514BD37EC4E94(2, 183) && iLocal_156 == 0)
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				if (unk_0xFA30DFD0084E92FE(Global_4267466, 2))
				{
					unk_0x7CB6FD92BE491AD9(&Global_4267466, 2);
					if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
					{
						func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xF0059F27F7BB6680(&Global_4267466, 2);
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0x29CD142125FE177B(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x5E5DBD0A6623969E(0);
			func_58("CELL_FOCUS");
			unk_0x5E5DBD0A6623969E(1);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (!func_57(14))
		{
			if (unk_0xFA30DFD0084E92FE(Global_4267466, 10))
			{
				if ((Global_70978 == 0 && unk_0xB731B8C5BCE89836(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0x29CD142125FE177B(uLocal_140, "SET_FOCUS_LOCK");
					unk_0x5E5DBD0A6623969E(1);
					unk_0x57016C44F10111F0("CELL_ACTTL");
					unk_0x607C19B90D297FE2(unk_0xFCB4C1AC11347344(&Global_4268382));
					unk_0x64989E60CF560CA1();
					unk_0x5E5DBD0A6623969E(0);
					unk_0xF9FBC2F3F73D94C9();
					unk_0x7CB6FD92BE491AD9(&Global_4267466, 10);
				}
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_4267466, 10))
		{
			unk_0x7CB6FD92BE491AD9(&Global_4267466, 10);
		}
		iLocal_66 = unk_0x105601648511CC64();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				Local_70 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				if (unk_0xF0F2FC9DE291567F(Local_70, Local_67, 1) > 5f)
				{
					Global_14493.f_1 = 3;
					unk_0x121BBDEFA4F0C22B(0);
				}
				iLocal_65 = unk_0x105601648511CC64();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x8FCEEB789599BD9B(0, 182))
		{
			unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
			iLocal_132 = 0;
			unk_0x29CD142125FE177B(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x5E5DBD0A6623969E(0);
			func_58("CELL_FOCUS");
			unk_0x5E5DBD0A6623969E(1);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
	else if (unk_0x8FCEEB789599BD9B(0, 182))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
		iLocal_132 = 1;
		if (!func_57(14))
		{
			unk_0x29CD142125FE177B(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x5E5DBD0A6623969E(1);
			func_58("CELL_FOCUS");
			unk_0x5E5DBD0A6623969E(1);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
	if (func_141())
	{
		if (unk_0x694514BD37EC4E94(2, 186) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
						unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), "Mood_Normal_1", 0);
						unk_0x851D6A4006011A10(unk_0xBC25C936A095B5BA());
						if (Global_14493 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x35C830BCF2BF70BE(unk_0xBC25C936A095B5BA(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x35C830BCF2BF70BE(unk_0xBC25C936A095B5BA(), 1);
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
											unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), "Mood_Normal_1", 0);
						unk_0x851D6A4006011A10(unk_0xBC25C936A095B5BA());
						unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
					}
				}
			}
		}
		if (unk_0x694514BD37EC4E94(2, 185) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x3362CDE8460ED38B(sLocal_19[Global_4266190], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xFD068BE6296B968B(1);
							unk_0x696835D78F5EA372(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0xFD068BE6296B968B(0);
						unk_0x696835D78F5EA372(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0xFD068BE6296B968B(1);
					unk_0x696835D78F5EA372(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0xFD068BE6296B968B(0);
					unk_0x696835D78F5EA372(0);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		if (unk_0x694514BD37EC4E94(0, 172) && iLocal_156 == 0)
		{
			if (func_141())
			{
				Global_4266191++;
				unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
			}
			if (Global_4266191 == 13)
			{
				func_98(0);
				unk_0x2273C07E7BC105FB(1f);
				unk_0x786556581D95BCB2(sLocal_33[(Global_4266191 - 1)]);
				Global_4266191 = 0;
				func_55();
				if (iLocal_47 == 1)
				{
					unk_0x7CB6FD92BE491AD9(&Global_4267466, 2);
					iLocal_47 = 0;
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4266191 > 0 && Global_4266191 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0x8AA3F48A15444B98(sLocal_33[Global_4266191], 0);
			}
		}
	}
	if (Global_4266191 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0x499783D01578C2D2(sLocal_33[Global_4266191]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0xF49118F64A2732AF())
				{
					func_98(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xF0059F27F7BB6680(&Global_4267466, 2);
				func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x2273C07E7BC105FB(0.25f);
				unk_0x7EA0257A0F40A320(sLocal_33[Global_4266191], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4266191 == 1 || Global_4266191 == 3)
			{
			}
			if (Global_4266191 == 2 || Global_4266191 == 4)
			{
			}
		}
	}
	if (unk_0x694514BD37EC4E94(0, 173) && iLocal_156 == 0)
	{
		if (func_141())
		{
			func_93();
			Global_4266190++;
			unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
		}
		if (Global_4266190 == 13)
		{
			Global_4266190 = 0;
		}
		if (Global_4266190 == 0)
		{
			if (func_141())
			{
				func_93();
			}
		}
		else
		{
			func_99();
		}
		func_54();
	}
	if (unk_0xF7DDAAF0EFDAFA22(0, 184) && iLocal_156 == 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
				func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_131(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x105601648511CC64();
				while (unk_0x105601648511CC64() < (iLocal_135 + iLocal_139) && Global_14493.f_1 > 3)
				{
					func_127();
					func_110();
					func_78();
					unk_0x2423B13D9CFAD1DD();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0x38FF8CB6377D36F6(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					unk_0xF0059F27F7BB6680(&Global_2365, 3);
					iLocal_65 = unk_0x105601648511CC64();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					unk_0x7CB6FD92BE491AD9(&Global_2365, 3);
				}
				iLocal_135 = unk_0x105601648511CC64();
				while (unk_0x105601648511CC64() < (iLocal_135 + iLocal_137) && Global_14493.f_1 > 3)
				{
					func_127();
					func_110();
					func_78();
					unk_0x2423B13D9CFAD1DD();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_131(uLocal_140, "OPEN_SHUTTER");
				if (func_141())
				{
					if (Global_4266191 == 0)
					{
						if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
						{
							func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
				{
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_110();
				func_127();
				if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
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
			if (unk_0x694514BD37EC4E94(0, 40) || unk_0x694514BD37EC4E94(0, 41))
			{
				fLocal_114 = unk_0x7B27D9AEFAB01B8B();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x1BD5EE88F32433CD(iLocal_112))
					{
						unk_0xC4BA30B532FE260F(iLocal_112, "Camera_Zoom", &Global_14482, 1);
					}
				}
				else
				{
					unk_0x38FF8CB6377D36F6(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x8FCEEB789599BD9B(0, 40) || unk_0x8FCEEB789599BD9B(0, 41))
		{
			fLocal_114 = unk_0x7B27D9AEFAB01B8B();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x1BD5EE88F32433CD(iLocal_112))
				{
					unk_0xC4BA30B532FE260F(iLocal_112, "Camera_Zoom", &Global_14482, 1);
				}
			}
			else
			{
				unk_0x38FF8CB6377D36F6(iLocal_112);
			}
		}
		else
		{
			unk_0x38FF8CB6377D36F6(iLocal_112);
		}
	}
	if (func_96(2, Global_14462, 0))
	{
		fLocal_75 = unk_0xB9C3E6DB633FD55A();
		fLocal_76 = unk_0x2F8612BDC07F4064();
		unk_0x977063AC00E2E5B1(0, 0);
		unk_0xF0059F27F7BB6680(&Global_2363, 21);
		unk_0x38FF8CB6377D36F6(iLocal_112);
		iLocal_127 = 1;
		func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xC4BA30B532FE260F(-1, "Camera_Shoot", &Global_14482, 1);
		func_131(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0xF960832D272B97D4(Local_84, 0);
		if (!func_141())
		{
			func_93();
		}
		Global_16836 = 1;
		unk_0x7A4219270DF1663F(0, 1);
		while (Global_16835 < 6 && Global_14493.f_1 > 3)
		{
			func_127();
			func_110();
			func_78();
			func_114();
			unk_0x2423B13D9CFAD1DD();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA09E3BEE73FAD3C5(0, 0);
		if (Global_14435)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x105601648511CC64();
		while (unk_0x105601648511CC64() < (iLocal_135 + iLocal_138) && Global_14493.f_1 > 3)
		{
			func_127();
			func_110();
			func_78();
			unk_0x2423B13D9CFAD1DD();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_131(uLocal_140, "OPEN_SHUTTER");
		unk_0x7CB6FD92BE491AD9(&Global_2363, 21);
		func_101();
		if (Global_14493.f_1 > 3)
		{
			if (Global_70978)
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
						unk_0x0D5F0AC615350E61(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x0D5F0AC615350E61(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x0D5F0AC615350E61(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_98(0);
		}
		func_110();
	}
	if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
	{
		if (func_96(2, Global_14465, 0))
		{
			unk_0x977063AC00E2E5B1(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x2423B13D9CFAD1DD();
			func_127();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x2423B13D9CFAD1DD();
			func_127();
			unk_0x87A26CF52879CC06();
			unk_0x517D352C6F5FA2BC();
			Global_16837 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16833 = 1;
			unk_0x7A4219270DF1663F(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_115 = 0;
			func_93();
			if (!Global_2519572.f_6118)
			{
				unk_0xF0059F27F7BB6680(&Global_2363, 9);
			}
			unk_0x121BBDEFA4F0C22B(0);
			iLocal_142 = 0;
			func_132(Global_14474, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_15(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_14(unk_0xBC25C936A095B5BA());
			if (func_13(iVar0) && (!func_57(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_13(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
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
		return Global_105220.f_28021[iParam0 /*29*/];
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
		Global_2457604[iVar0] = iParam0;
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
		if (Global_2457604[iVar1] == 0)
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
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_14430 = { Global_14446[Global_14438 /*3*/] };
	func_91(0, 1);
	func_94(0, 0);
	func_98(0);
	iLocal_115 = 0;
	func_93();
	if (!unk_0xFA30DFD0084E92FE(Global_2364, 28))
	{
		if (unk_0x215C26A962C2E3E1() == 0)
		{
			if (unk_0xA76D65C63ED50F67())
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
	
	iVar0 = Global_2530245[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1373702[func_25(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1373708[func_25(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1373714[func_25(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1373720[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1373678[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1373684[func_25(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1373690[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1373696[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1373654[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1373660[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1373666[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1373672[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1373726[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1373732[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1373738[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1373744[func_25(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1373750[func_25(uParam2)] = iParam1;
			break;
		
		case 7229:
			Global_1373756[func_25(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1373762[func_25(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1373768[func_25(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2559219[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2559219[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2925:
			Global_2559219[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2559219[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7818:
			Global_2559326[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1373774[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1373780[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1373786[func_25(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1373792[func_25(uParam2)] = iParam1;
			break;
		
		case 3049:
			Global_2559271[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3050:
			Global_2559271[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3051:
			Global_2559271[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3052:
			Global_2559271[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2559271[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2559329[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2559329[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2559329[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3635:
			Global_2559329[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2559329[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2559345[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2559345[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2559345[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2559345[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2559345[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2559271[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2559219[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2559361[func_25(uParam2)] = iParam1;
			break;
		
		case 3660:
			Global_2559370[func_25(uParam2)] = iParam1;
			break;
		
		case 3661:
			Global_2559364[func_25(uParam2)] = iParam1;
			break;
		
		case 3662:
			Global_2559373[func_25(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2559367[func_25(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2559376[func_25(uParam2)] = iParam1;
			break;
		
		case 3685:
			Global_2559379[func_25(uParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2559271[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3226:
			Global_2559219[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2559271[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2559219[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4015:
			Global_2559271[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4016:
			Global_2559219[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4018:
			Global_2559271[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2559219[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2559271[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2559219[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2559271[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2559219[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6105:
			Global_2559271[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6106:
			Global_2559219[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6163:
			Global_2559271[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6164:
			Global_2559219[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6541:
			Global_2559271[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6542:
			Global_2559219[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6554:
			Global_2559271[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6555:
			Global_2559219[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6557:
			Global_2559271[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2559219[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2559271[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2559219[16 /*3*/][func_25(uParam2)] = iParam1;
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
	iVar0 = Global_2530245[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1373635)
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
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
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
	uVar0 = Global_2530245[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
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
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312736;
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
		func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(0, 177, 1), "CELL_281");
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, 1), "CELL_280");
		if (iLocal_131)
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_70978 == 0 && unk_0xB731B8C5BCE89836(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_62(uLocal_141, "SET_DATA_SLOT", 7f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xE57EAD1FEA2A6FAF(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(0, 39, 1), "CELL_284");
					if (func_141())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_63)
						{
							func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 182, 1), "CELL_FOCUS");
						}
						func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xE57EAD1FEA2A6FAF(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					func_62(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xE57EAD1FEA2A6FAF(0, 39, 1), "CELL_284");
					if (func_141())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_63)
						{
							func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 182, 1), "CELL_FOCUS");
						}
						func_62(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x29CD142125FE177B(uLocal_141, "SET_MAX_WIDTH");
		unk_0xD44E04EBBDC4CE88(fLocal_77);
		unk_0xF9FBC2F3F73D94C9();
		func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_62(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xE57EAD1FEA2A6FAF(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_44(Global_4194378, Global_4194379))
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
	return func_31(unk_0xBC25C936A095B5BA(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar5;
	var uVar10;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	uVar0 = 4;
	uVar5 = 4;
	uVar10 = 5;
	if (iParam1 == 0)
	{
		iVar19 = 3;
	}
	else if (bParam3)
	{
		iVar19 = 1;
	}
	else if (bParam4)
	{
		iVar19 = 2;
	}
	else
	{
		iVar19 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar5, &uVar10, iVar19, bParam5);
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar16 = func_38(iParam0);
			if (!iVar16 == -1)
			{
				if (func_37(&uVar0, iVar16))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar17 = func_36(iParam0);
			if (!iVar17 == -1)
			{
				if (func_34(&uVar5, iVar17))
				{
					return 1;
				}
			}
		}
		if (unk_0x7AF0088ABFA713B6())
		{
			iVar18 = func_33(iParam0);
			if (!iVar18 == 0)
			{
				if (func_32(&uVar10, iVar18))
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
	if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA86A4D206EC8EB16(iParam0, 1);
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
	if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x35C830BCF2BF70BE(iParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x35C830BCF2BF70BE(iParam0, 0);
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
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
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
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
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
				
				case 39:
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
					}
					break;
				
				case 40:
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
					func_43(uParam4, 124, 1);
					func_43(uParam4, 125, 1);
					func_43(uParam4, 126, 1);
					func_43(uParam4, 127, 1);
					func_43(uParam4, 128, 1);
					func_43(uParam4, 129, 1);
					func_43(uParam4, 130, 1);
					func_43(uParam4, 131, 1);
					func_43(uParam4, 132, 1);
					func_43(uParam4, 133, 1);
					break;
				
				case 41:
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
					func_43(uParam4, 124, 1);
					func_43(uParam4, 125, 1);
					func_43(uParam4, 126, 1);
					func_43(uParam4, 127, 1);
					func_43(uParam4, 128, 1);
					func_43(uParam4, 129, 1);
					func_43(uParam4, 130, 1);
					func_43(uParam4, 131, 1);
					func_43(uParam4, 132, 1);
					func_43(uParam4, 133, 1);
					break;
				
				case 42:
				case 43:
				case 44:
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
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
					func_39(2, 39, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 40, uParam2, uParam3, uParam4, 0, 0);
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
		unk_0xF0059F27F7BB6680(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
				case 30:
				case 34:
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
	func_62(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xE57EAD1FEA2A6FAF(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	if (Global_1663032 == 1)
	{
		fParam0 = -1f;
	}
	func_62(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xE57EAD1FEA2A6FAF(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 183, 1), "CELL_GRID");
	func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_70978 == 0 && unk_0xB731B8C5BCE89836(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0x29CD142125FE177B(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x5E5DBD0A6623969E(1);
			unk_0x57016C44F10111F0("CELL_ACTTL");
			unk_0x607C19B90D297FE2(unk_0xFCB4C1AC11347344(&Global_4268382));
			unk_0x64989E60CF560CA1();
			unk_0x5E5DBD0A6623969E(0);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

void func_48(float fParam0)
{
	func_62(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0xE57EAD1FEA2A6FAF(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 39, 1), "CELL_284");
	func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
	func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(0, 177, 1), "CELL_281");
	func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, 1), "CELL_280");
	unk_0x29CD142125FE177B(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(fLocal_77);
	unk_0xF9FBC2F3F73D94C9();
	func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
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
		func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 177, 1), "CELL_281");
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, 1), func_61());
		if (iLocal_131)
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_70978 == 0 && unk_0xB731B8C5BCE89836(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_62(uLocal_141, "SET_DATA_SLOT", 7f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(0, 39, 1), "CELL_284");
					if (func_141())
					{
						func_46(6f);
						func_45(7f);
						func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xE57EAD1FEA2A6FAF(2, 183, 1), "CELL_GRID");
				func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
				func_62(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xE57EAD1FEA2A6FAF(0, 39, 1), "CELL_284");
				if (func_141())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_63)
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 182, 1), "CELL_FOCUS");
					}
					func_62(uLocal_141, "SET_DATA_SLOT", 9f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(4f);
						func_45(5f);
						func_62(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xE57EAD1FEA2A6FAF(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x29CD142125FE177B(uLocal_141, "SET_MAX_WIDTH");
		unk_0xD44E04EBBDC4CE88(fLocal_77);
		unk_0xF9FBC2F3F73D94C9();
		func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 39, 1), "CELL_284");
	func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_285");
	func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, 1), func_61());
	func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 177, 1), "CELL_281");
	unk_0x29CD142125FE177B(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(fLocal_77);
	unk_0xF9FBC2F3F73D94C9();
	func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_131)
	{
		unk_0x2B9AEC08E469E384(fLocal_73, 1065353216);
		unk_0xF3F01A78937DC905(fLocal_74);
	}
}

void func_53(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4456448.f_142987 == 1)
	{
	}
	else if (Global_4456448.f_142988 == 1)
	{
	}
	else
	{
		unk_0xAF81D8144ED2AE74(iParam0);
	}
}

void func_54()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x3362CDE8460ED38B(sLocal_19[Global_4266190], "phone_cam12DUMMY"))
		{
			unk_0xFD068BE6296B968B(0);
			unk_0x696835D78F5EA372(0);
		}
		else
		{
			unk_0xFD068BE6296B968B(1);
			unk_0x696835D78F5EA372(1);
		}
	}
}

void func_55()
{
	func_132(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_141())
	{
		if (Global_1663032 == 0)
		{
			unk_0x92ED2B57F74A9650("phone_cam");
		}
	}
}

int func_56()
{
	if (func_57(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if ((unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/] || unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/]) || unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
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
	return Global_35905 == iParam0;
}

void func_58(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_59()
{
	if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 30, 1), "CELL_RT_RSTICK");
		func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 1, 1), "CELL_RT_RSTICK");
		func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(0, 39, 1), "CELL_LT_LSTICKZ");
		func_62(uLocal_141, "SET_DATA_SLOT", 6f, unk_0xE57EAD1FEA2A6FAF(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_61()
{
	if (Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11.f_33 == 233 && Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11.f_176 == 9)
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

void func_62(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0xF1734B55490E9045(uParam3))
	{
		func_63(uParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_58(sParam4);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_63(var uParam0)
{
	unk_0xCB30200B8055CA57(uParam0);
}

void func_64()
{
	if (Global_70978)
	{
		switch (Global_16917)
		{
			case 0:
				if (unk_0x50465D2C022B9E04(2))
				{
					func_128("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_128("CELL_CAM_SELFIE_0", -1);
				}
				Global_16917++;
				break;
			
			case 1:
				if (!unk_0xF16DAFF595E80F7C())
				{
					if (unk_0x50465D2C022B9E04(2))
					{
						func_128("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_128("CELL_CAM_SELFIE_1", -1);
					}
					Global_16917++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16916)
		{
			case 0:
				if (unk_0x50465D2C022B9E04(2))
				{
					func_128("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_128("CELL_CAM_SELFIE_0", -1);
				}
				Global_16916++;
				break;
			
			case 1:
				if (!unk_0xF16DAFF595E80F7C())
				{
					if (unk_0x50465D2C022B9E04(2))
					{
						func_128("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_128("CELL_CAM_SELFIE_1", -1);
					}
					Global_16916++;
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
	
	if (unk_0x50465D2C022B9E04(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x8FCEEB789599BD9B(2, iVar10) && !unk_0x8FCEEB789599BD9B(2, iVar9))
	{
		unk_0xBBC4195AD74D153D(0, 2, 1);
		unk_0xBBC4195AD74D153D(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 2)) * 127;
		if (unk_0x50465D2C022B9E04(2))
		{
			if (unk_0xC40EDFF7541407A8(iVar0) > 28 || unk_0xC40EDFF7541407A8(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0xC40EDFF7541407A8(iVar2) > 28 || unk_0xC40EDFF7541407A8(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0x50465D2C022B9E04(2))
		{
			fVar7 = unk_0xE56557A1B607909F(0, 290);
			fVar8 = unk_0xE56557A1B607909F(0, 291);
			if (unk_0xCBE319E6CA6FF4D2())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xC40EDFF7541407A8(iVar0) > 28 || unk_0xC40EDFF7541407A8(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_68(fVar5);
		func_67(fVar6);
		func_66(fVar4);
	}
	else if (!unk_0x8FCEEB789599BD9B(2, iVar9))
	{
		unk_0x5EFA245B45A49778(0, 2, 1);
		unk_0x5EFA245B45A49778(0, 1, 1);
	}
}

void func_66(float fParam0)
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
	unk_0xE192619A62EDCCE6(fLocal_161);
}

void func_67(float fParam0)
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
	unk_0xF3EF9340AD350737(fLocal_162);
}

void func_68(float fParam0)
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
	unk_0x4AF1A2347337312B(fLocal_163);
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
	
	if (unk_0x50465D2C022B9E04(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x8FCEEB789599BD9B(2, iVar10))
		{
			if (unk_0x694514BD37EC4E94(2, 178))
			{
				unk_0x91EC6AEB1932A6B8(0.5f);
				unk_0x569ABE7ED59B6777(0.85f);
				unk_0xA0A915A248C4216D(0.5f);
				unk_0x9BD568826C3C2591(-0.25f);
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
	if (unk_0x8FCEEB789599BD9B(2, iVar10) && !unk_0x8FCEEB789599BD9B(2, iVar11))
	{
		if (unk_0x694514BD37EC4E94(2, 178))
		{
			unk_0x91EC6AEB1932A6B8(0.5f);
			unk_0x569ABE7ED59B6777(0.85f);
			unk_0xA0A915A248C4216D(0.5f);
			unk_0x9BD568826C3C2591(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0xBBC4195AD74D153D(0, 2, 1);
		unk_0xBBC4195AD74D153D(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 2)) * 127;
		if (unk_0x50465D2C022B9E04(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 39)) * 127;
			fVar8 = unk_0xE56557A1B607909F(0, 290);
			fVar9 = unk_0xE56557A1B607909F(0, 291);
			if (unk_0xCBE319E6CA6FF4D2())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xC40EDFF7541407A8(iVar2) > 15 || unk_0xC40EDFF7541407A8(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0xC40EDFF7541407A8(iVar0) > 28 || unk_0xC40EDFF7541407A8(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_73(fVar6);
		func_72(fVar7);
		func_71(fVar4);
		if (!func_57(14))
		{
			func_70(fVar5);
		}
	}
	else if (!unk_0xD3C4A010282C31F2(2, iVar11))
	{
		unk_0x5EFA245B45A49778(0, 2, 1);
		unk_0x5EFA245B45A49778(0, 1, 1);
	}
	if (!unk_0xD3C4A010282C31F2(2, iVar10) && !unk_0xD3C4A010282C31F2(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE56557A1B607909F(0, 293)) * 127;
		if (unk_0xC40EDFF7541407A8(iVar2) > 28 || unk_0xC40EDFF7541407A8(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0xC40EDFF7541407A8(iVar0) > 28 || unk_0xC40EDFF7541407A8(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_57(14))
		{
			func_70(fVar5);
		}
	}
}

void func_70(float fParam0)
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
	unk_0xA0A915A248C4216D(fLocal_159);
}

void func_71(float fParam0)
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
	unk_0x9BD568826C3C2591(fLocal_160);
}

void func_72(float fParam0)
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
	unk_0x569ABE7ED59B6777(fLocal_158);
}

void func_73(float fParam0)
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
	unk_0x91EC6AEB1932A6B8(fLocal_157);
}

void func_74()
{
	if (Global_71238 || Global_71239)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_4456448.f_142987 == 0 && Global_4456448.f_142988 == 0)
			{
				unk_0x4B6031094354FED6(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_14435)
		{
			if (Global_14659)
			{
				if (iLocal_150 == 0)
				{
					if (Global_14493.f_1 > 3)
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
	else if (Global_14435)
	{
	}
	else
	{
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.75f, func_61(), 0);
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.79f, "CELL_286", 0);
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_75(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam3);
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xB8F3C51875F7BEA3(0.4f, 0.4f);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(1, 0, 0, 0, 205);
	unk_0x39AFAD5E153F0203(1);
	unk_0xC8793973D4960AC4(0);
	unk_0xCC4FE6A016BA0765(iParam0, iParam1, iParam2, iParam3);
}

void func_77()
{
	unk_0x2B9AEC08E469E384(fLocal_75, 1065353216);
	unk_0xF3F01A78937DC905(fLocal_76);
}

void func_78()
{
	unk_0xBBC4195AD74D153D(0, 25, 1);
	unk_0xBBC4195AD74D153D(0, 44, 1);
	unk_0xBBC4195AD74D153D(0, 3, 1);
	unk_0xBBC4195AD74D153D(0, 4, 1);
	unk_0xBBC4195AD74D153D(0, 5, 1);
	unk_0xBBC4195AD74D153D(0, 6, 1);
	unk_0xBBC4195AD74D153D(0, 1, 1);
	unk_0xBBC4195AD74D153D(0, 2, 1);
	unk_0xBBC4195AD74D153D(0, 39, 1);
	unk_0xBBC4195AD74D153D(0, 47, 1);
	unk_0xBBC4195AD74D153D(0, 56, 1);
}

void func_79()
{
	Local_87 = { Global_14446[Global_14438 /*3*/] };
	if (Global_14435)
	{
		if (func_82())
		{
			unk_0x652515566BB40BA9(&Local_93);
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
		if (unk_0xFA30DFD0084E92FE(Global_2365, 4))
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
		if (func_82() == 0)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2365, 4))
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
			Local_87 = { Global_14439[Global_14438 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x3D7D94BDD4D22C14(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0xF960832D272B97D4(Local_84, 0);
			if (!unk_0xFA30DFD0084E92FE(Global_2363, 22))
			{
				if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_80();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_80()
{
	func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xFA30DFD0084E92FE(Global_2364, 28))
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, 1), "CELL_286");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 178, 1), "CELL_277");
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x29CD142125FE177B(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(fLocal_77);
	unk_0xF9FBC2F3F73D94C9();
	func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_81()
{
	func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xFA30DFD0084E92FE(Global_2364, 28))
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, 1), func_61());
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, 1), "CELL_286");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(2, 179, 1), func_61());
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 178, 1), "CELL_277");
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x29CD142125FE177B(uLocal_141, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(fLocal_77);
	unk_0xF9FBC2F3F73D94C9();
	func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
		{
			if (Global_14436 == 0)
			{
				if (Global_1678 != 128)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (Global_15800 != 2)
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
		if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x98A60DA6C3008698())
			{
				if (unk_0x149E9368A11035DE(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA()) || unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA())) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x6BA46D5172404F26(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		if (Global_104268)
		{
			return 0;
		}
	}
	if (Global_70978)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x98A60DA6C3008698()))
	{
		iVar2 = 1;
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar3 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if ((((((((unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar3)) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iVar3))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(iVar3))) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("seashark")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("seashark2")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("rhino")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("submersible")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("submersible2")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267680 || iVar2 == 1)
	{
		if (unk_0xB731B8C5BCE89836(joaat("apptrackify")) > 0 || Global_105220.f_14022.f_89)
		{
			if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
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
	unk_0xBBC4195AD74D153D(0, 47, 1);
	unk_0xD55638CE45B2B948(0, Global_14463);
	Local_84 = { Global_14453 };
	Local_87 = { Global_14446[Global_14438 /*3*/] };
	if (func_82())
	{
		unk_0x59FA1842E06428BC(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0x652515566BB40BA9(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14435)
	{
		func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (unk_0xFA30DFD0084E92FE(Global_2363, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_84();
		}
		if (iLocal_121)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
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
			if (func_82() == 0)
			{
				unk_0xF960832D272B97D4(Local_78, 0);
				unk_0x3D7D94BDD4D22C14(Local_81);
			}
			func_91(0, 1);
		}
		else if (func_82() == 0)
		{
			unk_0xF960832D272B97D4(Local_78, 0);
			unk_0x3D7D94BDD4D22C14(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_84();
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
			func_84();
		}
	}
	unk_0xF960832D272B97D4(Local_78, 0);
}

void func_84()
{
	func_1(0);
	if (func_82() == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_2363, 30))
		{
			unk_0x3D7D94BDD4D22C14(Global_14439[Global_14438 /*3*/]);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14446[Global_14438 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0xF960832D272B97D4(Local_78, 0);
	}
	Global_16833 = 0;
	func_94(0, 0);
	func_98(0);
	iLocal_115 = 0;
	func_93();
	Global_14480 = 1;
	Global_16836 = 0;
	if (Global_14493.f_1 > 4)
	{
		Global_14493.f_1 = 6;
		Global_14471 = 1;
		func_85();
	}
	if (unk_0xA7F138B5B1AB2CF6(uLocal_140))
	{
		func_131(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x2423B13D9CFAD1DD();
	unk_0xB0B0FE33F4F22679(&uLocal_141);
	unk_0xB0B0FE33F4F22679(&uLocal_140);
	if (Global_14661 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 17);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
	}
	unk_0x7CB6FD92BE491AD9(&Global_2363, 18);
	unk_0x7CB6FD92BE491AD9(&Global_2363, 21);
	unk_0x7A4219270DF1663F(0, 1);
	unk_0x7CB6FD92BE491AD9(&Global_2365, 3);
	unk_0x7CB6FD92BE491AD9(&Global_4267466, 3);
	unk_0x121BBDEFA4F0C22B(0);
	unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
	unk_0xC0404835F30391BB(15);
	Global_16837 = 1;
	unk_0x38FF8CB6377D36F6(iLocal_112);
	unk_0x26D344275839A25E(iLocal_112);
	unk_0x21B00B24BEAA7264();
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), "Mood_Normal_1", 0);
		unk_0x851D6A4006011A10(unk_0xBC25C936A095B5BA());
	}
	func_93();
	unk_0xFD068BE6296B968B(0);
	unk_0x696835D78F5EA372(0);
	unk_0x2273C07E7BC105FB(1f);
	if (Global_4266191 > 0 && Global_4266191 < 13)
	{
		unk_0x786556581D95BCB2(sLocal_33[Global_4266191]);
	}
	func_91(0, 1);
	if (func_139(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_85()
{
	struct<3> Var0;
	
	if (Global_14476 == 1)
	{
		return;
	}
	if (Global_14493.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA7F138B5B1AB2CF6(Global_14474))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14493.f_1)
	{
		case 6:
			func_132(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_89(Global_2968);
			if (Global_2968 == 1)
			{
				func_132(Global_14474, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14497), -1082130432, -1082130432, -1082130432);
				Global_14473 = Global_14497;
			}
			else
			{
				func_132(Global_14474, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14498), -1082130432, -1082130432, -1082130432);
				Global_14473 = Global_14498;
			}
			if (Global_14481)
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14661 == 0)
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			}
			else if (Global_70978)
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			}
			else
			{
				if (Global_14660 == 1)
				{
					if (Global_14481)
					{
						func_88(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_88(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14481)
				{
					func_88(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_88(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_2363, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_132(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14492 == 1)
			{
				func_87();
				func_132(Global_14474, "SET_THEME", unk_0xBBDA792448DB5A89(Global_105220.f_14022[Global_14493 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15813)
				{
					unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_15815);
					unk_0x64989E60CF560CA1();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
				{
					func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), "CELL_217", &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
				}
				func_132(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15800 == 4 || Global_15800 == 3)
			{
				func_132(Global_14474, "SET_THEME", unk_0xBBDA792448DB5A89(Global_105220.f_14022[Global_14493 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_87();
				if (Global_15813)
				{
					unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_15815);
					unk_0x64989E60CF560CA1();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					if (Global_16058)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
					{
						func_132(Global_14474, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_132(Global_14474, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &Var0, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
					}
				}
				func_132(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_86();
			break;
		
		default:
			break;
	}
}

void func_86()
{
	if (unk_0xA7F138B5B1AB2CF6(Global_14474))
	{
		if (Global_14492 == 1)
		{
			if (Global_14481)
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15847)
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_88(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
		}
		else
		{
			func_88(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_87()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_14493 == 0)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 1)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 2)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 3)
		{
			switch (Global_4267678)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_88(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0xF1734B55490E9045(iParam8))
	{
		func_58(iParam8);
	}
	if (!unk_0xF1734B55490E9045(iParam9))
	{
		func_58(iParam9);
	}
	if (!unk_0xF1734B55490E9045(iParam10))
	{
		func_58(iParam10);
	}
	if (!unk_0xF1734B55490E9045(iParam11))
	{
		func_58(iParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
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
	int iVar9;
	
	Global_16868 = 0;
	Global_2968 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2932[iVar0] = 0;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 3))
								{
									iVar2 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14663 = 0;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_58(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_2457694)
							{
								if (iVar1 == 14)
								{
									func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2932[iVar0] = 1;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_105220.f_14112[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_105220.f_14112[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_105220.f_14112[iVar3 /*104*/].f_99[Global_14493] == 1)
											{
												Global_16868++;
											}
										}
									}
									iVar3++;
								}
								func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16868), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70978)
								{
									iVar4 = 0;
									iVar4 = Global_4266200;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4266201[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4266201[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4266201[iVar5 /*104*/].f_99[Global_14493] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14493)
									{
										case 0:
											iVar6 = Global_37062;
											break;
										
										case 1:
											iVar6 = Global_37063;
											break;
										
										case 2:
											iVar6 = Global_37064;
											break;
										
										default:
											break;
									}
									func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_58(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(Global_2369);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_58(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar7);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 3))
								{
									iVar8 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14663 = 0;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_58(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar8);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 8)
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_58(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if ((iVar1 == 23 && unk_0x3362CDE8460ED38B(&(Global_2370[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xFA30DFD0084E92FE(Global_2364, 6))
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_58(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_2370[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622819.f_1;
								func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_88(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2932[iVar0] = 1;
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
	switch (iLocal_100)
	{
		case 1:
			unk_0x7A4219270DF1663F(0, 1);
			if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
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
			if (!unk_0xFA30DFD0084E92FE(Global_2363, 22))
			{
				unk_0x7A4219270DF1663F(0, 1);
				if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_80();
				}
				iLocal_100 = 2;
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
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_92(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_93()
{
	if ((Global_4456448.f_142987 == 0 && Global_4456448.f_142988 == 0) && Global_1663032 == 0)
	{
		unk_0x38505EF4199EB062();
	}
}

void func_94(int iParam0, int iParam1)
{
	if (Global_4456448.f_142987 == 1)
	{
	}
	else if (Global_4456448.f_142988 == 1)
	{
	}
	else
	{
		unk_0xA09E3BEE73FAD3C5(iParam0, iParam1);
	}
}

int func_95()
{
	if (unk_0xFA30DFD0084E92FE(Global_2363, 15))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x694514BD37EC4E94(iParam0, uParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, iParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
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
	if (Global_14435)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_82())
		{
			unk_0x59FA1842E06428BC(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0x652515566BB40BA9(&Local_93);
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
		if (func_82() == 0)
		{
			unk_0xF960832D272B97D4(Local_78, 0);
			unk_0x3D7D94BDD4D22C14(Local_81);
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
		unk_0xF960832D272B97D4(Local_78, 0);
	}
	if (Global_14435)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_82())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0xF960832D272B97D4(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x3D7D94BDD4D22C14(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_16834 = 0;
				func_94(1, 1);
				iLocal_115 = 1;
				func_98(1);
				func_55();
				func_99();
				func_53(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_110();
				func_132(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
				{
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_134();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0xF960832D272B97D4(Local_78, 0);
		Global_16834 = 0;
	}
}

void func_98(bool bParam0)
{
	if (func_141())
	{
		if (bParam0)
		{
			if (!unk_0xF49118F64A2732AF())
			{
				unk_0x4BC9FE3DC57D1353(1);
				if (Global_4266191 > 0 && Global_4266191 < 99)
				{
					unk_0x7EA0257A0F40A320(sLocal_33[Global_4266191], 0);
					unk_0x2273C07E7BC105FB(0.25f);
				}
			}
		}
		else if (unk_0xF49118F64A2732AF())
		{
			unk_0x4BC9FE3DC57D1353(0);
		}
	}
}

void func_99()
{
	if (Global_4266190 > 0 && Global_4266190 < 99)
	{
		if (Global_1663032 == 0)
		{
			unk_0x92ED2B57F74A9650(sLocal_19[Global_4266190]);
		}
	}
}

void func_100()
{
	if (Global_14435)
	{
		iLocal_125 = 0;
		func_55();
		func_91(1, 1);
		func_94(1, 1);
		iLocal_115 = 1;
		Global_16837 = 1;
	}
}

void func_101()
{
	if (Global_4456448.f_142987 == 1 && func_102(1))
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_2363, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (unk_0x3362CDE8460ED38B(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_102(int iParam0)
{
	if ((func_105() || func_104()) || (func_103() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_103()
{
	return Global_2447942.f_16;
}

var func_104()
{
	return Global_2447942.f_15;
}

var func_105()
{
	return Global_2447942.f_14;
}

void func_106()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_14482, 1);
	}
}

void func_107()
{
	unk_0x977063AC00E2E5B1(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_108()
{
	func_109();
}

void func_109()
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

void func_110()
{
	if (Global_14493.f_1 > 3)
	{
		if (!unk_0xE186ACC7BE9B244E())
		{
			unk_0x65E432C782E7E702(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_111()
{
	if (func_57(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_11();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

void func_112(int iParam0)
{
	if (Global_14659)
	{
		func_91(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_113())
	{
		Global_14493.f_1 = 3;
	}
}

int func_113()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_114()
{
	unk_0xBBC4195AD74D153D(0, 0, 1);
	unk_0xBBC4195AD74D153D(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0xD55638CE45B2B948(0, Global_14466);
		unk_0xD55638CE45B2B948(0, Global_14463);
		unk_0xBBC4195AD74D153D(0, 278, 1);
		unk_0xBBC4195AD74D153D(0, 279, 1);
		unk_0xBBC4195AD74D153D(0, 280, 1);
		unk_0xBBC4195AD74D153D(0, 281, 1);
		unk_0xBBC4195AD74D153D(0, 282, 1);
		unk_0xBBC4195AD74D153D(0, 282, 1);
		unk_0xBBC4195AD74D153D(0, 284, 1);
		unk_0xBBC4195AD74D153D(0, 285, 1);
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 114, 1);
		unk_0xBBC4195AD74D153D(0, 71, 1);
		unk_0xBBC4195AD74D153D(0, 72, 1);
		unk_0xBBC4195AD74D153D(0, 74, 1);
		unk_0xBBC4195AD74D153D(0, 75, 1);
		unk_0xBBC4195AD74D153D(0, 76, 1);
		unk_0xBBC4195AD74D153D(0, 73, 1);
		unk_0xBBC4195AD74D153D(0, 77, 1);
		unk_0xBBC4195AD74D153D(0, 78, 1);
		unk_0xBBC4195AD74D153D(0, 286, 1);
		unk_0xBBC4195AD74D153D(0, 287, 1);
		unk_0xBBC4195AD74D153D(0, 79, 1);
		unk_0xBBC4195AD74D153D(0, 80, 1);
		unk_0xBBC4195AD74D153D(0, 81, 1);
		unk_0xBBC4195AD74D153D(0, 82, 1);
		unk_0xBBC4195AD74D153D(0, 86, 1);
		unk_0xBBC4195AD74D153D(0, 59, 1);
		unk_0xBBC4195AD74D153D(0, 60, 1);
		unk_0xBBC4195AD74D153D(0, 61, 1);
		unk_0xBBC4195AD74D153D(0, 62, 1);
		unk_0xBBC4195AD74D153D(0, 63, 1);
		unk_0xBBC4195AD74D153D(0, 64, 1);
		unk_0xBBC4195AD74D153D(0, 87, 1);
		unk_0xBBC4195AD74D153D(0, 88, 1);
		unk_0xBBC4195AD74D153D(0, 89, 1);
		unk_0xBBC4195AD74D153D(0, 90, 1);
		unk_0xBBC4195AD74D153D(0, 107, 1);
		unk_0xBBC4195AD74D153D(0, 108, 1);
		unk_0xBBC4195AD74D153D(0, 109, 1);
		unk_0xBBC4195AD74D153D(0, 110, 1);
		unk_0xBBC4195AD74D153D(0, 111, 1);
		unk_0xBBC4195AD74D153D(0, 112, 1);
		unk_0xBBC4195AD74D153D(0, 113, 1);
		unk_0xBBC4195AD74D153D(0, 114, 1);
		unk_0xBBC4195AD74D153D(0, 91, 1);
		unk_0xBBC4195AD74D153D(0, 92, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
		unk_0xBBC4195AD74D153D(0, 102, 1);
		unk_0xBBC4195AD74D153D(0, 136, 1);
		unk_0xBBC4195AD74D153D(0, 137, 1);
		unk_0xBBC4195AD74D153D(0, 138, 1);
		unk_0xBBC4195AD74D153D(0, 139, 1);
		unk_0xBBC4195AD74D153D(0, 102, 1);
	}
}

int func_115()
{
	var uVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			uVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x1AAF0C23233C57AF(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x3187EF5798B5D209(uVar0, -1, 0) == unk_0xBC25C936A095B5BA())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116()
{
	var uVar0;
	
	func_123(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_122())
	{
		return 1;
	}
	if (Global_2459932)
	{
		return 1;
	}
	if (func_121())
	{
		return 1;
	}
	if (func_120(157))
	{
		if (!func_119())
		{
			return 1;
		}
	}
	if (func_120(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()
{
	switch (func_118())
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

int func_118()
{
	return Global_25277;
}

bool func_119()
{
	return Global_2447942.f_586;
}

int func_120(int iParam0)
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_121()
{
	return Global_2457699;
}

bool func_122()
{
	return Global_2447942.f_581;
}

void func_123(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_124(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_124(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 3))
	{
		if (func_126(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0xA95CF30C72EB526E(Var0.f_1);
			if (unk_0x724D816EA203A79E(iVar3))
			{
				if (unk_0x5237AF95232D78C5(iVar3, 0))
				{
					iVar4 = unk_0x9FE9D386222EEE47(iVar3, 0);
					if (unk_0x403C891106DCABAF(iVar4, Var0.f_2) && unk_0x32405B7614E36453())
					{
						if (func_125(iVar4, &bVar5))
						{
							unk_0xD5DC0505375F4D00(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x1E7A09C1710FB071(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_125(int iParam0, var uParam1)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(iParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_127()
{
	if (iLocal_156 == 1)
	{
		unk_0x4E0EC60D119222B1(7);
		unk_0x4E0EC60D119222B1(1);
		unk_0x4E0EC60D119222B1(3);
		unk_0x4E0EC60D119222B1(4);
		unk_0x4E0EC60D119222B1(6);
		unk_0x4E0EC60D119222B1(8);
		unk_0x4E0EC60D119222B1(9);
		unk_0x4E0EC60D119222B1(2);
	}
	else
	{
		unk_0xDE7B9CB38D019BF0();
	}
}

void func_128(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

void func_129()
{
	if (func_130())
	{
		unk_0xBD782151B2FC70FA();
		if (unk_0x77CC320936B2D99A(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16837 = 1;
			Global_14493.f_1 = 3;
			unk_0x21B00B24BEAA7264();
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
				if (unk_0xA7F138B5B1AB2CF6(uLocal_140))
				{
					if (func_141())
					{
						if (Global_4266191 == 0)
						{
							if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
							{
								func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xFA30DFD0084E92FE(Global_4267466, 2))
						{
							func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xA7F138B5B1AB2CF6(uLocal_140))
			{
				func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0x21B00B24BEAA7264();
	}
}

int func_130()
{
	if (Global_4456448.f_142987 == 1)
	{
		if (Global_70978)
		{
			return 0;
		}
	}
	if (Global_4456448.f_142988 == 1)
	{
		if (Global_70978)
		{
			return 0;
		}
	}
	if (unk_0xA76D65C63ED50F67() || unk_0x3E9993F328985CCB())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2364, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_131(var uParam0, char* sParam1)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_132(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xF9FBC2F3F73D94C9();
}

int func_133()
{
	if (Global_70978)
	{
		Global_14493 = 3;
	}
	else
	{
		Global_14493 = func_11();
	}
	if (Global_14493 > 3)
	{
		Global_14493 = 3;
	}
	return Global_105220.f_14022[Global_14493 /*20*/].f_7;
}

void func_134()
{
	if (Global_14493.f_1 > 3)
	{
		Global_14493.f_1 = 8;
	}
	Global_16836 = 0;
	iLocal_127 = 0;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		Local_67 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (Global_14435)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_110();
			func_78();
			unk_0x2423B13D9CFAD1DD();
		}
		func_131(uLocal_140, "OPEN_SHUTTER");
		func_127();
		func_101();
		iLocal_129 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_94(1, 1);
		func_98(1);
		func_55();
		func_99();
		func_53(0);
		iLocal_115 = 1;
	}
}

void func_135(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 15);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 15);
	}
}

bool func_136()
{
	return Global_1312831;
}

int func_137(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			uVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(uVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
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

void func_138()
{
}

int func_139(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && bParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_140()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xB3B744D2D9D757D1(unk_0xBC25C936A095B5BA()))
		{
			unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
			unk_0x91EC6AEB1932A6B8(fLocal_157);
			unk_0x569ABE7ED59B6777(fLocal_158);
			unk_0xA0A915A248C4216D(fLocal_159);
		}
		else
		{
			unk_0x91EC6AEB1932A6B8(fLocal_157);
			unk_0x569ABE7ED59B6777(fLocal_158);
			unk_0xA0A915A248C4216D(fLocal_159);
		}
	}
	unk_0x9BD568826C3C2591(fLocal_160);
	unk_0xE192619A62EDCCE6(fLocal_161);
	unk_0xF3EF9340AD350737(fLocal_162);
	unk_0x4AF1A2347337312B(fLocal_163);
	func_52();
}

int func_141()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}


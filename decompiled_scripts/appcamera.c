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
	unk_0x44E747EFAA4C6724();
	if (!func_132())
	{
		Global_2542276 = 99;
		Global_2542277 = 99;
		iLocal_56 = 99;
	}
	else
	{
		Global_2542276 = 0;
		Global_2542277 = 0;
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
	iLocal_111 = unk_0xCA225EEF4090469C();
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
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x0B105D3800E587FE(unk_0x507DA4994C3D8EBD()))
		{
			Global_16725 = 1;
		}
		if (unk_0x3B38C9E2CD147710())
		{
			Global_16725 = 1;
		}
		if (unk_0xCA8794CE207FC6D5(unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD()), 0))
		{
			Global_16725 = 1;
		}
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
		{
			Global_16725 = 1;
		}
		if (unk_0xA94EC3763C55FF12(unk_0x507DA4994C3D8EBD()))
		{
			Global_16725 = 1;
		}
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (iLocal_130 == 1)
			{
				Global_16725 = 1;
			}
			uLocal_148 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			if ((unk_0x26EA758C2A691D06(uLocal_148) == joaat("rhino") || unk_0x26EA758C2A691D06(iLocal_148) == joaat("cutter")) || unk_0x26EA758C2A691D06(iLocal_148) == joaat("submersible"))
			{
				Global_16725 = 1;
			}
			else if (unk_0xE634CB9EE7094537(iLocal_148, -1) == unk_0x507DA4994C3D8EBD())
			{
				if (unk_0xEE28BD1C8F477A55(iLocal_148) > 0f)
				{
					if (!Global_68067)
					{
						if (!func_128())
						{
							unk_0xDD4FB99FF9DED807(unk_0x507DA4994C3D8EBD(), iLocal_148, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_68067)
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x0364C7B6EFAC33A0(unk_0xAF65E5A58BE87D95(), 0);
		}
	}
	unk_0xCD27BF29FB9012E2(&Global_2263, 21);
	func_127(0);
	unk_0x3DBE2A7AF9E71C82(&Global_2263, 17);
	if (Global_14335 == 0)
	{
		func_126();
	}
	else
	{
		uLocal_139 = unk_0xAFBDE0BB5C885026("camera_gallery");
		uLocal_140 = unk_0xAFBDE0BB5C885026("instructional_buttons");
		while (!unk_0xE908465F9CDF4F1A(uLocal_139) || !unk_0xE908465F9CDF4F1A(uLocal_140))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x882182119EAE9ABF();
			unk_0x500F4CA776CEBD0A(0, 25, 1);
		}
		if (Global_68067)
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
		unk_0xF48C88BD1F0007E8(Global_14374, "DISPLAY_VIEW");
		unk_0x876C5D0739031E15(16);
		unk_0xA52FC2467E672B55();
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
		unk_0xCD27BF29FB9012E2(&Global_2265, 3);
	}
	func_121();
	unk_0x070F78D7490C1013(4);
	if (unk_0x25F8EC97D0710045())
	{
	}
	if (Global_1601761.f_68109)
	{
	}
	if (unk_0x0F10900B9F5120CA())
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
		unk_0x882182119EAE9ABF();
		unk_0x500F4CA776CEBD0A(0, 25, 1);
		unk_0x500F4CA776CEBD0A(0, 0, 1);
		if (!Global_97173.f_12272.f_81)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_2543551, 13))
			{
				if (!unk_0xBB51CB7A4D14453D())
				{
					if (!unk_0x61D8FEAF64881CDA(Global_2264, 28))
					{
						if (iLocal_127 && iLocal_130 == 0)
						{
							unk_0x3DBE2A7AF9E71C82(&Global_2543551, 13);
							Global_97173.f_12272.f_81 = 1;
							func_120("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xBB02FD0C8166DE6D())
		{
			if (Global_1601761.f_68108 == 0 && Global_1601761.f_68109 == 0)
			{
				unk_0x5FB5A2E05EF61B42(15, 0f, -0.0375f);
			}
			unk_0xD9E638F7F8DCAA60(7);
			unk_0x0DCB93E7DEB1CC3F();
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				unk_0xE131FC34DA8AD63F(unk_0x507DA4994C3D8EBD(), 200, 1);
			}
			unk_0x500F4CA776CEBD0A(0, 44, 1);
			unk_0x500F4CA776CEBD0A(0, 47, 1);
			unk_0x500F4CA776CEBD0A(0, 91, 1);
			unk_0x500F4CA776CEBD0A(0, 92, 1);
			if (iLocal_149 == 0)
			{
				unk_0x0756DDDAD8038AC9(0, Global_14366);
			}
			unk_0x0756DDDAD8038AC9(0, Global_14363);
			if (unk_0xC2C705ED6124A7C2() || unk_0xF468278E75CA2341())
			{
				iLocal_129 = 1;
				Global_14393.f_1 = 3;
				unk_0x1757405122DE8566(0);
			}
			if (unk_0x46C8195C64F14258())
			{
				Global_14393.f_1 = 3;
				unk_0x1757405122DE8566(0);
			}
			if (unk_0x61D8FEAF64881CDA(Global_2264, 3))
			{
				Global_14393.f_1 = 3;
				unk_0x1757405122DE8566(0);
			}
			if (unk_0xD95428C8AA1DBBF2())
			{
				if (func_109())
				{
					Global_14393.f_1 = 3;
					unk_0x1757405122DE8566(0);
				}
			}
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x537F3CB4EFB8C4C1(unk_0x507DA4994C3D8EBD(), 0))
				{
					Global_14393.f_1 = 3;
					unk_0x1757405122DE8566(0);
				}
				if ((unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xAD26E3EB5603F99C(unk_0xAF65E5A58BE87D95()))
				{
					if (func_108())
					{
					}
					else
					{
						Global_14393.f_1 = 3;
						unk_0x1757405122DE8566(0);
					}
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					if (Global_68067 == 1)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xC062498DF45BB995(unk_0x507DA4994C3D8EBD()) > 0.3f)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					func_107();
					iLocal_148 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
					if (unk_0xEE28BD1C8F477A55(iLocal_148) < 0f)
					{
						func_105(0);
					}
					if (iLocal_114 == 1)
					{
						if (iLocal_115 == 1)
						{
							if (!unk_0xB78322EEDE75AABE())
							{
								func_105(0);
							}
						}
						else if (!unk_0xB78322EEDE75AABE())
						{
							iLocal_115 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x882182119EAE9ABF();
						}
					}
				}
				else if (Global_68067 == 0)
				{
					if (unk_0x61D8FEAF64881CDA(Global_2263, 18))
					{
						func_104();
						if ((Global_14393 == 0 || Global_14393 == 1) || Global_14393 == 2)
						{
							if (!unk_0xCAE88F3FE0FF5690(unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
								{
								}
								else
								{
									Global_14393.f_1 = 3;
									unk_0x1757405122DE8566(0);
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
										unk_0xDB8E6614BEC7977E(0, 1);
										unk_0x5561EBF2C1FBF8B6();
										iLocal_149 = 0;
										func_100();
										if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
										{
											Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
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
										unk_0x5561EBF2C1FBF8B6();
										if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
										{
											Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
										}
										func_97();
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
										if (func_132())
										{
											if (Global_2542277 == 0)
											{
												if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
												{
													func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
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
												unk_0x1757405122DE8566(0);
												unk_0x5B438162CCD91A71(iLocal_111);
												iLocal_142 = 0;
												if (Global_16725 == 0)
												{
													func_99();
													Global_16725 = 1;
													unk_0xDB8E6614BEC7977E(0, 1);
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
										if (unk_0xBB51CB7A4D14453D())
										{
											func_87();
											iLocal_100 = 1;
										}
									}
									else if (!unk_0xBB51CB7A4D14453D())
									{
										func_87();
										iLocal_100 = 0;
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
										{
											func_87();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x61D8FEAF64881CDA(Global_2263, 28))
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
												if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
												{
													if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
													{
														func_123(uLocal_139, "CLOSE_SHUTTER");
														iLocal_134 = unk_0xF976C624234A4AA8();
														while (unk_0xF976C624234A4AA8() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
														{
															unk_0x0DCB93E7DEB1CC3F();
															func_103();
															func_75();
															unk_0x882182119EAE9ABF();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_132())
												{
													if (Global_2542277 == 0)
													{
														if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
														{
															func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
												{
													func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_103();
												unk_0x0DCB93E7DEB1CC3F();
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
											unk_0x3DBE2A7AF9E71C82(&Global_2263, 18);
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
					if (unk_0x2F4E1FF400251C08() || unk_0x5D64B4BDB6FCA4F0())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x9763C0E44A644CB2() || unk_0xA09FDB4B3C001CAB())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x80AD636AD4184F2B())
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
					iVar0 = unk_0x8AFF49260615C795();
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
					if (unk_0x58FC9C7DF8FE009B(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_88(0, 1);
					}
					if (unk_0x58FC9C7DF8FE009B(2, 201))
					{
						iLocal_153 = 1;
					}
					if (iLocal_153 == 1)
					{
						if (unk_0xBAAAD6B2D22A26ED(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							iLocal_153 = 0;
							unk_0x04F5CF636B241140("Gallery");
							unk_0xC470E7BE34B3B971();
						}
					}
				}
				else if (iLocal_154 == 7)
				{
					if (unk_0xA09FDB4B3C001CAB())
					{
						if (unk_0x58FC9C7DF8FE009B(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							iLocal_110 = 0;
						}
					}
					else if (unk_0x58FC9C7DF8FE009B(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_88(0, 1);
						iLocal_110 = 0;
					}
					if (!unk_0xA09FDB4B3C001CAB())
					{
						if (unk_0x58FC9C7DF8FE009B(2, Global_14365))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							if (unk_0x61D8FEAF64881CDA(Global_2264, 28))
							{
								iLocal_110 = 0;
							}
							else
							{
								iLocal_110 = 2;
							}
							iLocal_106 = unk_0xF976C624234A4AA8();
							unk_0x120CADF76A6DEED1(1);
						}
					}
				}
				else if (unk_0x58FC9C7DF8FE009B(2, 201))
				{
					iLocal_152 = 0;
					iLocal_154 = 0;
					func_88(0, 1);
				}
			}
		}
		iLocal_107 = unk_0xF976C624234A4AA8();
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
			unk_0x86FF04BBB2EC839F(&uLocal_139);
			unk_0x86FF04BBB2EC839F(&uLocal_140);
			unk_0x1757405122DE8566(0);
			if (Global_14553 == 1)
			{
				unk_0x3DBE2A7AF9E71C82(&Global_2263, 17);
			}
			else
			{
				unk_0xCD27BF29FB9012E2(&Global_2263, 17);
			}
			unk_0xDB8E6614BEC7977E(0, 1);
			unk_0x0364C7B6EFAC33A0(unk_0xAF65E5A58BE87D95(), 1);
			unk_0xCD27BF29FB9012E2(&Global_2265, 3);
			unk_0xCD27BF29FB9012E2(&Global_2543551, 3);
			unk_0x7DD2AC90262DCE82(15);
			Global_16729 = 1;
			unk_0x5B438162CCD91A71(iLocal_111);
			unk_0x71EA2F1D0184D8C7(iLocal_111);
			unk_0x5561EBF2C1FBF8B6();
			func_90();
			unk_0xAA9D747402357C45(0);
			unk_0x73754E8E47EF8F9E(1f);
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				unk_0xB999892D829E5A79(unk_0x507DA4994C3D8EBD(), "Mood_Normal_1", 0);
				unk_0xF0092A6A58666782(unk_0x507DA4994C3D8EBD());
			}
			if (Global_2542277 > 0 && Global_2542277 < 13)
			{
				unk_0xB6A951E6C2922F87(sLocal_32[Global_2542277]);
			}
			unk_0xCD27BF29FB9012E2(&Global_2263, 18);
			func_88(0, 1);
			if (func_130(0, 1, iLocal_63))
			{
				iLocal_63 = 0;
			}
			unk_0x883793591E631A3B();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0xC69D5A5AF2C9F93D(1);
		}
		else if (Global_14393.f_1 > 3)
		{
			unk_0xC69D5A5AF2C9F93D(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xCF4F7FBD80ABE315();
	iVar1 = unk_0xD686D61A57BCB6E7(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2543750 || iVar2)
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
	iLocal_105 = unk_0xB6EB2C2CB96040D7(0);
	switch (iLocal_105)
	{
		case 0:
			iLocal_102 = 0;
			iLocal_108 = unk_0x8AB089A8C6D05C26();
			iLocal_109 = unk_0x34902F6101E02583();
			if (iLocal_103 == 1)
			{
				if (iLocal_126 == 0)
				{
					if (unk_0xE908465F9CDF4F1A(uLocal_139))
					{
						if (func_132())
						{
							if (Global_2542277 == 0)
							{
								if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
								{
									func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
							{
								func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xE908465F9CDF4F1A(uLocal_139))
				{
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				}
				iLocal_103 = 0;
			}
			unk_0x5561EBF2C1FBF8B6();
			break;
		
		case 1:
			if (!unk_0xEFB40E8240A711CE())
			{
				unk_0x18BCFA6B2DA7EB4E("CELL_SPINNER2");
				unk_0x395CE507EF66CF4B(1);
			}
			break;
		
		case 2:
			if (unk_0x61D8FEAF64881CDA(Global_2264, 28))
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
			unk_0x5561EBF2C1FBF8B6();
			break;
	}
}

void func_5()
{
	if (func_93(2, Global_14362, 0))
	{
		func_1(0);
		if (unk_0x61D8FEAF64881CDA(Global_2264, 28))
		{
			unk_0x1757405122DE8566(0);
			unk_0x5AE11BC36633DE4E(0);
			func_100();
			iLocal_126 = 0;
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			}
			func_99();
			iLocal_135 = 1;
		}
		else if (func_9())
		{
			if (unk_0x61D8FEAF64881CDA(Global_2264, 14))
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
	if (unk_0x61D8FEAF64881CDA(Global_2263, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x0DCB93E7DEB1CC3F();
			unk_0x882182119EAE9ABF();
			func_75();
			func_107();
			func_103();
		}
		unk_0x1757405122DE8566(0);
		func_100();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_126 = 0;
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		}
		func_98();
		func_99();
	}
	if (func_93(2, Global_14366, 0))
	{
		func_1(0);
		if (func_92() || unk_0x61D8FEAF64881CDA(Global_2264, 28))
		{
		}
		else
		{
			unk_0x1757405122DE8566(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_135 = 1;
			func_100();
			iLocal_126 = 0;
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			}
			func_99();
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
	{
		if (func_93(2, Global_14365, 0))
		{
			func_1(0);
			unk_0x1757405122DE8566(0);
			unk_0xF228D122DDE60FF6(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x882182119EAE9ABF();
			unk_0x0DCB93E7DEB1CC3F();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x882182119EAE9ABF();
			unk_0x0DCB93E7DEB1CC3F();
			unk_0xAAFD8D273DA4C304();
			unk_0xD1C4DEF84114A0EA();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 0;
			func_88(0, 1);
			Global_16725 = 1;
			unk_0xDB8E6614BEC7977E(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			unk_0x3DBE2A7AF9E71C82(&Global_2263, 9);
			iLocal_141 = 0;
			func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Accept", &Global_14382, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0xD3370B46DD5E27B0(5);
	}
}

void func_8()
{
	iLocal_149 = 1;
	Global_16730 = 1;
	unk_0xDB8E6614BEC7977E(0, 1);
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
	
	if (unk_0x30E5EC01C9ACF9BC(2))
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
		fLocal_72 = unk_0xA38424C4D1A35716();
		fLocal_73 = unk_0xEC3EBDC776EBC105();
		if (iLocal_132 == 0)
		{
			if (unk_0xBD883E84B4B6E14E(2, iVar0) && !unk_0xBD883E84B4B6E14E(2, iVar1))
			{
				iLocal_132 = 1;
				func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(2, 179, 1), "CELL_287");
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 176, 1), "CELL_280");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_58();
				unk_0xF48C88BD1F0007E8(uLocal_140, "SET_MAX_WIDTH");
				unk_0xA8F7908868900538(fLocal_76);
				unk_0xA52FC2467E672B55();
				func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xBD883E84B4B6E14E(2, iVar0) || unk_0xBD883E84B4B6E14E(2, iVar1))
		{
			iLocal_132 = 0;
			func_98();
		}
		if (iLocal_133 == 0)
		{
			if (unk_0xBD883E84B4B6E14E(2, iVar1) && !unk_0xBD883E84B4B6E14E(2, iVar0))
			{
				iLocal_133 = 1;
				func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(2, 179, 1), "CELL_287");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 176, 1), "CELL_280");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(0, 177, 1), "CELL_281");
				}
				func_57();
				unk_0xF48C88BD1F0007E8(uLocal_140, "SET_MAX_WIDTH");
				unk_0xA8F7908868900538(fLocal_76);
				unk_0xA52FC2467E672B55();
				func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xBD883E84B4B6E14E(2, iVar1) || unk_0xBD883E84B4B6E14E(2, iVar0))
		{
			iLocal_133 = 0;
			func_98();
		}
	}
	else
	{
		unk_0xB7B9319D77D69AF2(0, 2, 1);
		unk_0xB7B9319D77D69AF2(0, 1, 1);
	}
	if (unk_0x00585B724989D978(2))
	{
		func_98();
	}
	func_107();
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xE131FC34DA8AD63F(unk_0x507DA4994C3D8EBD(), 200, 1);
	}
	if (unk_0x58FC9C7DF8FE009B(2, 183))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
			{
				if (unk_0x61D8FEAF64881CDA(Global_2543551, 2))
				{
					unk_0xCD27BF29FB9012E2(&Global_2543551, 2);
					if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
					{
						func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x3DBE2A7AF9E71C82(&Global_2543551, 2);
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
			unk_0xF48C88BD1F0007E8(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x5D559A5DDC88A4EF(0);
			func_56("CELL_FOCUS");
			unk_0x5D559A5DDC88A4EF(1);
			unk_0xA52FC2467E672B55();
		}
		if (!func_55(14))
		{
			if (unk_0x61D8FEAF64881CDA(Global_2543551, 10))
			{
				if ((Global_68067 == 0 && unk_0x25531002BCF0D968(joaat("pi_menu")) > 0) && func_54())
				{
					unk_0xF48C88BD1F0007E8(uLocal_139, "SET_FOCUS_LOCK");
					unk_0x5D559A5DDC88A4EF(1);
					unk_0x44F4D219F8513945("CELL_ACTTL");
					unk_0xD1F22DD7F7363AB6(unk_0xB0EEA0615087D74B(&Global_2544239));
					unk_0x113A6F657EE871A3();
					unk_0x5D559A5DDC88A4EF(0);
					unk_0xA52FC2467E672B55();
					unk_0xCD27BF29FB9012E2(&Global_2543551, 10);
				}
			}
		}
		else if (unk_0x61D8FEAF64881CDA(Global_2543551, 10))
		{
			unk_0xCD27BF29FB9012E2(&Global_2543551, 10);
		}
		iLocal_65 = unk_0xF976C624234A4AA8();
		if ((iLocal_65 - iLocal_64) > 1500)
		{
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				Local_69 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
				if (unk_0x8FE221761D524CFE(Local_69, Local_66, 1) > 5f)
				{
					Global_14393.f_1 = 3;
					unk_0x1757405122DE8566(0);
				}
				iLocal_64 = unk_0xF976C624234A4AA8();
			}
		}
	}
	else if (iLocal_131)
	{
		if (!unk_0xBD883E84B4B6E14E(0, 182))
		{
			unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
			iLocal_131 = 0;
			unk_0xF48C88BD1F0007E8(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x5D559A5DDC88A4EF(0);
			func_56("CELL_FOCUS");
			unk_0x5D559A5DDC88A4EF(1);
			unk_0xA52FC2467E672B55();
		}
	}
	else if (unk_0xBD883E84B4B6E14E(0, 182))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
		iLocal_131 = 1;
		if (!func_55(14))
		{
			unk_0xF48C88BD1F0007E8(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x5D559A5DDC88A4EF(1);
			func_56("CELL_FOCUS");
			unk_0x5D559A5DDC88A4EF(1);
			unk_0xA52FC2467E672B55();
		}
	}
	if (func_132())
	{
		if (unk_0x58FC9C7DF8FE009B(2, 186))
		{
			if (iLocal_130)
			{
				iLocal_56++;
				if (iLocal_56 > 0 && iLocal_56 < 7)
				{
					if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
					{
						unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
						unk_0xB999892D829E5A79(unk_0x507DA4994C3D8EBD(), "Mood_Normal_1", 0);
						unk_0xF0092A6A58666782(unk_0x507DA4994C3D8EBD());
						if (Global_14393 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x7974CEFA1BFEA57F(unk_0x507DA4994C3D8EBD(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x7974CEFA1BFEA57F(unk_0x507DA4994C3D8EBD(), 1);
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
											unk_0xB999892D829E5A79(unk_0x507DA4994C3D8EBD(), sLocal_47[iLocal_56], 0);
										}
									}
								}
								else
								{
									unk_0xB999892D829E5A79(unk_0x507DA4994C3D8EBD(), sLocal_47[iLocal_56], 0);
								}
							}
							else
							{
								unk_0xB999892D829E5A79(unk_0x507DA4994C3D8EBD(), sLocal_47[iLocal_56], 0);
							}
						}
						else
						{
							unk_0xB999892D829E5A79(unk_0x507DA4994C3D8EBD(), sLocal_47[iLocal_56], 0);
						}
					}
				}
				if (iLocal_56 == 7 || iLocal_56 > 7)
				{
					iLocal_56 = 0;
				}
				if (iLocal_56 == 0)
				{
					if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
					{
						unk_0xB999892D829E5A79(unk_0x507DA4994C3D8EBD(), "Mood_Normal_1", 0);
						unk_0xF0092A6A58666782(unk_0x507DA4994C3D8EBD());
						unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
					}
				}
			}
		}
		if (unk_0x58FC9C7DF8FE009B(2, 185))
		{
			if (iLocal_130)
			{
				if (bLocal_61 == 1)
				{
					unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
					if (iLocal_60 == 0)
					{
						iLocal_60 = 1;
						if (unk_0xA858564DC37EED5E(sLocal_18[Global_2542276], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xAA9D747402357C45(1);
						}
					}
					else
					{
						iLocal_60 = 0;
						unk_0xAA9D747402357C45(0);
					}
				}
			}
			else if (bLocal_62 == 1)
			{
				if (iLocal_59 == 0)
				{
					iLocal_59 = 1;
				}
				else
				{
					iLocal_59 = 0;
				}
			}
		}
	}
	if (iLocal_58 == 1)
	{
		if (unk_0x58FC9C7DF8FE009B(0, 172))
		{
			if (func_132())
			{
				Global_2542277++;
				unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
			}
			if (Global_2542277 == 13)
			{
				func_95(0);
				unk_0x73754E8E47EF8F9E(1f);
				unk_0xB6A951E6C2922F87(sLocal_32[(Global_2542277 - 1)]);
				Global_2542277 = 0;
				func_53();
				if (iLocal_46 == 1)
				{
					unk_0xCD27BF29FB9012E2(&Global_2543551, 2);
					iLocal_46 = 0;
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2542277 > 0 && Global_2542277 < 13)
			{
				iLocal_58 = 0;
				iLocal_57 = 0;
				unk_0x685EB3667D702B92(sLocal_32[Global_2542277], 0);
			}
		}
	}
	if (Global_2542277 > 0)
	{
		if (iLocal_58 == 0)
		{
			if (unk_0x31920D7070131373(sLocal_32[Global_2542277]))
			{
				iLocal_57 = 1;
				iLocal_58 = 1;
				if (!unk_0x2D37C1B5BFC1B3D1())
				{
					func_95(1);
				}
				if (iLocal_46 == 0)
				{
					if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
					{
						iLocal_46 = 1;
					}
				}
				unk_0x3DBE2A7AF9E71C82(&Global_2543551, 2);
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x73754E8E47EF8F9E(0.25f);
				unk_0x769682944C6C19BF(sLocal_32[Global_2542277], 0);
			}
		}
		if (iLocal_57 == 1)
		{
			if (Global_2542277 == 1 || Global_2542277 == 3)
			{
			}
			if (Global_2542277 == 2 || Global_2542277 == 4)
			{
			}
		}
	}
	if (unk_0x58FC9C7DF8FE009B(0, 173))
	{
		if (func_132())
		{
			func_90();
			Global_2542276++;
			unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
		}
		if (Global_2542276 == 13)
		{
			Global_2542276 = 0;
		}
		if (Global_2542276 == 0)
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
	if (unk_0x02AC213158CF29AE(0, 184))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
			{
				Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
				unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_123(uLocal_139, "CLOSE_SHUTTER");
				iLocal_134 = unk_0xF976C624234A4AA8();
				while (unk_0xF976C624234A4AA8() < (iLocal_134 + iLocal_138) && Global_14393.f_1 > 3)
				{
					unk_0x0DCB93E7DEB1CC3F();
					func_103();
					func_75();
					unk_0x882182119EAE9ABF();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_130 == 0)
				{
					iLocal_59 = 0;
					unk_0x5B438162CCD91A71(iLocal_111);
					iLocal_130 = 1;
					func_51(1);
					func_50();
					unk_0x3DBE2A7AF9E71C82(&Global_2265, 3);
					iLocal_64 = unk_0xF976C624234A4AA8();
				}
				else
				{
					iLocal_132 = 0;
					iLocal_133 = 0;
					func_51(0);
					iLocal_130 = 0;
					unk_0xCD27BF29FB9012E2(&Global_2265, 3);
				}
				iLocal_134 = unk_0xF976C624234A4AA8();
				while (unk_0xF976C624234A4AA8() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
				{
					unk_0x0DCB93E7DEB1CC3F();
					func_103();
					func_75();
					unk_0x882182119EAE9ABF();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_123(uLocal_139, "OPEN_SHUTTER");
				if (func_132())
				{
					if (Global_2542277 == 0)
					{
						if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
						{
							func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
				{
					func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_103();
				unk_0x0DCB93E7DEB1CC3F();
				if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
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
			if (unk_0x58FC9C7DF8FE009B(0, 40) || unk_0x58FC9C7DF8FE009B(0, 41))
			{
				fLocal_113 = unk_0x673D1AF84EDA28A5();
				if (fLocal_113 > 1f && fLocal_113 < 4.5f)
				{
					if (unk_0x75354D2F4439D94B(iLocal_111))
					{
						unk_0x84795EA8F54230A1(iLocal_111, "Camera_Zoom", &Global_14382, 1);
					}
				}
				else
				{
					unk_0x5B438162CCD91A71(iLocal_111);
				}
				iLocal_112 = 1;
			}
		}
		else if (unk_0xBD883E84B4B6E14E(0, 40) || unk_0xBD883E84B4B6E14E(0, 41))
		{
			fLocal_113 = unk_0x673D1AF84EDA28A5();
			if (fLocal_113 > 1f && fLocal_113 < 4.5f)
			{
				if (unk_0x75354D2F4439D94B(iLocal_111))
				{
					unk_0x84795EA8F54230A1(iLocal_111, "Camera_Zoom", &Global_14382, 1);
				}
			}
			else
			{
				unk_0x5B438162CCD91A71(iLocal_111);
			}
		}
		else
		{
			unk_0x5B438162CCD91A71(iLocal_111);
		}
	}
	if (func_93(2, Global_14362, 0))
	{
		fLocal_74 = unk_0xA38424C4D1A35716();
		fLocal_75 = unk_0xEC3EBDC776EBC105();
		unk_0xF228D122DDE60FF6(0, 0);
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 21);
		unk_0x5B438162CCD91A71(iLocal_111);
		iLocal_126 = 1;
		func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_139, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x84795EA8F54230A1(-1, "Camera_Shoot", &Global_14382, 1);
		func_123(uLocal_139, "CLOSE_SHUTTER");
		Local_83 = { -90.3f, 0f, 90f };
		unk_0x21D2105CA1483300(Local_83, 0);
		if (!func_132())
		{
			func_90();
		}
		Global_16728 = 1;
		unk_0xDB8E6614BEC7977E(0, 1);
		while (Global_16727 < 6 && Global_14393.f_1 > 3)
		{
			unk_0x0DCB93E7DEB1CC3F();
			func_103();
			func_75();
			func_107();
			unk_0x882182119EAE9ABF();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x0ED2CDEF8B45664D(0, 0);
		if (Global_14335)
		{
			func_1(1);
		}
		iLocal_134 = unk_0xF976C624234A4AA8();
		while (unk_0xF976C624234A4AA8() < (iLocal_134 + iLocal_137) && Global_14393.f_1 > 3)
		{
			unk_0x0DCB93E7DEB1CC3F();
			func_103();
			func_75();
			unk_0x882182119EAE9ABF();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_123(uLocal_139, "OPEN_SHUTTER");
		unk_0xCD27BF29FB9012E2(&Global_2263, 21);
		func_98();
		if (Global_14393.f_1 > 3)
		{
			if (Global_68067)
			{
				func_20(1073, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x2849EC95E9D69392(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x2849EC95E9D69392(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x2849EC95E9D69392(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_95(0);
		}
		func_103();
	}
	if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
	{
		if (func_93(2, Global_14365, 0))
		{
			unk_0xF228D122DDE60FF6(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x882182119EAE9ABF();
			unk_0x0DCB93E7DEB1CC3F();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x882182119EAE9ABF();
			unk_0x0DCB93E7DEB1CC3F();
			unk_0xAAFD8D273DA4C304();
			unk_0xD1C4DEF84114A0EA();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 1;
			Global_16725 = 1;
			unk_0xDB8E6614BEC7977E(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			unk_0x3DBE2A7AF9E71C82(&Global_2263, 9);
			unk_0x1757405122DE8566(0);
			iLocal_141 = 0;
			func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_15(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_14(unk_0x507DA4994C3D8EBD());
			if (func_13(iVar0) && (!func_55(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
		Global_2434883[iVar0] = iParam0;
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
		if (Global_2434883[iVar1] == 0)
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
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	if (!unk_0x61D8FEAF64881CDA(Global_2264, 28))
	{
		if (unk_0x25F8EC97D0710045() == 0)
		{
			if (unk_0x2F4E1FF400251C08())
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
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 774:
			Global_1333776[func_25(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333782[func_25(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333788[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1333794[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333752[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333758[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333764[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1333770[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333728[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333734[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333740[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1333746[func_25(uParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333800[func_25(uParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333806[func_25(uParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333812[func_25(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_1333818[func_25(uParam2)] = iParam1;
			break;
		
		case 1289:
			Global_1333824[func_25(uParam2)] = iParam1;
			break;
		
		case 626:
			Global_1333830[func_25(uParam2)] = iParam1;
			break;
		
		case 1264:
			Global_1333836[func_25(uParam2)] = iParam1;
			break;
		
		case 1861:
			Global_2474981[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2250:
			Global_2474981[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333842[func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333848[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333854[func_25(uParam2)] = iParam1;
			break;
		
		case 1222:
			Global_1333860[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1333709)
	{
		switch (iParam0)
		{
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
			case 744:
			case 745:
			case 746:
			case 747:
			case 1289:
			case 626:
			case 1264:
			case 751:
			case 752:
			case 753:
			case 1222:
			case 1861:
			case 2250:
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
	uVar0 = Global_2454190[iParam0 /*6*/][func_25(uParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
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
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
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
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(0, 177, 1), "CELL_281");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 176, 1), "CELL_280");
		if (iLocal_130)
		{
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) || unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
				{
					if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_68067 == 0 && unk_0x25531002BCF0D968(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xB588E50C18B98D3F(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 7f, unk_0xB588E50C18B98D3F(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) || unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
			{
				if (!unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xB588E50C18B98D3F(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xB588E50C18B98D3F(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(0, 182, 1), "CELL_FOCUS");
						}
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
			}
			else
			{
				if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xB588E50C18B98D3F(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xB588E50C18B98D3F(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(0, 182, 1), "CELL_FOCUS");
						}
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
			}
		}
		unk_0xF48C88BD1F0007E8(uLocal_140, "SET_MAX_WIDTH");
		unk_0xA8F7908868900538(fLocal_76);
		unk_0xA52FC2467E672B55();
		func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xB588E50C18B98D3F(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_44(Global_2475484, Global_2475485))
		{
			if (iParam0 == 0 || !func_30(Global_2475484, Global_2475485, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x507DA4994C3D8EBD(), iParam0, iParam1, bParam2, bParam3, bParam4);
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
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x26EA758C2A691D06(iParam0) == joaat("mp_f_freemode_01"))
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
		if (unk_0xD95428C8AA1DBBF2())
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
	if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	return unk_0xFEAB4D7F75916F7C(iParam0, 1);
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	return unk_0x7974CEFA1BFEA57F(iParam0, 0);
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	return unk_0x7974CEFA1BFEA57F(iParam0, 0);
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
		unk_0x3DBE2A7AF9E71C82(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xCD27BF29FB9012E2(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
		unk_0x3DBE2A7AF9E71C82(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xCD27BF29FB9012E2(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xB588E50C18B98D3F(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xB588E50C18B98D3F(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(0, 183, 1), "CELL_GRID");
	func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_61)
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 9f, unk_0xB588E50C18B98D3F(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_55(14))
	{
		if ((Global_68067 == 0 && unk_0x25531002BCF0D968(joaat("pi_menu")) > 0) && func_54())
		{
			unk_0xF48C88BD1F0007E8(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x5D559A5DDC88A4EF(1);
			unk_0x44F4D219F8513945("CELL_ACTTL");
			unk_0xD1F22DD7F7363AB6(unk_0xB0EEA0615087D74B(&Global_2544239));
			unk_0x113A6F657EE871A3();
			unk_0x5D559A5DDC88A4EF(0);
			unk_0xA52FC2467E672B55();
		}
	}
}

void func_48(float fParam0)
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0xB588E50C18B98D3F(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 177, 1), "CELL_281");
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(2, 179, 1), "CELL_287");
		if (iLocal_130)
		{
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) || unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
				{
					if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_68067 == 0 && unk_0x25531002BCF0D968(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(uLocal_140, "SET_DATA_SLOT", 8f, unk_0xB588E50C18B98D3F(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 7f, unk_0xB588E50C18B98D3F(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) || unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
			{
				if (!unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xB588E50C18B98D3F(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 182, 1), "CELL_FOCUS");
						}
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
			}
			else if (!unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
			{
				if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xB588E50C18B98D3F(2, 183, 1), "CELL_GRID");
				func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
				func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xB588E50C18B98D3F(0, 39, 1), "CELL_284");
				if (func_132())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_62)
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(0, 182, 1), "CELL_FOCUS");
					}
				}
				else
				{
					if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xA493E672277131FE(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(4f);
						func_45(5f);
					}
				}
			}
		}
		unk_0xF48C88BD1F0007E8(uLocal_140, "SET_MAX_WIDTH");
		unk_0xA8F7908868900538(fLocal_76);
		unk_0xA52FC2467E672B55();
		func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_50()
{
	if (iLocal_130)
	{
		unk_0x77CB1AAAF31275BE(fLocal_72, 1065353216);
		unk_0xBE5E0E5A454F4D6A(fLocal_73);
	}
}

void func_51(int iParam0)
{
	if (Global_1601761.f_68108 == 1)
	{
	}
	else if (Global_1601761.f_68109 == 1)
	{
	}
	else
	{
		unk_0x9AA406ACF3A1D2B9(iParam0);
	}
}

void func_52()
{
	if (iLocal_60 == 1)
	{
		if (unk_0xA858564DC37EED5E(sLocal_18[Global_2542276], "phone_cam12DUMMY"))
		{
			unk_0xAA9D747402357C45(0);
		}
		else
		{
			unk_0xAA9D747402357C45(1);
		}
	}
}

void func_53()
{
	func_124(uLocal_139, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_132())
	{
		unk_0xC268078730F02686("phone_cam");
	}
}

int func_54()
{
	if (func_55(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if ((unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/] || unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/]) || unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
	return Global_34909 == iParam0;
}

void func_56(char* sParam0)
{
	unk_0x44F4D219F8513945(sParam0);
	unk_0x113A6F657EE871A3();
}

void func_57()
{
	if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x30E5EC01C9ACF9BC(2))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(0, 30, 1), "CELL_RT_RSTICK");
		func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA493E672277131FE(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(0, 1, 1), "CELL_RT_RSTICK");
		func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA493E672277131FE(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_58()
{
	if (unk_0x30E5EC01C9ACF9BC(2) || unk_0xA09FDB4B3C001CAB())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, unk_0xB588E50C18B98D3F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_140, "SET_DATA_SLOT", 4f, unk_0xA493E672277131FE(0, 1, 1), "CELL_LT_RSTICK");
	if (func_55(14))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xB588E50C18B98D3F(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 5f, unk_0xB588E50C18B98D3F(0, 39, 1), "CELL_LT_LSTICKZ");
		func_59(uLocal_140, "SET_DATA_SLOT", 6f, unk_0xB588E50C18B98D3F(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_59(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x8FA72E132AAFA62F(uParam3))
	{
		func_60(uParam3);
	}
	if (!unk_0x8FA72E132AAFA62F(sParam4))
	{
		func_56(sParam4);
	}
	unk_0xA52FC2467E672B55();
}

void func_60(var uParam0)
{
	unk_0x3F8884039D21AA69(uParam0);
}

void func_61()
{
	if (Global_68067)
	{
		switch (Global_16809)
		{
			case 0:
				if (unk_0x30E5EC01C9ACF9BC(2))
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
				if (!unk_0xBB51CB7A4D14453D())
				{
					if (unk_0x30E5EC01C9ACF9BC(2))
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
				if (unk_0x30E5EC01C9ACF9BC(2))
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
				if (!unk_0xBB51CB7A4D14453D())
				{
					if (unk_0x30E5EC01C9ACF9BC(2))
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
	
	if (unk_0x30E5EC01C9ACF9BC(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0xBD883E84B4B6E14E(2, iVar10) && !unk_0xBD883E84B4B6E14E(2, iVar9))
	{
		unk_0x500F4CA776CEBD0A(0, 2, 1);
		unk_0x500F4CA776CEBD0A(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 2)) * 127;
		if (unk_0x30E5EC01C9ACF9BC(2))
		{
			if (unk_0xEC8415598F0CAF4B(iVar0) > 28 || unk_0xEC8415598F0CAF4B(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			}
		}
		else if (unk_0xEC8415598F0CAF4B(iVar2) > 28 || unk_0xEC8415598F0CAF4B(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
		}
		if (unk_0x30E5EC01C9ACF9BC(2))
		{
			fVar7 = unk_0xDA6E836529BF74AC(0, 290);
			fVar8 = unk_0xDA6E836529BF74AC(0, 291);
			if (unk_0xC91404D4E0A94981())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xEC8415598F0CAF4B(iVar0) > 28 || unk_0xEC8415598F0CAF4B(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_162);
		}
		func_65(fVar5);
		func_64(fVar6);
		func_63(fVar4);
	}
	else if (!unk_0xBD883E84B4B6E14E(2, iVar9))
	{
		unk_0xB7B9319D77D69AF2(0, 2, 1);
		unk_0xB7B9319D77D69AF2(0, 1, 1);
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
	unk_0x013C1497FF29F2CC(fLocal_159);
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
	unk_0x11C550F0F4303BA7(fLocal_160);
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
	unk_0x771E4741BA8ABCA6(fLocal_161);
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
	
	if (unk_0x30E5EC01C9ACF9BC(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0xBD883E84B4B6E14E(2, iVar10))
		{
			if (unk_0x58FC9C7DF8FE009B(2, 178))
			{
				unk_0x0409A00BE617B6F2(0.5f);
				unk_0xF8545DBAF6FC3DC8(0.85f);
				unk_0x28881257C25DDCA7(0.5f);
				unk_0xACA62DD3FAB78014(-0.25f);
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
	if (unk_0xBD883E84B4B6E14E(2, iVar10) && !unk_0xBD883E84B4B6E14E(2, iVar11))
	{
		if (unk_0x58FC9C7DF8FE009B(2, 178))
		{
			unk_0x0409A00BE617B6F2(0.5f);
			unk_0xF8545DBAF6FC3DC8(0.85f);
			unk_0x28881257C25DDCA7(0.5f);
			unk_0xACA62DD3FAB78014(-0.25f);
			fLocal_155 = 0.5f;
			fLocal_156 = 0.85f;
			fLocal_157 = 0.5f;
			fLocal_158 = -0.25f;
		}
		unk_0x500F4CA776CEBD0A(0, 2, 1);
		unk_0x500F4CA776CEBD0A(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 2)) * 127;
		if (unk_0x30E5EC01C9ACF9BC(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 39)) * 127;
			fVar8 = unk_0xDA6E836529BF74AC(0, 290);
			fVar9 = unk_0xDA6E836529BF74AC(0, 291);
			if (unk_0xC91404D4E0A94981())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xEC8415598F0CAF4B(iVar2) > 15 || unk_0xEC8415598F0CAF4B(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0xEC8415598F0CAF4B(iVar0) > 28 || unk_0xEC8415598F0CAF4B(iVar1) > 28)
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
	else if (!unk_0x25F05AE8FAE80806(2, iVar11))
	{
		unk_0xB7B9319D77D69AF2(0, 2, 1);
		unk_0xB7B9319D77D69AF2(0, 1, 1);
	}
	if (!unk_0x25F05AE8FAE80806(2, iVar10) && !unk_0x25F05AE8FAE80806(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xDA6E836529BF74AC(0, 293)) * 127;
		if (unk_0xEC8415598F0CAF4B(iVar2) > 28 || unk_0xEC8415598F0CAF4B(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0xEC8415598F0CAF4B(iVar0) > 28 || unk_0xEC8415598F0CAF4B(iVar1) > 28)
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
	unk_0x28881257C25DDCA7(fLocal_157);
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
	unk_0xACA62DD3FAB78014(fLocal_158);
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
	unk_0xF8545DBAF6FC3DC8(fLocal_156);
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
	unk_0x0409A00BE617B6F2(fLocal_155);
}

void func_71()
{
	if (Global_68327 || Global_68328)
	{
		return;
	}
	if (iLocal_123 == 0)
	{
		if (!iLocal_149)
		{
			if (Global_1601761.f_68108 == 0 && Global_1601761.f_68109 == 0)
			{
				unk_0x4A383EC377D451D0(uLocal_140, 255, 255, 255, 0, 0);
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
	unk_0x55B01783B33A78F6(sParam2);
	unk_0x268B3979E044050D(fParam0, fParam1, iParam3);
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x8F290D3FB4225BC6(0.4f, 0.4f);
	unk_0x74F2ECA031310618(0, 0, 0, 0, 0);
	unk_0xC7BC69AA9DAF5D69(1, 0, 0, 0, 205);
	unk_0x490F3793DD1437E4(1);
	unk_0x8DD7836CF491E098(0);
	unk_0xAF24EA89F4EF8594(iParam0, iParam1, iParam2, iParam3);
}

void func_74()
{
	unk_0x77CB1AAAF31275BE(fLocal_74, 1065353216);
	unk_0xBE5E0E5A454F4D6A(fLocal_75);
}

void func_75()
{
	unk_0x500F4CA776CEBD0A(0, 25, 1);
	unk_0x500F4CA776CEBD0A(0, 44, 1);
	unk_0x500F4CA776CEBD0A(0, 3, 1);
	unk_0x500F4CA776CEBD0A(0, 4, 1);
	unk_0x500F4CA776CEBD0A(0, 5, 1);
	unk_0x500F4CA776CEBD0A(0, 6, 1);
	unk_0x500F4CA776CEBD0A(0, 1, 1);
	unk_0x500F4CA776CEBD0A(0, 2, 1);
	unk_0x500F4CA776CEBD0A(0, 39, 1);
	unk_0x500F4CA776CEBD0A(0, 47, 1);
	unk_0x500F4CA776CEBD0A(0, 56, 1);
}

void func_76()
{
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (Global_14335)
	{
		if (func_79())
		{
			unk_0x483F49444BC10CD1(&Local_92);
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
		if (unk_0x61D8FEAF64881CDA(Global_2265, 4))
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
			if (unk_0x61D8FEAF64881CDA(Global_2265, 4))
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
		unk_0x22FDA9F8AE4DE11C(Local_80);
		if ((iLocal_120 == 0 && iLocal_121 == 0) && iLocal_122 == 0)
		{
			iLocal_123 = 0;
			Local_83 = { -90.3f, 0f, 90f };
			unk_0x21D2105CA1483300(Local_83, 0);
			if (!unk_0x61D8FEAF64881CDA(Global_2263, 22))
			{
				if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
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
	if (unk_0x61D8FEAF64881CDA(Global_2264, 28))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(2, 178, 1), "CELL_277");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xF48C88BD1F0007E8(uLocal_140, "SET_MAX_WIDTH");
	unk_0xA8F7908868900538(fLocal_76);
	unk_0xA52FC2467E672B55();
	func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_78()
{
	func_124(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x61D8FEAF64881CDA(Global_2264, 28))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(2, 179, 1), "CELL_287");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, unk_0xB588E50C18B98D3F(2, 179, 1), "CELL_287");
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, unk_0xB588E50C18B98D3F(2, 178, 1), "CELL_277");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, unk_0xB588E50C18B98D3F(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xF48C88BD1F0007E8(uLocal_140, "SET_MAX_WIDTH");
	unk_0xA8F7908868900538(fLocal_76);
	unk_0xA52FC2467E672B55();
	func_124(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
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
		if (unk_0x537F3CB4EFB8C4C1(unk_0x507DA4994C3D8EBD(), 0))
		{
			return 0;
		}
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (!unk_0xB4559880093FB79E())
			{
				if (unk_0x26FE3F0A2045AA7E(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD()) || unk_0x830367A25D848DC7(unk_0x507DA4994C3D8EBD())) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0x68B3DFCF1710D279(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
		if (Global_96221)
		{
			return 0;
		}
	}
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xCF4F7FBD80ABE315();
	iVar1 = unk_0xD686D61A57BCB6E7(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xB4559880093FB79E()))
	{
		iVar2 = 1;
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iVar3 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				if (((((((unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(iVar3)) || unk_0xD70F47541E70FD47(unk_0x26EA758C2A691D06(iVar3))) || unk_0x99F5A208CDBDA518(unk_0x26EA758C2A691D06(iVar3))) || unk_0x26EA758C2A691D06(iVar3) == joaat("seashark")) || unk_0x26EA758C2A691D06(iVar3) == joaat("seashark2")) || unk_0x26EA758C2A691D06(iVar3) == joaat("rhino")) || unk_0x26EA758C2A691D06(iVar3) == joaat("submersible")) || unk_0x26EA758C2A691D06(iVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2543750 || iVar2 == 1)
	{
		if (unk_0x25531002BCF0D968(joaat("apptrackify")) > 0 || Global_97173.f_12272.f_89)
		{
			if (unk_0x25531002BCF0D968(joaat("michael2")) > 0)
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
	unk_0x500F4CA776CEBD0A(0, 47, 1);
	unk_0x0756DDDAD8038AC9(0, Global_14363);
	Local_83 = { Global_14353 };
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (func_79())
	{
		unk_0x8FF29DE8F4EBF419(&Local_89, 0);
		Local_83 = { Local_89 };
		unk_0x483F49444BC10CD1(&Local_92);
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
		if (unk_0x61D8FEAF64881CDA(Global_2263, 30))
		{
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			func_81();
		}
		if (iLocal_120)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
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
				unk_0x21D2105CA1483300(Local_77, 0);
				unk_0x22FDA9F8AE4DE11C(Local_80);
			}
			func_88(0, 1);
		}
		else if (func_79() == 0)
		{
			unk_0x21D2105CA1483300(Local_77, 0);
			unk_0x22FDA9F8AE4DE11C(Local_80);
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
	unk_0x21D2105CA1483300(Local_77, 0);
}

void func_81()
{
	func_1(0);
	if (func_79() == 0)
	{
		if (unk_0x61D8FEAF64881CDA(Global_2263, 30))
		{
			unk_0x22FDA9F8AE4DE11C(Global_14339[Global_14338 /*3*/]);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14346[Global_14338 /*3*/]);
		}
		Local_77 = { Local_83 };
		unk_0x21D2105CA1483300(Local_77, 0);
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
	if (unk_0xE908465F9CDF4F1A(uLocal_139))
	{
		func_123(uLocal_139, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x882182119EAE9ABF();
	unk_0x86FF04BBB2EC839F(&uLocal_140);
	unk_0x86FF04BBB2EC839F(&uLocal_139);
	if (Global_14553 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 17);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 17);
	}
	unk_0xCD27BF29FB9012E2(&Global_2263, 18);
	unk_0xCD27BF29FB9012E2(&Global_2263, 21);
	unk_0xDB8E6614BEC7977E(0, 1);
	unk_0xCD27BF29FB9012E2(&Global_2265, 3);
	unk_0xCD27BF29FB9012E2(&Global_2543551, 3);
	unk_0x1757405122DE8566(0);
	unk_0x0364C7B6EFAC33A0(unk_0xAF65E5A58BE87D95(), 1);
	unk_0x7DD2AC90262DCE82(15);
	Global_16729 = 1;
	unk_0x5B438162CCD91A71(iLocal_111);
	unk_0x71EA2F1D0184D8C7(iLocal_111);
	unk_0x5561EBF2C1FBF8B6();
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xB999892D829E5A79(unk_0x507DA4994C3D8EBD(), "Mood_Normal_1", 0);
		unk_0xF0092A6A58666782(unk_0x507DA4994C3D8EBD());
	}
	func_90();
	unk_0xAA9D747402357C45(0);
	unk_0x73754E8E47EF8F9E(1f);
	if (Global_2542277 > 0 && Global_2542277 < 13)
	{
		unk_0xB6A951E6C2922F87(sLocal_32[Global_2542277]);
	}
	func_88(0, 1);
	if (func_130(0, 1, iLocal_63))
	{
		iLocal_63 = 0;
	}
	unk_0x883793591E631A3B();
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
	while (!unk_0xE908465F9CDF4F1A(Global_14374))
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
				unk_0xCD27BF29FB9012E2(&Global_2263, 17);
			}
			else if (Global_68067)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xCD27BF29FB9012E2(&Global_2263, 17);
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
				unk_0x3DBE2A7AF9E71C82(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_85(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCD27BF29FB9012E2(&Global_2263, 17);
			if (unk_0x61D8FEAF64881CDA(Global_2263, 20))
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
				func_124(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
					unk_0x876C5D0739031E15(4);
					unk_0x876C5D0739031E15(0);
					unk_0x876C5D0739031E15(2);
					unk_0x44F4D219F8513945("CELL_CONDFON");
					unk_0xD1F22DD7F7363AB6(&Global_15707);
					unk_0x113A6F657EE871A3();
					func_56("CELL_300");
					func_56("CELL_217");
					func_56("CELL_217");
					unk_0xA52FC2467E672B55();
				}
				else if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), "CELL_217", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
				}
				func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_124(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_84();
				if (Global_15705)
				{
					unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
					unk_0x876C5D0739031E15(4);
					unk_0x876C5D0739031E15(0);
					unk_0x876C5D0739031E15(2);
					unk_0x44F4D219F8513945("CELL_CONDFON");
					unk_0xD1F22DD7F7363AB6(&Global_15707);
					unk_0x113A6F657EE871A3();
					func_56("CELL_300");
					func_56("CELL_219");
					func_56("CELL_219");
					unk_0xA52FC2467E672B55();
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
					if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), &Var0, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
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
	if (unk_0xE908465F9CDF4F1A(Global_14374))
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
			else if (unk_0x61D8FEAF64881CDA(Global_2263, 20))
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
			unk_0xCD27BF29FB9012E2(&Global_2263, 17);
		}
		else
		{
			func_85(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCD27BF29FB9012E2(&Global_2263, 17);
			if (unk_0x61D8FEAF64881CDA(Global_2263, 20))
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
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 0);
					break;
				
				case 2:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 1);
					break;
				
				case 3:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 2);
					break;
				
				case 4:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 3);
					break;
				
				case 5:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 4);
					break;
				
				case 6:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 5);
					break;
				
				case 7:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 6);
					break;
				
				case 2:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 0);
					break;
				
				case 3:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 1);
					break;
				
				case 4:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 2);
					break;
				
				case 5:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 3);
					break;
				
				case 6:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 4);
					break;
				
				case 7:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 5);
					break;
				
				case 2:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 6);
					break;
				
				case 3:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 1);
					break;
				
				case 4:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 0);
					break;
				
				case 5:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 2);
					break;
				
				case 6:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 3);
					break;
				
				case 7:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2543748)
			{
				case 1:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 0);
					break;
				
				case 2:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 1);
					break;
				
				case 3:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 2);
					break;
				
				case 4:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 3);
					break;
				
				case 5:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 4);
					break;
				
				case 6:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 5);
					break;
				
				case 7:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_85(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x8FA72E132AAFA62F(sParam7))
	{
		func_56(sParam7);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam8))
	{
		func_56(iParam8);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam9))
	{
		func_56(iParam9);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam10))
	{
		func_56(iParam10);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam11))
	{
		func_56(iParam11);
	}
	unk_0xA52FC2467E672B55();
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
								if (unk_0x61D8FEAF64881CDA(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
								unk_0x876C5D0739031E15(1);
								unk_0x876C5D0739031E15(iVar0);
								unk_0x876C5D0739031E15(Global_2270[iVar1 /*15*/].f_10);
								unk_0x876C5D0739031E15(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x876C5D0739031E15(iVar2);
								unk_0xA52FC2467E672B55();
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
									if (Global_97173.f_12362[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97173.f_12362[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97173.f_12362[iVar3 /*104*/].f_99[Global_14393] == 1)
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
								if (Global_68067)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2542286[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2542286[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2542286[iVar4 /*104*/].f_99[Global_14393] == 1)
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
											iVar6 = Global_35958;
											break;
										
										case 1:
											iVar6 = Global_35959;
											break;
										
										case 2:
											iVar6 = Global_35960;
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
								unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
								unk_0x876C5D0739031E15(1);
								unk_0x876C5D0739031E15(iVar0);
								unk_0x876C5D0739031E15(Global_2270[iVar1 /*15*/].f_10);
								unk_0x876C5D0739031E15(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x876C5D0739031E15(Global_2269);
								unk_0xA52FC2467E672B55();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x61D8FEAF64881CDA(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
								unk_0x876C5D0739031E15(1);
								unk_0x876C5D0739031E15(iVar0);
								unk_0x876C5D0739031E15(Global_2270[iVar1 /*15*/].f_10);
								unk_0x876C5D0739031E15(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x876C5D0739031E15(iVar7);
								unk_0xA52FC2467E672B55();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x61D8FEAF64881CDA(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
								unk_0x876C5D0739031E15(1);
								unk_0x876C5D0739031E15(iVar0);
								unk_0x876C5D0739031E15(Global_2270[iVar1 /*15*/].f_10);
								unk_0x876C5D0739031E15(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x876C5D0739031E15(iVar8);
								unk_0xA52FC2467E672B55();
							}
							else if (iVar1 == 8)
							{
								unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
								unk_0x876C5D0739031E15(1);
								unk_0x876C5D0739031E15(iVar0);
								unk_0x876C5D0739031E15(Global_2270[iVar1 /*15*/].f_10);
								unk_0x876C5D0739031E15(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0x876C5D0739031E15(42);
								unk_0xA52FC2467E672B55();
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
			unk_0xDB8E6614BEC7977E(0, 1);
			if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
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
			if (!unk_0x61D8FEAF64881CDA(Global_2263, 22))
			{
				unk_0xDB8E6614BEC7977E(0, 1);
				if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
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
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
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
	if (Global_1601761.f_68108 == 0 && Global_1601761.f_68109 == 0)
	{
		unk_0x8611FA16C57B4195();
	}
}

void func_91(int iParam0, int iParam1)
{
	if (Global_1601761.f_68108 == 1)
	{
	}
	else if (Global_1601761.f_68109 == 1)
	{
	}
	else
	{
		unk_0x0ED2CDEF8B45664D(iParam0, iParam1);
	}
}

int func_92()
{
	if (unk_0x61D8FEAF64881CDA(Global_2263, 15))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x58FC9C7DF8FE009B(iParam0, uParam1) || (iParam2 == 1 && unk_0x02AC213158CF29AE(iParam0, iParam1)))
	{
		if (unk_0x80AD636AD4184F2B())
		{
			if (unk_0x807035052B6EC8A1() == 0 || (unk_0x1B3FC52C6D531434() && unk_0x30E5EC01C9ACF9BC(2)))
			{
				return 0;
			}
		}
		if (unk_0xBB02FD0C8166DE6D() || unk_0xDAF2549B28FDF97C())
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
			unk_0x8FF29DE8F4EBF419(&Local_89, 0);
			Local_83 = { Local_89 };
			unk_0x483F49444BC10CD1(&Local_92);
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
			unk_0x21D2105CA1483300(Local_77, 0);
			unk_0x22FDA9F8AE4DE11C(Local_80);
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
		unk_0x21D2105CA1483300(Local_77, 0);
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
				unk_0x21D2105CA1483300(Local_77, 0);
				Local_80 = { Local_86 };
				unk_0x22FDA9F8AE4DE11C(Local_80);
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
				if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
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
		unk_0x21D2105CA1483300(Local_77, 0);
		Global_16726 = 0;
	}
}

void func_95(bool bParam0)
{
	if (func_132())
	{
		if (bParam0)
		{
			if (!unk_0x2D37C1B5BFC1B3D1())
			{
				unk_0x7BACFCD96F9E7AF4(1);
				if (Global_2542277 > 0 && Global_2542277 < 99)
				{
					unk_0x769682944C6C19BF(sLocal_32[Global_2542277], 0);
					unk_0x73754E8E47EF8F9E(0.25f);
				}
			}
		}
		else if (unk_0x2D37C1B5BFC1B3D1())
		{
			unk_0x7BACFCD96F9E7AF4(0);
		}
	}
}

void func_96()
{
	if (Global_2542276 > 0 && Global_2542276 < 99)
	{
		unk_0xC268078730F02686(sLocal_18[Global_2542276]);
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
		if (unk_0x61D8FEAF64881CDA(Global_2263, 28))
		{
			StringCopy(&cLocal_144, "CELL_296", 16);
			func_49();
		}
		else
		{
			StringCopy(&cLocal_144, "CELL_295", 16);
			func_27();
		}
		if (unk_0xA858564DC37EED5E(&cLocal_144, "DUMMYCOMPARISON"))
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
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Back", &Global_14382, 1);
	}
}

void func_100()
{
	unk_0xF228D122DDE60FF6(0, 0);
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
		if (!unk_0xBB02FD0C8166DE6D())
		{
			unk_0x012C58B789779AA4(uLocal_139, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_104()
{
	if (func_55(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
		if (Global_68067)
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
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
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
	unk_0x500F4CA776CEBD0A(0, 0, 1);
	unk_0x500F4CA776CEBD0A(0, 56, 1);
	if (iLocal_149 == 0)
	{
		unk_0x0756DDDAD8038AC9(0, Global_14366);
		unk_0x0756DDDAD8038AC9(0, Global_14363);
		unk_0x500F4CA776CEBD0A(0, 278, 1);
		unk_0x500F4CA776CEBD0A(0, 279, 1);
		unk_0x500F4CA776CEBD0A(0, 280, 1);
		unk_0x500F4CA776CEBD0A(0, 281, 1);
		unk_0x500F4CA776CEBD0A(0, 282, 1);
		unk_0x500F4CA776CEBD0A(0, 282, 1);
		unk_0x500F4CA776CEBD0A(0, 284, 1);
		unk_0x500F4CA776CEBD0A(0, 285, 1);
		unk_0x500F4CA776CEBD0A(0, 69, 1);
		unk_0x500F4CA776CEBD0A(0, 70, 1);
		unk_0x500F4CA776CEBD0A(0, 114, 1);
		unk_0x500F4CA776CEBD0A(0, 71, 1);
		unk_0x500F4CA776CEBD0A(0, 72, 1);
		unk_0x500F4CA776CEBD0A(0, 74, 1);
		unk_0x500F4CA776CEBD0A(0, 75, 1);
		unk_0x500F4CA776CEBD0A(0, 76, 1);
		unk_0x500F4CA776CEBD0A(0, 73, 1);
		unk_0x500F4CA776CEBD0A(0, 77, 1);
		unk_0x500F4CA776CEBD0A(0, 78, 1);
		unk_0x500F4CA776CEBD0A(0, 286, 1);
		unk_0x500F4CA776CEBD0A(0, 287, 1);
		unk_0x500F4CA776CEBD0A(0, 79, 1);
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		unk_0x500F4CA776CEBD0A(0, 81, 1);
		unk_0x500F4CA776CEBD0A(0, 82, 1);
		unk_0x500F4CA776CEBD0A(0, 86, 1);
		unk_0x500F4CA776CEBD0A(0, 59, 1);
		unk_0x500F4CA776CEBD0A(0, 60, 1);
		unk_0x500F4CA776CEBD0A(0, 61, 1);
		unk_0x500F4CA776CEBD0A(0, 62, 1);
		unk_0x500F4CA776CEBD0A(0, 63, 1);
		unk_0x500F4CA776CEBD0A(0, 64, 1);
		unk_0x500F4CA776CEBD0A(0, 87, 1);
		unk_0x500F4CA776CEBD0A(0, 88, 1);
		unk_0x500F4CA776CEBD0A(0, 89, 1);
		unk_0x500F4CA776CEBD0A(0, 90, 1);
		unk_0x500F4CA776CEBD0A(0, 107, 1);
		unk_0x500F4CA776CEBD0A(0, 108, 1);
		unk_0x500F4CA776CEBD0A(0, 109, 1);
		unk_0x500F4CA776CEBD0A(0, 110, 1);
		unk_0x500F4CA776CEBD0A(0, 111, 1);
		unk_0x500F4CA776CEBD0A(0, 112, 1);
		unk_0x500F4CA776CEBD0A(0, 113, 1);
		unk_0x500F4CA776CEBD0A(0, 114, 1);
		unk_0x500F4CA776CEBD0A(0, 91, 1);
		unk_0x500F4CA776CEBD0A(0, 92, 1);
		unk_0x500F4CA776CEBD0A(0, 102, 1);
		unk_0x500F4CA776CEBD0A(0, 136, 1);
		unk_0x500F4CA776CEBD0A(0, 137, 1);
		unk_0x500F4CA776CEBD0A(0, 138, 1);
		unk_0x500F4CA776CEBD0A(0, 139, 1);
		unk_0x500F4CA776CEBD0A(0, 102, 1);
	}
}

int func_108()
{
	var uVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			if (unk_0xC51FBEBD87CFD69C(uVar0, -1))
			{
				return 1;
			}
			else if (!unk_0xE634CB9EE7094537(uVar0, -1) == unk_0x507DA4994C3D8EBD())
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
	if (Global_1315872 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 1;
		}
	}
	if (func_115())
	{
		return 1;
	}
	if (Global_2436715)
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
	if (!unk_0x0E4B4CA22DBCFA69())
	{
		return 1;
	}
	if (func_110() != 0)
	{
		if (unk_0x25531002BCF0D968(func_110()) == 0)
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
	return Global_2427935.f_570;
}

int func_113(int iParam0)
{
	if (unk_0x289D054E2E18C82E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_114()
{
	return Global_2434971;
}

bool func_115()
{
	return Global_2427935.f_565;
}

void func_116(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		iVar1 = unk_0xAAB64DCC229F922F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6EDD33D6B8546C95(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_117(iVar0);
					break;
				
				case 2:
					unk_0x6EDD33D6B8546C95(1, iVar0, &Var4, 3);
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
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		if (func_119(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x687D51F360787909(Var0.f_1);
			if (unk_0xFD68187442384158(iVar3))
			{
				if (unk_0x2A24448FF232F834(iVar3, 0))
				{
					iVar4 = unk_0x78AB10B64129B3D5(iVar3, 0);
					if (unk_0x9067781626AA370D(iVar4, Var0.f_2) && unk_0x0D1738F09A13D367())
					{
						if (func_118(iVar4, &bVar5))
						{
							unk_0xA8B02A3D719BC7B0(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB67623A401171555(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, var uParam1)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0x73E2404DC70203CD(iParam0))
		{
			if (unk_0x9ACF2D423F8B5749(iParam0))
			{
				unk_0xBAE5DF507EEC53C8(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x51BC2FF711F8CF71(iParam0, 0))
		{
			if (unk_0xFE0D96A75DA37EB0(iParam0))
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
	if (unk_0xB832D52B86777A35(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x52A84D9C3A400EA8(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
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
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

void func_121()
{
	if (func_122())
	{
		unk_0xFDD88F7A47904AE7();
		if (unk_0x7B543A46F61EDB11(0))
		{
			iLocal_102 = 1;
			iLocal_110 = 0;
		}
		else
		{
			Global_16729 = 1;
			Global_14393.f_1 = 3;
			unk_0x5561EBF2C1FBF8B6();
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
				if (unk_0xE908465F9CDF4F1A(uLocal_139))
				{
					if (func_132())
					{
						if (Global_2542277 == 0)
						{
							if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
							{
								func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x61D8FEAF64881CDA(Global_2543551, 2))
						{
							func_124(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xE908465F9CDF4F1A(uLocal_139))
			{
				func_124(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
			}
			iLocal_103 = 0;
		}
		iLocal_110 = 0;
		unk_0x5561EBF2C1FBF8B6();
	}
}

int func_122()
{
	if (Global_1601761.f_68108 == 1)
	{
		if (Global_68067)
		{
			return 0;
		}
	}
	if (Global_1601761.f_68109 == 1)
	{
		if (Global_68067)
		{
			return 0;
		}
	}
	if (unk_0x2F4E1FF400251C08() || unk_0x9763C0E44A644CB2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_2264, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_123(var uParam0, char* sParam1)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0xA52FC2467E672B55();
}

void func_124(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xA52FC2467E672B55();
}

int func_125()
{
	if (Global_68067)
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
	return Global_97173.f_12272[Global_14393 /*20*/].f_7;
}

void func_126()
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	Global_16728 = 0;
	iLocal_126 = 0;
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		Local_66 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	}
	if (Global_14335)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_136)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_103();
			func_75();
			unk_0x882182119EAE9ABF();
		}
		func_123(uLocal_139, "OPEN_SHUTTER");
		unk_0x0DCB93E7DEB1CC3F();
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
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 15);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 15);
	}
}

bool func_128()
{
	return Global_1315872;
}

void func_129()
{
}

int func_130(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && bParam2)
		{
			unk_0x889006E2EE739868(iParam0, iParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_131()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x3153580B6C021741(unk_0x507DA4994C3D8EBD()))
		{
			unk_0xD14BE9B74CD80551(unk_0x507DA4994C3D8EBD(), 0, 0);
			unk_0x0409A00BE617B6F2(fLocal_155);
			unk_0xF8545DBAF6FC3DC8(fLocal_156);
			unk_0x28881257C25DDCA7(fLocal_157);
		}
		else
		{
			unk_0x0409A00BE617B6F2(fLocal_155);
			unk_0xF8545DBAF6FC3DC8(fLocal_156);
			unk_0x28881257C25DDCA7(fLocal_157);
		}
	}
	unk_0xACA62DD3FAB78014(fLocal_158);
	unk_0x013C1497FF29F2CC(fLocal_159);
	unk_0x11C550F0F4303BA7(fLocal_160);
	unk_0x771E4741BA8ABCA6(fLocal_161);
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


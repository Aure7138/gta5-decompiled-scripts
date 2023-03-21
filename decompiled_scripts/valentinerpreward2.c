#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	struct<3> Local_24 = { 0, 0, 0 } ;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<2> Local_78 = { 0, 0 } ;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_159 = { 0, 0 } ;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 15;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	struct<2> Local_191 = { 0, 0 } ;
	struct<2> Local_193 = { 0, 0 } ;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	var uLocal_203[1] = { 0 };
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	bool bLocal_207 = 0;
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	var uLocal_215 = 0;
	int iLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 4;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.57.03";
	iLocal_11 = -1;
	iLocal_28 = -1;
	iLocal_29 = -1;
	iLocal_77 = -1;
	iLocal_81 = -1;
	iLocal_162 = 1;
	unk_0x2C07CBAFAC54A645(0);
	unk_0x3F57BEDBC381CBC7();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1577985 = unk_0x2E87280918B16506(sLocal_0);
	iVar0 = unk_0x320D1840B6DAA1CC() + 10000;
	while (unk_0x320D1840B6DAA1CC() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_417())
		{
			func_415();
		}
		if (unk_0x9315DBF7D972F07A() && Global_2723442.f_3)
		{
			func_414();
			func_413();
			func_410();
			func_408();
			func_407();
			func_402();
			func_401();
			func_397();
			func_387();
			func_383();
			func_351();
			func_348();
			func_346();
			func_344();
			func_343();
			func_338();
			func_337();
			func_336();
			func_316();
			func_315();
			func_309();
			func_297();
			func_296();
			func_289();
			func_287();
			func_286();
			func_281();
			func_278();
			func_273();
			func_271();
			func_269();
			func_266();
			func_255();
			func_254();
			func_253();
			func_250();
			func_248();
			func_234();
			func_231();
			func_228();
			func_227();
			func_225();
			func_223();
			func_216();
			func_215();
			func_214();
			func_201();
			func_199();
			func_191();
			func_177();
			func_173();
			func_172();
			func_171();
			func_170();
			func_168();
			func_163();
			func_162();
			func_156();
			func_151();
			func_144();
			func_102();
			func_92();
			func_81();
		}
		if (unk_0x44859561F653DD4E())
		{
			func_76();
			func_75();
			func_74();
			func_71();
			func_70();
			func_68();
			func_65();
			func_60();
			func_59();
			func_57();
			func_55();
			func_54();
			func_44();
			func_42();
		}
		func_40();
		func_33();
		func_27();
		func_25();
		func_22();
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_214)
	{
		if (func_21(unk_0x9E2D6C50374FCFA9(), 1, 1) && Global_1655486)
		{
			iVar0 = Global_1655625[func_20(-1)];
			iVar1 = iVar0;
			if (!BitTest(iVar0, 0))
			{
				if ((BitTest(func_19(1196, -1, 0), 7) || func_18(122, -1)) || func_18(125, -1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, false);
				}
			}
			if (!BitTest(iVar0, 1))
			{
				if (func_17(7664, -1) > 0)
				{
					unk_0xCED9E32812D6C7C7(&iVar0, true);
				}
			}
			if (!BitTest(iVar0, 2))
			{
				if (BitTest(func_19(1192, -1, 0), 20))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 2);
				}
			}
			if (!BitTest(iVar0, 3))
			{
				if (func_18(124, -1) || func_18(120, -1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 3);
				}
			}
			if (!BitTest(iVar0, 4))
			{
				unk_0xCED9E32812D6C7C7(&iVar0, 4);
			}
			if (!BitTest(iVar0, 5))
			{
				unk_0xCED9E32812D6C7C7(&iVar0, 5);
			}
			if (!BitTest(iVar0, 6))
			{
				if (BitTest(func_19(1196, -1, 0), 27) || BitTest(func_19(1196, -1, 0), 23))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 6);
				}
			}
			if (!BitTest(iVar0, 7))
			{
				if ((BitTest(func_19(1192, -1, 0), 14) || func_19(1251, -1, 0) > 0) || func_19(1255, -1, 0) > 0)
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 7);
				}
			}
			if (!BitTest(iVar0, 9))
			{
				if ((func_18(357, -1) || func_14(10, func_16())) || func_13())
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 9);
				}
			}
			if (!BitTest(iVar0, 10))
			{
				if ((func_18(357, -1) || func_14(11, func_16())) || func_13())
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 10);
				}
			}
			if (!BitTest(iVar0, 11))
			{
				if (BitTest(iVar0, 9) || BitTest(iVar0, 10))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 11);
				}
			}
			if (!BitTest(iVar0, 12))
			{
				if (func_19(10836, -1, 0) > 0 || func_12())
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 12);
				}
			}
			if (!BitTest(iVar0, 13))
			{
				if (func_17(7665, -1) > 0)
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 13);
				}
			}
			if (!BitTest(iVar0, 14))
			{
				if (func_17(7654, -1) > 0)
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 14);
				}
			}
			if (!BitTest(iVar0, 15))
			{
				if (func_11(7638, -1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 15);
				}
			}
			if (!BitTest(iVar0, 16))
			{
				if (func_3(3))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 16);
				}
			}
			if (!BitTest(iVar0, 17))
			{
				if (func_3(4))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 17);
				}
			}
			if (!BitTest(iVar0, 18))
			{
				if (func_3(1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 18);
				}
			}
			if (!BitTest(iVar0, 19))
			{
				if (func_3(0))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 19);
				}
			}
			if (!BitTest(iVar0, 20))
			{
				if (func_3(2))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 20);
				}
			}
			if (!BitTest(iVar0, 21))
			{
				if (func_3(3))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 21);
				}
			}
			if (!BitTest(iVar0, 22))
			{
				if (func_3(4))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 22);
				}
			}
			if (!BitTest(iVar0, 23))
			{
				if (func_3(1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 23);
				}
			}
			if (!BitTest(iVar0, 24))
			{
				if (func_3(0))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 24);
				}
			}
			if (!BitTest(iVar0, 25))
			{
				if (func_3(2))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 25);
				}
			}
			if (!BitTest(iVar0, 26))
			{
				if (func_11(3814, -1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 26);
				}
			}
			if (!BitTest(iVar0, 27))
			{
				if (func_3(5))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 27);
				}
			}
			if (!BitTest(iVar0, 28))
			{
				if (func_11(15489, -1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 28);
				}
			}
			if (!BitTest(iVar0, 29))
			{
				if (func_11(15966, -1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 29);
				}
			}
			if (!BitTest(iVar0, 30))
			{
				if (func_11(15966, -1) || func_17(18096, -1) > 0)
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 30);
				}
			}
			if (!BitTest(iVar0, 31))
			{
				if (((((((BitTest(func_19(6426, -1, 0), 13) || BitTest(func_19(6426, -1, 0), 0)) || BitTest(func_19(6426, -1, 0), 1)) || BitTest(func_19(6426, -1, 0), 2)) || func_11(18139, -1)) || func_11(18140, -1)) || func_11(18141, -1)) || func_11(18142, -1))
				{
					unk_0xCED9E32812D6C7C7(&iVar0, 31);
				}
			}
			if (iVar0 != iVar1)
			{
				func_2(1304, iVar0, -1, 1);
			}
			iLocal_214 = 1;
		}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2822371[iParam0 /*3*/][func_20(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655565[func_20(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655571[func_20(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655577[func_20(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655583[func_20(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655589[func_20(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655535[func_20(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655541[func_20(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655547[func_20(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655553[func_20(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655559[func_20(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655505[func_20(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655511[func_20(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655517[func_20(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655523[func_20(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655529[func_20(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655595[func_20(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655601[func_20(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655607[func_20(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655613[func_20(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655619[func_20(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655625[func_20(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655631[func_20(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655637[func_20(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655643[func_20(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863698[0 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863698[1 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863698[2 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863698[3 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 10874:
			Global_2863859[func_20(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655649[func_20(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655655[func_20(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655661[func_20(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655667[func_20(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655673[func_20(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655679[func_20(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863777[0 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863777[1 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863777[2 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863777[3 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863777[4 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863862[0 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863862[1 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863862[2 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863862[3 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863862[4 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863878[0 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863878[1 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863878[2 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863878[3 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863878[4 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863777[5 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863698[4 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863894[func_20(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863903[func_20(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863897[func_20(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863906[func_20(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863900[func_20(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863909[func_20(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863912[func_20(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863777[6 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863698[5 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863777[7 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863698[6 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863777[8 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863698[7 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863777[9 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863698[8 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863777[10 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863698[9 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863777[11 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863698[10 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863777[12 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863698[11 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863777[13 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863698[12 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863777[14 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863698[13 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863777[15 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863698[14 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863777[16 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863698[15 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863777[17 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863698[16 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863698[17 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863698[18 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863698[19 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863698[20 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863915[func_20(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863918[func_20(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863921[func_20(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863924[func_20(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863927[func_20(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863930[func_20(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863933[func_20(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863936[func_20(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863939[func_20(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863942[func_20(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863945[func_20(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863948[func_20(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863951[func_20(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863954[func_20(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863698[21 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863777[23 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863698[22 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863777[24 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863698[23 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863698[24 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863698[25 /*3*/][func_20(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = func_9(unk_0x9E2D6C50374FCFA9(), iParam0);
	if (iVar0 != 0 && func_4(unk_0x9E2D6C50374FCFA9(), iVar0))
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_8(iParam0, iParam1))
	{
		iVar0 = func_5(iParam0, iParam1);
		if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_4 > 0 && Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_7(iParam1) && iParam0 != func_6())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_6()
{
	return -1;
}

int func_7(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_7(iParam1) && iParam0 != func_6())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_9(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] != 0)
		{
			iVar1 = Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/];
			if (func_10(iVar1) == iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

bool func_11(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

bool func_12()
{
	return (func_19(10836, -1, 0) > Global_794709.f_203824[0 /*11*/].f_9 && func_19(10839, -1, 0) > 8);
}

int func_13()
{
	if (((((((((((((((((((func_19(10466, -1, 0) > 0 || func_19(10467, -1, 0) > 0) || func_19(10469, -1, 0) > 0) || func_19(10470, -1, 0) > 0) || func_19(10472, -1, 0) > 0) || func_19(10473, -1, 0) > 0) || func_19(10475, -1, 0) > 0) || func_19(10476, -1, 0) > 0) || func_19(10478, -1, 0) > 0) || func_19(10479, -1, 0) > 0) || func_19(10481, -1, 0) > 0) || func_19(10482, -1, 0) > 0) || func_19(10484, -1, 0) > 0) || func_19(10485, -1, 0) > 0) || func_19(10487, -1, 0) > 0) || func_19(10488, -1, 0) > 0) || func_19(10490, -1, 0) > 0) || func_19(10491, -1, 0) > 0) || func_19(10493, -1, 0) > 0) || func_19(10494, -1, 0) > 0)
	{
		return 1;
	}
	return 1;
}

var func_14(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_15(iParam1);
	uVar1 = unk_0x5D851A9195129CE9(uVar0);
	return BitTest(uVar1, iParam0);
}

int func_15(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_16()
{
	return Global_1574915;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	return unk_0x0BC900A6FE73770C(iParam0, iParam1);
}

int func_18(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860791[iParam0 /*3*/][func_20(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2822371[iParam0 /*3*/][func_20(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	int iVar0;
	
	if (!bLocal_207)
	{
		if (func_24())
		{
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 14) && func_23(Global_794709.f_177589[iVar0 /*13*/].f_1))
				{
					unk_0xB0550BC91B0159D6(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
				}
				iVar0++;
			}
			iLocal_205 = 1;
		}
	}
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 17)
		{
			if (Global_262145.f_6694[iVar1] == 283)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6078[iVar1])
				{
					if (iParam0 == Global_262145.f_5035[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_24()
{
	return Global_2723442.f_6;
}

void func_25()
{
	int iVar0;
	
	if (!iLocal_205)
	{
		if (func_24())
		{
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13) && func_26(Global_794709.f_177589[iVar0 /*13*/].f_1))
				{
					Global_794709.f_4[iVar0 /*88*/].f_70 = 1;
				}
				iVar0++;
			}
			iLocal_205 = 1;
		}
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31366[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_27()
{
	if (func_28())
	{
		if (!iLocal_201)
		{
			unk_0xEE3ACED204F48810(1);
			iLocal_201 = 1;
		}
	}
	else if (iLocal_201)
	{
		unk_0xEE3ACED204F48810(0);
		iLocal_201 = 0;
	}
}

int func_28()
{
	if (((!unk_0x9315DBF7D972F07A() || !func_31()) || func_30()) || unk_0x44859561F653DD4E())
	{
		return 0;
	}
	if (func_29(unk_0x9E2D6C50374FCFA9()) && Global_1946935 != 7)
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 != func_6() && func_21(iParam0, 1, 1))
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317, 4);
	}
	return 0;
}

bool func_30()
{
	return Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

int func_31()
{
	if (func_32() == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	return Global_1574631.f_18;
}

void func_33()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if ((unk_0x9315DBF7D972F07A() && !func_39()) && !func_30())
	{
		switch (Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_6)
		{
			case 155:
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 372.7166f, -61.5635f, 106.1633f, 374.0844f, -62.0511f, 108.5383f, 1.4375f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 374.8303f, -60.0519f, 106.1633f, 373.443f, -59.5593f, 108.5383f, 1.25f, 0, 1, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 156:
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1027.933f, -436.7131f, 66.6614f, -1026.643f, -436.0464f, 69.0364f, 1.4375f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1027.595f, -434.1366f, 66.6614f, -1028.902f, -434.8141f, 69.0364f, 1.25f, 0, 1, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 157:
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -578.381f, -711.6314f, 115.8054f, -579.8333f, -711.6372f, 118.1804f, 1.4375f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -579.856f, -713.7709f, 115.8054f, -578.3839f, -713.7631f, 118.1804f, 1.25f, 0, 1, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 158:
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -998.9874f, -770.6858f, 64.6945f, -998.9971f, -769.2336f, 67.0695f, 1.4375f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1001.131f, -769.2165f, 64.6945f, -1001.119f, -770.6886f, 67.0695f, 1.25f, 0, 1, 0))
				{
					iVar0 = 1;
				}
				break;
			}
	}
	if (iVar0 && func_38())
	{
		if (func_37("BUNK_PC_BLCK2"))
		{
			func_36("FHQ_PC_BLCK", 1000);
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (Global_43334[iVar1 /*32*/])
			{
				if (unk_0x2E87280918B16506(&(Global_43334[iVar1 /*32*/].f_8)) == 1654027762)
				{
					StringCopy(&(Global_43334[iVar1 /*32*/].f_8), "FHQ_PC_BLCK", 16);
				}
			}
			iVar1++;
		}
	}
	else if (((((((((iVar0 && (Global_2714635.f_744 || uLocal_86)) && unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) && unk_0xE9E8955A780DDA01()) && !func_35()) && unk_0x1A76A9A82BD6228C() == 0) && func_31()) && !func_34()) && !unk_0xC96A605CF3E9295B()) && !unk_0x44859561F653DD4E())
	{
		if (!iLocal_85)
		{
			uLocal_86 = Global_2714635.f_744;
			Global_2714635.f_744 = 0;
			iLocal_85 = 1;
		}
	}
	else if (iLocal_85)
	{
		Global_2714635.f_744 = uLocal_86;
		iLocal_85 = 0;
	}
}

bool func_34()
{
	return Global_2714635.f_691;
}

bool func_35()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6141 + 100;
}

void func_36(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 0, iParam1);
}

bool func_37(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

bool func_38()
{
	return Global_1575013 == 10;
}

bool func_39()
{
	return BitTest(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 0);
}

void func_40()
{
	if (!iLocal_210)
	{
		if (!unk_0xE5965CDF24F93A9F(iLocal_211))
		{
			if (func_41(unk_0x2E87280918B16506("xm_prop_x17_pillar")))
			{
				iLocal_211 = unk_0x0E536D72AB30F4C8(unk_0x2E87280918B16506("xm_prop_x17_pillar"), -1551.272f, -578.36f, 41.038f, 0, 0, 0);
				unk_0xC64B6E13A6A7F517(iLocal_211, -1551.272f, -578.36f, 41.038f, 1, 0, 0, 1);
				unk_0x8CE3D365F064F69E(iLocal_211, 0f, 180f, 0f, 2, 1);
				unk_0x959E1626CBC7D38A(iLocal_211, true, 0);
				unk_0x5C65DDDC219B3AA5(iLocal_211, true);
				unk_0xFEF687AF74EEDCC2(iLocal_211, 0);
				unk_0x1C2ED929474DC6FE(iLocal_211, false, 0);
				unk_0xBED097BB6359F09C(iLocal_211, 1, 1, 1, 0, 1, 1, 1, 1);
				unk_0xF1A23B343DFEDFD0(unk_0x2E87280918B16506("xm_prop_x17_pillar"));
				iLocal_210 = 1;
			}
		}
	}
}

bool func_41(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

void func_42()
{
	if (Global_262145.f_31366[2] != Global_4718592.f_87009)
	{
		iLocal_213 = 0;
		return;
	}
	if (iLocal_213)
	{
		return;
	}
	func_43(0);
}

void func_43(int iParam0)
{
	if (Global_1058068.f_14[iParam0] != 3)
	{
		return;
	}
	if (Global_1058068.f_99[iParam0] < Global_4718592.f_595[iParam0 /*17044*/].f_5408[3])
	{
		return;
	}
	if (Global_1058068.f_104[iParam0] >= Global_4718592.f_595[iParam0 /*17044*/].f_5408[3])
	{
		iLocal_213 = 1;
		return;
	}
	Global_4718592.f_595[iParam0 /*17044*/].f_5408[3] = Global_1058068.f_104[iParam0];
	iLocal_213 = 1;
}

void func_44()
{
	if ((!func_30() && !func_50(unk_0x9E2D6C50374FCFA9())) && func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if ((func_48(unk_0x9E2D6C50374FCFA9()) && func_46()) && func_45(unk_0xE2D3D51028F0428A()))
		{
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1586.721f, -551.8265f, 34.0622f, 1, 0, 0, 1);
			iLocal_212 = 1;
		}
	}
	else if (iLocal_212)
	{
		iLocal_212 = 0;
	}
}

int func_45(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_46()
{
	if (!unk_0x44859561F653DD4E() && !func_47(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_144169[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

bool func_47(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575030;
}

int func_48(int iParam0)
{
	if (func_49(Global_1853131[iParam0 /*888*/].f_267.f_30))
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_50(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_51())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[iParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return BitTest(Global_2621446, 3);
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_53(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

void func_54()
{
	if (Global_262145.f_4993[0] != Global_4718592.f_87009)
	{
		return;
	}
	Global_4980736.f_88102[3 /*926*/] = { -0.5f, -666.1f, 31.8f };
	Global_4980736.f_88102[4 /*926*/] = { -1.8f, -672.2f, 31.8f };
	Global_4980736.f_88102[5 /*926*/] = { -3.2f, -675.4f, 31.8f };
}

void func_55()
{
	bool bVar0;
	int iVar1;
	
	if (Global_262145.f_4993[7] != Global_4718592.f_87009)
	{
		return;
	}
	iVar1 = 13;
	if (func_56(Global_4980736.f_88102[iVar1 /*926*/].f_81, Global_4980736.f_88102[iVar1 /*926*/].f_80, Global_4980736.f_88102[iVar1 /*926*/].f_79, 0, Global_4980736.f_88102[iVar1 /*926*/].f_131, Global_4980736.f_88102[iVar1 /*926*/].f_132))
	{
		bVar0 = true;
	}
	if (Global_4980736.f_88102[iVar1 /*926*/].f_471 > -1 && Global_4980736.f_88102[iVar1 /*926*/].f_468 > -1)
	{
		if (func_56(Global_4980736.f_88102[iVar1 /*926*/].f_474, Global_4980736.f_88102[iVar1 /*926*/].f_468, Global_4980736.f_88102[iVar1 /*926*/].f_471, 0, Global_4980736.f_88102[iVar1 /*926*/].f_480, Global_4980736.f_88102[iVar1 /*926*/].f_483))
		{
			bVar0 = true;
		}
	}
	if (Global_4980736.f_88102[iVar1 /*926*/].f_472 > -1 && Global_4980736.f_88102[iVar1 /*926*/].f_469 > -1)
	{
		if (func_56(Global_4980736.f_88102[iVar1 /*926*/].f_475, Global_4980736.f_88102[iVar1 /*926*/].f_469, Global_4980736.f_88102[iVar1 /*926*/].f_472, 0, Global_4980736.f_88102[iVar1 /*926*/].f_481, Global_4980736.f_88102[iVar1 /*926*/].f_484))
		{
			bVar0 = true;
		}
	}
	if (Global_4980736.f_88102[iVar1 /*926*/].f_473 > -1 && Global_4980736.f_88102[iVar1 /*926*/].f_470 > -1)
	{
		if (func_56(Global_4980736.f_88102[iVar1 /*926*/].f_476, Global_4980736.f_88102[iVar1 /*926*/].f_470, Global_4980736.f_88102[iVar1 /*926*/].f_473, 0, Global_4980736.f_88102[iVar1 /*926*/].f_482, Global_4980736.f_88102[iVar1 /*926*/].f_485))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		Global_4980736.f_88102[iVar1 /*926*/].f_79 = 0;
		Global_4980736.f_88102[iVar1 /*926*/].f_471 = 0;
		Global_4980736.f_88102[iVar1 /*926*/].f_472 = 0;
		Global_4980736.f_88102[iVar1 /*926*/].f_473 = 0;
	}
}

int func_56(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			if (iParam2 <= Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 3:
			if (!bParam3 && iParam2 == Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (iParam2 == Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			else if (iParam2 < Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 4:
			if (((Global_2714635.f_17 || Global_2714635.f_18) || Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_119 == 7) || Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_119 == 2)
			{
				if (BitTest(Global_1058068.f_2, (24 + iParam1)))
				{
					iVar0 = 1;
				}
			}
			else if (iParam2 <= Global_1058068.f_14[iParam1])
			{
				if (BitTest(Global_1058068.f_2, (24 + iParam1)))
				{
					iVar0 = 1;
				}
			}
			break;
		
		case 9:
			if (Global_1058068.f_104[iParam1] >= iParam4 && iParam2 <= Global_1058068.f_14[iParam1])
			{
				iVar0 = 1;
			}
			if (iParam1 > -1)
			{
				if ((iParam5 > -1 && Global_1058068.f_14[iParam1] > -1) && iParam5 <= Global_1058068.f_14[iParam1])
				{
					iVar0 = 1;
				}
			}
			break;
	}
	return iVar0;
}

void func_57()
{
	int iVar0;
	var uVar1[64];
	int iVar66;
	struct<3> Var67;
	float fVar70;
	
	if (Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_119 == 2)
	{
		if (!unk_0xF34D8FCAE3FD4EE4())
		{
			iVar0 = unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar1, -1);
			iVar66 = 0;
			while (iVar66 <= iVar0)
			{
				if (iVar66 < 64)
				{
					if (unk_0xE5965CDF24F93A9F(uVar1[iVar66]))
					{
						if (unk_0x15CAA6D7B11F1A7C(uVar1[iVar66]) == joaat("ig_rashcosvki"))
						{
							Var67 = { unk_0x6B62510F212526DC(uVar1[iVar66], 1) };
							if (func_58(Var67, 1707f, 2520f, 45f, 5f, 0))
							{
								if (Var67.f_2 <= 45f)
								{
									if (unk_0x3A8B0F5B0E3DE13A(uVar1[iVar66]))
									{
										unk_0x51BB443B279E4104(uVar1[iVar66]);
										fVar70 = 0f;
										unk_0x9CD4CBF2BBE10F00(Var67, &fVar70, 0, 0);
										Var67.f_2 = fVar70;
										unk_0xC64B6E13A6A7F517(uVar1[iVar66], Var67, 1, 0, 0, 1);
										unk_0xEB087B19F63AB053(uVar1[iVar66], 0, 0);
									}
								}
							}
						}
						else
						{
							iVar66++;
						}
					}

int func_58(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	if (Global_4718592.f_87009 == 380938673 || Global_4718592.f_87009 == 1597839856)
	{
		if (!BitTest(Global_4718592.f_35, 2))
		{
			unk_0xCED9E32812D6C7C7(&(Global_4718592.f_35), 2);
		}
	}
}

void func_60()
{
	int iVar0;
	
	if (Global_4718592.f_87009 != Global_262145.f_31366[2])
	{
		iLocal_161 = 0;
		func_64(&Local_159);
		return;
	}
	if (!unk_0xF34D8FCAE3FD4EE4())
	{
		iLocal_161 = 0;
		func_64(&Local_159);
		return;
	}
	iVar0 = unk_0xE621FDA45E283BE7("FIX_LAMAR", 0);
	if (func_45(iVar0))
	{
		if (unk_0xD9E56EC8ED04E45E(iVar0, unk_0x2E87280918B16506("Heist4CameraFlash")) && !BitTest(iLocal_161, 0))
		{
			unk_0x9DCF157443EA30D6("Heist4CameraFlash", 0, 0);
			unk_0x7E8EFD07A6DC03D3(0);
			unk_0xCED9E32812D6C7C7(&iLocal_161, false);
			func_63(&Local_159, 0, 0);
		}
		if (unk_0xD9E56EC8ED04E45E(iVar0, unk_0x2E87280918B16506("Heist4CameraFlash2")) && !BitTest(iLocal_161, 1))
		{
			unk_0x9DCF157443EA30D6("Heist4CameraFlash", 0, 0);
			unk_0x7E8EFD07A6DC03D3(0);
			unk_0xCED9E32812D6C7C7(&iLocal_161, true);
			func_63(&Local_159, 0, 0);
		}
		if (unk_0xD9E56EC8ED04E45E(iVar0, unk_0x2E87280918B16506("Heist4CameraFlash3")) && !BitTest(iLocal_161, 2))
		{
			unk_0x9DCF157443EA30D6("Heist4CameraFlash", 0, 0);
			unk_0x7E8EFD07A6DC03D3(0);
			unk_0xCED9E32812D6C7C7(&iLocal_161, 2);
			func_63(&Local_159, 0, 0);
		}
		if (func_62(&Local_159) && func_61(Local_159, 1500, 0))
		{
			func_64(&Local_159);
			unk_0x1C2089BF9D3135D3();
			unk_0xDE903AC1B5BBC358();
		}
	}
}

int func_61(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x9315DBF7D972F07A() && !bParam3)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_62(var uParam0)
{
	return uParam0->f_1;
}

void func_63(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

void func_64(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	
	if (Global_4718592.f_87009 != Global_262145.f_31359[5])
	{
		iLocal_83 = 0;
		return;
	}
	unk_0xCED9E32812D6C7C7(&(Global_4718592.f_128754[0 /*565*/].f_18), 20);
	unk_0xB0550BC91B0159D6(&(Global_4718592.f_128754[0 /*565*/].f_16), 3);
	if (!unk_0xF34D8FCAE3FD4EE4())
	{
		iLocal_83 = 0;
		return;
	}
	if (Global_1958768 == -1)
	{
		iLocal_83 = 0;
		return;
	}
	iVar0 = (Global_1958768 - func_67());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		return;
	}
	if (iLocal_83)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		if (iVar1 >= Global_1058068.f_94[0])
		{
		}
		else
		{
			if (BitTest(Global_1853131[iVar3 /*888*/].f_36.f_18, 6))
			{
			}
			else if (BitTest(Global_1853131[iVar3 /*888*/].f_36.f_18, 14))
			{
			}
			else if (Global_1853131[iVar3 /*888*/].f_205 == 8)
			{
			}
			else
			{
				if (iVar3 == unk_0x9E2D6C50374FCFA9())
				{
					iVar2 = iVar1;
					Jump @265; //curOff = 244
				}
				iVar1++;
			}
			iVar3++;
		}
	}
	if (iVar2 >= 4)
	{
		return;
	}
	Var4 = { Global_4718592.f_128754[iVar0 /*565*/].f_26[iVar2 /*3*/] };
	fVar7 = Global_4718592.f_128754[iVar0 /*565*/].f_66[iVar2];
	if (func_66(Var4))
	{
		return;
	}
	unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
	unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Var4, 1, 0, 0, 1);
	unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fVar7);
	iLocal_83 = 1;
}

int func_66(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_67()
{
	if (Global_4718592.f_138377 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_68()
{
	if (Global_1977278 || Global_1977277)
	{
		if ((!func_34() && !func_69()) && !func_30())
		{
			Global_1977278 = 0;
			Global_1977277 = 0;
		}
	}
}

bool func_69()
{
	return Global_2714635.f_692;
}

void func_70()
{
	if (Global_4718592.f_87009 != Global_262145.f_31359[5])
	{
		return;
	}
	unk_0xCED9E32812D6C7C7(&(Global_4718592.f_128754[2 /*565*/].f_19), 2);
}

void func_71()
{
	if (Global_4718592.f_87009 != Global_262145.f_31359[3] || Global_1574631.f_18 != 0)
	{
		if (iLocal_37)
		{
			Global_1058359 = { 0f, 0f, 0f };
			unk_0xB0550BC91B0159D6(&(Global_1058068.f_280), 17);
			unk_0xB0550BC91B0159D6(&(Global_1058030.f_30), 30);
			unk_0xB0550BC91B0159D6(&(Global_1058030.f_35), 7);
			unk_0xB0550BC91B0159D6(&(Global_1058030.f_31), 6);
		}
		iLocal_37 = 0;
		func_64(&uLocal_35);
		return;
	}
	if (Global_1058068.f_14[0] == 10)
	{
		if (!func_62(&uLocal_35))
		{
			func_73(&uLocal_35, 0, 0);
		}
		else if (func_72(&uLocal_35, 14000, 0))
		{
			if (!iLocal_37)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1058068.f_280), 17);
				iLocal_37 = 1;
				Global_4718592.f_112933[2 /*1582*/].f_1529 = 0;
				unk_0xB0550BC91B0159D6(&(Global_4718592.f_112933[2 /*1582*/].f_5), 20);
				unk_0xB0550BC91B0159D6(&(Global_4718592.f_112933[2 /*1582*/].f_5), 28);
				unk_0xCED9E32812D6C7C7(&(Global_1058030.f_30), 30);
				unk_0xCED9E32812D6C7C7(&(Global_1058030.f_35), 7);
				unk_0xCED9E32812D6C7C7(&(Global_1058030.f_31), 6);
				Global_1058359 = { Global_1058356 };
			}
		}
	}
}

int func_72(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_63(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

void func_74()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (Global_4718592.f_87009 != Global_262145.f_31359[5] || Global_1574631.f_18 != 0)
	{
		iLocal_38 = 0;
		iLocal_39 = 0;
		iLocal_41 = 0;
		iLocal_40 = 0;
		return;
	}
	if (iLocal_39 >= 4)
	{
		return;
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_41))
	{
		Var0 = { -1003f, -3007.9f, 15.2f };
		iLocal_41 = unk_0xFE15FEB341652241(Var0, 3f, joaat("schafter6"), 65602);
		return;
	}
	if (!BitTest(iLocal_38, iLocal_40))
	{
		iVar3 = (-1 + iLocal_40);
		iVar4 = unk_0xAB793EA186AB8DAA(iLocal_41, iVar3, 1);
		if (unk_0xE5965CDF24F93A9F(iVar4) && unk_0x3A8B0F5B0E3DE13A(iVar4))
		{
			unk_0x9210F85E9CD785F1(iVar4, 0);
			unk_0x4536AE3DABDE0C44(iVar4, 1);
			unk_0xD6A76BAB45A4B460(iVar4, 106, 0);
			unk_0xD6A76BAB45A4B460(iVar4, 107, 0);
			unk_0xD6A76BAB45A4B460(iVar4, 108, 0);
			unk_0xCED9E32812D6C7C7(&iLocal_38, iLocal_40);
			iLocal_39++;
		}
	}
	bLocal_40++;
	if (bLocal_40 >= (8 - 1))
	{
		bLocal_40 = false;
	}
}

void func_75()
{
	struct<3> Var0;
	int iVar3;
	
	if (Global_4718592.f_87009 != Global_262145.f_31359[5] || Global_1574631.f_18 != 0)
	{
		iLocal_33 = 0;
		iLocal_34 = 0;
		return;
	}
	if ((unk_0x8142A6539DDC180F() % 30) != 0)
	{
		return;
	}
	Var0 = { -952.13f, -2990.26f, 22.73f };
	iVar3 = 1906226714;
	if (!unk_0xE5965CDF24F93A9F(iLocal_33))
	{
		iLocal_33 = unk_0xFE15FEB341652241(Var0, 2f, joaat("jet"), 16386);
		if (!unk_0xE5965CDF24F93A9F(iLocal_33))
		{
			return;
		}
	}
	if (!unk_0x3A8B0F5B0E3DE13A(iLocal_33))
	{
		return;
	}
	if (!unk_0xBCC73B466E2B2350(iLocal_34))
	{
		iLocal_34 = unk_0xA0F62C1038208492(Var0);
		return;
	}
	unk_0x9EE5DF347F5D97CA(iLocal_33, iLocal_34, iVar3);
}

void func_76()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	if (Global_1958768 == -1)
	{
		func_80();
		return;
	}
	iVar0 = (Global_1958768 - func_79());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		func_80();
		return;
	}
	sVar1 = func_78(&(Global_4718592.f_128754[iVar0 /*565*/]));
	if (!unk_0x3C57C2F07FEE34D2("FIX_BIL_MCS2", sVar1) && !unk_0x3C57C2F07FEE34D2("FIX_TRIP2_MCS1", sVar1))
	{
		func_80();
		return;
	}
	iLocal_32 = 1;
	if (unk_0xC6398AABC3E92273() && !Global_1058366)
	{
		unk_0x6D23F8C14190D353();
	}
	Global_1058366 = 1;
	if (!unk_0xF34D8FCAE3FD4EE4())
	{
		return;
	}
	func_63(&uLocal_30, 0, 0);
	iVar2 = func_77(&uLocal_30, 0, 0);
	iVar3 = unk_0x9E3BE9BFA8265D37() + 5000;
	if (iVar2 > iVar3)
	{
		if (unk_0xF34D8FCAE3FD4EE4())
		{
			unk_0xA43ADA94826528F5();
		}
		unk_0x6D23F8C14190D353();
	}
}

int func_77(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0);
		}
		else
		{
			return unk_0x780A854E3A976A66(unk_0xE75390F3CA208D5E(), *uParam0);
		}
	}
	return unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0);
}

var func_78(var uParam0)
{
	return uParam0;
}

int func_79()
{
	if (Global_4718592.f_138377 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_80()
{
	func_64(&uLocal_30);
	if (iLocal_32)
	{
		iLocal_32 = 0;
		Global_1058366 = 0;
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_62(&uLocal_22))
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
		if (func_72(&uLocal_22, 60000, 0))
		{
			func_73(&uLocal_22, 0, 0);
			func_64(&uLocal_22);
		}
	}
	if (func_62(&uLocal_20) && func_72(&uLocal_20, 1000, 0))
	{
		if (iLocal_29 == -1)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				iLocal_29 = unk_0xA9ADCC8D104AA552();
				unk_0x979FC7400A5D0CD2(iLocal_29, "05", unk_0xE2D3D51028F0428A(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (func_72(&uLocal_20, 4000, 0))
		{
			if (!unk_0x78D9ADD511FEAD8B(iLocal_29))
			{
				unk_0xF889BDFCC181BA9F(iLocal_29);
			}
			unk_0xCDBCC1BC1184B002(iLocal_29);
			iLocal_29 = -1;
			unk_0x0AF8D3A06BB92903("DLC_GR_CS2_General_Scene");
			func_73(&uLocal_20, 0, 0);
			func_64(&uLocal_20);
		}
	}
	if (!iLocal_14 && !func_88())
	{
		return;
	}
	iLocal_14 = 1;
	unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	if (!unk_0xE5965CDF24F93A9F(iLocal_13))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			iLocal_13 = unk_0x0A7322C6D0E1A985(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
			unk_0xF1A23B343DFEDFD0(iVar0);
			unk_0x5C65DDDC219B3AA5(iLocal_13, true);
			unk_0x7A93DEA53EFC3CF2(iLocal_13, 8000);
			iVar1 = func_19(7868, -1, 0);
			func_87(7868, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			unk_0x806FE7B7DB6B4483(&Var2);
			Local_24 = { unk_0x6B62510F212526DC(iLocal_13, 0) };
			iLocal_27 = 0;
		}
	}
	else
	{
		func_86();
		if (unk_0xE9E8955A780DDA01() || unk_0xECD40FEF3CF43BDB())
		{
			if (iLocal_28 == -1)
			{
				unk_0x66B27A59829491D3("DLC_GR_CS2_General_Scene");
				iLocal_28 = unk_0xA9ADCC8D104AA552();
				unk_0x979FC7400A5D0CD2(iLocal_28, "07", iLocal_13, "DLC_GR_CS2_Sounds", 0, 0);
			}
			if (!iLocal_15)
			{
				if (func_72(&uLocal_16, 4500, 0))
				{
					unk_0x5C65DDDC219B3AA5(iLocal_13, false);
					func_73(&uLocal_16, 0, 0);
					func_64(&uLocal_16);
					func_63(&uLocal_18, 0, 0);
					iLocal_15 = 1;
				}
			}
			else
			{
				fVar46 = (unk_0xBBDA792448DB5A89(func_77(&uLocal_18, 0, 0)) / unk_0xBBDA792448DB5A89(func_85()));
				fVar47 = (unk_0xBBDA792448DB5A89(func_77(&uLocal_16, 0, 0)) / unk_0xBBDA792448DB5A89(func_84()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_82(Local_24, func_83(), fVar47) };
				unk_0xC64B6E13A6A7F517(iLocal_13, Var48, 1, 0, 0, 1);
				if (fVar47 >= 1f)
				{
					iLocal_27++;
					Local_24 = { unk_0x6B62510F212526DC(iLocal_13, 0) };
					func_73(&uLocal_16, 0, 0);
					func_64(&uLocal_16);
					if (func_84() == -1)
					{
						unk_0x4BDA5AFD88C085EB(&iLocal_13);
						unk_0xD7C2019EC11E9A90();
						if (!unk_0x78D9ADD511FEAD8B(iLocal_28))
						{
							unk_0xF889BDFCC181BA9F(iLocal_28);
						}
						unk_0xCDBCC1BC1184B002(iLocal_28);
						iLocal_28 = -1;
						func_63(&uLocal_20, 0, 0);
						func_63(&uLocal_22, 0, 0);
						func_73(&uLocal_18, 0, 0);
						func_64(&uLocal_18);
						Local_24 = { 0f, 0f, 0f };
						iLocal_27 = 0;
						iLocal_14 = 0;
						iLocal_15 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_82(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_83()
{
	switch (iLocal_27)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_84()
{
	switch (iLocal_27)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_85()
{
	return 3150;
}

void func_86()
{
	struct<3> Var0;
	
	Var0 = { unk_0x63A8BF5E6C2BF85C(iLocal_13, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	unk_0x8CE3D365F064F69E(iLocal_13, Var0, 2, 1);
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_20(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_88()
{
	if (((((((func_11(22107, -1) && Global_2671447 == 7) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0)) && func_91(unk_0xE2D3D51028F0428A(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2715551.f_3076.f_178 >= 1) && Global_2715551.f_3076.f_178 < 4) && func_90()) && func_89())
	{
		return 1;
	}
	return 0;
}

int func_89()
{
	if (func_11(15476, -1) && func_19(5452, func_16(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x234904AD6416665B(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_91(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_92()
{
	if ((func_100(unk_0x9E2D6C50374FCFA9()) && func_30()) && func_97(unk_0xE2D3D51028F0428A()))
	{
		func_96(45, 8, 1);
		Global_1946941.f_505 = 0;
		iLocal_216 = 1;
	}
	else if (iLocal_216)
	{
		func_93(45, 8, 1);
		iLocal_216 = 0;
	}
}

void func_93(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xB0550BC91B0159D6(&(Global_100032.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_95() == 0)
		{
			uVar0 = func_19(func_94(iParam0), -1, 0);
			unk_0xB0550BC91B0159D6(&uVar0, bParam1);
			func_87(func_94(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_112922.f_668[iParam0]), bParam1);
	}
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10835;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12581;
}

int func_95()
{
	return Global_31511;
}

void func_96(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_100032.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_95() == 0)
		{
			uVar0 = func_19(func_94(iParam0), -1, 0);
			unk_0xCED9E32812D6C7C7(&uVar0, bParam1);
			func_87(func_94(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_112922.f_668[iParam0]), bParam1);
	}
}

int func_97(int iParam0)
{
	if (func_99(iParam0))
	{
		return 1;
	}
	if (func_98(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_98(int iParam0)
{
	return unk_0xD132EDDA78FF4A51(iParam0, -1360.612f, 161.8972f, -99.9951f, -1368.39f, 161.8997f, -97.24433f, 7.25f, 0, 1, 0);
}

bool func_99(int iParam0)
{
	return unk_0xD132EDDA78FF4A51(iParam0, -1352.578f, 161.7798f, -100.4443f, -1352.477f, 168.3758f, -97.94434f, 6f, 0, 1, 0);
}

int func_100(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_101(Global_2689224[iParam0 /*451*/].f_317.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

void func_102()
{
	func_103(&uLocal_215);
}

void func_103(var uParam0)
{
	var uVar0;
	var uVar1[1];
	
	if (((Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30 <= 0 && !func_143(unk_0x9E2D6C50374FCFA9())) && !func_140()) && !func_139(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_138(unk_0x9E2D6C50374FCFA9()) && !func_137(unk_0x9E2D6C50374FCFA9()))
		{
		}
		else
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1);
			}
			else
			{
				unk_0x9A39844D6003635C(unk_0xE2D3D51028F0428A(), &uVar1);
				uVar0 = uVar1[0];
			}
			func_104(&uVar0, uParam0);
		}
	}
}

void func_104(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (!func_50(unk_0x9E2D6C50374FCFA9()))
	{
		bVar0 = false;
		bVar1 = false;
		if ((unk_0xE5965CDF24F93A9F(*uParam0) && unk_0x04D9F44466CBF3CA(*uParam0)) && unk_0x55A0C756C4A8220C(*uParam0, 0))
		{
			if (func_136(*uParam0, 1))
			{
				if (*uParam0 == func_135() && func_133())
				{
					return;
				}
				if (unk_0xC3B76795ECBDEF41(*uParam0, "Player_Vehicle") == -1)
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *uParam0, 1) && !func_132(*uParam0))
					{
						if (!((func_131(unk_0x9E2D6C50374FCFA9()) || func_139(unk_0x9E2D6C50374FCFA9())) || func_125(unk_0x9E2D6C50374FCFA9(), 0, -1)) || Global_1977177)
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					if (func_132(*uParam0))
					{
						return;
					}
					iVar3 = 0;
					while (iVar3 < 32)
					{
						bVar4 = unk_0xA1087A6350CD9244(iVar3);
						if (func_21(bVar4, 0, 0))
						{
							if (unk_0xC3B76795ECBDEF41(*uParam0, "Player_Vehicle") == unk_0x4AE7F6D227ED332C(bVar4))
							{
								bVar1 = true;
							}
						}
						iVar3++;
					}
					if (!bVar1)
					{
						bVar0 = true;
					}
				}
			}
			else if (func_124(*uParam0, 1))
			{
				if (unk_0xC3B76795ECBDEF41(*uParam0, "Player_Truck") == -1)
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *uParam0, 1) && !func_132(*uParam0))
					{
						bVar0 = true;
					}
				}
				else
				{
					if (func_132(*uParam0))
					{
						return;
					}
					iVar3 = 0;
					while (iVar3 < 32)
					{
						bVar4 = unk_0xA1087A6350CD9244(iVar3);
						if (func_21(bVar4, 0, 0))
						{
							if (unk_0xC3B76795ECBDEF41(*uParam0, "Player_Truck") == unk_0x4AE7F6D227ED332C(bVar4))
							{
								bVar1 = true;
							}
						}
						iVar3++;
					}
					if (!bVar1)
					{
						bVar0 = true;
					}
				}
			}
			else if (func_123(*uParam0, 1))
			{
				if (unk_0xC3B76795ECBDEF41(*uParam0, "Player_Hacker_Truck") == -1)
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *uParam0, 1) && !func_132(*uParam0))
					{
						bVar0 = true;
					}
				}
				else
				{
					if (func_132(*uParam0))
					{
						return;
					}
					iVar3 = 0;
					while (iVar3 < 32)
					{
						bVar4 = unk_0xA1087A6350CD9244(iVar3);
						if (func_21(bVar4, 0, 0))
						{
							if (unk_0xC3B76795ECBDEF41(*uParam0, "Player_Hacker_Truck") == unk_0x4AE7F6D227ED332C(bVar4))
							{
								bVar1 = true;
							}
						}
						iVar3++;
					}
					if (!bVar1)
					{
						bVar0 = true;
					}
				}
			}
			else if (func_122(*uParam0, 1))
			{
				iVar2 = unk_0xC3B76795ECBDEF41(*uParam0, "Veh_Modded_By_Player");
				if (!unk_0xD64C90C3F536F963(*uParam0))
				{
					if (iVar2 != 0 && iVar2 != -1)
					{
						if (unk_0x3A8B0F5B0E3DE13A(*uParam0))
						{
							unk_0x05B874E9ABFF72B4(*uParam0, "Veh_Modded_By_Player", -1);
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				else if (iVar2 != 0 && iVar2 != -1)
				{
					if (unk_0x3A8B0F5B0E3DE13A(*uParam0))
					{
						if (!func_121(iVar2))
						{
							unk_0x05B874E9ABFF72B4(*uParam0, "Veh_Modded_By_Player", -1);
						}
					}
				}
				else
				{
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!func_119(*uParam0, 1, 1, 0, 0, 0, 1, 0, 1) && !Global_1932654)
			{
				if (!func_143(unk_0x9E2D6C50374FCFA9()))
				{
					if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(*uParam1, unk_0x0A89FDFA763DCAED())) >= 1000)
					{
						iVar3 = 0;
						while (iVar3 < 32)
						{
							bVar4 = unk_0xA1087A6350CD9244(iVar3);
							if (func_21(bVar4, 0, 1))
							{
								if (unk_0xF6F5D18EF8EAB859(unk_0x407E03586628E458(bVar4), *uParam0, 0))
								{
									func_117(func_118(bVar4), 1, 0f, 0, 0, 0, -1);
								}
							}
							iVar3++;
						}
						*uParam1 = unk_0x0A89FDFA763DCAED();
					}
				}
			}
			if (!unk_0x3A8B0F5B0E3DE13A(*uParam0))
			{
				if (!unk_0xD852449BF2E2BA8D())
				{
					if (func_119(*uParam0, 1, 1, 1, 0, 0, 1, 0, 1))
					{
						unk_0xE7DD33D0E2A313F4(*uParam0);
					}
				}
			}
			else
			{
				if (unk_0x6BD06F4780EAC5DD("MPBitset", 3) && unk_0xF2549FF74D64B720(*uParam0, "MPBitset"))
				{
					iVar5 = unk_0xC3B76795ECBDEF41(*uParam0, "MPBitset");
				}
				if (BitTest(iVar5, 21) && unk_0x2B5F4FBAF644BEC8(*uParam0))
				{
					if (unk_0xF2549FF74D64B720(*uParam0, "Player_Vehicle") && !unk_0xC3B76795ECBDEF41(*uParam0, "Player_Vehicle") == -1)
					{
						func_114(*uParam0);
					}
					if (!unk_0x3F1009A1E4E10C6A(*uParam0))
					{
						if (func_119(*uParam0, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							unk_0xB970266897BDB48D(*uParam0, 0, 1);
						}
					}
				}
				else if (unk_0xE5965CDF24F93A9F(*uParam0))
				{
					if (((unk_0x7010991FDA59D3F2(*uParam0, joaat("terbyte")) || unk_0x7010991FDA59D3F2(*uParam0, joaat("avenger"))) || unk_0x7010991FDA59D3F2(*uParam0, joaat("phantom3"))) || unk_0x7010991FDA59D3F2(*uParam0, joaat("hauler2")))
					{
					}
					else
					{
						func_105(uParam0, 0);
						*uParam0 = -1;
					}
				}
			}
		}
	}
}

void func_105(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (func_113(*uParam0, &bVar0))
	{
		if (unk_0x817B926B53C0589A(*uParam0))
		{
			if (unk_0xCD52E82290C8C97A(*uParam0, &iVar1))
			{
			}
			unk_0x6C2FF30B05B4D198(*uParam0);
			if (unk_0xE5965CDF24F93A9F(iVar1))
			{
				func_105(&iVar1, 0);
			}
		}
		if (unk_0xE2ED785E8DB4D3FF(*uParam0))
		{
			unk_0xE6451C2F193342C7(*uParam0, 1, 1);
		}
		func_114(*uParam0);
		if (func_106(*uParam0) || iParam1)
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *uParam0, 0))
				{
					unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
				}
			}
			unk_0xD59CC8123FD1A789(uParam0);
		}
		else
		{
			unk_0x3D81769BEC61BFF8(uParam0);
		}
	}
	else if (bVar0)
	{
		unk_0x3D81769BEC61BFF8(uParam0);
	}
}

int func_106(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	if (func_112(iParam0))
	{
		return 1;
	}
	if (func_109(iParam0))
	{
		return 1;
	}
	if (!unk_0x2B5F4FBAF644BEC8(iParam0))
	{
		return 1;
	}
	if (Var0.f_2 < -89f)
	{
		return 1;
	}
	if (unk_0xB950B5D01E8A4868(iParam0, 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, 0, 0, 0))
	{
		return 1;
	}
	if (unk_0xD132EDDA78FF4A51(iParam0, 924.536f, -18.629f, 75.715f, 942.786f, 11.196f, 83.665f, 18.475f, 0, 0, 0))
	{
		return 1;
	}
	if (unk_0xB950B5D01E8A4868(iParam0, 1333.976f, 176.982f, -51.1537f, 1427.791f, 260.917f, -43.4137f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD132EDDA78FF4A51(iParam0, -2179.408f, 1070.749f, -28.9093f, -2178.831f, 1151.052f, -17.20441f, 95.25f, 0, 1, 0))
	{
		return 1;
	}
	if (func_108(iParam0))
	{
		return 1;
	}
	if (func_107(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	if (unk_0xB950B5D01E8A4868(iParam0, -1831.333f, 980.1857f, -29.846f, -2225.468f, 1241.217f, -9.4235f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xB950B5D01E8A4868(iParam0, -1831.333f, 972.858f, 23.18378f, -2225.468f, 1248.923f, 43.60629f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	if (unk_0xB950B5D01E8A4868(iParam0, -1372.786f, 135.814f, -100.586f, -1319.589f, 169.764f, -87.918f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (func_110(iParam0, 91, -1, 0) || func_110(iParam0, 97, -1, 0))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2, float fParam3)
{
	struct<3> Var0;
	
	if (iParam1 <= 0)
	{
		return 0;
	}
	Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	if ((iParam2 == 2 || iParam2 == -1) && !func_111(iParam1, -1))
	{
		if (unk_0x987A5F1E1A67E3C0(Var0, Global_1312124[iParam1 /*1951*/].f_1742.f_150, 1) <= 30f)
		{
			if (unk_0x5F8653E60ED2288E(Var0, Global_1312124[iParam1 /*1951*/].f_1742.f_153, Global_1312124[iParam1 /*1951*/].f_1742.f_153.f_3, Global_1312124[iParam1 /*1951*/].f_1742.f_153.f_6, 0, 1))
			{
				return 1;
			}
		}
	}
	if (iParam2 != 2)
	{
		if (unk_0x987A5F1E1A67E3C0(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_47, 1) <= 40f)
		{
			if ((unk_0x5F8653E60ED2288E(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_57[0 /*8*/], Global_1312124[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_3, Global_1312124[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || unk_0x5F8653E60ED2288E(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_57[1 /*8*/], Global_1312124[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_3, Global_1312124[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1)) || unk_0x5F8653E60ED2288E(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/], Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_3, Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1))
			{
				return 1;
			}
			else if (unk_0x987A5F1E1A67E3C0(Var0, Global_1312124[iParam1 /*1951*/].f_146.f_1592, 1) < (Global_1312124[iParam1 /*1951*/].f_146.f_1595 + fParam3) && (Var0.f_2 > Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_2 && Var0.f_2 < Global_1312124[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_3.f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_111(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_112(int iParam0)
{
	if ((unk_0xD132EDDA78FF4A51(iParam0, 358.9707f, -1597.852f, 20.00015f, 412.8247f, -1640.907f, 40.54209f, 33.25f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(iParam0, 406.6252f, -1644.242f, 20.04219f, 417.1268f, -1652.937f, 41.951f, 20.25f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iParam0, 414.6758f, -1635.666f, 20.09278f, 423.5415f, -1635.645f, 41.04316f, 15.5f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0xA6A089369417736E(iParam0))
		{
			if (unk_0x58FDF0B505AA2260(iParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					unk_0x2D58A6131679D82C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(iParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_114(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0xD64C90C3F536F963(iParam0))
	{
		unk_0x2706C6FAA25AB1B7(iParam0, 1);
		unk_0x64C030791CEA9715(iParam0);
		if (!func_116())
		{
			unk_0x5C65DDDC219B3AA5(iParam0, false);
		}
		func_115(iParam0);
	}
}

void func_115(int iParam0)
{
	int iVar0;
	
	if (unk_0x6BD06F4780EAC5DD("Player_Vehicle", 3))
	{
		if (!unk_0xF2549FF74D64B720(iParam0, "Player_Vehicle"))
		{
			unk_0x05B874E9ABFF72B4(iParam0, "Player_Vehicle", -1);
		}
		else
		{
			iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "Player_Vehicle");
			unk_0x05B874E9ABFF72B4(iParam0, "Player_Vehicle", -1);
		}
	}
	if (unk_0x6BD06F4780EAC5DD("Previous_Owner", 3))
	{
		if (!iVar0 == -1)
		{
			if (!unk_0xF2549FF74D64B720(iParam0, "Previous_Owner"))
			{
				unk_0x05B874E9ABFF72B4(iParam0, "Previous_Owner", iVar0);
			}
			else
			{
				unk_0x05B874E9ABFF72B4(iParam0, "Previous_Owner", iVar0);
			}
		}
	}
}

bool func_116()
{
	return BitTest(Global_1946941.f_2, 10);
}

void func_117(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0.f_0 = 578856274;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0x8142A6539DDC180F();
	if (!iParam0 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 9, iParam0);
	}
}

int func_118(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, bParam0);
	}
	return uVar0;
}

int func_119(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xADD893BD545BE5FC(iParam0) + 1;
	if (iParam4 || !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_120(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xE5965CDF24F93A9F(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xE2D3D51028F0428A())
				{
				}
				else if (bParam2)
				{
					if (unk_0x65FAB09725E2FE75(iVar2))
					{
						iVar3 = unk_0xFF65CDB0EB7ACE71(iVar2);
						if (((!unk_0xF68107C40359970C(iVar2) && iVar3 != func_6()) && func_21(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0xC378B7F0D175A5B0(unk_0xFF65CDB0EB7ACE71(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xF68107C40359970C(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_120(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x7158135695FAE89D(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xE5965CDF24F93A9F(iVar0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			iVar0 = unk_0x48512AC2C4218836(iParam0, iParam1);
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_leave_vehicle")) == 1 || unk_0x174CED88B97C78D9(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iParam0, 0), unk_0x6B62510F212526DC(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_21(unk_0xA1087A6350CD9244(iVar0), 0, 0))
		{
			if (iParam0 == unk_0x4AE7F6D227ED332C(unk_0xA1087A6350CD9244(iVar0)))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0, bool bParam1)
{
	if (Global_77858)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_123(int iParam0, bool bParam1)
{
	if (Global_77858)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(int iParam0, bool bParam1)
{
	if (Global_77858)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853131[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
	{
		if (iParam2 == -1 || func_101(Global_2689224[iParam0 /*451*/].f_317.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_126(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return iParam0;
	}
	if (func_130(iParam0) != -1)
	{
		iVar0 = func_101(func_130(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_128(iParam0, 0))
			{
				return func_127(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_6();
		}
		return Global_2689224[iParam0 /*451*/].f_317.f_9;
	}
	return func_6();
}

int func_127(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1893551[iParam0 /*599*/].f_10;
	}
	return func_6();
}

bool func_128(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_129(iParam0))
		{
			return 0;
		}
	}
	return Global_1893551[iParam0 /*599*/].f_10 != func_6();
}

int func_129(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_6())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
		else if (((Global_1575054 || Global_2667223.f_2680) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_21(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
	}
	return -1;
}

int func_131(int iParam0)
{
	if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	if (unk_0x987A5F1E1A67E3C0(Var0, Global_1312124[1 /*1951*/].f_1742.f_150, 1) < 30f)
	{
		if (unk_0x5F8653E60ED2288E(Var0, Global_1312124[1 /*1951*/].f_1742.f_153, Global_1312124[1 /*1951*/].f_1742.f_153.f_3, Global_1312124[1 /*1951*/].f_1742.f_153.f_6, 0, 1))
		{
			return 1;
		}
	}
	if (unk_0x987A5F1E1A67E3C0(Var0, Global_1312124[8 /*1951*/].f_1742.f_150, 1) < 30f)
	{
		if (unk_0x5F8653E60ED2288E(Var0, Global_1312124[8 /*1951*/].f_1742.f_153, Global_1312124[8 /*1951*/].f_1742.f_153.f_3, Global_1312124[8 /*1951*/].f_1742.f_153.f_6, 0, 1))
		{
			return 1;
		}
	}
	if (unk_0x987A5F1E1A67E3C0(Var0, Global_1312124[17 /*1951*/].f_1742.f_150, 1) < 30f)
	{
		if (unk_0x5F8653E60ED2288E(Var0, Global_1312124[17 /*1951*/].f_1742.f_153, Global_1312124[17 /*1951*/].f_1742.f_153.f_3, Global_1312124[17 /*1951*/].f_1742.f_153.f_6, 0, 1))
		{
			return 1;
		}
	}
	iVar3 = 103;
	while (iVar3 <= 114)
	{
		if (unk_0x987A5F1E1A67E3C0(Var0, Global_1312124[iVar3 /*1951*/].f_146.f_47, 1) <= 40f)
		{
			if ((unk_0x5F8653E60ED2288E(Var0, Global_1312124[iVar3 /*1951*/].f_146.f_57[0 /*8*/], Global_1312124[iVar3 /*1951*/].f_146.f_57[0 /*8*/].f_3, Global_1312124[iVar3 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || unk_0x5F8653E60ED2288E(Var0, Global_1312124[iVar3 /*1951*/].f_146.f_57[1 /*8*/], Global_1312124[iVar3 /*1951*/].f_146.f_57[1 /*8*/].f_3, Global_1312124[iVar3 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1)) || unk_0x5F8653E60ED2288E(Var0, Global_1312124[iVar3 /*1951*/].f_146.f_57[2 /*8*/], Global_1312124[iVar3 /*1951*/].f_146.f_57[2 /*8*/].f_3, Global_1312124[iVar3 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1))
			{
				return 1;
			}
		}
		iVar3++;
	}
	return 0;
}

int func_133()
{
	if (func_134(2) || func_134(1))
	{
		return 1;
	}
	return 0;
}

bool func_134(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703660.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703660.f_61.f_2, (iParam0 - 32));
}

int func_135()
{
	if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == joaat("freemode"))
	{
		if (unk_0xCCDCD6672DAE6835(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_38) && unk_0x90F6E2F6488B98BA(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_38))
		{
			return unk_0xA5677134B9672173(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_38);
		}
	}
	return Global_2810701.f_298;
}

int func_136(int iParam0, bool bParam1)
{
	if (Global_77858)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_101(Global_2689224[iParam0 /*451*/].f_317.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6 != -1;
		}
		else if ((Global_1575054 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_21(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6 != -1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	if (iParam0 != func_6() && func_21(iParam0, 1, 1))
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317, 3);
	}
	return 0;
}

int func_140()
{
	if (func_142() && func_141())
	{
		return 1;
	}
	return 0;
}

var func_141()
{
	return Global_1836590;
}

var func_142()
{
	return Global_1836602;
}

bool func_143(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 11);
}

void func_144()
{
	int iVar0;
	
	if (func_45(unk_0xE2D3D51028F0428A()) && func_150(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = func_130(unk_0x9E2D6C50374FCFA9());
		if (iVar0 != -1 && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), func_147(0, iVar0), func_147(1, iVar0), 5f, 0, 1, 0))
		{
			if (unk_0x3E6C9DAD84CEFED1())
			{
				if (!Global_75027)
				{
					Global_75027 = 1;
					bLocal_209 = true;
				}
			}
			else if (bLocal_209)
			{
				Global_75027 = 0;
			}
			if (!iLocal_208)
			{
				func_145(1);
				iLocal_208 = 1;
			}
		}
		else
		{
			if (bLocal_209)
			{
				Global_75027 = 0;
			}
			if (iLocal_208)
			{
				func_145(0);
				iLocal_208 = 0;
			}
		}
	}
	else
	{
		if (bLocal_209)
		{
			Global_75027 = 0;
		}
		if (iLocal_208)
		{
			func_145(0);
			iLocal_208 = 0;
		}
	}
}

void func_145(int iParam0)
{
	if (func_146() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_146()
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

Vector3 func_147(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x6DB7FBD602C51670(func_149(iParam1, 0), func_148(iParam1, 0), 6.1458f, 3.6035f, 0.0002f);
			break;
		
		case 1:
			return unk_0x6DB7FBD602C51670(func_149(iParam1, 0), func_148(iParam1, 0), 9.8062f, -0.0547f, 2.8373f);
			break;
	}
	return 0f, 0f, 0f;
}

float func_148(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 155:
				return -110f;
				break;
			
			case 156:
				return -63.05f;
				break;
			
			case 157:
				return 89.85f;
				break;
			
			case 158:
				return 0f;
				break;
			
			default:
				return 0f;
				break;
			}
	}
	return 0f;
}

Vector3 func_149(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 155:
				return 384.814f, -60.727f, 102.363f;
				break;
			
			case 156:
				return -1020.286f, -427.3018f, 62.86114f;
				break;
			
			case 157:
				return -589.4757f, -716.5259f, 112.0051f;
				break;
			
			case 158:
				return -1003.911f, -759.604f, 60.89419f;
				break;
			
			default:
				return -1120f, -70f, -100f;
				break;
			}
	}
	return -1070f, -70f, -100f;
}

int func_150(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_101(Global_2689224[iParam0 /*451*/].f_317.f_6) == 24;
			}
		}
	}
	return 0;
}

void func_151()
{
	int iVar0;
	
	iVar0 = unk_0xB6BA8B8E3D0B41C6();
	if ((Global_1893551[iVar0 /*599*/].f_10.f_33 == 263 && Global_1893551[iVar0 /*599*/].f_10.f_182 == 5) && Global_1893551[iVar0 /*599*/].f_10.f_193 == 24)
	{
		if (((func_155(163) || func_155(164)) || func_154(iVar0, 163)) || func_154(iVar0, 164))
		{
			func_153(163);
			func_153(164);
			func_152(163);
			func_152(164);
		}
		if (!iLocal_12)
		{
			unk_0xE87A5B1B96B0EC6F(2712.903f, -366.175f, -54.234f, 2f, joaat("ch_prop_whiteboard"), 0);
			unk_0xE87A5B1B96B0EC6F(2712.903f, -372.687f, -54.234f, 2f, joaat("ch_prop_whiteboard_03"), 0);
			iLocal_12 = 1;
		}
	}
	else
	{
		unk_0xA1F6E5EF42ACDB8C(2712.903f, -366.175f, -54.234f, 2f, joaat("ch_prop_whiteboard"), 0);
		unk_0xA1F6E5EF42ACDB8C(2712.903f, -372.687f, -54.234f, 2f, joaat("ch_prop_whiteboard_03"), 0);
	}
}

void func_152(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0xB0550BC91B0159D6(&(Global_1921039.f_11.f_329[iVar0]), bVar1);
}

void func_153(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0xB0550BC91B0159D6(&(Global_1893551[unk_0x9E2D6C50374FCFA9() /*599*/].f_10.f_205[iVar0]), bVar1);
}

var func_154(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_205[iVar0], iVar1);
}

var func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Global_1921039.f_11.f_329[iVar0], iVar1);
}

void func_156()
{
	int iVar0;
	
	if (func_158(unk_0x9E2D6C50374FCFA9()) != 6)
	{
		func_157();
		return;
	}
	if (unk_0x72E575062E5D1004(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 10f, 0, 1, &iVar0, 0, 1, -1))
	{
		if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("a_m_y_hipster_03"))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
			{
				if (unk_0x32DCDA1B2F8A0694(iVar0))
				{
					Global_1957933 = 0;
				}
			}
		}
	}
}

void func_157()
{
	if (iLocal_11 == -1)
	{
		iLocal_11 = Global_1957933;
	}
	else if (Global_1957933 == 0)
	{
		Global_1957933 = iLocal_11;
	}
}

int func_158(int iParam0)
{
	if (func_161(iParam0) == 262)
	{
		return func_159(iParam0);
	}
	return -1;
}

int func_159(int iParam0)
{
	if (func_160(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_160(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)
{
	if (func_160(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

void func_162()
{
	if (Global_1922816)
	{
		unk_0xCAFE3D4FD6C43219();
	}
}

void func_163()
{
	int iVar0;
	
	if (unk_0x44859561F653DD4E())
	{
		return;
	}
	iVar0 = 0;
	if ((Global_1946935 == 1 && unk_0xB4C854DD86E40FDA(joaat("am_mp_smpl_interior_int")) == 1) && unk_0xB4C854DD86E40FDA(joaat("am_mp_armory_truck")) == 1)
	{
		iVar0 = 1;
	}
	if ((iVar0 && !func_139(unk_0x9E2D6C50374FCFA9())) && !func_138(unk_0x9E2D6C50374FCFA9()))
	{
		if (!Global_1659387.f_656)
		{
			Global_1659387.f_656 = 1;
			iLocal_206 = 1;
		}
		if (!BitTest(Global_1946941.f_4521, 1))
		{
			if (((((unk_0xE9E8955A780DDA01() && unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) && func_45(unk_0xE2D3D51028F0428A())) && !func_167()) && !func_166()) && func_164())
			{
				unk_0xCED9E32812D6C7C7(&(Global_1946941.f_4521), true);
			}
		}
	}
	else if (iLocal_206)
	{
		Global_1659387.f_656 = 0;
		iLocal_206 = 0;
	}
}

int func_164()
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_165(unk_0xE2D3D51028F0428A(), 0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
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

int func_166()
{
	if (func_35())
	{
		if (unk_0x2E87280918B16506(&(Global_22830.f_1)) == 1212453695)
		{
			return 1;
		}
	}
	return 0;
}

bool func_167()
{
	bool bVar0;
	
	if (func_45(unk_0xE2D3D51028F0428A()))
	{
		bVar0 = unk_0xB950B5D01E8A4868(unk_0xE2D3D51028F0428A(), 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, 0, 1, 0);
	}
	return bVar0;
}

void func_168()
{
	if ((func_137(unk_0x9E2D6C50374FCFA9()) && func_45(unk_0xE2D3D51028F0428A())) && !Global_2703660.f_3428)
	{
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2144.838f, 1111.555f, -25.61724f, -2144.808f, 1125.779f, -22.36767f, 7.75f, 0, 1, 0))
		{
			unk_0x9A39844D6003635C(unk_0xE2D3D51028F0428A(), &uLocal_203);
			if (func_45(uLocal_203[0]))
			{
				if (unk_0x15CAA6D7B11F1A7C(uLocal_203[0]) == joaat("vagner"))
				{
					func_169(1);
				}
				else
				{
					func_169(0);
				}
			}
		}
	}
	else
	{
		func_169(0);
	}
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1965089.f_1)
		{
			Global_1965089.f_1 = 1;
		}
	}
	else if (Global_1965089.f_1)
	{
		Global_1965089.f_1 = 0;
	}
}

void func_170()
{
	Global_262145.f_31483 = 1;
	Global_262145.f_31484 = 1;
	Global_262145.f_31485 = 1;
	Global_262145.f_31486 = 1;
	Global_262145.f_31487 = 1;
	Global_262145.f_31488 = 1;
	Global_262145.f_31489 = 1;
	Global_262145.f_31490 = 1;
	Global_262145.f_31491 = 1;
	Global_262145.f_31492 = 1;
	Global_262145.f_31493 = 1;
	Global_262145.f_31494 = 1;
	Global_262145.f_31495 = 1;
	Global_262145.f_31496 = 1;
	Global_262145.f_31497 = 1;
	Global_262145.f_31468 = 1636243200;
	Global_262145.f_31469 = 1636243200;
	Global_262145.f_31470 = 1636243200;
	Global_262145.f_31471 = 1636243200;
	Global_262145.f_31472 = 1636243200;
	Global_262145.f_31473 = 1636243200;
	Global_262145.f_31474 = 1636243200;
	Global_262145.f_31475 = 1636243200;
	Global_262145.f_31476 = 1636243200;
	Global_262145.f_31477 = 1636243200;
	Global_262145.f_31478 = 1636243200;
	Global_262145.f_31479 = 1636243200;
	Global_262145.f_31480 = 1636243200;
	Global_262145.f_31481 = 1636243200;
	Global_262145.f_31482 = 1636243200;
}

void func_171()
{
	bool bVar0;
	
	if (iLocal_202 == 1 && Global_1946908)
	{
		bVar0 = false;
		if (!func_21(unk_0x9E2D6C50374FCFA9(), 1, 0) && !BitTest(Global_1946941, 27))
		{
			bVar0 = true;
		}
		if (!bVar0 && !func_31())
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			if ((((func_45(unk_0xE2D3D51028F0428A()) && unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && unk_0xE9E8955A780DDA01()) && !func_138(unk_0x9E2D6C50374FCFA9()))
			{
				if (!func_139(unk_0x9E2D6C50374FCFA9()) && !BitTest(Global_1946941, 27))
				{
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			Global_1946921 = 0;
			Global_1946908 = 0;
			Global_1946909 = 0;
		}
	}
}

void func_172()
{
	int iVar0;
	
	iLocal_202++;
	if (iLocal_202 == 30)
	{
		iLocal_202 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_45(unk_0xE2D3D51028F0428A()) || !func_21(unk_0x9E2D6C50374FCFA9(), 1, 1)) || unk_0x44859561F653DD4E()) || unk_0xC96A605CF3E9295B()) || !func_31()) || func_139(unk_0x9E2D6C50374FCFA9())) || func_131(unk_0x9E2D6C50374FCFA9())) || func_138(unk_0x9E2D6C50374FCFA9())) || Global_2703660.f_3428) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (func_45(iVar0))
		{
			if (!unk_0xD64C90C3F536F963(iVar0))
			{
				if (unk_0xD8C646428B492BE8(iVar0))
				{
				}
				else
				{
					unk_0x2EE80CD0EAEB9B5B(iVar0, 0f);
					unk_0x9210F85E9CD785F1(iVar0, 0);
					unk_0xBED097BB6359F09C(iVar0, 0, 0, 0, 0, 0, 0, 1, 0);
				}
			}
		}
	}
}

void func_173()
{
	if (func_176())
	{
		func_73(&uLocal_199, 1, 0);
	}
	if (func_175())
	{
		if (!iLocal_196)
		{
			Global_262145.f_12920 = 1;
			Global_262145.f_12921 = 1;
			Global_262145.f_12922 = 1;
			Global_262145.f_12923 = 1;
			Global_262145.f_12924 = 1;
			Global_262145.f_12925 = 1;
			Global_262145.f_12926 = 1;
			Global_262145.f_12927 = 1;
			if (func_176())
			{
				Global_2703660.f_833.f_16 = 1;
				iLocal_195 = 1;
			}
			else if (!func_72(&uLocal_199, 1000, 1))
			{
				iLocal_195 = 1;
			}
			iLocal_196 = 1;
		}
		if (func_176() && func_174())
		{
			Global_2703660.f_833.f_16 = 1;
		}
	}
	else if (iLocal_196)
	{
		Global_262145.f_12920 = 0;
		Global_262145.f_12921 = 0;
		Global_262145.f_12922 = 0;
		Global_262145.f_12923 = 0;
		Global_262145.f_12924 = 0;
		Global_262145.f_12925 = 0;
		Global_262145.f_12926 = 0;
		Global_262145.f_12927 = 0;
		if (func_176())
		{
			Global_2703660.f_833.f_16 = 1;
		}
		iLocal_196 = 0;
	}
	if (iLocal_195)
	{
		Global_1938246.f_44 = 1;
		if (!func_62(&uLocal_197))
		{
			func_63(&uLocal_197, 1, 0);
		}
		if ((unk_0xE9E8955A780DDA01() && unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) && func_72(&uLocal_197, 2000, 1))
		{
			Global_1938246.f_44 = 0;
			iLocal_195 = 0;
			func_64(&uLocal_197);
		}
	}
}

var func_174()
{
	return Global_1964204;
}

int func_175()
{
	if (!func_45(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	switch (Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30)
	{
		case 83:
			return unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -797.2475f, 320.8778f, 186.3198f, -797.2629f, 328.7055f, 189.591f, 6.6875f, 0, 1, 0);
			break;
		
		case 84:
			return unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -797.5227f, 320.9101f, 216.0381f, -797.2699f, 328.7055f, 219.3134f, 6.6875f, 0, 1, 0);
			break;
		
		case 85:
			return unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -763.4833f, 329.0945f, 195.0859f, -763.2568f, 336.8706f, 198.3614f, 6.6875f, 0, 1, 0);
			break;
	}
	return 0;
}

int func_176()
{
	if (Global_2703660.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_177()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	func_190(1, Local_191);
	func_188(Local_193);
	if (unk_0x9E2D6C50374FCFA9() != func_6())
	{
		if ((func_187(unk_0x9E2D6C50374FCFA9()) || func_186(unk_0x9E2D6C50374FCFA9())) && !func_185())
		{
			bVar0 = true;
			if (((((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !func_139(unk_0x9E2D6C50374FCFA9())) && !func_190(1, Local_191)) && !func_188(Local_193)) && !Global_1946865) && !func_184())
			{
				iVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 1);
				if (unk_0xE5965CDF24F93A9F(iVar1) && unk_0x55A0C756C4A8220C(iVar1, 0))
				{
					if (Global_2359296[func_183() /*5559*/].f_675.f_2 != -1 && BitTest(Global_1585853[Global_2359296[func_183() /*5559*/].f_675.f_2 /*142*/].f_103, 0))
					{
						func_178(1, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!iLocal_190)
		{
			func_96(45, 2, 1);
			func_96(45, 8, 1);
			iLocal_190 = 1;
		}
	}
	else if (iLocal_190)
	{
		func_93(45, 2, 1);
		func_93(45, 8, 1);
		iLocal_190 = 0;
	}
}

void func_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_182() < 0 && Global_1958752)
	{
		return;
	}
	if (func_134(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703660.f_61.f_52, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703660.f_61.f_56, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703660.f_61.f_60, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_181(2);
	}
	else
	{
		func_181(1);
	}
	if (bParam1)
	{
		func_181(11);
	}
	if (bParam2)
	{
		func_181(32);
		if (bParam3)
		{
			if (func_182() >= 0 && BitTest(Global_1585853[func_182() /*142*/].f_103, 0))
			{
				func_181(33);
			}
		}
		else
		{
			func_180(33);
		}
		if (func_182() >= 0)
		{
			if (func_179(Global_1585853[func_182() /*142*/].f_66))
			{
				func_181(40);
			}
		}
	}
	else if (bParam5)
	{
		func_181(37);
	}
	if (bParam4)
	{
		func_181(36);
	}
	if (func_134(36))
	{
		if (func_134(2))
		{
			func_180(36);
		}
	}
	if (bParam6)
	{
		func_181(38);
	}
	if (unk_0x9315DBF7D972F07A())
	{
		Global_2810701.f_424 = unk_0x0A89FDFA763DCAED();
	}
}

int func_179(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_180(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703660.f_61.f_1, bParam0))
		{
			unk_0xB0550BC91B0159D6(&(Global_2703660.f_61.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2703660.f_61.f_2, (bParam0 - 32)))
	{
		unk_0xB0550BC91B0159D6(&(Global_2703660.f_61.f_2), (bParam0 - 32));
	}
}

void func_181(bool bParam0)
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703660.f_61.f_1, bParam0))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2703660.f_61.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2703660.f_61.f_2, (bParam0 - 32)))
	{
		unk_0xCED9E32812D6C7C7(&(Global_2703660.f_61.f_2), (bParam0 - 32));
	}
}

int func_182()
{
	return Global_2359296[func_183() /*5559*/].f_675.f_2;
}

int func_183()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_184()
{
	return unk_0x1A76A9A82BD6228C() != 0;
}

int func_185()
{
	if (func_45(unk_0xE2D3D51028F0428A()))
	{
		if (BitTest(Global_103441, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_101(Global_2689224[iParam0 /*451*/].f_317.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return Global_2689224[iParam0 /*451*/].f_317.f_6 == 122;
			}
		}
	}
	return 0;
}

int func_188(var uParam0, var uParam1)
{
	if (func_35() && (func_189(&(Global_22830.f_1), "DEL_VEH_SEL0") || func_189(&(Global_22830.f_1), "DEL_VEH_SEL3")))
	{
		func_73(&uParam0, 1, 0);
		return 1;
	}
	else if (func_62(&uParam0) && !func_72(&uParam0, 1000, 1))
	{
		return 1;
	}
	return 0;
}

int func_189(char* sParam0, char* sParam1)
{
	if (!unk_0xE8F6C1F695B25B91(uParam0))
	{
		if (!unk_0xE8F6C1F695B25B91(sParam1))
		{
			if (unk_0x3C57C2F07FEE34D2(uParam0, sParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_190(int iParam0, var uParam1, var uParam2)
{
	if (Global_75027)
	{
		func_73(&uParam1, 1, 0);
		return 1;
	}
	else if ((iParam0 && func_62(&uParam1)) && !func_72(&uParam1, 1000, 1))
	{
		return 1;
	}
	return 0;
}

void func_191()
{
	int iVar0;
	
	if ((func_30() && func_198(Global_4718592.f_138376)) && func_197() == 26)
	{
		if (!iLocal_189)
		{
			iVar0 = func_192();
			if (iVar0 != -1)
			{
				if (func_62(&(Global_1890190[iVar0 /*105*/].f_31)))
				{
					if (func_72(&(Global_1890190[iVar0 /*105*/].f_31), 37500, 0))
					{
						Global_2715551.f_6286 = -1;
						iLocal_189 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_189)
	{
		iLocal_189 = 0;
	}
}

int func_192()
{
	return func_193();
}

int func_193()
{
	struct<13> Var0;
	
	Var0 = { func_195() };
	if (func_194(Var0))
	{
		return unk_0xF6D95AC799EC5CE4(&Var0);
	}
	return func_6();
}

bool func_194(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

struct<13> func_195()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_196(iVar0))
		{
			return Global_2715551.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_196(int iParam0)
{
	return BitTest(Global_2715551.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_197()
{
	return Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_192;
}

bool func_198(int iParam0)
{
	return iParam0 == 88;
}

void func_199()
{
	int iVar0;
	
	if ((!unk_0x44859561F653DD4E() && !Global_2667223.f_2680) && !BitTest(Global_1946941, 27))
	{
		if ((((BitTest(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317, 4) && Global_1946935 == 4) && Global_1946941.f_508) && Global_1946941.f_516) && unk_0xB4C854DD86E40FDA(joaat("am_mp_fixer_hq")) == 1)
		{
			iVar0 = func_200(unk_0x9E2D6C50374FCFA9());
			if (func_101(iVar0) == 24)
			{
				if (unk_0x2981C54770E1D19C())
				{
					if (func_62(&uLocal_187))
					{
						if (func_72(&uLocal_187, 20000, 1))
						{
							unk_0xEE3A19A84A10F8B9();
							func_64(&uLocal_187);
						}
					}
					else
					{
						func_63(&uLocal_187, 1, 0);
					}
				}
				else if (func_62(&uLocal_187))
				{
					func_64(&uLocal_187);
				}
			}
			else
			{
				func_64(&uLocal_187);
			}
		}
		else
		{
			func_64(&uLocal_187);
		}
	}
	else
	{
		func_64(&uLocal_187);
	}
}

int func_200(int iParam0)
{
	if (iParam0 != func_6() && func_21(iParam0, 1, 1))
	{
		return Global_2689224[iParam0 /*451*/].f_317.f_16;
	}
	return -1;
}

void func_201()
{
	if (!func_208())
	{
		if (func_62(&uLocal_185))
		{
			func_64(&uLocal_185);
		}
		iLocal_184 = 0;
		iLocal_183 = 0;
		return;
	}
	if (((!BitTest(Global_1977247.f_1, 17) && !BitTest(Global_1977247.f_1, 0)) && func_207(unk_0x9E2D6C50374FCFA9())) && !func_205(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_62(&(Global_1977247.f_4)))
		{
			if (iLocal_184)
			{
				func_64(&(Global_1977247.f_4));
				func_202(&(Global_1977247.f_4), iLocal_183, 0, 0);
				iLocal_184 = 0;
			}
			if (!func_62(&uLocal_185))
			{
				unk_0x049557638ADE4DF8(&uLocal_185, &(Global_1977247.f_4), 2);
				iLocal_183 = 0;
			}
		}
		else if (func_62(&uLocal_185))
		{
			iLocal_183 = func_77(&uLocal_185, 0, 0);
			iLocal_184 = 1;
			func_64(&uLocal_185);
		}
	}
}

void func_202(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = unk_0x35DE445E5254AFED(func_204(bParam2, bParam3), func_203(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_203(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_204(bool bParam0, bool bParam1)
{
	if (unk_0x9315DBF7D972F07A() && !bParam0)
	{
		if (!bParam1)
		{
			return unk_0x0A89FDFA763DCAED();
		}
		else
		{
			return unk_0xE75390F3CA208D5E();
		}
	}
	return unk_0x320D1840B6DAA1CC();
}

int func_205(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977288[iParam0 /*55*/].f_27, func_206(iParam1));
	}
	return 0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 16;
		
		case 2:
			return 17;
		
		default:
	}
	return -1;
}

int func_207(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977288[iParam0 /*55*/].f_27, 2);
	}
	return 0;
}

int func_208()
{
	if ((((((!unk_0x9315DBF7D972F07A() || unk_0x44859561F653DD4E()) || func_30()) || func_211()) || func_210(unk_0x9E2D6C50374FCFA9())) || func_209(unk_0x9E2D6C50374FCFA9())) || !BitTest(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 22))
	{
		return 0;
	}
	return 1;
}

int func_209(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_2784005;
	}
	else
	{
		iVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_211()
{
	if (func_160(unk_0x9E2D6C50374FCFA9(), 0) && func_212(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

var func_212(int iParam0)
{
	return func_213(iParam0, 20);
}

var func_213(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_214()
{
	if (BitTest(Global_1946941.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_215()
{
	var uVar0;
	
	if (Global_4718592.f_87009 == Global_262145.f_31359[5])
	{
		if (!iLocal_163)
		{
			iLocal_163 = 1;
		}
	}
	else if (iLocal_163)
	{
		uVar0 = unk_0x63AC7EFB770FCB6F(-935.7f, -2992.2f, 13.9f, "v_hanger");
		if (unk_0xBCC73B466E2B2350(uVar0))
		{
			unk_0x219E451DF8882834(iVar0, 0);
			iLocal_163 = 0;
		}
	}
	if (!BitTest(Global_4718592.f_132160, 21))
	{
		if (!iLocal_164 && !unk_0x8DD54478CFA35F08("sf_dlc_fixer_hanger_door"))
		{
			unk_0xE87A5B1B96B0EC6F(-1010.708f, -2980.452f, 25.5042f, 1f, joaat("sf_fixer_door_hanger"), 1);
			iLocal_164 = 1;
		}
	}
	else if (iLocal_164)
	{
		unk_0xA1F6E5EF42ACDB8C(-1010.708f, -2980.452f, 25.5042f, 1f, joaat("sf_fixer_door_hanger"), 0);
		iLocal_164 = 0;
	}
}

void func_216()
{
	if (func_220() && (((BitTest(Global_1946941.f_4, 2) || Global_2667223.f_2681) || func_217(unk_0xE2D3D51028F0428A()) >= 10) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())))
	{
		if (func_45(unk_0xE2D3D51028F0428A()) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 4922.84f, -4907.485f, 2.228949f, 4919.344f, -4904.029f, 4.454555f, 3.25f, 0, 1, 0))
		{
			unk_0x7653D561C9574763(0, 51, 1);
			unk_0x7653D561C9574763(2, 51, 1);
		}
	}
}

int func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_218(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_43566[iVar1 /*5*/].f_3;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_43566[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_219(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_43566[iVar0 /*5*/].f_1)
		{
			return Global_43566[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_220()
{
	return func_221(unk_0x9E2D6C50374FCFA9());
}

var func_221(int iParam0)
{
	return func_222(&(Global_2689224[iParam0 /*451*/].f_433), 0);
}

var func_222(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_223()
{
	int iVar0;
	
	if (!unk_0x44859561F653DD4E())
	{
		if ((BitTest(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_344, 31) && !func_224(unk_0x9E2D6C50374FCFA9())) && !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x07899AAA5D680386(2, 51);
			unk_0x7653D561C9574763(2, 51, 1);
		}
		if (Global_1836747.f_68)
		{
			iVar0 = (Global_2715551.f_4316.f_378[70] - 2000);
			if (!func_62(&(Global_2715551.f_4316.f_227[70 /*2*/])) || func_72(&(Global_2715551.f_4316.f_227[70 /*2*/]), iVar0, 1))
			{
				func_73(&(Global_2715551.f_4316.f_227[70 /*2*/]), 1, 0);
				iLocal_162 = 1;
				Global_2715551.f_4316.f_378[70] = Global_262145.f_25453;
			}
		}
		else if (iLocal_162)
		{
			func_64(&(Global_2715551.f_4316.f_227[70 /*2*/]));
			Global_2715551.f_4316.f_378[70] = Global_262145.f_25453;
			iLocal_162 = 0;
		}
	}
}

int func_224(int iParam0)
{
	if (iParam0 != func_6())
	{
		return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_403.f_3, 6);
	}
	return 0;
}

void func_225()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if ((func_226(unk_0x9E2D6C50374FCFA9()) && func_161(unk_0x9E2D6C50374FCFA9()) != 229) && func_161(unk_0x9E2D6C50374FCFA9()) != 230)
	{
		iVar1 = 0;
		while (iVar1 < Global_1660686)
		{
			if (Global_1660686.f_1[iVar1] == 1572255940)
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			Global_1660686.f_1[Global_1660686] = 1572255940;
			Global_1660686++;
		}
	}
	else if (Global_1660686 > 0)
	{
		iVar1 = 0;
		while (iVar1 < Global_1660686)
		{
			if (Global_1660686.f_1[iVar1] == 1572255940)
			{
				Global_1660686.f_1[iVar1] = 0;
				Global_1660686 = (Global_1660686 - 1);
			}
			iVar1++;
		}
	}
}

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_213(iParam0, 9);
	}
	return 0;
}

void func_227()
{
	if (Global_2810701.f_962)
	{
		if (Global_2703660.f_61.f_16)
		{
			Global_2810701.f_962 = 0;
		}
	}
}

void func_228()
{
	if (Global_1977125.f_3 == 1)
	{
		if (!BitTest(Global_1977182.f_1, 11) && !BitTest(Global_1977125.f_10, 1))
		{
			if (func_229() && BitTest(Global_1977125.f_10, 0))
			{
				if (Global_262145.f_30589)
				{
					Global_262145.f_30589 = 0;
				}
			}
		}
	}
	else if (Global_1977125.f_3 != 0)
	{
		if (!Global_262145.f_30589)
		{
			Global_262145.f_30589 = 1;
		}
	}
}

int func_229()
{
	if (func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return func_230(unk_0xE2D3D51028F0428A(), 987.32f, 79.32f, 79.99f, 0) <= 20f;
	}
	return 0;
}

float func_230(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

void func_231()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	
	if (((unk_0x44859561F653DD4E() || !unk_0x9315DBF7D972F07A()) || !func_31()) || func_221(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	Var5 = { func_233() };
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Var2 = { func_232(iVar0) };
		if (!func_66(Var2))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Var2, Var5);
			if (fVar1 > 4E+08f)
			{
				bVar8 = true;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if (func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), 0, 0);
		}
	}
}

Vector3 func_232(int iParam0)
{
	if (iParam0 < 17)
	{
		return Global_262145.f_6158[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_233()
{
	var uVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
	}
	else
	{
		uVar0 = unk_0xE2D3D51028F0428A();
	}
	return unk_0x6B62510F212526DC(uVar0, 0);
}

void func_234()
{
	int iVar0;
	int iVar1;
	
	if (!Global_1659387.f_556)
	{
		Global_1659387.f_556 = 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		switch (iVar1)
		{
			case 174:
				func_235(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_235(int iParam0)
{
	int iVar0;
	
	unk_0x92039F20B184AB4D(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -1386010354:
			func_236(iParam0);
			break;
	}
}

void func_236(int iParam0)
{
	struct<10> Var0;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var0.f_3 = 4;
	unk_0x92039F20B184AB4D(1, uParam0, &Var0, 10);
	bVar11 = false;
	iVar10 = 0;
	while (iVar10 < Var0.f_3)
	{
		if (iVar10 < 4 && unk_0x4AE7F6D227ED332C(unk_0x9E2D6C50374FCFA9()) == Var0.f_3[iVar10])
		{
			bVar11 = true;
		}
		iVar10++;
	}
	if (bVar11)
	{
		if (unk_0x4AE7F6D227ED332C(unk_0x9E2D6C50374FCFA9()) == Var0.f_3[0])
		{
			func_237(Var0.f_2, &(Var0.f_3), Var0.f_8, Var0.f_9);
		}
		else
		{
			iVar12 = -1;
			func_237(Var0.f_2, &(Var0.f_3), Var0.f_8, iVar12);
		}
	}
}

void func_237(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (*uParam1 >= 4)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] == 0)
		{
			(*uParam1)[iVar0] = -1;
		}
		iVar0++;
	}
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!(*uParam1)[iVar0] == -1)
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar4 = (*uParam1)[iVar0];
		if (iVar4 < 0)
		{
			iVar4 = (iVar4 * -1);
		}
		iVar3 = (2147483647 - iVar2);
		if (iVar4 > iVar3)
		{
			iVar2 = (iVar4 - iVar3);
		}
		else
		{
			iVar2 = (iVar2 + iVar4);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4527588[unk_0x9E2D6C50374FCFA9() /*19*/].f_9[iVar0] = -1;
		iVar0++;
	}
	Global_4527588[unk_0x9E2D6C50374FCFA9() /*19*/].f_3 = uParam0;
	Global_4527588[unk_0x9E2D6C50374FCFA9() /*19*/].f_2 = iVar2;
	Global_4527588[unk_0x9E2D6C50374FCFA9() /*19*/] = 0;
	Global_4527588[unk_0x9E2D6C50374FCFA9() /*19*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		Global_4527588[unk_0x9E2D6C50374FCFA9() /*19*/].f_4[iVar0] = (*uParam1)[iVar0];
		iVar0++;
	}
	if (!unk_0xA829C9A2767AC8EF())
	{
		unk_0x94B5910A9C945688(1);
		unk_0x859006DB870314C5(0);
	}
	if (iParam2 == -1)
	{
		if (unk_0xA829C9A2767AC8EF())
		{
			Global_4527588[unk_0x9E2D6C50374FCFA9() /*19*/].f_14 = 0;
		}
	}
	func_239(unk_0x9E2D6C50374FCFA9(), 0, 57348, 0);
	func_238();
	Global_4516656.f_943 = 0;
}

void func_238()
{
	Global_4516656.f_944 = unk_0xE75390F3CA208D5E();
}

void func_239(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_247())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		iVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_31())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_52(unk_0x9E2D6C50374FCFA9(), 0) && !func_51()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689224[bParam0 /*451*/].f_251 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_244(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_243(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(iVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(iVar27, false);
					}
					unk_0x398C962F550CF3B4(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(iVar27, false);
				}
				unk_0xA7266A50941DBAEA(iVar27, true);
				unk_0xC099DA307DD6BC62(bParam0, 0);
				unk_0x7E9CA7389EF595E6(bParam0, 0);
				if (unk_0xA13A75665F7E0689(iVar27) && unk_0x6090FC735660B8F7(iVar27))
				{
					unk_0xAD9047296F9EA375(iVar27);
				}
				unk_0xC252F409BDE7A700(iVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_242();
					func_241();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689224[bParam0 /*451*/].f_252 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667223.f_2681)
				{
					Global_2667223.f_2681 = 0;
				}
			}
			else
			{
				if (!func_243(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(iVar27, 1);
						}
					}
					if (func_240(Global_4718592.f_138376))
					{
						unk_0x5C65DDDC219B3AA5(iVar27, true);
					}
				}
				if (Global_1575030)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(bParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(bParam0, 1);
				}
				unk_0xA7266A50941DBAEA(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(iVar27) && !unk_0xD5C6B5E3B93A5EDC(iVar27, 0))
					{
						unk_0x51BB443B279E4104(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x64E21045781AFBC9(bParam0, bParam1, iVar28);
		}
	}
}

bool func_240(int iParam0)
{
	return iParam0 == 17;
}

void func_241()
{
	struct<3> Var0;
	
	Global_2703660.f_910 = 0;
	Global_2703660.f_911 = 0;
	Global_2703660.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703660.f_917 = -1;
	Global_2703660.f_918 = 0;
	Global_2667223.f_2692 = { Var0 };
}

void func_242()
{
	Global_2667223.f_702 = 0;
	Global_2667223.f_2735 = 0;
	Global_2667223.f_515 = 0;
	Global_2667223.f_606 = 0;
	Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_214 = 0;
	Global_2667223.f_2690 = 0;
}

int func_243(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_246();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), true);
			}
		}
		if (func_52(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_245(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_246()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), false);
		}
	}
}

int func_247()
{
	if (BitTest(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2) && !Global_2715551.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_248()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	if (unk_0x44859561F653DD4E() && Global_4718592 == 0)
	{
		if (!iLocal_92)
		{
			iVar0 = 0;
			while (iVar0 < 65)
			{
				iLocal_93[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 14) && (func_26(Global_794709.f_177589[iVar0 /*13*/].f_1) || func_249(Global_794709.f_177589[iVar0 /*13*/].f_1)))
				{
					unk_0xB0550BC91B0159D6(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
					iVar1 = (iVar0 / 32);
					bVar2 = (iVar0 % 32);
					unk_0xCED9E32812D6C7C7(&(iLocal_93[iVar1]), bVar2);
				}
				iVar0++;
			}
			iLocal_92 = 1;
		}
	}
	else if (iLocal_92)
	{
		iVar0 = 0;
		while (iVar0 < 2018)
		{
			iVar3 = (iVar0 / 32);
			bVar4 = (iVar0 % 32);
			if (BitTest(iLocal_93[iVar3], bVar4))
			{
				unk_0xCED9E32812D6C7C7(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 65)
		{
			iLocal_93[iVar0] = 0;
			iVar0++;
		}
		iLocal_92 = 0;
	}
}

int func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31359[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_250()
{
	if (func_252())
	{
		func_251(0);
	}
}

void func_251(int iParam0)
{
	Global_76665 = iParam0;
}

bool func_252()
{
	return Global_76665;
}

void func_253()
{
	if (unk_0x9E2D6C50374FCFA9() == func_6())
	{
		return;
	}
	if ((BitTest(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_403.f_3, 6) || BitTest(Global_1958953, 3)) || BitTest(Global_1958953, 2))
	{
		iLocal_90 = 1;
		iLocal_91 = 1;
	}
	else
	{
		if (iLocal_90)
		{
			if (unk_0xE5965CDF24F93A9F(Global_1965740) && !unk_0x55B23FE400FCEA6B(Global_1965740, 0))
			{
				if (unk_0x3A8B0F5B0E3DE13A(Global_1965740))
				{
					unk_0x9210F85E9CD785F1(Global_1965740, 0);
					iLocal_90 = 0;
				}
				else
				{
					unk_0xE7DD33D0E2A313F4(Global_1965740);
				}
			}
			else
			{
				iLocal_90 = 0;
			}
		}
		if (iLocal_91)
		{
			if (((!unk_0x3E6C9DAD84CEFED1() && func_31()) && unk_0xE9E8955A780DDA01()) && !unk_0xDFA2E5162727D6D2())
			{
				if (unk_0xE5965CDF24F93A9F(Global_2810701.f_298) && !unk_0x55B23FE400FCEA6B(Global_2810701.f_298, 0))
				{
					if (unk_0x3A8B0F5B0E3DE13A(Global_2810701.f_298))
					{
						unk_0x9210F85E9CD785F1(Global_2810701.f_298, 0);
						iLocal_91 = 0;
					}
					else
					{
						unk_0xE7DD33D0E2A313F4(Global_2810701.f_298);
					}
				}
			}
		}
	}
}

void func_254()
{
	if (!unk_0x44859561F653DD4E() || unk_0xB4C854DD86E40FDA(joaat("fm_mission_controller_2020")) <= 0)
	{
		iLocal_82 = 0;
		return;
	}
	if (Global_262145.f_30700[7] != Global_4718592.f_87009)
	{
		iLocal_82 = 0;
		return;
	}
	if (iLocal_82)
	{
		return;
	}
	Global_4980736.f_88102[66 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88102[67 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88102[68 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88102[69 /*926*/].f_839.f_8 = 0f;
	unk_0xCED9E32812D6C7C7(&(Global_4980736.f_88102[66 /*926*/].f_530), 25);
	unk_0xCED9E32812D6C7C7(&(Global_4980736.f_88102[67 /*926*/].f_530), 25);
	unk_0xCED9E32812D6C7C7(&(Global_4980736.f_88102[68 /*926*/].f_530), 25);
	unk_0xCED9E32812D6C7C7(&(Global_4980736.f_88102[69 /*926*/].f_530), 25);
	iLocal_82 = 1;
}

void func_255()
{
	int iVar0;
	int iVar1;
	
	if (func_265(unk_0x9E2D6C50374FCFA9()) && func_264(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = func_259(unk_0x9E2D6C50374FCFA9(), 0, 1);
		if ((iVar0 != 7 && iVar0 != 8) && iVar0 != 9)
		{
			func_257(0, 8, 1);
		}
		if (func_256())
		{
			iVar1 = 0;
			while (iVar1 <= 21)
			{
				if (iVar1 < 4 || iVar1 > 7)
				{
					Global_22830.f_1616[iVar1] = 0;
				}
				if (iVar1 > 18)
				{
					StringCopy(&(Global_22830.f_79[iVar1 /*6*/]), "CELL_MP_302", 24);
				}
				iVar1++;
			}
		}
	}
}

bool func_256()
{
	return BitTest(Global_1973284, 1);
}

void func_257(int iParam0, int iParam1, int iParam2)
{
	func_87(func_258(iParam0, iParam2), iParam1, -1, 1, 0);
	switch (iParam2)
	{
		case 0:
			Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_411[iParam0] = iParam1;
			break;
		
		case 1:
			Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_468[iParam0] = iParam1;
			break;
	}
}

int func_258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 8749;
					break;
				
				case 1:
					return 9631;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 8750;
					break;
				
				case 1:
					return 9911;
					break;
			}
			break;
		
		case 2:
			return 8751;
			break;
		
		case 3:
			return 8752;
			break;
		
		case 4:
			return 8753;
			break;
		
		case 5:
			return 8754;
			break;
		
		case 6:
			return 8755;
			break;
		
		case 7:
			return 8756;
			break;
		
		case 8:
			return 8757;
			break;
		
		case 9:
			return 8758;
			break;
		
		case 10:
			return 8759;
			break;
		
		case 11:
			return 8760;
			break;
		
		case 12:
			return 8761;
			break;
		
		case 13:
			return 8762;
			break;
		
		case 14:
			return 8763;
			break;
		
		case 15:
			return 8764;
			break;
		
		case 16:
			return 8765;
			break;
		
		case 17:
			return 8766;
			break;
		
		case 18:
			return 8767;
			break;
		
		case 19:
			return 8768;
			break;
		
		case 20:
			return 8769;
			break;
		
		case 21:
			return 8770;
			break;
		
		case 22:
			return 8771;
			break;
		
		case 23:
			return 8772;
			break;
		
		case 24:
			return 8773;
			break;
		
		case 25:
			return 8774;
			break;
		
		case 26:
			return 8775;
			break;
		
		case 27:
			return 8776;
			break;
		
		case 28:
			return 8777;
			break;
		
		case 29:
			return 8778;
			break;
		
		case 30:
			return 8779;
			break;
		
		case 31:
			return 8780;
			break;
		
		case 32:
			return 8781;
			break;
		
		case 33:
			return 8782;
			break;
		
		case 34:
			return 8783;
			break;
		
		case 35:
			return 8784;
			break;
		
		case 36:
			return 8785;
			break;
		
		case 37:
		case 38:
		case 39:
		case 40:
			return 8786;
			break;
	}
	return 8749;
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_6())
	{
		switch (iParam2)
		{
			case 0:
				iVar0 = Global_1853131[iParam0 /*888*/].f_267.f_411[iParam1];
				break;
			
			case 1:
				iVar0 = Global_1853131[iParam0 /*888*/].f_267.f_468[iParam1];
				break;
		}
		iVar1 = func_263(iVar0);
		if (iVar1 != -1)
		{
			if ((func_262(iParam0, iVar1, iParam2) && func_261(iParam0, iVar1, iParam2)) || func_260(iVar1))
			{
				return iVar0;
			}
		}
	}
	return 0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 17:
		case 19:
			return 1;
			break;
	}
	return 0;
}

int func_261(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (iParam0 != func_6())
	{
		uVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_409.f_1, uVar0);
				break;
			}
	}
	return 1;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (iParam0 != func_6())
	{
		uVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_409, uVar0);
				break;
			}
	}
	return 1;
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 10;
		
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 5;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 2;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 12;
		
		case 15:
			return 11;
		
		case 16:
			return 13;
		
		case 17:
			return 9;
		
		case 18:
			return 17;
		
		case 19:
			return 18;
		
		case 20:
			return 19;
		
		case 21:
			return 14;
		
		case 22:
			return 15;
		
		case 23:
			return 16;
		
		default:
	}
	return -1;
}

int func_264(int iParam0)
{
	if (iParam0 != func_6())
	{
		return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_460.f_3, 3);
	}
	return 0;
}

int func_265(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_100(iParam0) && Global_2689224[iParam0 /*451*/].f_317.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_266()
{
	if (!func_268(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (!BitTest(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_403.f_3, 1))
	{
		if (((((((((((((func_267(0) && func_267(1)) && func_267(2)) && func_267(3)) && func_267(4)) && func_267(5)) && func_267(6)) && func_267(7)) && func_267(8)) && func_267(9)) && func_267(10)) && func_267(11)) && func_267(12)) && func_267(13))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_403.f_3), true);
		}
	}
}

var func_267(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	return BitTest(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_409, uVar0);
}

bool func_268(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_267.f_403 != 0;
}

void func_269()
{
	int iVar0;
	
	iVar0 = func_16();
	if (iVar0 == 0 || iVar0 == 1)
	{
		if (!iLocal_87[iVar0])
		{
			if (func_11(31736, -1))
			{
				func_270(32314, 1, -1);
				iLocal_87[iVar0] = 1;
			}
		}
	}
}

void func_270(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_16();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_271()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_84)
	{
		iVar0 = func_19(7854, -1, 0);
		if (iVar0 != 0)
		{
			iVar1 = iVar0;
			func_272(iVar1);
			iLocal_84 = 1;
		}
		else
		{
			iLocal_84 = 1;
		}
	}
}

void func_272(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_87(7854, iParam0, -1, 1, 0);
	func_2(7285, 122, -1, 1);
	Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_349 = iParam0;
}

void func_273()
{
	if (!func_275(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (!func_220())
	{
		return;
	}
	func_274();
	unk_0x7653D561C9574763(0, 25, 1);
}

void func_274()
{
	int iVar0;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
		}
	}
}

bool func_275(int iParam0)
{
	return func_276(func_277(iParam0));
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_277(int iParam0)
{
	if (func_161(iParam0) == 256)
	{
		return func_159(iParam0);
	}
	return -1;
}

void func_278()
{
	if (!func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return;
	}
	if (!func_280(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (!func_279())
	{
		return;
	}
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1007.262f, -79.05004f, -100.0031f, -1008.166f, -79.02464f, -98.00307f, 0.9f, 0, 1, 0))
	{
		unk_0x54E818A233B540D4(unk_0xE2D3D51028F0428A(), 0.16f);
	}
}

int func_279()
{
	if (BitTest(Global_1946941.f_505, 29) || BitTest(Global_1946941.f_505, 30))
	{
		return 1;
	}
	return 0;
}

int func_280(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_101(Global_2689224[iParam0 /*451*/].f_317.f_6) == 21;
			}
		}
	}
	return 0;
}

void func_281()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return;
	}
	if (!func_280(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (func_279())
	{
		return;
	}
	if (!iLocal_80)
	{
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1009.889f, -85.44301f, -100.4031f, -1009.788f, -94.42639f, -97.56435f, 3.5f, 0, 1, 0))
		{
			unk_0x859006DB870314C5(500);
			iLocal_81 = 0;
			iLocal_80 = 1;
		}
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1013.188f, -49.82637f, -100.0031f, -1023.535f, -49.96507f, -97.50307f, 3.5f, 0, 1, 0))
		{
			unk_0x859006DB870314C5(500);
			iLocal_81 = 1;
			iLocal_80 = 1;
		}
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1008.102f, -49.8092f, -100.0031f, -1002.001f, -49.79685f, -97.46447f, 3.5f, 0, 1, 0))
		{
			unk_0x859006DB870314C5(500);
			iLocal_81 = 2;
			iLocal_80 = 1;
		}
	}
	else
	{
		func_285(iLocal_81, &Var0, &fVar3);
		if (unk_0xA829C9A2767AC8EF() && func_283(Var0, fVar3, 0, 1, 0, 0, 1, 0, 1, 0, 0))
		{
			unk_0x5A7ACD1CDF509B0D(500);
			func_282("MUS_STIO_DOOR_R", -1);
			iLocal_80 = 0;
		}
	}
}

void func_282(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_283(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_22691.f_6 = 1;
	if (Global_2703660.f_910 && Global_2703660.f_918)
	{
		func_284(0, bParam9);
		return 1;
	}
	if (unk_0x04458B4E5D9E466A() && !bParam9)
	{
		if (Global_2703660.f_910)
		{
			func_284(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x2981C54770E1D19C() && !bParam9) && !unk_0xBC4351060BEFB0D2())
	{
		return 0;
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2703660.f_910 && !bParam11)
	{
		Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		if ((unk_0x48053974ED6F63CE((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x48053974ED6F63CE((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x48053974ED6F63CE((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x48053974ED6F63CE(fVar4) < 1f)
			{
				Global_2703660.f_910 = 0;
				Global_2703660.f_911 = 0;
				if (unk_0xBC4351060BEFB0D2())
				{
					unk_0x093F334B2F3729DB();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703660.f_912 || !Param0.f_1 == Global_2703660.f_912.f_1) || !Param0.f_2 == Global_2703660.f_912.f_2) || !fParam3 == Global_2703660.f_915)
	{
		if (Global_2703660.f_910 == 1)
		{
			if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2703660.f_916) < 10000)
			{
				return 0;
			}
			unk_0x093F334B2F3729DB();
			Global_2703660.f_911 = 1;
		}
		else
		{
			Global_2703660.f_911 = 0;
		}
		Global_2703660.f_912 = { Param0 };
		Global_2703660.f_915 = fParam3;
		Global_2703660.f_910 = 0;
	}
	if (bParam4)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			if (unk_0xE5965CDF24F93A9F(uVar0) && unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2703660.f_910 && !unk_0xBC4351060BEFB0D2())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		iParam7 = iParam7;
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (Global_2703660.f_917 > -1)
		{
			Global_2703660.f_916 = unk_0x0A89FDFA763DCAED();
			Global_2703660.f_910 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						if (unk_0x3A8B0F5B0E3DE13A(iVar0))
						{
							unk_0xC64B6E13A6A7F517(iVar0, Param0, 0, 1, 1, 1);
							unk_0xBBF86885619695CE(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								unk_0x8CE3D365F064F69E(iVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							unk_0xE7DD33D0E2A313F4(iVar0);
						}
					}
					else
					{
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 0, 0, 0, 1);
						unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam3);
					}
				}
				else
				{
					unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 0, 0, 0, 1);
					unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam3);
				}
				func_284(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0x5639E771F6085BF6();
				unk_0x8A87922C72F578EC(unk_0x9E2D6C50374FCFA9(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2703660.f_916 = unk_0x0A89FDFA763DCAED();
			Global_2703660.f_910 = 1;
		}
	}
	if (Global_2703660.f_910)
	{
		Global_22691.f_6 = 1;
		Global_2703660.f_916 = unk_0x0A89FDFA763DCAED();
		if (Global_2703660.f_917 > -1)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			}
		}
		else
		{
			if (bParam9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Global_2703660.f_912) < 2f)
				{
					if (unk_0xBC4351060BEFB0D2())
					{
						unk_0x093F334B2F3729DB();
					}
					func_284(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0xBC4351060BEFB0D2())
			{
				if (fParam12 != 0f)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						unk_0x8CE3D365F064F69E(iVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2703660.f_918 = 1;
						return 0;
					}
				}
				func_284(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

void func_284(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x080C97B891E2F3AA(0f, 1065353216);
		unk_0x94953C3FF0664F66(0f);
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x3393D1B291D1BD1B(unk_0xE2D3D51028F0428A());
	}
	if (!bParam1)
	{
		unk_0x5639E771F6085BF6();
	}
	if (unk_0xBC4351060BEFB0D2())
	{
		unk_0x093F334B2F3729DB();
	}
	func_241();
}

int func_285(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1010.057f, -84.228f, -100.4031f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 1:
			*uParam1 = { -1012.153f, -49.7938f, -100.4031f };
			*uParam2 = 270.5516f;
			return 1;
			break;
		
		case 2:
			*uParam1 = { -1009.128f, -49.7938f, -100.4031f };
			*uParam2 = 90.9647f;
			return 1;
			break;
	}
	return 0;
}

void func_286()
{
	if (!func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return;
	}
	if (!func_280(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (func_279())
	{
		return;
	}
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1010.787f, -47.99169f, -100.3851f, -1010.684f, -55.70412f, -98.15313f, 6f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1007.917f, -85.33492f, -100.3889f, -1011.801f, -85.40305f, -98.14022f, 3.5f, 0, 1, 0))
	{
		unk_0xCAC4D1050F2E6899(unk_0xE2D3D51028F0428A(), 1.499f);
	}
}

void func_287()
{
	if (func_161(unk_0x9E2D6C50374FCFA9()) != 262)
	{
		func_288();
		return;
	}
	if (iLocal_10)
	{
		return;
	}
	iLocal_9 = 1;
	if (!func_72(&uLocal_7, 5000, 0))
	{
		unk_0x7653D561C9574763(0, 18, 1);
		unk_0x7653D561C9574763(2, 18, 1);
		unk_0x7653D561C9574763(1, 18, 1);
		return;
	}
	iLocal_10 = 1;
}

void func_288()
{
	func_64(&uLocal_7);
	if (iLocal_9)
	{
		iLocal_9 = 0;
	}
	if (iLocal_10)
	{
		iLocal_10 = 0;
	}
}

void func_289()
{
	if (!func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return;
	}
	if (Global_262145.f_31504 == 0 && iLocal_3 == 0)
	{
		return;
	}
	if (func_290() && Global_262145.f_31504)
	{
		Global_262145.f_31504 = 0;
		iLocal_3 = 1;
	}
	if (!func_290() && iLocal_3)
	{
		Global_262145.f_31504 = 1;
		iLocal_3 = 0;
	}
}

int func_290()
{
	int iVar0;
	
	if ((func_293(unk_0x9E2D6C50374FCFA9(), 1) || (func_292(unk_0x9E2D6C50374FCFA9()) && !func_160(unk_0x9E2D6C50374FCFA9(), 0))) || func_291())
	{
		return 1;
	}
	if (func_160(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar0 = func_161(unk_0x9E2D6C50374FCFA9());
		switch (iVar0)
		{
			case 192:
			case 190:
			case 167:
			case 168:
			case 178:
			case 188:
			case 225:
			case 226:
			case 229:
			case 230:
			case 233:
			case 237:
			case 271:
			case 262:
			case 263:
			case 285:
			case 284:
			case 264:
				return 1;
			}
		
		default:
	}
	return 0;
}

var func_291()
{
	return Global_1835491;
}

int func_292(int iParam0)
{
	if (func_210(iParam0))
	{
		return 1;
	}
	if (func_226(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_294(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1853131[iParam0 /*888*/] == 2 || Global_1853131[iParam0 /*888*/] == 1) || Global_1853131[iParam0 /*888*/] == 0) || Global_1853131[iParam0 /*888*/] == 3) || Global_1853131[iParam0 /*888*/] == 8)
	{
		return 1;
	}
	return 0;
}

bool func_294(int iParam0)
{
	return func_295(iParam0);
}

var func_295(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_11.f_1, 0);
}

void func_296()
{
	var uVar0;
	var uVar1;
	
	if (!func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (BitTest(uLocal_4, 0))
		{
			unk_0xB0550BC91B0159D6(&uLocal_4, false);
		}
		if (BitTest(uLocal_4, 1))
		{
			unk_0xB0550BC91B0159D6(&uLocal_4, true);
		}
		return;
	}
	if (!func_280(unk_0x9E2D6C50374FCFA9()))
	{
		if (BitTest(uLocal_4, 0))
		{
			unk_0xB0550BC91B0159D6(&uLocal_4, false);
		}
		if (BitTest(uLocal_4, 1))
		{
			unk_0xB0550BC91B0159D6(&uLocal_4, true);
		}
		return;
	}
	if (func_279())
	{
		if (BitTest(uLocal_4, 0))
		{
			unk_0xB0550BC91B0159D6(&uLocal_4, false);
		}
		if (BitTest(uLocal_4, 1))
		{
			unk_0xB0550BC91B0159D6(&uLocal_4, true);
		}
		return;
	}
	if ((((Global_1578993.f_3 != -1 || unk_0xF34D8FCAE3FD4EE4()) || unk_0xA829C9A2767AC8EF()) || unk_0xECD40FEF3CF43BDB()) || unk_0xCB1EF1E7B77ADF4C())
	{
		if (BitTest(uLocal_4, 0))
		{
			unk_0xB0550BC91B0159D6(&uLocal_4, false);
		}
		if (BitTest(uLocal_4, 1))
		{
			unk_0xB0550BC91B0159D6(&uLocal_4, true);
		}
		return;
	}
	if (!(Global_1578993.f_2 == 11 || Global_1578993.f_2 == 12) && !BitTest(uLocal_4, 0))
	{
		if (unk_0x72E575062E5D1004(-1004.985f, -78.122f, -98.972f, 0.5f, 1, 1, &uVar0, 0, 0, -1) && unk_0x2B5F4FBAF644BEC8(uVar0))
		{
			unk_0x1C2ED929474DC6FE(iVar0, false, 0);
			unk_0xCED9E32812D6C7C7(&uLocal_4, false);
		}
	}
	if (Global_1578993.f_2 == 8 && !BitTest(uLocal_4, 1))
	{
		if (unk_0x72E575062E5D1004(-1004.94f, -80.51f, -98.972f, 0.5f, 1, 1, &uVar1, 0, 0, -1) && unk_0x2B5F4FBAF644BEC8(uVar1))
		{
			unk_0x1C2ED929474DC6FE(iVar1, false, 0);
			unk_0xCED9E32812D6C7C7(&uLocal_4, true);
		}
	}
}

void func_297()
{
	int iVar0;
	char* sVar1;
	
	if (func_150(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = func_308();
		if ((iVar0 != func_6() && func_300(iVar0)) && unk_0xC96A605CF3E9295B())
		{
			if (!unk_0xE5965CDF24F93A9F(Local_78.f_1))
			{
				sVar1 = func_299(0);
				Local_78.f_0 = unk_0x2E87280918B16506(sVar1);
				if (func_41(Local_78.f_0))
				{
					Local_78.f_1 = unk_0x0A7322C6D0E1A985(Local_78.f_0, -1024.45f, -422.027f, 72.259f, 0, 0, 0);
					unk_0x8CE3D365F064F69E(Local_78.f_1, 0f, 0f, 132f, 2, 1);
					unk_0x5C65DDDC219B3AA5(Local_78.f_1, true);
				}
			}
		}
		else
		{
			func_298();
		}
	}
	else
	{
		func_298();
	}
}

void func_298()
{
	if (unk_0xE5965CDF24F93A9F(Local_78.f_1))
	{
		unk_0x4BDA5AFD88C085EB(&(Local_78.f_1));
	}
}

char* func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sf_prop_sf_scr_m_lrg_01a";
			break;
		
		case 1:
			return "sf_prop_sf_scr_m_lrg_01b";
			break;
		
		case 2:
			return "sf_prop_sf_scr_m_lrg_01c";
			break;
		
		case 3:
			return "sf_prop_sf_monitor_b_02b";
			break;
		
		case 4:
			return "prop_npc_phone";
			break;
	}
	return "INVALID";
}

int func_300(int iParam0)
{
	if (!func_305(iParam0))
	{
		return 0;
	}
	if (BitTest(Global_1946941.f_10, 5))
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		if ((func_304(iParam0) && BitTest(Global_1977247.f_1, 8)) && !func_303())
		{
			return 1;
		}
	}
	else if (func_302(iParam0) && func_301() == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_301()
{
	return Global_1893551[unk_0x9E2D6C50374FCFA9() /*599*/].f_10;
}

int func_302(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_5, 18);
}

bool func_303()
{
	return func_11(28257, -1);
}

int func_304(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977288[iParam0 /*55*/].f_27, 0);
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (func_30() || unk_0x44859561F653DD4E())
	{
		return 0;
	}
	if (func_306() == 1)
	{
		return 0;
	}
	return 1;
}

int func_306()
{
	return func_307(unk_0x9E2D6C50374FCFA9());
}

int func_307(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689224[iParam0 /*451*/].f_317.f_3, 28, 31);
}

int func_308()
{
	return func_126(unk_0x9E2D6C50374FCFA9());
}

void func_309()
{
	int iVar0;
	
	if (unk_0x44859561F653DD4E())
	{
		if (func_314())
		{
			if (func_313() && func_312() != 18)
			{
				iVar0 = func_193();
				if (iVar0 != func_6() && func_311(iVar0))
				{
					if (Global_4718592.f_528 != Global_2711176[2])
					{
						Global_4718592.f_528 = Global_2711176[2];
						iLocal_77 = Global_2711176[2];
					}
				}
				else if (Global_4718592.f_528 != 1)
				{
					Global_4718592.f_528 = 1;
					iLocal_77 = -1;
				}
			}
			else if (func_310())
			{
				if (iLocal_77 != -1)
				{
					if (Global_2711176[2] != iLocal_77)
					{
						Global_2711176[2] = iLocal_77;
					}
					if (Global_4718592.f_528 != Global_2711176[2])
					{
						Global_4718592.f_528 = Global_2711176[2];
					}
				}
			}
		}
	}
	else if (iLocal_77 != -1)
	{
		iLocal_77 = -1;
	}
}

bool func_310()
{
	return Global_1923726.f_3;
}

int func_311(int iParam0)
{
	if ((func_205(iParam0, 0) && func_205(iParam0, 1)) && func_205(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_312()
{
	return Global_1057409;
}

int func_313()
{
	switch (func_197())
	{
		case 41:
		case 42:
			return 1;
		
		default:
	}
	return 0;
}

bool func_314()
{
	return func_26(Global_4718592.f_87009);
}

void func_315()
{
	if (func_280(unk_0x9E2D6C50374FCFA9()) && func_279())
	{
		if (Global_2785398 == 102)
		{
			uLocal_60 = Global_2792713[102 /*66*/][0];
		}
		else
		{
			Global_2792713[102 /*66*/][0] = uLocal_60;
		}
	}
}

void func_316()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (BitTest(Global_1946941.f_10, 28))
	{
		if (unk_0x1C1342F0ADFEA3B3(&(Global_22830.f_1), "OF_PA_MENUI_1b", 0, -1) == 0)
		{
			if (!iLocal_64)
			{
				iVar0 = 0;
				iLocal_65[0] = unk_0x9E2D6C50374FCFA9();
				iVar0++;
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar2 = iVar1;
					if (!iVar2 == unk_0x9E2D6C50374FCFA9())
					{
						if (func_327(iVar2))
						{
							if (iVar0 < 10)
							{
								iLocal_65[iVar0] = iVar2;
							}
						}
					}
					iVar1++;
				}
				iLocal_64 = 1;
			}
			if (iLocal_76)
			{
				if (!func_326() && !unk_0xF09A4F413B0D30EB(2, 201))
				{
					iLocal_76 = 0;
				}
			}
			else if (func_326() || unk_0xF09A4F413B0D30EB(2, 201))
			{
				iVar2 = iLocal_65[Global_22830.f_6002];
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), false, 0);
				func_319(iLocal_62, iLocal_63, iVar2);
				unk_0x91DFC8F68F6D9B05(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				if (unk_0xA37204C64473B324("DLC_Fixer_Office_Interior_Scene"))
				{
					unk_0x0AF8D3A06BB92903("DLC_Fixer_Office_Interior_Scene");
				}
			}
		}
		else
		{
			func_317(Global_22830.f_6002, &iLocal_62, &iLocal_63);
			iLocal_64 = 0;
			iLocal_76 = 1;
		}
	}
}

void func_317(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		*iParam1 = 553;
		*iParam2 = 0;
	}
	else
	{
		func_318((iParam0 - 1), iParam1, iParam2);
	}
}

void func_318(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 164;
			break;
		
		case 1:
			*uParam1 = 164;
			*uParam2 = 2;
			break;
		
		case 2:
			*uParam1 = 217;
			break;
		
		case 3:
			*uParam1 = 243;
			break;
		
		case 4:
			*uParam1 = 244;
			break;
		
		case 5:
			*uParam1 = 253;
			break;
		
		case 6:
			*uParam1 = 15;
			break;
		
		case 7:
			*uParam1 = 16;
			break;
		
		case 8:
			*uParam1 = 20;
			break;
		
		case 9:
			*uParam1 = 78;
			break;
		
		case 10:
			*uParam1 = 187;
			break;
		
		case 11:
			*uParam1 = 185;
			break;
		
		case 12:
			*uParam1 = 19;
			break;
		
		case 13:
			*uParam1 = 254;
			break;
		
		case 14:
			*uParam1 = 178;
			break;
		
		case 15:
			*uParam1 = 88;
			break;
		
		case 16:
			*uParam1 = 237;
			break;
		
		case 17:
			*uParam1 = 186;
			break;
		
		case 18:
			*uParam1 = 256;
			break;
		
		case 19:
			*uParam1 = 200;
			break;
		
		case 20:
			*uParam1 = 160;
			break;
	}
}

void func_319(int iParam0, int iParam1, int iParam2)
{
	Global_2725269.f_24 = iParam2;
	unk_0x859006DB870314C5(500);
	func_325(1);
	func_324(iParam0, iParam1);
	func_320(iParam0, iParam1);
}

void func_320(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_323(iParam0, iParam1);
	Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_46 = func_322(iVar0);
	func_321(iVar0, &(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_47), &(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_48));
}

int func_321(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
		
		default:
	}
	return -1;
}

int func_323(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (iParam1 == 2)
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
	}
	return -1;
}

void func_324(var uParam0, var uParam1)
{
	Global_2725269.f_20 = 0;
	Global_2725269.f_19 = 1;
	Global_2725269.f_17 = uParam0;
	Global_2725269.f_18 = uParam1;
}

void func_325(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1893551[unk_0x9E2D6C50374FCFA9() /*599*/].f_513), 3);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1893551[unk_0x9E2D6C50374FCFA9() /*599*/].f_513), 3);
	}
	Global_2725269 = bParam0;
}

int func_326()
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (Global_4534059 > -1)
		{
			if (unk_0xF09A4F413B0D30EB(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_327(int iParam0)
{
	int iVar0;
	
	if (((func_21(iParam0, 1, 1) && !func_335(iParam0)) && func_138(unk_0x9E2D6C50374FCFA9())) && !BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 26))
	{
		if (func_333(iParam0, unk_0x9E2D6C50374FCFA9(), 0, 1))
		{
			if (func_332(iParam0, unk_0x9E2D6C50374FCFA9()))
			{
				if (!func_139(iParam0) && !func_331(iParam0))
				{
					iVar0 = func_130(unk_0x9E2D6C50374FCFA9());
					if (func_306() == func_307(iParam0) || !func_328(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_328(int iParam0)
{
	var uVar0;
	
	uVar0 = { func_329(iParam0) };
	return BitTest(uVar0[0], 1);
}

Vector3 func_329(int iParam0)
{
	struct<3> Var0;
	
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946941.f_13[iParam0 /*3*/][0] == -1)
	{
		Global_1946941.f_13[iParam0 /*3*/] = { func_330(iParam0) };
	}
	return Global_1946941.f_13[iParam0 /*3*/];
}

Vector3 func_330(int iParam0)
{
	struct<3> Var0;
	
	Var0 = 2;
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 7);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 13);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 6);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 22);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 20);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), false);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 3);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 11);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), true);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 19);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 4);
	unk_0xCED9E32812D6C7C7(&(Var0[0]), 12);
	unk_0xCED9E32812D6C7C7(&(Var0[1]), false);
	unk_0xCED9E32812D6C7C7(&(Var0[1]), 6);
	unk_0xCED9E32812D6C7C7(&(Var0[1]), 10);
	unk_0xCED9E32812D6C7C7(&(Var0[1]), 7);
	unk_0xCED9E32812D6C7C7(&(Var0[1]), 20);
	unk_0xCED9E32812D6C7C7(&(Var0[1]), 3);
	unk_0xCED9E32812D6C7C7(&(Var0[1]), 21);
	return Var0;
}

int func_331(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 16);
}

int func_332(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_6() && iParam1 != func_6())
	{
		iVar0 = func_127(iParam0);
		if (iVar0 != func_6())
		{
			return iVar0 == func_127(iParam1);
		}
	}
	return 0;
}

int func_333(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_334(iParam0, 1, 0) && func_334(iParam1, 1, 0))
	{
		if (Global_1853131[iParam0 /*888*/].f_267.f_31 == Global_1853131[iParam1 /*888*/].f_267.f_31 && Global_1853131[iParam0 /*888*/].f_267.f_30 == Global_1853131[iParam1 /*888*/].f_267.f_30)
		{
			if (!bParam2)
			{
				return 1;
			}
			else
			{
				if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 3) && BitTest(Global_1853131[iParam1 /*888*/].f_267.f_28, 3))
				{
					return 1;
				}
				if (!BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 3) && !BitTest(Global_1853131[iParam1 /*888*/].f_267.f_28, 3))
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if ((((Global_2689224[iParam0 /*451*/].f_317.f_6 != -1 && Global_2689224[iParam0 /*451*/].f_317.f_7 > -1) && Global_2689224[iParam0 /*451*/].f_317.f_6 == Global_2689224[iParam1 /*451*/].f_317.f_6) && Global_2689224[iParam0 /*451*/].f_317.f_7 == Global_2689224[iParam1 /*451*/].f_317.f_7) && Global_2680263.f_903.f_168[iParam0] == Global_2680263.f_903.f_168[iParam1])
		{
			return 1;
		}
	}
	return 0;
}

int func_334(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_335(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (((((BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 2) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 3)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 5)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 6)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 7)) || BitTest(Global_1853131[iParam0 /*888*/].f_267.f_379.f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_336()
{
	if (unk_0xB4C854DD86E40FDA(joaat("fm_mission_controller_2020")) <= 0)
	{
		return;
	}
	if (Global_1574988 != 58)
	{
		return;
	}
	if ((!BitTest(Global_1058030.f_15, 19) && !BitTest(Global_1058030.f_15, 20)) && !BitTest(Global_1058030.f_15, 21))
	{
		return;
	}
	unk_0x6C5C36A8B5B604A8(1, 0, 0);
}

void func_337()
{
	if (unk_0x44859561F653DD4E() && unk_0xB4C854DD86E40FDA(joaat("fm_mission_controller_2020")) > 0)
	{
		if (Global_4718592.f_87009 == Global_262145.f_31359[1] && Global_1574962)
		{
			if (Global_1057983.f_5 == 0)
			{
				if (!iLocal_61)
				{
					unk_0x6CA6298E3E0086F4(1, 0);
					iLocal_61 = 1;
				}
			}
			else if (iLocal_61)
			{
				unk_0x6CA6298E3E0086F4(0, 0);
				iLocal_61 = 0;
			}
		}
	}
}

void func_338()
{
	if (unk_0xB4C854DD86E40FDA(joaat("fm_mission_controller_2020")) > 0)
	{
		func_341();
	}
	else
	{
		func_339();
	}
}

void func_339()
{
	bool bVar0;
	
	if (iLocal_58 == 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 25)
	{
		if (BitTest(iLocal_58, bVar0))
		{
			unk_0xE479FC5EBD431C84(func_340(bVar0), 0);
			unk_0xB0550BC91B0159D6(&iLocal_58, bVar0);
		}
		bVar0++;
	}
	iLocal_59 = 0;
	Global_2785488 = 0;
}

char* func_340(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "RADIO_36_AUDIOPLAYER";
		
		case 1:
			return "RADIO_37_MOTOMAMI";
		
		case 2:
			return "RADIO_12_REGGAE";
		
		case 3:
			return "RADIO_15_MOTOWN";
		
		case 4:
			return "RADIO_16_SILVERLAKE";
		
		case 5:
			return "RADIO_17_FUNK";
		
		case 6:
			return "RADIO_18_90S_ROCK";
		
		case 7:
			return "RADIO_04_PUNK";
		
		case 8:
			return "RADIO_05_TALK_01";
		
		case 9:
			return "RADIO_06_COUNTRY";
		
		case 10:
			return "RADIO_07_DANCE_01";
		
		case 11:
			return "RADIO_08_MEXICAN";
		
		case 12:
			return "RADIO_35_DLC_HEI4_MLR";
		
		case 13:
			return "RADIO_13_JAZZ";
		
		case 14:
			return "RADIO_14_DANCE_02";
		
		case 15:
			return "RADIO_20_THELAB";
		
		case 16:
			return "RADIO_34_DLC_HEI4_KULT";
		
		case 17:
			return "RADIO_21_DLC_XM17";
		
		case 18:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
		
		case 19:
			return "RADIO_23_DLC_XM19_RADIO";
		
		case 20:
			return "RADIO_27_DLC_PRHEI4";
		
		case 21:
			return "RADIO_01_CLASS_ROCK";
		
		case 22:
			return "RADIO_02_POP";
		
		case 23:
			return "RADIO_03_HIPHOP_NEW";
		
		case 24:
			return "RADIO_09_HIPHOP_OLD";
		
		case 25:
			return "RADIO_11_TALK_02";
		
		default:
	}
	return "OFF";
}

void func_341()
{
	bool bVar0;
	var uVar1;
	
	if (!func_342(Global_4718592.f_87009))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 25)
	{
		uVar1 = func_19(9876, -1, 0);
		if (!BitTest(iLocal_59, bVar0))
		{
			if (BitTest(uVar1, bVar0))
			{
			}
			unk_0xCED9E32812D6C7C7(&iLocal_59, bVar0);
			unk_0xE479FC5EBD431C84(func_340(bVar0), 1);
		}
		if (!BitTest(uVar1, bVar0) && !BitTest(iLocal_58, bVar0))
		{
			unk_0xCED9E32812D6C7C7(&iLocal_58, bVar0);
			Global_2785488 = 1;
		}
		bVar0++;
	}
}

int func_342(int iParam0)
{
	if ((iParam0 == Global_262145.f_31366[0] || iParam0 == Global_262145.f_31366[1]) || iParam0 == Global_262145.f_31366[2])
	{
		return 1;
	}
	return 0;
}

void func_343()
{
	switch (Global_262145.f_30725)
	{
		case joaat("mamba"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.655f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("warrener2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.565f;
			Global_1966357 = -3.3f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("zr350"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.98f;
			Global_1966357 = -2.7f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("futo2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.849f;
			Global_1966357 = -4f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("dominator8"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.87f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("previon"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 1.025f;
			Global_1966357 = -3.1f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("growler"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.7f;
			Global_1966357 = -2f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("jester4"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.725f;
			Global_1966357 = -2.9f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("calico"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.735f;
			Global_1966357 = -2.9f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("dominator7"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.735f;
			Global_1966357 = -2.9f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("rt3000"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.695f;
			Global_1966357 = -2.7f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("tailgater2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.715f;
			Global_1966357 = -3.2f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("cypher"):
			Global_1966354 = 0f;
			Global_1966355 = -1.61f;
			Global_1966356 = 0.755f;
			Global_1966357 = -5f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("sultan3"):
			Global_1966354 = 0f;
			Global_1966355 = -1.6f;
			Global_1966356 = 0.695f;
			Global_1966357 = -3.2f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("clique"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.655f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("ardent"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.655f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("euros"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.655f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("comet6"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.795f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("btype"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.695f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("comet7"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.675f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("sentinel2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.695f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("nero"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.81f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("rapidgt3"):
			Global_1966354 = 0f;
			Global_1966355 = -1.77f;
			Global_1966356 = 0.975f;
			Global_1966357 = -5.1f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("italigto"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.715f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("hakuchou2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.905f;
			Global_1966357 = -3.9f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("turismo2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.985f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("zentorno"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.915f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
		
		case joaat("verlierer2"):
			Global_1966354 = 0f;
			Global_1966355 = -1.52f;
			Global_1966356 = 0.835f;
			Global_1966357 = -2.6f;
			Global_1966358 = 0f;
			Global_1966359 = 180f;
			break;
	}
}

void func_344()
{
	switch (func_345())
	{
		case joaat("mamba"):
			Global_1966342 = 0.53f;
			break;
		
		case joaat("growler"):
			Global_1966342 = 0.6f;
			break;
		
		case joaat("slamtruck"):
			Global_1966342 = 0.6f;
			break;
		
		case joaat("raiden"):
			Global_1966342 = 0.95f;
			break;
		
		case joaat("jugular"):
			Global_1966342 = 0.65f;
			break;
		
		case joaat("tampa2"):
			Global_1966342 = 0.65f;
			break;
		
		case joaat("t20"):
			Global_1966342 = 0.83f;
			break;
		
		case joaat("zion3"):
			Global_1966342 = 0.59f;
			break;
		
		case joaat("flashgt"):
			Global_1966342 = 0.75f;
			break;
		
		case joaat("retinue"):
			Global_1966342 = 0.62f;
			break;
		
		case joaat("torero"):
			Global_1966342 = 0.75f;
			break;
		
		case joaat("savestra"):
			Global_1966342 = 0.62f;
			break;
		
		case joaat("tailgater2"):
			Global_1966342 = 0.62f;
			break;
		
		case joaat("euros"):
			Global_1966342 = 0.6f;
			break;
	}
}

int func_345()
{
	return Global_262145.f_26439;
}

void func_346()
{
	var uVar0;
	var uVar3;
	
	if (unk_0xB4C854DD86E40FDA(joaat("am_mp_car_meet_property")) < 1)
	{
		return;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_6())
	{
		return;
	}
	if (func_307(unk_0x9E2D6C50374FCFA9()) == 1)
	{
		return;
	}
	if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) || !unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	func_347(&uVar0, &uVar3);
	if ((func_139(unk_0x9E2D6C50374FCFA9()) || Global_1946935 != 7) || !unk_0xB950B5D01E8A4868(unk_0xE2D3D51028F0428A(), -1831.333f, 980.1857f, -29.846f, -2225.468f, 1241.217f, -9.4235f, 0, 1, 0))
	{
		if (unk_0x3A76A0944BE2C291(2))
		{
			unk_0x7653D561C9574763(2, 58, 1);
		}
		else
		{
			unk_0x7653D561C9574763(2, 51, 1);
		}
	}
}

void func_347(var uParam0, var uParam1)
{
	*uParam0 = { -1831.333f, 980.1857f, -29.846f };
	*uParam1 = { -2225.468f, 1241.217f, -9.4235f };
}

void func_348()
{
	if (!func_349())
	{
		return;
	}
	unk_0x7653D561C9574763(2, 51, 1);
}

int func_349()
{
	if (BitTest(Global_1946941.f_3, 5))
	{
		return 1;
	}
	if ((func_350(unk_0x9E2D6C50374FCFA9()) && func_35()) && func_58(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1085.49f, 211.389f, -49.801f, 10f, 1))
	{
		return 1;
	}
	return 0;
}

int func_350(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_101(Global_2689224[iParam0 /*451*/].f_317.f_6) == 14;
			}
		}
	}
	return 0;
}

void func_351()
{
	var uVar0;
	var uVar19;
	bool bVar20;
	var uVar21;
	
	switch (iLocal_56)
	{
		case 0:
			if (unk_0x3E6C9DAD84CEFED1() && unk_0x99C5758D126DE2C4() == 444479190)
			{
				iLocal_56 = 1;
			}
			break;
		
		case 1:
			if ((((((unk_0xF09A4F413B0D30EB(2, 201) || unk_0xA829C9A2767AC8EF()) || unk_0xCB1EF1E7B77ADF4C()) || !func_31()) || func_30()) || !unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A())) || unk_0xE08D4560995E7946(unk_0x9E2D6C50374FCFA9()))
			{
				iLocal_56 = 0;
				return;
			}
			if (unk_0xF09A4F413B0D30EB(2, 202) || unk_0xDFA2E5162727D6D2())
			{
				Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_10 = func_6();
				unk_0xCED9E32812D6C7C7(&(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_5), 15);
				unk_0xB0550BC91B0159D6(&(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_1), 31);
				iLocal_57 = Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_17;
				func_381(0, -1);
				if (unk_0xDFA2E5162727D6D2())
				{
				}
				iLocal_56 = 2;
				return;
			}
			if ((!unk_0x3E6C9DAD84CEFED1() || unk_0x99C5758D126DE2C4() != 444479190) && !unk_0xDFA2E5162727D6D2())
			{
				iLocal_56 = 0;
			}
			break;
		
		case 2:
			unk_0xCED9E32812D6C7C7(&(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_5), 15);
			unk_0xB0550BC91B0159D6(&(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_1), 31);
			func_381(0, -1);
			Global_1946941.f_4521.f_6 = iLocal_57;
			iLocal_56 = 3;
			break;
		
		case 3:
			if (Global_1946941.f_4521.f_6 == -1)
			{
				if (((func_45(unk_0xE2D3D51028F0428A()) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && func_31()) && !func_30())
				{
					uVar19 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (func_45(uVar19))
					{
						uVar21 = unk_0x15CAA6D7B11F1A7C(uVar19);
						func_358(iLocal_57, 1, &uVar0);
						if (!func_352(&uVar0, iVar19, uVar21, 0))
						{
							bVar20 = true;
						}
					}
					else
					{
						bVar20 = true;
					}
				}
				else
				{
					bVar20 = true;
				}
				if (bVar20)
				{
					unk_0xB0550BC91B0159D6(&(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_1), 31);
					unk_0xB0550BC91B0159D6(&(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_5), 15);
					unk_0xB0550BC91B0159D6(&(Global_1946941.f_4521.f_1), 9);
					func_381(0, -1);
					iLocal_56 = 0;
				}
			}
			break;
	}
}

int func_352(var uParam0, int iParam1, var uParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	struct<3> Var33;
	struct<3> Var36;
	struct<3> Var39;
	
	func_357(uParam1, uParam2, &Var0, &Var3, &Var6, &Var9);
	func_356(uParam1, uParam2, &Var12, &Var15, &Var18, &Var21);
	Var24 = { func_354(Var12, Var0, 0f, 1f, 0.5f) };
	Var27 = { func_354(Var15, Var3, 0f, 1f, 0.5f) };
	Var30 = { func_354(Var18, Var6, 0f, 1f, 0.5f) };
	Var33 = { func_354(Var21, Var9, 0f, 1f, 0.5f) };
	if (unk_0x5F8653E60ED2288E(Var24, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1) || unk_0x5F8653E60ED2288E(Var27, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1))
	{
		if (func_353(unk_0x82FE2343F8BDFF0B(uParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	Var36 = { func_354(Var12, Var15, 0f, 1f, 0.5f) };
	Var39 = { func_354(Var0, Var3, 0f, 1f, 0.5f) };
	if (unk_0x5F8653E60ED2288E(Var36, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1) || unk_0x5F8653E60ED2288E(Var39, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1))
	{
		if (func_353(unk_0x82FE2343F8BDFF0B(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	else if (unk_0x5F8653E60ED2288E(Var30, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1) || unk_0x5F8653E60ED2288E(Var33, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1))
	{
		if (func_353(unk_0x82FE2343F8BDFF0B(iParam1), (uParam0->f_14 - 180f), 75f) || iParam3)
		{
			return 1;
		}
	}
	if (unk_0xD132EDDA78FF4A51(iParam1, uParam0->f_7, uParam0->f_10, uParam0->f_13, 0, 1, 0))
	{
		if ((func_353(unk_0x82FE2343F8BDFF0B(iParam1), uParam0->f_14, 75f) || func_353(unk_0x82FE2343F8BDFF0B(iParam1), (uParam0->f_14 - 180f), 75f)) || iParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_353(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_354(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_355(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_355(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_355(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_355(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

void func_356(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<2> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	unk_0xB38EF75835FAF667(uParam1, &Var0, &Var3);
	Var6.f_0 = Var0.f_0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var0.f_2;
	Var9.f_0 = Var3.f_0;
	Var9.f_1 = Var3.f_1;
	Var9.f_2 = Var0.f_2;
	Var12.f_0 = Var0.f_0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var0.f_2;
	Var15.f_0 = Var3.f_0;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var0.f_2;
	*uParam2 = { unk_0xCACAD935C0BEE14F(uParam0, Var6) };
	*uParam3 = { unk_0xCACAD935C0BEE14F(uParam0, Var9) };
	*uParam4 = { unk_0xCACAD935C0BEE14F(uParam0, Var12) };
	*uParam5 = { unk_0xCACAD935C0BEE14F(uParam0, Var15) };
}

void func_357(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	unk_0xB38EF75835FAF667(uParam1, &Var0, &Var3);
	Var6.f_0 = Var0.f_0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var3.f_2;
	Var9 = { Var3 };
	Var12.f_0 = Var0.f_0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var3.f_2;
	Var15.f_0 = Var3.f_0;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var3.f_2;
	*uParam2 = { unk_0xCACAD935C0BEE14F(uParam0, Var6) };
	*uParam3 = { unk_0xCACAD935C0BEE14F(uParam0, Var9) };
	*uParam4 = { unk_0xCACAD935C0BEE14F(uParam0, Var12) };
	*uParam5 = { unk_0xCACAD935C0BEE14F(uParam0, Var15) };
}

void func_358(int iParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 0:
		case 2:
			if (!BitTest(uParam2->f_3, 15) && func_363(iParam0, iParam1))
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_3), 4);
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), true);
				uParam2->f_7 = { 1f, 1f, 0.1f };
				uParam2->f_4 = { 1f, 1f, 1f };
			}
			else
			{
				func_362(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14), iParam1);
				func_361(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), true);
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), false);
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), 16);
				if (iParam1 == 0)
				{
					unk_0xCED9E32812D6C7C7(&(uParam2->f_3), 4);
				}
			}
			break;
		
		case 1:
			if (func_363(iParam0, iParam1) && !BitTest(uParam2->f_3, 15))
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_3), 4);
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), 2);
				uParam2->f_7 = { 1f, 1f, 0.1f };
				uParam2->f_4 = { 1f, 1f, 1f };
			}
			else
			{
				func_359(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14), iParam1);
				uParam2->f_2 = 1;
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), 6);
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), false);
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), 2);
				unk_0xCED9E32812D6C7C7(&(uParam2->f_3), 4);
				func_361(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
	}
}

void func_359(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	*uParam1 = { func_360(iParam0) };
	switch (iParam0)
	{
		case 149:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { 758.6912f, -679.8961f, 28.2984f };
					*uParam3 = { 758.7398f, -675.8193f, 31.3893f };
					*uParam4 = 3.25f;
					*uParam5 = 90f;
					break;
			}
			break;
		
		case 150:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { -146.3092f, -1341.069f, 28.9145f };
					*uParam3 = { -148.563f, -1341.091f, 32.5145f };
					*uParam4 = 2.75f;
					*uParam5 = 0f;
					break;
			}
			break;
		
		case 151:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { -173.2224f, -35.69027f, 53.21325f };
					*uParam3 = { -172.0434f, -31.97755f, 51.22238f };
					*uParam4 = 2.5f;
					*uParam5 = 70f;
					break;
			}
			break;
		
		case 152:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { 231.3824f, -1875.309f, 25.5283f };
					*uParam3 = { 234.1484f, -1871.995f, 28.9791f };
					*uParam4 = 2.25f;
					*uParam5 = 50f;
					break;
			}
			break;
		
		case 153:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { 488.2599f, -896.563f, 24.7408f };
					*uParam3 = { 488.2544f, -893.4431f, 28.0041f };
					*uParam4 = 2.25f;
					*uParam5 = 85f;
					break;
			}
			break;
	}
}

Vector3 func_360(int iParam0)
{
	switch (iParam0)
	{
		case 149:
			return 759.36f, -675.13f, 27.86f;
			break;
		
		case 150:
			return -144.58f, -1341.37f, 28.87f;
			break;
		
		case 151:
			return -171f, -31.4f, 51.27f;
			break;
		
		case 152:
			return 231.54f, -1875.7f, 25.41f;
			break;
		
		case 153:
			return 488.98f, -897.41f, 24.79f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_361(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	unk_0x2F046C9381D8E91B(9, uParam1, uParam2, uParam3, uParam4);
	*uParam4 = 100;
}

void func_362(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	switch (iParam0)
	{
		case 149:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { 758.6912f, -679.8961f, 28.2984f };
					*uParam3 = { 758.7398f, -675.8193f, 31.3893f };
					*uParam4 = 3.25f;
					*uParam1 = { func_360(iParam0) };
					*uParam5 = 90f;
					break;
				
				case 2:
					*uParam2 = { 758.7247f, -675.6054f, 27.86502f };
					*uParam3 = { 758.7702f, -674.6333f, 29.87855f };
					*uParam4 = 2.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 90f;
					break;
			}
			break;
		
		case 150:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { -146.3092f, -1341.069f, 28.9145f };
					*uParam3 = { -148.563f, -1341.091f, 32.5145f };
					*uParam4 = 2.75f;
					*uParam1 = { func_360(iParam0) };
					*uParam5 = 0f;
					break;
				
				case 2:
					*uParam2 = { -145.0045f, -1340.897f, 28.87919f };
					*uParam3 = { -144.0437f, -1340.924f, 30.89099f };
					*uParam4 = 2.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 0f;
					break;
			}
			break;
		
		case 151:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { -173.2224f, -35.69027f, 53.21325f };
					*uParam3 = { -172.0434f, -31.97755f, 51.22238f };
					*uParam4 = 2.5f;
					*uParam1 = { func_360(iParam0) };
					*uParam5 = 70f;
					break;
				
				case 2:
					*uParam2 = { -172.1773f, -30.94365f, 51.22616f };
					*uParam3 = { -170.3217f, -31.65089f, 52.30008f };
					*uParam4 = 1.25f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 70f;
					break;
			}
			break;
		
		case 152:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { 231.3824f, -1875.309f, 25.5283f };
					*uParam3 = { 234.1484f, -1871.995f, 28.9791f };
					*uParam4 = 2.25f;
					*uParam1 = { func_360(iParam0) };
					*uParam5 = 50f;
					break;
				
				case 2:
					*uParam2 = { 230.8424f, -1875.809f, 25.40126f };
					*uParam3 = { 231.4307f, -1874.988f, 27.49286f };
					*uParam4 = 2.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 50f;
					break;
			}
			break;
		
		case 153:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { 488.2599f, -896.563f, 24.7408f };
					*uParam3 = { 488.2544f, -893.4431f, 28.0041f };
					*uParam4 = 2.25f;
					*uParam1 = { func_360(iParam0) };
					*uParam5 = 85f;
					break;
				
				case 2:
					*uParam2 = { 488.5411f, -897.9388f, 24.80397f };
					*uParam3 = { 488.5152f, -896.9764f, 26.85103f };
					*uParam4 = 2.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 85f;
					break;
			}
			break;
	}
}

int func_363(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			if (!Global_262145.f_30639)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_379(unk_0x9E2D6C50374FCFA9(), func_380(iParam0)))
			{
				return 0;
			}
			if (func_378(0) && func_379(func_301(), func_380(iParam0)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_364(iParam0) || func_379(unk_0x9E2D6C50374FCFA9(), func_380(iParam0)))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_364(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_380(iParam0);
	if (Global_1946941.f_4723.f_23[iVar0 /*2*/].f_1 == unk_0x8142A6539DDC180F())
	{
		return Global_1946941.f_4723.f_23[iVar0 /*2*/];
	}
	else
	{
		Global_1946941.f_4723.f_23[iVar0 /*2*/].f_1 = unk_0x8142A6539DDC180F();
	}
	iVar1 = 0;
	while (iVar1 < func_377())
	{
		if (func_365(iVar1, iVar0))
		{
			Global_1946941.f_4723.f_23[iVar0 /*2*/] = 1;
			return 1;
		}
		iVar1++;
	}
	Global_1946941.f_4723.f_23[iVar0 /*2*/] = 0;
	return 0;
}

int func_365(int iParam0, int iParam1)
{
	if ((unk_0x0D01086B38EC256F(iParam0) && iParam0 != unk_0x9E2D6C50374FCFA9()) && Global_1853131[iParam0 /*888*/].f_267.f_460 == iParam1)
	{
		if (func_367(iParam0))
		{
			if (func_366(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_366(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return BitTest(func_19(9617, -1, 0), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1977288[iParam0 /*55*/].f_1, 0);
	}
	return 0;
}

int func_367(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<35> Var2;
	struct<13> Var37;
	var uVar50;
	var uVar51;
	bool bVar52;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return func_376(iParam0);
	}
	iVar0 = func_375(iParam0);
	switch (iVar0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			iVar1 = func_372();
			Var2 = { func_370(iParam0) };
			if (iVar1 == Var2.f_0 && Var2.f_0 != 0)
			{
				return 1;
			}
			break;
		
		case 2:
			Var37 = { func_369(iParam0) };
			return unk_0x106C9EE9D83F20DF(&Var37);
			break;
		
		case 3:
			iVar1 = func_372();
			Var2 = { func_370(iParam0) };
			Var37 = { func_369(iParam0) };
			if ((iVar1 == Var2.f_0 && Var2.f_0 != 0) || unk_0x106C9EE9D83F20DF(&Var37))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_378(1))
			{
				return func_368(iParam0, unk_0x9E2D6C50374FCFA9());
			}
			break;
		
		case 5:
			Var37 = { func_369(iParam0) };
			iVar1 = func_372();
			Var2 = { func_370(iParam0) };
			uVar51 = unk_0x106C9EE9D83F20DF(&Var37);
			bVar52 = (iVar1 == Var2.f_0 && Var2.f_0 != 0);
			if (func_378(1))
			{
				uVar50 = func_368(iParam0, unk_0x9E2D6C50374FCFA9());
			}
			if ((uVar50 || uVar51) || bVar52)
			{
				return 1;
			}
			break;
		
		case 6:
			return 0;
			break;
	}
	return 0;
}

int func_368(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_127(iParam0);
	if (!iVar0 == func_6())
	{
		if (iVar0 == func_127(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_369(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

struct<35> func_370(int iParam0)
{
	if (func_371(iParam0))
	{
		return Global_1575086[unk_0x9E2D6C50374FCFA9() /*35*/];
	}
	Global_2783316 = { func_369(iParam0) };
	unk_0x4FFBF2C0D8249E45(&Global_2783211, 0, &Global_2783316);
	return Global_2783211;
}

int func_371(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return 1;
	}
	return 0;
}

int func_372()
{
	struct<13> Var0;
	
	Var0 = { func_374() };
	return func_373(&Var0);
}

int func_373(var uParam0)
{
	var uVar0;
	
	if (unk_0xC65B603E7942D0DB())
	{
		if (unk_0xF453DE81BDFDAE6F())
		{
			if (unk_0x8C992447292D600F(uParam0))
			{
				unk_0x4FFBF2C0D8249E45(&uVar0, 35, uParam0);
				return uVar0;
			}
		}
	}
	return -1;
}

struct<13> func_374()
{
	struct<13> Var0;
	
	unk_0x9EDEC39EE142C8D5(&Var0, 13);
	return Var0;
}

int func_375(int iParam0)
{
	if (iParam0 == func_6() || !func_376(iParam0))
	{
		return 6;
	}
	return Global_1853131[iParam0 /*888*/].f_267.f_460.f_1;
}

bool func_376(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_267.f_460 != 0;
}

int func_377()
{
	if (Global_2722503)
	{
		return 32;
	}
	return (32 - Global_2722504);
}

bool func_378(bool bParam0)
{
	return func_128(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_379(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1853131[iParam0 /*888*/].f_267.f_460 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 149:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
			return 3;
		
		case 152:
			return 4;
		
		case 153:
			return 5;
		
		default:
	}
	return 0;
}

void func_381(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!BitTest(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317, 5))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317), 5);
			if (iParam1 != -1)
			{
				func_382(1, iParam1);
			}
		}
	}
	else if (BitTest(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317, 5))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317), 5);
		func_382(0, -1);
	}
}

void func_382(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_17 = iParam1;
	}
	else
	{
		Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_17 = -1;
	}
}

void func_383()
{
	bool bVar0;
	
	if (unk_0x9315DBF7D972F07A() && Global_2723442.f_3)
	{
		switch (iLocal_53)
		{
			case 0:
				if (unk_0x44859561F653DD4E())
				{
					return;
				}
				if (Global_1946941.f_496 && func_386(Global_1946941.f_3369))
				{
					func_384(1);
					iLocal_53 = 1;
				}
				break;
			
			case 1:
				func_384(1);
				if ((!func_30() && func_31()) && Global_1946935 == 7)
				{
					bVar0 = true;
				}
				else if (unk_0x44859561F653DD4E())
				{
					bVar0 = true;
				}
				else if ((func_31() && !func_138(unk_0x9E2D6C50374FCFA9())) && !func_29(unk_0x9E2D6C50374FCFA9()))
				{
					bVar0 = true;
				}
				if (func_197() == 37 && Global_262145.f_10514)
				{
					func_63(&uLocal_54, 1, 0);
				}
				if (bVar0)
				{
					iLocal_53 = 2;
				}
				break;
			
			case 2:
				func_384(0);
				iLocal_53 = 0;
				break;
		}
	}
	else if (iLocal_53 != 0)
	{
		func_384(0);
		iLocal_53 = 0;
	}
	if (func_62(&uLocal_54))
	{
		if (func_72(&uLocal_54, 20000, 1))
		{
			func_64(&uLocal_54);
			Global_262145.f_10514 = 1;
		}
		else
		{
			Global_262145.f_10514 = 0;
		}
	}
}

void func_384(bool bParam0)
{
	func_385(bParam0);
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1946941.f_9), 21);
		unk_0xCED9E32812D6C7C7(&(Global_1946941.f_9), 20);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1946941.f_9), 21);
		unk_0xB0550BC91B0159D6(&(Global_1946941.f_9), 20);
	}
}

void func_385(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1946941.f_4), 7);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1946941.f_4), 7);
	}
}

int func_386(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if ((((iParam0 == 149 || iParam0 == 151) || iParam0 == 150) || iParam0 == 153) || iParam0 == 152)
	{
		return 1;
	}
	return 0;
}

void func_387()
{
	switch (iLocal_52)
	{
		case 0:
			if (BitTest(Global_1946941, 6))
			{
				if (BitTest(Global_2703660.f_61.f_60, 0) && unk_0xB4C854DD86E40FDA(joaat("am_mp_car_meet_sandbox")) > 0)
				{
					iLocal_52 = 1;
				}
			}
			break;
		
		case 1:
			if (Global_1574582.f_1)
			{
				iLocal_52 = 2;
			}
			else if (func_395())
			{
				iLocal_52 = 0;
			}
			break;
		
		case 2:
			if (!Global_1574582.f_1)
			{
				iLocal_52 = 0;
			}
			else if (func_395())
			{
				iLocal_52 = 3;
			}
			break;
		
		case 3:
			iLocal_52 = 0;
			if (Global_1574582.f_1)
			{
				func_388();
			}
			break;
	}
}

void func_388()
{
	if (Global_1574582.f_1 == 1)
	{
		func_389(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1893551[unk_0x9E2D6C50374FCFA9() /*599*/].f_9 = 0;
	}
}

void func_389(int iParam0, int iParam1, bool bParam2)
{
	if (func_394())
	{
		if (iParam1 == 1)
		{
			if (Global_2810701.f_4462 == -1)
			{
				Global_2810701.f_4462 = Global_262145.f_26848;
			}
			func_73(&(Global_2810701.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810701.f_4465 == -1)
				{
					Global_2810701.f_4465 = Global_262145.f_26849;
				}
				func_73(&(Global_2810701.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1893551[unk_0x9E2D6C50374FCFA9() /*599*/].f_8 = 0;
				func_393(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1893551[unk_0x9E2D6C50374FCFA9() /*599*/].f_8 = 0;
			func_393(1);
		}
		if ((!unk_0x44859561F653DD4E() && !func_392()) && !func_390(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1057408 = 0;
		}
		unk_0x5106CAAF87C49A90(0, -1, -1, iParam0);
	}
}

int func_390(int iParam0)
{
	if (func_391(iParam0, 1, 0))
	{
		if (Global_1853131[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_391(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_294(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853131[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_392()
{
	return Global_2714635.f_841;
}

void func_393(bool bParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_394())
		{
			if (func_21(unk_0x9E2D6C50374FCFA9(), 1, 0))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 0);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 0);
			}
			unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 1f);
			unk_0x00F11F13DB7B0557(0);
			unk_0xAE3C2157FD741193(1);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					unk_0x6CA6298E3E0086F4(0, 0);
				}
			}
		}
		else
		{
			if (func_21(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 0);
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 1);
				unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					unk_0x6CA6298E3E0086F4(1, 0);
				}
			}
			unk_0x00F11F13DB7B0557(1);
			unk_0xAE3C2157FD741193(0);
		}
	}
}

bool func_394()
{
	return Global_1574582;
}

bool func_395()
{
	return (unk_0xB4C854DD86E40FDA(joaat("am_mp_car_meet_sandbox")) <= 0 && !func_396(unk_0x9E2D6C50374FCFA9()));
}

int func_396(int iParam0)
{
	if (iParam0 != func_6())
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_5, 6);
	}
	return 0;
}

void func_397()
{
	int iVar0;
	
	if (func_137(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_2810701.f_5194.f_765)
		{
			iVar0 = func_399();
			if ((iVar0 != -1 && iVar0 <= 5000) && !func_62(&uLocal_50))
			{
				func_73(&uLocal_50, 1, 0);
				func_398(1, 1);
			}
		}
	}
	if (func_62(&uLocal_50))
	{
		if (func_72(&uLocal_50, 10000, 1))
		{
			func_64(&uLocal_50);
			func_398(0, 0);
		}
	}
}

void func_398(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Global_1964914 && bParam0)
		{
			Global_1964914 = 1;
			iLocal_48 = 1;
		}
	}
	else
	{
		if (Global_1964914 && iLocal_48)
		{
			Global_1964914 = 0;
		}
		iLocal_48 = 0;
	}
	if (bParam1)
	{
		if (!BitTest(Global_1946941.f_3, 5))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1946941.f_3), 5);
			iLocal_49 = 1;
		}
	}
	else
	{
		if (BitTest(Global_1946941.f_3, 5) && iLocal_49)
		{
			unk_0xB0550BC91B0159D6(&(Global_1946941.f_3), 5);
		}
		iLocal_49 = 0;
	}
}

int func_399()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_400(7, iVar0))
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_1645748.f_4617.f_11[iVar0 /*16*/])) && unk_0x2E87280918B16506(&(Global_1645748.f_4617.f_11[iVar0 /*16*/])) == 1444771325)
			{
				return Global_1645748.f_4617[iVar0];
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_400(int iParam0, int iParam1)
{
	return BitTest(Global_1645748.f_6736[iParam0], iParam1);
}

void func_401()
{
	if (unk_0x9E2D6C50374FCFA9() == func_6())
	{
		return;
	}
	if (BitTest(Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317, 5))
	{
		if ((unk_0x3E6C9DAD84CEFED1() && (unk_0x99C5758D126DE2C4() == 15890625 || unk_0x99C5758D126DE2C4() == -862848537)) && unk_0x99C5758D126DE2C4() != 0)
		{
			unk_0x6C5C36A8B5B604A8(0, 0, 0);
		}
	}
}

void func_402()
{
	if (func_406())
	{
		if (!iLocal_42)
		{
			func_96(45, 1, 1);
			iLocal_42 = 1;
		}
	}
	else if (iLocal_42)
	{
		func_93(45, 1, 1);
		iLocal_42 = 0;
		func_64(&uLocal_43);
	}
	if (func_403())
	{
		if (!iLocal_47)
		{
			Global_1965089 = 1;
			iLocal_47 = 1;
		}
	}
	else if (iLocal_47)
	{
		Global_1965089 = 0;
		iLocal_47 = 0;
		func_64(&uLocal_45);
	}
}

int func_403()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!func_137(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	iVar0 = 235;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 58;
	}
	if (func_37("CM_PV_MEM") || func_37("CM_PV_MEM_PC"))
	{
		if (unk_0xF09A4F413B0D30EB(2, iVar0))
		{
			func_73(&uLocal_45, 0, 0);
			return 1;
		}
	}
	if (func_62(&uLocal_45) && !func_72(&uLocal_45, 3000, 0))
	{
		return 1;
	}
	if (func_45(unk_0xE2D3D51028F0428A()) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (func_136(uVar1, 1))
		{
			iVar2 = func_404(uVar1);
			if ((iVar2 != func_6() && iVar2 != unk_0x9E2D6C50374FCFA9()) && BitTest(Global_2689224[iVar2 /*451*/].f_317.f_4, 25))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_404(int iParam0)
{
	int iVar0;
	
	if (!func_136(uParam0, 1))
	{
		return func_6();
	}
	iVar0 = unk_0xC3B76795ECBDEF41(uParam0, "Player_Vehicle");
	return func_405(iVar0, 0, 1, 0);
}

bool func_405(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0xA1087A6350CD9244(iVar1);
			if (func_21(iVar0, 0, 1) || (iParam1 && unk_0x2AAF56A20AF61A64(iVar0)))
			{
				if (iParam0 == unk_0x4AE7F6D227ED332C(iVar0))
				{
					return bVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_21(iParam3, 0, 1) || (iParam1 && unk_0x2AAF56A20AF61A64(iParam3)))
	{
		if (iParam0 == unk_0x4AE7F6D227ED332C(iParam3))
		{
			return bParam3;
		}
	}
	return func_6();
}

int func_406()
{
	int iVar0;
	
	if (!func_137(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	iVar0 = 201;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 223;
	}
	if (!func_37("CM_PV_MEM") && !func_37("CM_PV_MEM_PC"))
	{
		return 1;
	}
	else if (unk_0xF09A4F413B0D30EB(2, iVar0))
	{
		func_73(&uLocal_43, 0, 0);
		return 1;
	}
	if (func_35() && unk_0x3C57C2F07FEE34D2(&(Global_22830.f_1), "INST_MENU_TTL"))
	{
		if (unk_0xF09A4F413B0D30EB(2, 201))
		{
			func_73(&uLocal_43, 0, 0);
			return 1;
		}
	}
	if (func_62(&uLocal_43) && !func_72(&uLocal_43, 3000, 0))
	{
		return 1;
	}
	return 0;
}

void func_407()
{
	if ((Global_111868 && unk_0xB4C854DD86E40FDA(joaat("director_mode")) <= 0) && func_31())
	{
		unk_0xC0BCF14F60B6723A();
	}
}

void func_408()
{
	int iVar0;
	
	if (!iLocal_6)
	{
		if (Global_1836379)
		{
			iVar0 = func_409(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10385 = 1;
			}
			iLocal_6 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_6 = 0;
	}
}

int func_409(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_410()
{
	if (!iLocal_5)
	{
		if (Global_1836379)
		{
			if (func_412() || func_411())
			{
				Global_262145.f_19964 = 1;
			}
			else
			{
				Global_262145.f_19964 = 0;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_5 = 0;
	}
}

int func_411()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_409(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10494)
	{
		return 0;
	}
	uVar1[0] = func_409(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_409(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_409(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_409(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10490 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10494)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_412()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_409(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10493)
	{
		return 0;
	}
	uVar1[0] = func_409(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_409(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_409(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_409(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10489 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10493)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_413()
{
	int iVar0;
	
	if (unk_0x8FE9914D4872D601())
	{
		iVar0 = 0;
		while (iVar0 < Global_1853131)
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853131[iVar0 /*888*/].f_766), true);
			iVar0++;
		}
	}
}

void func_414()
{
	if (Global_262145.f_10469 != 120)
	{
		Global_262145.f_10469 = 120;
	}
}

void func_415()
{
	if (iLocal_1)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.23f);
		unk_0x71F4002CB1A0B451(255, 255, 255, 255);
		func_416(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (unk_0xF1EC2C71FD1371B8())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0xF09A4F413B0D30EB(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0xF09A4F413B0D30EB(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0xF09A4F413B0D30EB(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0xF09A4F413B0D30EB(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0xF09A4F413B0D30EB(2, 188))
					{
						iLocal_1 = 1;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xF1EC2C71FD1371B8())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0xF09A4F413B0D30EB(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0xF09A4F413B0D30EB(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0xF09A4F413B0D30EB(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0xF09A4F413B0D30EB(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0xF09A4F413B0D30EB(2, 189))
				{
					iLocal_1 = 0;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_416(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x702B349761F63A9E(sParam3);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

bool func_417()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}


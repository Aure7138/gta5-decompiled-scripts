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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 16;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
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
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
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
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = -1;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 1000;
	var uLocal_271 = 1000;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	struct<11> Local_277 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	char* sLocal_296 = NULL;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	bool bLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	float fLocal_315 = 0f;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	struct<3> Local_320[3];
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	struct<3> Local_341[9];
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	bool bLocal_375 = 0;
	bool bLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	struct<3> Local_381[5];
	struct<3> Local_397[4];
	bool bLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	bool bLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	struct<3> Local_418[3];
	struct<3> Local_428[3];
	struct<3> Local_438[9];
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	var uLocal_473 = 0;
	int iLocal_474 = 0;
	bool bLocal_475 = 0;
	bool bLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	struct<3> Local_479 = { 0, 0, 0 } ;
	float fLocal_482 = 0f;
	struct<3> Local_483 = { 0, 0, 0 } ;
	int iLocal_486 = 0;
	struct<8> Local_487[4];
	int iLocal_520 = 0;
	struct<3> Local_521 = { 0, 0, 0 } ;
	struct<3> Local_524 = { 0, 0, 0 } ;
	struct<3> Local_527 = { 0, 0, 0 } ;
	struct<3> Local_530 = { 0, 0, 0 } ;
	bool bLocal_533 = 0;
	struct<8> Local_534 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	struct<3> Local_546[6];
	float fLocal_565[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_572 = 0;
	char* sLocal_573 = NULL;
	int iLocal_574 = 0;
	char* sLocal_575[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	struct<3> Local_584[6];
	int iLocal_603 = 0;
	bool bLocal_604 = 0;
	bool bLocal_605 = 0;
	var uLocal_606[2] = { 0, 0 };
	bool bLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	struct<3> Local_618 = { 0, 0, 0 } ;
	float fLocal_621 = 0f;
	bool bLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	uLocal_90 = unk_0x831D4AD840B7278A();
	uLocal_91 = unk_0x321E776DB596AB12();
	iLocal_291 = joaat("a_m_o_acult_01");
	sLocal_296 = "rcmme_tracey1";
	Local_479 = { 238.1823f, -34.5401f, 68.7233f };
	fLocal_482 = 160.6f;
	Local_483 = { 236.23f, -34.25f, 69.71f };
	iLocal_486 = 154.19f;
	Local_521 = { -825.07f, 180.32f, 70.52f };
	Local_524 = { -1316.569f, 391.5938f, 68.7507f };
	iLocal_544 = 2000;
	if (unk_0x2170E7BC25114A22(3))
	{
		func_499();
		func_497(0, 0);
	}
	unk_0x52A56383568A954B(1);
	func_484();
	if (func_483())
	{
		switch (func_482())
		{
			case 0:
				func_466(&iVar0, 1, 1, 1, 1, joaat("tailgater"), 0, 145);
				func_465(&iVar0);
				func_464(1, 1, 1);
				break;
			
			case 2:
				func_462(1, 1);
				func_438(1);
				func_464(1, 1, 1);
				break;
			
			case 3:
				func_462(1, 1);
				func_437(1);
				func_464(1, 1, 1);
				break;
			
			case 4:
				func_462(1, 1);
				func_419(1, 1);
				func_464(1, 1, 1);
				break;
			
			case 5:
				func_462(1, 1);
				func_419(1, 0);
				func_464(1, 1, 1);
				break;
			
			default:
				func_464(1, 1, 1);
				break;
			}
	}
	while (true)
	{
		unk_0xC60972F08795B988("M_DD", 0);
		if (iLocal_626 > unk_0x84A97C70FFDEC0C8())
		{
			unk_0x18D8F843A9CCB4E5();
		}
		if (iLocal_92 == 11)
		{
			func_408();
		}
		else if (!func_404())
		{
			func_403();
			func_402();
			switch (iLocal_92)
			{
				case 0:
					func_370();
					break;
				
				case 1:
					func_367();
					break;
				
				case 2:
					func_354();
					break;
				
				case 3:
					func_341();
					break;
				
				case 4:
					func_335();
					break;
				
				case 5:
					func_318();
					break;
				
				case 6:
					func_270();
					break;
				
				case 7:
					func_181();
					break;
				
				case 8:
					func_34();
					break;
				
				case 9:
					func_30();
					break;
				
				case 10:
					func_1();
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_93)
	{
		case 0:
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				func_28(3);
				func_27(&uLocal_297);
				iLocal_93 = 1;
			}
			else
			{
				iLocal_92 = 1;
				iLocal_93 = 0;
			}
			break;
		
		case 1:
			if (func_26(unk_0xD5A676B97920D126()))
			{
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 1)
				{
					func_25(3);
					iLocal_93 = 2;
				}
			}
			func_2();
			break;
		
		case 2:
			iLocal_93 = 0;
			iLocal_92 = 1;
			break;
	}
}

int func_2()
{
	switch (iLocal_94)
	{
		case 0:
			if (!iLocal_95)
			{
				if (func_24(5))
				{
					iLocal_94 = 3;
				}
				else if (func_24(2))
				{
					if (!func_23())
					{
						iLocal_94 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (!iLocal_95)
			{
				func_22(&uLocal_96, 3);
				func_21(&uLocal_96, 3, 0, "TRACEY", 0, 1);
				if (func_20(&uLocal_96, 15, "MET1AUD", "MET1_WARN2", 7, 0, 0, 1))
				{
					iLocal_94 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_23())
			{
				iLocal_94 = 3;
			}
			break;
		
		case 3:
			if (!iLocal_95)
			{
				if (func_24(5))
				{
					func_22(&uLocal_96, 3);
					func_21(&uLocal_96, 3, 0, "TRACEY", 0, 1);
					iLocal_92 = 9;
					iLocal_93 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_308) > 15000)
			{
				func_22(&uLocal_96, 3);
				func_21(&uLocal_96, 3, iLocal_289, "TRACEY", 0, 1);
				iLocal_94 = 5;
			}
			break;
		
		case 5:
			if (func_3(&uLocal_96, "MET1AUD", "MET1_WARNC", 7, 0, 0, 0))
			{
				iLocal_308 = unk_0x84A97C70FFDEC0C8();
				iLocal_94 = 4;
			}
			break;
		
		case 7:
			break;
	}
	return 0;
}

bool func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_4(sParam2, iParam3, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x73998CD31AEFA620(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_18();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_16();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_9();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_8())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_7())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_6();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_5();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_18();
	}
	return 0;
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_6()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_7()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_9()
{
	if (func_15(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_10();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_10()
{
	func_11();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_14(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_13(unk_0xD5A676B97920D126());
			if (func_12(iVar0) && (!func_15(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_12(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)
{
	if (func_12(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_18()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

bool func_20(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_19(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_4(sParam3, iParam4, bParam7);
}

void func_21(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_22(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_23()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D13C79BF80EB767() != iLocal_301)
	{
		iVar0 = (60 * ((24 - iLocal_302) + unk_0x83D6515EE2CBF18C()));
		iVar0 = ((iVar0 - iLocal_303) + unk_0xF72CA3D5BA977203());
	}
	else
	{
		iVar0 = (((60 * unk_0x83D6515EE2CBF18C()) + unk_0xF72CA3D5BA977203()) - (iLocal_303 + (60 * iLocal_302)));
	}
	if (iVar0 >= (60 * iParam0))
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0)
{
	unk_0x0CA19C427F18E80B(Local_341[iParam0 /*3*/].f_2);
}

int func_26(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_27(var uParam0)
{
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		unk_0xD947D2F43FD7F6D7(*uParam0, 0);
		unk_0x8A3D7569826A325D(uParam0);
	}
}

void func_28(int iParam0)
{
	if (Local_341[iParam0 /*3*/].f_1 < Local_341[iParam0 /*3*/] || Local_341[iParam0 /*3*/] == -1)
	{
		func_29(Local_341[iParam0 /*3*/].f_2, 7500, 1);
		Local_341[iParam0 /*3*/].f_1++;
	}
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0x9C51EFE6A55E70E2(iParam1, 1);
}

void func_30()
{
	switch (iLocal_93)
	{
		case 0:
			iLocal_293 = 0;
			func_27(&uLocal_297);
			func_33(&iLocal_289);
			func_31(&iLocal_273);
			func_22(&uLocal_96, 3);
			func_21(&uLocal_96, 3, 0, "TRACEY", 0, 1);
			if (func_20(&uLocal_96, 15, "MET1AUD", "MET1_FAIL", 7, 0, 0, 1))
			{
				iLocal_93 = 1;
			}
			break;
		
		case 1:
			if (!func_23())
			{
				iLocal_93 = 2;
			}
			break;
		
		case 2:
			sLocal_573 = "MET1TOOLATE";
			iLocal_92 = 11;
			iLocal_93 = 0;
			break;
	}
}

void func_31(int iParam0)
{
	if (unk_0x7887B64A08364778(*iParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(*iParam0))
		{
			unk_0xC53606C390BE2727(*iParam0, 1, 0);
		}
		if (func_32(*iParam0))
		{
			if (unk_0x2A29BF08180E7ADF(*iParam0) && unk_0x67F42C4B7B64C593(*iParam0, 1))
			{
				if (func_26(unk_0xD5A676B97920D126()))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), *iParam0, 0))
					{
						unk_0xB24D3BF5DABD13AA(iParam0);
						return;
					}
				}
				unk_0xAA8D7DFFDAAB903E(iParam0);
			}
		}
		else
		{
			if (func_26(unk_0xD5A676B97920D126()))
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), *iParam0, 0))
				{
					unk_0xB24D3BF5DABD13AA(iParam0);
					return;
				}
			}
			unk_0xAA8D7DFFDAAB903E(iParam0);
		}
	}
}

int func_32(int iParam0)
{
	if (func_26(uParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(uParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_33(int iParam0)
{
	if (unk_0x7887B64A08364778(*iParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(*iParam0, 0))
		{
			unk_0x6D20A3AA82585D8C(*iParam0, 0);
		}
		if (!unk_0x2A29BF08180E7ADF(*iParam0))
		{
			unk_0xC53606C390BE2727(*iParam0, 1, 0);
		}
		unk_0xA2AC407F9132DD0B(iParam0);
	}
}

void func_34()
{
	var uVar0;
	
	switch (iLocal_93)
	{
		case 0:
			if (unk_0x3FE948D881FDB558(iLocal_273) < 1f)
			{
				unk_0x525451C25B51E42B(iLocal_273, 10f);
			}
			if (unk_0xD5ABCE2B8F82DD84(iLocal_273) < 1f)
			{
				unk_0x26F5F15AFEF0CC8A(iLocal_273, 10f);
			}
			if (func_179(iLocal_273, 5f, 5, 1056964608, 0, 1, 0))
			{
				if (bLocal_533)
				{
					Local_530 = { -1321.44f, 379.9881f, 67.8596f };
					unk_0x456121A0AAC868D4(&uVar0);
					unk_0xFEC48628C9B9C876(0, 650);
					unk_0x458C747DC544B598(0, iLocal_273, 0);
					unk_0x1D2CBA8F2F00D745(0, Local_530, 1f, 20000, 1048576000, 0, 1193033728);
					unk_0xCFE67FBB69F1C410(uVar0);
				}
				else
				{
					Local_530 = { -813.7761f, 179.4943f, 71.1592f };
					unk_0x456121A0AAC868D4(&uVar0);
					unk_0xFEC48628C9B9C876(0, 650);
					unk_0x458C747DC544B598(0, iLocal_273, 0);
					unk_0x1D2CBA8F2F00D745(0, -820.1358f, 176.9053f, 70.6086f, 1f, 20000, 1048576000, 0, 1193033728);
					unk_0x1D2CBA8F2F00D745(0, Local_530, 1f, 20000, 1048576000, 0, 1193033728);
					unk_0xCFE67FBB69F1C410(uVar0);
				}
				unk_0x37338B7B7C4982DC(iLocal_289);
				unk_0x8B06B801B92CEC2D(iLocal_289, uVar0);
				unk_0x873418BFBF9A6780(&uVar0);
				unk_0x237B0CFB6EEBD3BA(iLocal_289, 104, 1);
				iLocal_472 = 0;
				if (func_178())
				{
					bLocal_476 = true;
					iLocal_477 = 0;
					unk_0xE285FF18550727F4("ISSI2");
				}
				else
				{
					bLocal_476 = false;
					iLocal_477 = 0;
				}
				func_59(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				unk_0xBCDF9E3086B4229C(Local_527, 8f, 1, 0, 0, 0, 0);
				if (!bLocal_533)
				{
					unk_0xBCDF9E3086B4229C(-820.2315f, 176.7027f, 70.6122f, 8f, 1, 0, 0, 0, 0);
				}
				if (bLocal_533)
				{
					iLocal_474 = unk_0x84A97C70FFDEC0C8() + 10000;
					uLocal_473 = unk_0xB43345EE5335C48B("DEFAULT_SCRIPTED_CAMERA", -1315.612f, 402.8979f, 76.0077f, -26.827f, 0f, 175.0236f, 48.4f, 0, 2);
				}
				else
				{
					iLocal_474 = unk_0x84A97C70FFDEC0C8() + 5000;
					uLocal_473 = unk_0xB43345EE5335C48B("DEFAULT_SCRIPTED_CAMERA", -840.7f, 185.3f, 78.4f, -14f, 0f, -110.4f, 48.4f, 0, 2);
				}
				unk_0x55EB2099508DD1C3(uLocal_473, 1);
				unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
				bLocal_475 = false;
				iLocal_93 = 1;
			}
			break;
		
		case 1:
			if (func_57(1000))
			{
				bLocal_475 = true;
				iLocal_472 = 1;
			}
			if (!iLocal_472)
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_ATHOME", 7, 0, 0, 0) || unk_0x84A97C70FFDEC0C8() > iLocal_474)
				{
					iLocal_472 = 1;
				}
			}
			else if (iLocal_477)
			{
				if (unk_0x84A97C70FFDEC0C8() >= iLocal_478)
				{
					iLocal_93 = 2;
				}
			}
			else if ((func_56(iLocal_289, Local_530, 2f) || (unk_0x84A97C70FFDEC0C8() - iLocal_474) > 5000) || bLocal_475)
			{
				if (bLocal_476)
				{
					unk_0xAAD655F2351CC4B7("CamPushInNeutral", 0, 0);
					unk_0xA93E75A5493862BD(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_477 = 1;
					iLocal_478 = unk_0x84A97C70FFDEC0C8() + 300;
				}
				else
				{
					iLocal_93 = 2;
				}
			}
			if (!bLocal_533)
			{
				unk_0x12A60388636C9B1C(iLocal_289, 247, 1);
			}
			break;
		
		case 2:
			if (bLocal_533)
			{
				func_33(&iLocal_289);
			}
			else
			{
				if (bLocal_475)
				{
					unk_0x8DA3061503F2C4C8(iLocal_289);
					unk_0xBB9A2DB94A862D7A(iLocal_289, -813.7761f, 179.4943f, 71.1592f, 0, 0, 0, 1);
					unk_0xCE607BF2D136923E(iLocal_289, 0, 0);
				}
				if (func_23())
				{
					func_54();
				}
				unk_0x53D0F09DE1A526F7(iLocal_273, 1, 1);
				func_51(iLocal_289);
			}
			unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
			func_40(1, 1, 1, 1);
			unk_0xB6AE7C18ADC0F901(0f);
			unk_0xAF191D67F49B35C9(uLocal_473, 0);
			func_35(0);
			break;
	}
}

void func_35(bool bParam0)
{
	func_36(0, 0);
	if (bParam0)
	{
		func_497(0, 0);
	}
	else
	{
		func_497(0, 1);
	}
}

void func_36(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55820)
	{
		Global_55820 = iParam1;
	}
	if (bParam0)
	{
		if ((func_39(0) && Global_69943.f_1 == 1) && func_38(Global_69943))
		{
		}
		else
		{
			Global_55818 = 1;
		}
	}
	if (Global_101652.f_8028 || func_39(0))
	{
		iVar0 = func_37();
		iVar1 = Global_82571[iVar0 /*5*/];
		uVar2 = Global_69966.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101652.f_8028)
			{
			}
			return;
		}
		if (unk_0xF44A5E894FE76438(Global_82571[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xF44A5E894FE76438(Global_82571[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xB8A73E7DA87B2968(&(Global_82571[iVar0 /*5*/].f_1), 4);
		unk_0xB8A73E7DA87B2968(&Global_69945, 1);
		Global_69961 = uVar2;
		Global_69962 = unk_0x84A97C70FFDEC0C8();
	}
}

int func_37()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xF44A5E894FE76438(Global_82571[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_39(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_40(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0xF3F8195C98263BF5();
	unk_0x3C8949482F2DCB04(uVar0, 0);
	unk_0x0AB2B0C7DAE9FF05(uVar0, iParam3, 0);
	func_42(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xFE3C4806D54DF474(1);
		unk_0x6FAE7F32571B33E3(1);
	}
	unk_0x04890EB0282525A5(1);
	if (iParam0 == 1)
	{
		unk_0xB8A949B886F6079B(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_36 != 0 && iLocal_36 != joaat("object")) && iLocal_36 != joaat("gadget_parachute"))
		{
			if (func_26(unk_0xD5A676B97920D126()))
			{
				if (unk_0xE5A6095B39C65EBC(unk_0xD5A676B97920D126(), iLocal_36, 0))
				{
					unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), iLocal_36, 0);
				}
			}
		}
	}
	if (func_41(unk_0xD5A676B97920D126()))
	{
		unk_0x6EA1885B7EF8C3AB(unk_0xD5A676B97920D126(), 0, 0);
	}
}

int func_41(int iParam0)
{
	if (func_26(uParam0))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xED2B6BABD1851525(unk_0xFB6B3EEFAB2DD12C());
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 1);
		func_50(1);
		unk_0xA66D8B0C391B7E6A();
		unk_0x8D4260E505305DB8();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x982007D3EB9D85D2())
			{
				unk_0x73998CD31AEFA620(0);
			}
			if (!func_7())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_49(1, iParam3, iParam2, 0);
		Global_55824 = 1;
		Global_68130 = 1;
		Global_69695 = 1;
	}
	else
	{
		func_50(0);
		unk_0xEC2FD1C3670ADE14();
		Global_55824 = 0;
		if (bParam1)
		{
			unk_0xBD0FB22CD565973B();
		}
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 0);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_49(0, iParam3, iParam2, 0);
		if (unk_0x1995B52453EF6537())
		{
			if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_47(unk_0xFB6B3EEFAB2DD12C())) && !func_44(unk_0xFB6B3EEFAB2DD12C(), 0)) && !func_43())
			{
				unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_47(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
		}
		Global_69695 = 0;
	}
}

bool func_43()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_45(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_46()
{
	return Global_1312731;
}

int func_47(int iParam0)
{
	if (func_44(iParam0, 0))
	{
		return 1;
	}
	if (func_48())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_49(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xD1F53A5D24CA94D7() != iParam0 && uParam2)
		{
			unk_0x8AA8D29EBC93F521(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 13);
	}
}

int func_51(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	iVar0 = func_52(iParam0);
	if (unk_0x7887B64A08364778(Global_91272))
	{
		if (unk_0x7887B64A08364778(Global_91273))
		{
			return 0;
		}
		Global_86825[iVar0] = 140;
		Global_91273 = iParam0;
		return 1;
	}
	Global_86825[iVar0] = 140;
	Global_86841 = 137;
	Global_91272 = iParam0;
	return 1;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	if (iVar0 == func_53(14))
	{
		return 0;
	}
	if (iVar0 == func_53(15))
	{
		return 1;
	}
	if (iVar0 == func_53(17))
	{
		return 2;
	}
	if (iVar0 == joaat("s_f_m_maid_01"))
	{
		return 3;
	}
	if (iVar0 == joaat("s_m_m_gardener_01"))
	{
		return 4;
	}
	if (iVar0 == joaat("ig_denise"))
	{
		return 5;
	}
	if (iVar0 == func_53(19))
	{
		return 6;
	}
	if (iVar0 == func_53(37))
	{
		return 7;
	}
	if (iVar0 == func_14(0))
	{
		return 8;
	}
	if (iVar0 == func_14(2))
	{
		return 9;
	}
	if (iVar0 == func_53(20))
	{
		return 10;
	}
	if (iVar0 == func_53(40))
	{
		return 11;
	}
	if (iVar0 == joaat("s_f_m_maid_01"))
	{
		return 12;
	}
	if (iVar0 == func_53(32))
	{
		return 13;
	}
	if (iVar0 == func_53(24))
	{
		return 14;
	}
	return 16;
}

int func_53(int iParam0)
{
	if (!func_12(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_54()
{
	Global_14611 = 0;
	func_55();
}

void func_55()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
	}
}

bool func_56(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_57(int iParam0)
{
	if (unk_0x8AFBC859AA63D3D7())
	{
		if ((unk_0x84A97C70FFDEC0C8() - Global_28) > iParam0)
		{
			Global_27 = unk_0x84A97C70FFDEC0C8();
		}
		Global_28 = unk_0x84A97C70FFDEC0C8();
		if ((unk_0x84A97C70FFDEC0C8() - Global_27) > iParam0)
		{
			if (func_58())
			{
				Global_27 = unk_0x84A97C70FFDEC0C8();
				return 1;
			}
		}
	}
	return 0;
}

int func_58()
{
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (unk_0x3CEEA45E4779F6BD(0, 18) || unk_0x3CEEA45E4779F6BD(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_59(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	var uVar0;
	
	uVar0 = unk_0xF3F8195C98263BF5();
	if (unk_0x9BA2465846EC8271(uVar0))
	{
		func_177(0);
		if (bParam9)
		{
			unk_0x17FA67DA6C888A8D(unk_0xF3F8195C98263BF5(), 1);
		}
		if (bParam8)
		{
			switch (func_10())
			{
				case 0:
					if (func_176(unk_0xD5A676B97920D126(), 8, 15))
					{
						func_62(unk_0xD5A676B97920D126(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_176(unk_0xD5A676B97920D126(), 9, 6))
					{
						func_62(unk_0xD5A676B97920D126(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_176(unk_0xD5A676B97920D126(), 8, 1) || func_176(unk_0xD5A676B97920D126(), 8, 10))
					{
						func_62(unk_0xD5A676B97920D126(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_176(unk_0xD5A676B97920D126(), 8, 4))
					{
						func_62(unk_0xD5A676B97920D126(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0x7B2D1A3447B0AD5C(func_61(unk_0xF3F8195C98263BF5()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0xB78B81E0A519202F(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0xCDB3CF095121B4E2(Param0, 30f);
		}
		unk_0x7D132824755315B1(Param0, 30f, 0);
		unk_0xD333A6376EE57D56(iVar0, 0, 0);
		unk_0xB765EEE9B2DD5EC5(iVar0, 0);
		unk_0x3C8949482F2DCB04(iVar0, 1);
		if (bParam12)
		{
			unk_0xFE3C4806D54DF474(0);
			unk_0x6FAE7F32571B33E3(0);
		}
		unk_0x59C0D363E5A5B548();
		if (iParam11 == 1)
		{
			unk_0x04890EB0282525A5(1);
		}
		if (iParam3 == 1)
		{
			unk_0xB8A949B886F6079B(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_36 = 0;
			if (func_26(unk_0xD5A676B97920D126()))
			{
				iLocal_36 = unk_0xC86BB86D0864932F(unk_0xD5A676B97920D126());
				unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_60(500, 0);
		}
	}
}

void func_60(int iParam0, bool bParam1)
{
	if (unk_0x7E3640C27B17457C() || unk_0x83D6BCB493FCFCBA())
	{
		if (!unk_0xF9B8AB338DC56ADD())
		{
			unk_0xFF11D473E95357D3(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x8AFBC859AA63D3D7())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

Vector3 func_61(var uParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(uParam0), 0);
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	int iVar10;
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;
	
	if (unk_0x00B5B0B68211D89B(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_69517++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	if (iParam5 == 0)
	{
		Global_69518[1 /*14*/] = { func_112(iVar10, iParam1, iParam2) };
		if (!func_111(iParam3))
		{
			Global_69517 = (Global_69517 - 1);
			return 0;
		}
		func_104(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_102(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_102(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_101(iParam0, 1);
			if (!func_100(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_101(iParam0, 0);
			if (!func_99(iVar10, 14, iVar8, -1) && !func_98(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_101(iParam0, 2);
			}
		}
		unk_0xE2E78A1839098947(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_69561 };
		}
		else
		{
			uVar11 = { func_94(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69518[1 /*14*/] = { func_112(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_69578 };
						}
						else
						{
							uVar28 = { func_91(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69518[1 /*14*/] = { func_112(iVar10, 14, uVar28[iVar1]) };
							func_82(iParam0, Global_69518[1 /*14*/].f_12, Global_69518[1 /*14*/].f_3, Global_69518[1 /*14*/].f_4);
							func_104(14);
							if (Global_69517 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_74(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_62(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_73(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x5BD2F51088536150(iParam0, func_72(iVar0), Global_69518[1 /*14*/].f_3, Global_69518[1 /*14*/].f_4, unk_0x2A8A29E2EFF14437(iParam0, func_72(iVar0)));
						}
						else
						{
							unk_0x5BD2F51088536150(iParam0, func_72(iVar0), Global_69518[1 /*14*/].f_3, Global_69518[1 /*14*/].f_4, iParam4);
						}
						func_104(iVar0);
						if (Global_69517 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_74(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_62(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69518[1 /*14*/] = { func_112(iVar10, iVar0, func_71(iParam0, iVar0, -1)) };
				if (unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_70(iParam0, iVar10, &iVar4, 1))
							{
								func_62(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_94(iVar10, 0) };
						func_62(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_112(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_68(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_62(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_112(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_68(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_62(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_112(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_68(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_62(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_112(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_68(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_62(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_112(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_68(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_62(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_91(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69518[1 /*14*/] = { func_112(iVar10, 14, uVar69[iVar1]) };
			func_82(iParam0, Global_69518[1 /*14*/].f_12, Global_69518[1 /*14*/].f_3, Global_69518[1 /*14*/].f_4);
			func_104(14);
			if (Global_69517 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_74(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_62(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_82(iParam0, Global_69518[1 /*14*/].f_12, Global_69518[1 /*14*/].f_3, Global_69518[1 /*14*/].f_4);
		func_104(iParam1);
		if (Global_69517 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_74(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_62(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x5BD2F51088536150(iParam0, func_72(iParam1), Global_69518[1 /*14*/].f_3, Global_69518[1 /*14*/].f_4, unk_0x2A8A29E2EFF14437(iParam0, func_72(iParam1)));
		}
		else
		{
			unk_0x5BD2F51088536150(iParam0, func_72(iParam1), Global_69518[1 /*14*/].f_3, Global_69518[1 /*14*/].f_4, iParam4);
		}
		if (Global_69517 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_74(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_62(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_65(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69517 == 1)
	{
		if (func_70(iParam0, iVar10, &iVar4, 0))
		{
			func_62(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_63(iParam0, iVar10, &iVar4))
		{
			func_62(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69517 = (Global_69517 - 1);
	return 1;
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_64(iParam1);
	if (Global_101652.f_2079.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_176(iParam0, Global_101652.f_2079.f_539[iVar0 /*65*/].f_64, Global_101652.f_2079.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_62;
			Global_101652.f_2079.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101652.f_2079.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_67(iParam0, 12, iVar0))
	{
		if (func_66(iParam0, iParam1, iParam2))
		{
			iVar1 = func_64(iParam0);
			if (iParam1 == 3)
			{
				Global_101652.f_2079.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_101652.f_2079.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_67(int iParam0, int iParam1, int iParam2)
{
	Global_69518[1 /*14*/] = { func_112(iParam0, iParam1, iParam2) };
	return unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 2);
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_91(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_69(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_100(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_99(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_98(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_100(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_99(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_98(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_100(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_99(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_98(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_64(iParam1);
	if (Global_101652.f_2079.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_176(iParam0, Global_101652.f_2079.f_539[iVar0 /*65*/].f_61, Global_101652.f_2079.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_59;
			Global_101652.f_2079.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101652.f_2079.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_176(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_176(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_101(iParam0, iParam2);
			}
		}
		else
		{
			return func_102(iParam0, iParam1);
		}
	}
	return -99;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_64(iParam0);
		Global_101652.f_2079.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101652.f_2079.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_102(iParam0, 1);
				iVar0 = func_81(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_102(iParam0, 2);
				iVar0 = func_81(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_73(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_80(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_79(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_78(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_78(iParam0, 3, 135, 150))
									{
										iVar0 = func_77(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_78(iParam0, 3, 209, 222))
									{
										iVar0 = func_77(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_78(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_77(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_77(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_77(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_77(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_78(iParam0, 3, 176, 191) && !func_78(iParam0, 3, 227, 242))
									{
										iVar0 = func_77(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_102(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_102(iParam0, 11);
								iVar5 = func_76(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_102(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_75(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_102(iParam0, 8);
								iVar8 = func_102(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_76(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_76(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_102(iParam0, 11);
								iVar0 = func_76(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_77(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_77(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_67(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_102(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_64(iParam0);
		Global_101652.f_2079.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101652.f_2079.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x9E08E685CA23D6D4(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x237B0CFB6EEBD3BA(iParam0, 34, 0);
			unk_0x237B0CFB6EEBD3BA(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0xA89A57E40879561F(iParam0, iParam1, iParam2, iParam3, unk_0x1995B52453EF6537());
		if (iParam1 == 0)
		{
			iVar0 = func_87(iParam0, iParam2, iParam3, iParam1);
			if (func_83(unk_0xA0A4DA31DEDFAC4F(iParam0), 14, iVar0, unk_0x6CFC8CF1C1EF2183(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x237B0CFB6EEBD3BA(iParam0, 34, 1);
				unk_0x237B0CFB6EEBD3BA(iParam0, 36, 1);
			}
			else
			{
				unk_0x237B0CFB6EEBD3BA(iParam0, 34, 0);
				unk_0x237B0CFB6EEBD3BA(iParam0, 36, 0);
			}
		}
	}
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_84(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0xF4D25C5406BEFFD4(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_84(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0xF4D25C5406BEFFD4(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x44ACFC8E42F99D5D(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_86(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0x5071230813DA999D(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x99080AA810B6E047(iVar17, &Var0);
			if (!unk_0x68410A55F20AE7A5(Var0.f_0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x5B7663D0BD68F934(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_85(iParam0, func_72(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69640.f_26[iParam2] && iParam1 == Global_69640[iParam2]) && Global_69640.f_13[iParam2] != 0)
		{
			return Global_69640.f_13[iParam2];
		}
		iVar41 = unk_0x5071230813DA999D(iParam3, 6, -1, 0, -1, func_72(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xCB47DD14A275CD83(iVar38, &Var21);
			if (!unk_0x68410A55F20AE7A5(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					Global_69640.f_13[iParam2] = Var21.f_1;
					Global_69640[iParam2] = iParam1;
					Global_69640.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_90(iParam3);
	}
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	iVar1 = unk_0x6CFC8CF1C1EF2183(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_89(unk_0xA0A4DA31DEDFAC4F(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_89(unk_0xA0A4DA31DEDFAC4F(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xE189A1D57CB9E87C(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xFAAF3CD1F65E6B6E(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_88(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_90(iParam3);
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x44ACFC8E42F99D5D(&Var0);
		iVar18 = 0;
		iVar19 = unk_0x5071230813DA999D(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x99080AA810B6E047(iVar17, &Var0);
			if (!unk_0x68410A55F20AE7A5(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_86(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x5B7663D0BD68F934(&Var20);
		iVar38 = 0;
		iVar39 = unk_0x5071230813DA999D(iParam3, 6, -1, 0, -1, func_72(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xCB47DD14A275CD83(iVar37, &Var20);
			if (!unk_0x68410A55F20AE7A5(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_85(iParam0, func_72(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

struct<10> func_91(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_93(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_93(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_93(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_93(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_93(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_93(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_93(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_93(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_93(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_93(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_93(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_92(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_93(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_93(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_93(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_93(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_93(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_93(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_93(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_93(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_93(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_93(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_92(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_93(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_93(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_93(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_93(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_93(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_93(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_93(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_93(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_93(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_93(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_92(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_93(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_93(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_93(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_93(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_93(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_93(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_93(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_93(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_93(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_93(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_93(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_93(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_93(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_93(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_93(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_93(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_93(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_93(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_93(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_93(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_93(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_93(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_93(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_93(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_93(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_93(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_92(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_93(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_93(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_93(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_93(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_93(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_93(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_93(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_93(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_93(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_93(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_93(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_93(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_93(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_93(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_93(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_93(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_93(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_93(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_93(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_93(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_93(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_93(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_93(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_93(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_93(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_92(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0xB4858C30863AB5A5(iParam2, &Var1);
		if (!unk_0x68410A55F20AE7A5(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x0A947C4AC956A503(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_89(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_94(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_101652.f_8028.f_99.f_58[120])
					{
						func_97(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_97(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_97(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_97(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_97(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_97(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_97(&Var1, -99, -99, Global_101652.f_2079.f_539.f_196[0], Global_101652.f_2079.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_97(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_97(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_97(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_97(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_97(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_97(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_97(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_97(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_97(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_97(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_97(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_97(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_97(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_97(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_97(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_97(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_97(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_97(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_97(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_97(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_97(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_97(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_97(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_97(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_97(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_97(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_97(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_97(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_97(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_97(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_97(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_97(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_97(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_97(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_97(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_97(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_97(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_97(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_97(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_97(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_97(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_97(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_97(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_97(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_97(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_97(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_97(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_95(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_97(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_97(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_97(&Var1, -99, -99, Global_101652.f_2079.f_539.f_196[1], Global_101652.f_2079.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_97(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_97(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_97(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_97(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_97(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_97(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_97(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_97(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_97(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_97(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_97(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_97(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_97(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_97(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_97(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_97(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_97(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_97(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_97(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_97(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_97(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_97(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_97(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_97(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_97(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_97(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_97(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_97(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_97(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_97(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_97(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_97(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_97(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_97(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_97(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_97(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_97(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_97(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_97(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_97(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_97(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_97(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_97(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_97(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_95(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_97(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_97(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_97(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_97(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_97(&Var1, -99, -99, Global_101652.f_2079.f_539.f_196[2], Global_101652.f_2079.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_97(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_97(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_97(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_97(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_97(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_97(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_97(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_97(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_97(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_97(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_97(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_97(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_97(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_97(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_97(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_97(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_97(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_97(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_97(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_97(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_97(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_97(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_97(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_97(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_97(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_97(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_97(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_97(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_97(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_97(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_97(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_97(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_97(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_97(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_97(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_97(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_97(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_97(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_97(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_97(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_97(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_97(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_97(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_95(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_97(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_97(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_97(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_97(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_97(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_97(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_97(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_97(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_97(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_97(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_97(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_97(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_97(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_97(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_97(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_97(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_97(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_97(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_97(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_97(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_97(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_97(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_97(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_97(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_97(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_97(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_95(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_97(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_97(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_97(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_97(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_97(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_97(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_97(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_97(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_97(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_97(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_97(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_97(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_97(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_97(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_97(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_97(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_97(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_97(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_97(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_97(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_97(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_97(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_97(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_97(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_97(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_97(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_97(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_97(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_95(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_95(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0xB7603C62ECB5B20C(iVar0, 0);
	unk_0x1E9E65BD366528B2((iParam2 - iParam3), &Var1);
	if (!unk_0x68410A55F20AE7A5(Var1.f_0))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0x30B4315B2FB2C481(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0x5B7663D0BD68F934(&Var19);
						unk_0x6D4ECBA89E947B0B(Var16.f_0, &Var19);
						if (Var16.f_0 != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_96(Var16.f_2)] = Var16.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_96(Var16.f_2)] = func_89(iParam1, Var16.f_0, func_96(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_96(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_97(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_98(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_84(iParam0, iParam2, 14, 3);
						}
						return (unk_0xF4D25C5406BEFFD4(iParam3, joaat("HAT"), 1) || unk_0xF4D25C5406BEFFD4(func_84(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_84(iParam0, iParam2, 1, 3);
						}
						return (unk_0xF4D25C5406BEFFD4(iParam3, joaat("HAT"), 0) || unk_0xF4D25C5406BEFFD4(func_84(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_84(iParam0, iParam2, 14, 4);
						}
						return (unk_0xF4D25C5406BEFFD4(iParam3, joaat("HAT"), 1) || unk_0xF4D25C5406BEFFD4(func_84(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_84(iParam0, iParam2, 1, 4);
						}
						return (unk_0xF4D25C5406BEFFD4(iParam3, joaat("HAT"), 0) || unk_0xF4D25C5406BEFFD4(func_84(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_84(iParam0, iParam2, 1, 3);
					}
					if (unk_0xF4D25C5406BEFFD4(iParam3, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_84(iParam0, iParam2, 1, 4);
					}
					if (unk_0xF4D25C5406BEFFD4(iParam3, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_84(iParam0, iParam2, 14, 3);
					}
					return unk_0xF4D25C5406BEFFD4(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_84(iParam0, iParam2, 14, 4);
					}
					return unk_0xF4D25C5406BEFFD4(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x00B5B0B68211D89B(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xAB9908FC72EDECCD(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_90(iParam1);
	}
	iVar1 = unk_0x3B8EAC78093F7707(iParam0, iParam1);
	return func_87(iParam0, iVar0, iVar1, iParam1);
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x00B5B0B68211D89B(iParam0))
	{
		return -99;
	}
	iVar0 = func_72(iParam1);
	iVar1 = unk_0x0DF5DCF0FB12F865(iParam0, iVar0);
	iVar2 = unk_0xF48FEED29B821958(iParam0, iVar0);
	return func_103(iParam0, iVar1, iVar2, iParam1);
}

int func_103(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_72(iParam3);
	iVar1 = unk_0x7BF6B9BF3C2E3C93(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xCF6D57242ADA92FB(uParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_104(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 1) && !unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 6))
	{
		func_110(iParam0, Global_69518[1 /*14*/].f_5, Global_69518[1 /*14*/].f_2, 2, Global_69518[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 1) && unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_105(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_105(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_105(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_105(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69516;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_109(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_108(iVar2, iVar0, 0);
		unk_0xB8A73E7DA87B2968(&uVar3, iVar1);
		func_106(iVar2, uVar3, iVar0, 1, 0);
	}
}

void func_106(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_107(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, iParam3);
	}
}

int func_107(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_46();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_107(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_109(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 6022;
	if ((bParam4 && Global_2592834) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 966;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 966;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 966;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 966;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 966;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 966;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 966;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 966;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 930;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 930;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 930;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 930;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 930;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 930;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 930;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 930;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 930;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1018;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1018;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1018;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1018;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1018;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1018;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1018;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1018;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 966;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 966;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 966;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 966;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 966;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 966;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 966;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 966;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1018;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1018;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1018;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1018;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1018;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1018;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1018;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1018;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2592834)
		{
			iVar0 = unk_0xC1E146D38E02978A(iParam0);
		}
		else
		{
			iVar0 = unk_0x0259B0435C4F8226(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xC1E146D38E02978A(iParam0);
	}
	else
	{
		iVar0 = unk_0x0259B0435C4F8226(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1753;
					break;
				
				case 1:
					*uParam2 = 1754;
					break;
				
				case 2:
					*uParam2 = 1755;
					break;
				
				case 3:
					*uParam2 = 1756;
					break;
				
				case 4:
					*uParam2 = 1757;
					break;
				
				case 5:
					*uParam2 = 1758;
					break;
				
				case 6:
					*uParam2 = 1765;
					break;
				
				case 7:
					*uParam2 = 1766;
					break;
				
				case 8:
					*uParam2 = 1767;
					break;
				
				case 9:
					*uParam2 = 1768;
					break;
				
				case 10:
					*uParam2 = 1769;
					break;
				
				case 11:
					*uParam2 = 1770;
					break;
				
				case 12:
					*uParam2 = 1771;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1913;
					break;
				
				case 18:
					*uParam2 = 1927;
					break;
				
				case 19:
					*uParam2 = 1928;
					break;
				
				case 20:
					*uParam2 = 1929;
					break;
				
				case 21:
					*uParam2 = 1930;
					break;
				
				case 22:
					*uParam2 = 1931;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2062;
					break;
				
				case 26:
					*uParam2 = 2063;
					break;
				
				case 27:
					*uParam2 = 2064;
					break;
				
				case 28:
					*uParam2 = 2065;
					break;
				
				case 29:
					*uParam2 = 2066;
					break;
				
				case 30:
					*uParam2 = 2067;
					break;
				
				case 31:
					*uParam2 = 2068;
					break;
				
				case 32:
					*uParam2 = 2069;
					break;
				
				case 33:
					*uParam2 = 2070;
					break;
				
				case 34:
					*uParam2 = 2071;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
					break;
				
				case 41:
					*uParam2 = 2433;
					break;
				
				case 42:
					*uParam2 = 2434;
					break;
				
				case 43:
					*uParam2 = 2435;
					break;
				
				case 44:
					*uParam2 = 2436;
					break;
				
				case 45:
					*uParam2 = 2437;
					break;
				
				case 46:
					*uParam2 = 2438;
					break;
				
				case 47:
					*uParam2 = 2439;
					break;
				
				case 48:
					*uParam2 = 2440;
					break;
				
				case 49:
					*uParam2 = 2441;
					break;
				
				case 50:
					*uParam2 = 2442;
					break;
				
				case 51:
					*uParam2 = 2571;
					break;
				
				case 52:
					*uParam2 = 2572;
					break;
				
				case 53:
					*uParam2 = 2573;
					break;
				
				case 54:
					*uParam2 = 2574;
					break;
				
				case 55:
					*uParam2 = 2575;
					break;
				
				case 56:
					*uParam2 = 2576;
					break;
				
				case 57:
					*uParam2 = 2577;
					break;
				
				case 58:
					*uParam2 = 2578;
					break;
				
				case 59:
					*uParam2 = 2579;
					break;
				
				case 60:
					*uParam2 = 2580;
					break;
				
				case 61:
					*uParam2 = 2581;
					break;
				
				case 62:
					*uParam2 = 3178;
					break;
				
				case 63:
					*uParam2 = 3179;
					break;
				
				case 64:
					*uParam2 = 3180;
					break;
				
				case 65:
					*uParam2 = 3181;
					break;
				
				case 66:
					*uParam2 = 3182;
					break;
				
				case 67:
					*uParam2 = 3183;
					break;
				
				case 68:
					*uParam2 = 3651;
					break;
				
				case 69:
					*uParam2 = 3652;
					break;
				
				case 70:
					*uParam2 = 3653;
					break;
				
				case 71:
					*uParam2 = 3654;
					break;
				
				case 72:
					*uParam2 = 3655;
					break;
				
				case 73:
					*uParam2 = 3656;
					break;
				
				case 74:
					*uParam2 = 3657;
					break;
				
				case 75:
					*uParam2 = 3658;
					break;
				
				case 76:
					*uParam2 = 3659;
					break;
				
				case 77:
					*uParam2 = 3660;
					break;
				
				case 78:
					*uParam2 = 3764;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3765;
					break;
				
				case 80:
					*uParam2 = 3766;
					break;
				
				case 81:
					*uParam2 = 3767;
					break;
				
				case 82:
					*uParam2 = 3768;
					break;
				
				case 83:
					*uParam2 = 3769;
					break;
				
				case 84:
					*uParam2 = 3770;
					break;
				
				case 85:
					*uParam2 = 3771;
					break;
				
				case 86:
					*uParam2 = 3874;
					break;
				
				case 87:
					*uParam2 = 3875;
					break;
				
				case 88:
					*uParam2 = 3876;
					break;
				
				case 89:
					*uParam2 = 5309;
					break;
				
				case 90:
					*uParam2 = 5310;
					break;
				
				case 91:
					*uParam2 = 5311;
					break;
				
				case 92:
					*uParam2 = 5312;
					break;
				
				case 93:
					*uParam2 = 5313;
					break;
				
				case 94:
					*uParam2 = 5314;
					break;
				
				case 95:
					*uParam2 = 5315;
					break;
				
				case 96:
					*uParam2 = 5316;
					break;
				
				case 97:
					*uParam2 = 5317;
					break;
				
				case 98:
					*uParam2 = 5318;
					break;
				
				case 99:
					*uParam2 = 5319;
					break;
				
				case 100:
					*uParam2 = 5320;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1772;
					break;
				
				case 7:
					*uParam2 = 1773;
					break;
				
				case 8:
					*uParam2 = 1774;
					break;
				
				case 9:
					*uParam2 = 1775;
					break;
				
				case 10:
					*uParam2 = 1776;
					break;
				
				case 11:
					*uParam2 = 1777;
					break;
				
				case 12:
					*uParam2 = 1778;
					break;
				
				case 13:
					*uParam2 = 1781;
					break;
				
				case 14:
					*uParam2 = 1782;
					break;
				
				case 15:
					*uParam2 = 1883;
					break;
				
				case 16:
					*uParam2 = 1884;
					break;
				
				case 17:
					*uParam2 = 1914;
					break;
				
				case 18:
					*uParam2 = 1932;
					break;
				
				case 19:
					*uParam2 = 1933;
					break;
				
				case 20:
					*uParam2 = 1934;
					break;
				
				case 21:
					*uParam2 = 1935;
					break;
				
				case 22:
					*uParam2 = 1936;
					break;
				
				case 23:
					*uParam2 = 2037;
					break;
				
				case 24:
					*uParam2 = 2038;
					break;
				
				case 25:
					*uParam2 = 2072;
					break;
				
				case 26:
					*uParam2 = 2073;
					break;
				
				case 27:
					*uParam2 = 2074;
					break;
				
				case 28:
					*uParam2 = 2075;
					break;
				
				case 29:
					*uParam2 = 2076;
					break;
				
				case 30:
					*uParam2 = 2077;
					break;
				
				case 31:
					*uParam2 = 2078;
					break;
				
				case 32:
					*uParam2 = 2079;
					break;
				
				case 33:
					*uParam2 = 2080;
					break;
				
				case 34:
					*uParam2 = 2081;
					break;
				
				case 35:
					*uParam2 = 2320;
					break;
				
				case 36:
					*uParam2 = 2321;
					break;
				
				case 37:
					*uParam2 = 2375;
					break;
				
				case 38:
					*uParam2 = 2376;
					break;
				
				case 39:
					*uParam2 = 2377;
					break;
				
				case 40:
					*uParam2 = 2378;
					break;
				
				case 41:
					*uParam2 = 2443;
					break;
				
				case 42:
					*uParam2 = 2444;
					break;
				
				case 43:
					*uParam2 = 2445;
					break;
				
				case 44:
					*uParam2 = 2446;
					break;
				
				case 45:
					*uParam2 = 2447;
					break;
				
				case 46:
					*uParam2 = 2448;
					break;
				
				case 47:
					*uParam2 = 2449;
					break;
				
				case 48:
					*uParam2 = 2450;
					break;
				
				case 49:
					*uParam2 = 2451;
					break;
				
				case 50:
					*uParam2 = 2452;
					break;
				
				case 51:
					*uParam2 = 2582;
					break;
				
				case 52:
					*uParam2 = 2583;
					break;
				
				case 53:
					*uParam2 = 2584;
					break;
				
				case 54:
					*uParam2 = 2585;
					break;
				
				case 55:
					*uParam2 = 2586;
					break;
				
				case 56:
					*uParam2 = 2587;
					break;
				
				case 57:
					*uParam2 = 2588;
					break;
				
				case 58:
					*uParam2 = 2589;
					break;
				
				case 59:
					*uParam2 = 2590;
					break;
				
				case 60:
					*uParam2 = 2591;
					break;
				
				case 61:
					*uParam2 = 2592;
					break;
				
				case 62:
					*uParam2 = 3184;
					break;
				
				case 63:
					*uParam2 = 3185;
					break;
				
				case 64:
					*uParam2 = 3186;
					break;
				
				case 65:
					*uParam2 = 3187;
					break;
				
				case 66:
					*uParam2 = 3188;
					break;
				
				case 67:
					*uParam2 = 3189;
					break;
				
				case 68:
					*uParam2 = 3661;
					break;
				
				case 69:
					*uParam2 = 3662;
					break;
				
				case 70:
					*uParam2 = 3663;
					break;
				
				case 71:
					*uParam2 = 3664;
					break;
				
				case 72:
					*uParam2 = 3665;
					break;
				
				case 73:
					*uParam2 = 3666;
					break;
				
				case 74:
					*uParam2 = 3667;
					break;
				
				case 75:
					*uParam2 = 3668;
					break;
				
				case 76:
					*uParam2 = 3669;
					break;
				
				case 77:
					*uParam2 = 3670;
					break;
				
				case 78:
					*uParam2 = 3772;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3773;
					break;
				
				case 80:
					*uParam2 = 3774;
					break;
				
				case 81:
					*uParam2 = 3775;
					break;
				
				case 82:
					*uParam2 = 3776;
					break;
				
				case 83:
					*uParam2 = 3777;
					break;
				
				case 84:
					*uParam2 = 3778;
					break;
				
				case 85:
					*uParam2 = 3779;
					break;
				
				case 86:
					*uParam2 = 3877;
					break;
				
				case 87:
					*uParam2 = 3878;
					break;
				
				case 88:
					*uParam2 = 3879;
					break;
				
				case 89:
					*uParam2 = 5321;
					break;
				
				case 90:
					*uParam2 = 5322;
					break;
				
				case 91:
					*uParam2 = 5323;
					break;
				
				case 92:
					*uParam2 = 5324;
					break;
				
				case 93:
					*uParam2 = 5325;
					break;
				
				case 94:
					*uParam2 = 5326;
					break;
				
				case 95:
					*uParam2 = 5327;
					break;
				
				case 96:
					*uParam2 = 5328;
					break;
				
				case 97:
					*uParam2 = 5329;
					break;
				
				case 98:
					*uParam2 = 5330;
					break;
				
				case 99:
					*uParam2 = 5331;
					break;
				
				case 100:
					*uParam2 = 5332;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 6022;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x4EA098C870B73AB7(&(Global_101652.f_2079[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xF44A5E894FE76438(Global_101652.f_2079[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_111(int iParam0)
{
	if (!unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_112(int iParam0, int iParam1, int iParam2)
{
	func_175();
	if (iParam0 == joaat("player_zero"))
	{
		func_157(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_138(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_113(iParam1, iParam2);
	}
	return Global_69518[0 /*14*/];
}

void func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_137(iParam1);
			break;
		
		case 2:
			func_136(iParam1);
			break;
		
		case 3:
			func_133(iParam1);
			break;
		
		case 4:
			func_132(iParam1);
			break;
		
		case 6:
			func_131(iParam1);
			break;
		
		case 5:
			func_130(iParam1);
			break;
		
		case 8:
			func_129(iParam1);
			break;
		
		case 9:
			func_128(iParam1);
			break;
		
		case 10:
			func_127(iParam1);
			break;
		
		case 1:
			func_126(iParam1);
			break;
		
		case 7:
			func_125(iParam1);
			break;
		
		case 11:
			func_124(iParam1);
			break;
		
		case 12:
			func_123(iParam1);
			break;
		
		case 13:
			func_122(iParam1);
			break;
		
		case 14:
			func_114(iParam1);
			break;
	}
}

void func_114(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 155);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_120(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x6D9FF4C899CD785F(sParam3) != unk_0x6D9FF4C899CD785F("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 5);
		}
		unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 1);
		unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 2);
		unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 6);
		if (func_15(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0xF4D25C5406BEFFD4(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_119(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x4EA098C870B73AB7(&(uParam0->f_6), 2);
			}
			if (!func_119(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_119(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x4EA098C870B73AB7(&(uParam0->f_6), 2);
			}
			if (!func_119(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_119(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x4EA098C870B73AB7(&(uParam0->f_6), 2);
			}
			if (!func_119(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 0);
		unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 5);
		if (func_110(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 1);
		}
		if (func_110(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 2);
		}
		if (!func_110(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_15(14))
			{
				return;
			}
			uVar0 = func_108(func_118(iParam1, uParam0->f_2), Global_69516, 0);
			if (unk_0xF44A5E894FE76438(uVar0, uParam0->f_1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 1);
			}
			iVar0 = func_108(func_117(iParam1, uParam0->f_2), Global_69516, 0);
			if (unk_0xF44A5E894FE76438(iVar0, uParam0->f_1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 2);
			}
			if (func_116(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_108(iVar1, Global_69516, 0);
				if (!unk_0xF44A5E894FE76438(iVar0, uParam0->f_1))
				{
					unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_6), 2);
		}
	}
}

bool func_116(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 973;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 3:
					*uParam2 = 1424;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 9:
					*uParam2 = 1433;
					break;
				
				case 10:
					*uParam2 = 1435;
					break;
				
				case 1:
					*uParam2 = 1006;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
				
				case 12:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 975;
					break;
				
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 9:
					*uParam2 = 1434;
					break;
				
				case 7:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	}
	return *uParam2 != 973;
}

int func_117(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 3:
					return 1409;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 9:
					return 1418;
					break;
				
				case 10:
					return 1420;
					break;
				
				case 1:
					return 954;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
				
				case 12:
					return 973;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 923;
					break;
				
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 9:
					return 1419;
					break;
				
				case 7:
					return 1422;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 971;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
	}
	return 930;
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 3:
					return 1394;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 9:
					return 1403;
					break;
				
				case 10:
					return 1405;
					break;
				
				case 1:
					return 902;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
				
				case 12:
					return 921;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 871;
					break;
				
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 9:
					return 1404;
					break;
				
				case 7:
					return 1407;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 919;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
	}
	return 878;
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69516;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_109(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_108(iVar2, iVar0, 0);
		return unk_0xF44A5E894FE76438(uVar3, iVar1);
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_69518[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0xB7603C62ECB5B20C(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x1E9E65BD366528B2(iVar17, &Var2);
			if (!unk_0x68410A55F20AE7A5(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_115(&(Global_69518[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_115(&(Global_69518[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x44ACFC8E42F99D5D(&Var20);
		iVar39 = 0;
		iVar40 = unk_0x5071230813DA999D(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x99080AA810B6E047(iVar38, &Var20);
			if (!unk_0x68410A55F20AE7A5(Var20.f_0))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20.f_0;
					func_115(&(Global_69518[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0xF4D25C5406BEFFD4(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x5B7663D0BD68F934(&Var41);
		iVar59 = 0;
		iVar60 = unk_0x5071230813DA999D(iVar1, 6, -1, 0, -1, func_72(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xCB47DD14A275CD83(iVar58, &Var41);
			if (!unk_0x68410A55F20AE7A5(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_115(&(Global_69518[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0xF4D25C5406BEFFD4(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_122(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_123(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 48);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_124(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_126(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 6);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_127(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_121(iVar10, iParam0, 33);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_128(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_121(iVar10, iParam0, 17);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_129(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 18);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_130(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_131(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_121(iVar10, iParam0, 84);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_132(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_121(iVar10, iParam0, 104);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_133(int iParam0)
{
	if (iParam0 < 136)
	{
		func_135(iParam0);
	}
	else
	{
		func_134(iParam0);
	}
	if (Global_69518[0 /*14*/].f_2 == -1)
	{
		func_121(3, iParam0, 242);
	}
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69518[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_121(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_138(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(iParam1);
			break;
		
		case 2:
			func_155(iParam1);
			break;
		
		case 3:
			func_151(iParam1);
			break;
		
		case 4:
			func_150(iParam1);
			break;
		
		case 6:
			func_149(iParam1);
			break;
		
		case 5:
			func_148(iParam1);
			break;
		
		case 8:
			func_147(iParam1);
			break;
		
		case 9:
			func_146(iParam1);
			break;
		
		case 10:
			func_145(iParam1);
			break;
		
		case 1:
			func_144(iParam1);
			break;
		
		case 7:
			func_143(iParam1);
			break;
		
		case 11:
			func_142(iParam1);
			break;
		
		case 12:
			func_141(iParam1);
			break;
		
		case 13:
			func_140(iParam1);
			break;
		
		case 14:
			func_139(iParam1);
			break;
	}
}

void func_139(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 175);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 9);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 47);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_142(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_121(iVar10, iParam0, 63);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_144(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 5);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_145(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 53);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 12);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_147(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 77);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_148(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_149(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_121(iVar10, iParam0, 134);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_150(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_121(iVar10, iParam0, 117);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_151(int iParam0)
{
	if (iParam0 < 107)
	{
		func_154(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_153(iParam0);
	}
	else
	{
		func_152(iParam0);
	}
	if (Global_69518[0 /*14*/].f_2 == -1)
	{
		func_121(3, iParam0, 318);
	}
}

void func_152(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_153(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 21);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_156(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69518[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_121(iVar10, iParam0, 10);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_174(iParam1);
			break;
		
		case 2:
			func_173(iParam1);
			break;
		
		case 3:
			func_170(iParam1);
			break;
		
		case 4:
			func_169(iParam1);
			break;
		
		case 6:
			func_168(iParam1);
			break;
		
		case 5:
			func_167(iParam1);
			break;
		
		case 8:
			func_166(iParam1);
			break;
		
		case 9:
			func_165(iParam1);
			break;
		
		case 10:
			func_164(iParam1);
			break;
		
		case 1:
			func_163(iParam1);
			break;
		
		case 7:
			func_162(iParam1);
			break;
		
		case 11:
			func_161(iParam1);
			break;
		
		case 12:
			func_160(iParam1);
			break;
		
		case 13:
			func_159(iParam1);
			break;
		
		case 14:
			func_158(iParam1);
			break;
	}
}

void func_158(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_121(iVar10, iParam0, 113);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 10);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_160(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 53);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_161(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 45);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 1);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_163(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 5);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_164(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_121(iVar10, iParam0, 48);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 20);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_166(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 24);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_167(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_121(iVar10, iParam0, 14);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_168(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_121(iVar10, iParam0, 99);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_169(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 113);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_170(int iParam0)
{
	if (iParam0 < 60)
	{
		func_172(iParam0);
	}
	else
	{
		func_171(iParam0);
	}
	if (Global_69518[0 /*14*/].f_2 == -1)
	{
		func_121(3, iParam0, 181);
	}
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_172(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_173(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_121(iVar10, iParam0, 6);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_174(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69518[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_121(iVar10, iParam0, 7);
			return;
			break;
	}
	func_115(&(Global_69518[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_175()
{
	Global_69518[0 /*14*/].f_1 = -1;
	Global_69518[0 /*14*/].f_2 = -1;
	Global_69518[0 /*14*/].f_5 = -1;
	Global_69518[0 /*14*/].f_3 = -1;
	Global_69518[0 /*14*/].f_4 = -1;
	Global_69518[0 /*14*/].f_7 = 0;
	Global_69518[0 /*14*/].f_6 = 0;
	Global_69518[0 /*14*/].f_13 = -1;
	Global_69518[0 /*14*/].f_12 = 0;
	Global_69518[0 /*14*/] = 0;
	StringCopy(&(Global_69518[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (unk_0x00B5B0B68211D89B(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	Global_69518[1 /*14*/] = { func_112(iVar0, iParam1, iParam2) };
	if (!unk_0xF44A5E894FE76438(Global_69518[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_94(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_176(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_91(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_176(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69518[2 /*14*/] = { func_112(iVar0, 14, iVar4) };
									if (Global_69518[2 /*14*/].f_12 == iVar3)
									{
										if (func_176(iParam0, 14, iVar4))
										{
											if (!func_68(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69518[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_102(iParam0, iVar2);
						Global_69518[2 /*14*/] = { func_112(iVar0, iVar2, iVar1) };
						if (!func_68(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69518[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_91(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_176(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xAB9908FC72EDECCD(iParam0, Global_69518[1 /*14*/].f_12) == Global_69518[1 /*14*/].f_3 && (unk_0x3B8EAC78093F7707(iParam0, Global_69518[1 /*14*/].f_12) == Global_69518[1 /*14*/].f_4 || Global_69518[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_69518[1 /*14*/].f_3 == unk_0x0DF5DCF0FB12F865(iParam0, func_72(iParam1)) && Global_69518[1 /*14*/].f_4 == unk_0xF48FEED29B821958(iParam0, func_72(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_177(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0xF3F8195C98263BF5();
	if (!unk_0x32DE3230A608DBE4(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0x0AB2B0C7DAE9FF05(uVar0, bParam0, 16);
		unk_0x0AB2B0C7DAE9FF05(iVar0, bParam0, 32);
	}
	func_42(1, 1, 0, 0);
}

int func_178()
{
	if (unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2A29D86854DC4BC0(0, 71, 1);
	unk_0x2A29D86854DC4BC0(0, 72, 1);
	unk_0x2A29D86854DC4BC0(0, 76, 1);
	unk_0x2A29D86854DC4BC0(0, 73, 1);
	unk_0x2A29D86854DC4BC0(0, 59, 1);
	unk_0x2A29D86854DC4BC0(0, 60, 1);
	if (bParam5)
	{
		unk_0x2A29D86854DC4BC0(0, 75, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2A29D86854DC4BC0(0, 69, 1);
		unk_0x2A29D86854DC4BC0(0, 70, 1);
		unk_0x2A29D86854DC4BC0(0, 68, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 74, 1);
	unk_0x2A29D86854DC4BC0(0, 86, 1);
	unk_0x2A29D86854DC4BC0(0, 81, 1);
	unk_0x2A29D86854DC4BC0(0, 82, 1);
	unk_0x2A29D86854DC4BC0(0, 138, 1);
	unk_0x2A29D86854DC4BC0(0, 136, 1);
	unk_0x2A29D86854DC4BC0(0, 114, 1);
	unk_0x2A29D86854DC4BC0(0, 107, 1);
	unk_0x2A29D86854DC4BC0(0, 110, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 87, 1);
	unk_0x2A29D86854DC4BC0(0, 88, 1);
	unk_0x2A29D86854DC4BC0(0, 113, 1);
	unk_0x2A29D86854DC4BC0(0, 115, 1);
	unk_0x2A29D86854DC4BC0(0, 116, 1);
	unk_0x2A29D86854DC4BC0(0, 117, 1);
	unk_0x2A29D86854DC4BC0(0, 118, 1);
	unk_0x2A29D86854DC4BC0(0, 119, 1);
	unk_0x2A29D86854DC4BC0(0, 131, 1);
	unk_0x2A29D86854DC4BC0(0, 132, 1);
	unk_0x2A29D86854DC4BC0(0, 123, 1);
	unk_0x2A29D86854DC4BC0(0, 126, 1);
	unk_0x2A29D86854DC4BC0(0, 129, 1);
	unk_0x2A29D86854DC4BC0(0, 130, 1);
	unk_0x2A29D86854DC4BC0(0, 133, 1);
	unk_0x2A29D86854DC4BC0(0, 134, 1);
	unk_0x6CE614A8ED95A6CF();
	func_180(iParam0);
	if ((unk_0x84A97C70FFDEC0C8() - Global_29) > 500)
	{
		unk_0xF351193474DA13BB(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x84A97C70FFDEC0C8();
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0xC3D3EC28F0EB3C6D(unk_0x78D3CDB884C74FEB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_180(int iParam0)
{
	if (unk_0x36D782F68B309BDA(iParam0))
	{
		if (unk_0x3D34E80EED4AE3BE(iParam0))
		{
			unk_0x81E1552E35DC3839(iParam0, false);
		}
	}
}

void func_181()
{
	switch (iLocal_93)
	{
		case 0:
			if (bLocal_533 == 1)
			{
				Local_527 = { Local_524 };
			}
			else
			{
				Local_527 = { Local_521 };
			}
			if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
			{
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 0)
				{
					uLocal_297 = func_269(Local_527, 5, 1);
					iLocal_309 = 0;
					iLocal_310 = 0;
				}
				else
				{
					iLocal_309 = 1;
					iLocal_310 = 1;
				}
				if (bLocal_336)
				{
					func_198(5, "Drive home - stalker dead (CP4)", 0, 0, 0, 1);
				}
				else
				{
					func_198(4, "Drive home - stalker chased off (CP3)", 0, 0, 0, 1);
				}
				iLocal_466 = 0;
				func_27(&uLocal_298);
				func_197();
				iLocal_305 = 0;
				iLocal_471 = 0;
				iLocal_470 = 0;
				iLocal_93 = 1;
			}
			else
			{
				if (!unk_0x6901135DDCC4904D(uLocal_298))
				{
					uLocal_298 = func_196(iLocal_273, 1, 5);
				}
				func_28(5);
				iLocal_305 = 1;
			}
			break;
		
		case 1:
			if (!bLocal_312)
			{
				func_195();
				if (bLocal_312)
				{
					iLocal_469 = 1;
				}
			}
			if (iLocal_305)
			{
				if (func_194(5))
				{
					if (unk_0x2428688746A375BE(203) == 0 || !func_23())
					{
						func_28(5);
					}
				}
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
				{
					iLocal_305 = 0;
					func_27(&uLocal_297);
					func_27(&uLocal_298);
					unk_0x59C0D363E5A5B548();
					if (!unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
					{
						iLocal_306 = 1;
						iLocal_307 = 0;
						uLocal_298 = func_193(iLocal_289, 1, 1, 5);
					}
					else
					{
						iLocal_306 = 0;
						iLocal_307 = 0;
						func_192();
						if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 1)
						{
							iLocal_309 = 0;
							uLocal_297 = func_269(Local_527, 5, 1);
						}
						else
						{
							iLocal_309 = 1;
							iLocal_310 = 1;
						}
					}
				}
				else if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 160f, 1))
				{
					sLocal_573 = "MET1ABANDON";
					iLocal_92 = 11;
					iLocal_93 = 0;
				}
				else if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 60f, 1))
				{
					func_28(6);
				}
			}
			else if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
			{
				iLocal_305 = 1;
				unk_0x59C0D363E5A5B548();
				func_27(&uLocal_297);
				uLocal_298 = func_196(iLocal_273, 1, 5);
				if (func_23())
				{
					func_189();
				}
			}
			else if (iLocal_306)
			{
				if (func_194(2) && (unk_0x2428688746A375BE(203) == 0 || !func_23()))
				{
					func_28(2);
				}
				if (!iLocal_307 && !func_188())
				{
					iLocal_307 = 1;
					unk_0x87D70F1F81DB77D3(iLocal_289, iLocal_273, 20000, 0, 2f, 1, 0);
				}
				if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
				{
					iLocal_306 = 0;
					func_27(&uLocal_298);
					iLocal_306 = 0;
					iLocal_307 = 0;
					if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 1)
					{
						iLocal_309 = 0;
						uLocal_297 = func_269(Local_527, 5, 1);
					}
					else
					{
						iLocal_309 = 1;
						iLocal_310 = 1;
					}
				}
				else if (func_194(6))
				{
					if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 60f, 1))
					{
						func_28(6);
					}
				}
				else if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 160f, 1))
				{
					sLocal_573 = "MET1ABANDON";
					iLocal_93 = 0;
					iLocal_92 = 11;
				}
			}
			else if (!unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
			{
				iLocal_306 = 1;
				iLocal_307 = 0;
				unk_0x59C0D363E5A5B548();
				func_27(&uLocal_297);
				func_27(&uLocal_298);
				uLocal_298 = func_193(iLocal_289, 1, 1, 5);
				if (func_23())
				{
					func_54();
				}
			}
			else if (iLocal_309)
			{
				if (iLocal_310)
				{
					if (unk_0x2428688746A375BE(203) == 0 || (iLocal_466 >= 4 && !func_23()))
					{
						func_28(3);
						iLocal_310 = 0;
					}
				}
				if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
				{
					iLocal_305 = 1;
					unk_0x59C0D363E5A5B548();
					func_27(&uLocal_297);
					func_27(&uLocal_298);
					uLocal_298 = func_196(iLocal_273, 1, 5);
				}
				else if (!unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
				{
					iLocal_306 = 1;
					iLocal_307 = 0;
					uLocal_298 = func_193(iLocal_289, 1, 1, 5);
					func_28(2);
				}
				else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 1)
				{
					iLocal_309 = 0;
					iLocal_468 = 0;
					unk_0x59C0D363E5A5B548();
					func_27(&uLocal_297);
					uLocal_297 = func_269(Local_527, 5, 1);
				}
				func_185();
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				iLocal_309 = 1;
				iLocal_310 = 1;
				iLocal_468 = 1;
				unk_0x59C0D363E5A5B548();
				func_27(&uLocal_297);
			}
			else
			{
				if (func_184())
				{
					iLocal_93 = 2;
				}
				else if (func_183() && !iLocal_471)
				{
					if (func_3(&uLocal_96, "MET1AUD", "MET1_NRHOME", 7, 0, 0, 0))
					{
						iLocal_471 = 1;
					}
				}
				else
				{
					func_185();
				}
				if (func_194(7) && func_194(8))
				{
					if (unk_0x2428688746A375BE(203) == 0 || !func_23())
					{
						if (bLocal_533)
						{
							func_28(8);
						}
						else
						{
							func_28(7);
						}
					}
				}
			}
			break;
		
		case 2:
			func_27(&uLocal_297);
			func_182(7);
			if (func_23())
			{
				func_189();
			}
			iLocal_92 = 8;
			iLocal_93 = 0;
			break;
	}
}

void func_182(int iParam0)
{
	if (iLocal_574 != iParam0)
	{
		iLocal_572 = 0;
		while (iLocal_572 <= 7)
		{
			if (iLocal_572 == iParam0)
			{
				if (!unk_0xCC257DA11A122B5F(sLocal_575[iLocal_572], "NONE"))
				{
					unk_0xE3E53903AE9B5BD5(sLocal_575[iLocal_572]);
				}
				iLocal_574 = iParam0;
			}
			else if (unk_0x0FE8D1B72C1924FE(sLocal_575[iLocal_572]))
			{
				unk_0xB3C38A4B84C152BF(sLocal_575[iLocal_572]);
			}
			iLocal_572++;
		}
	}
}

int func_183()
{
	if (bLocal_533)
	{
		if (func_56(unk_0xD5A676B97920D126(), Local_524, 30f))
		{
			return 1;
		}
	}
	else if (func_56(unk_0xD5A676B97920D126(), -842.5665f, 159.2974f, 65.9426f, 11f))
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	if (bLocal_533)
	{
		if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_527, 3.5f, 3.5f, 2f, 1, 1, 0))
		{
			return 1;
		}
	}
	else if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_527, 4.5f, 4.5f, 2f, 1, 1, 0) && (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -828.7069f, 176.6418f, 69.66212f, -824.0747f, 184.5666f, 72.91872f, 5.75f, 0, 1, 0) || unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -827.9308f, 182.0454f, 70.08909f, -820.2387f, 180.1781f, 72.71543f, 6.5f, 0, 1, 0)))
	{
		return 1;
	}
	return 0;
}

void func_185()
{
	var uVar0;
	var uVar1;
	
	if (iLocal_466 == 0)
	{
		if (bLocal_336)
		{
			if (bLocal_337)
			{
				if (!iLocal_470)
				{
					if (func_23())
					{
						func_54();
					}
					iLocal_470 = 1;
				}
				if (func_3(&uLocal_96, Local_438[0 /*3*/].f_1, Local_438[0 /*3*/].f_2, 7, 0, 0, 0))
				{
					unk_0x456121A0AAC868D4(&uVar0);
					unk_0x290A57C93304EF16(0, sLocal_296, "react_intro", 8f, -8f, 4900, 8, 0, 0, 0, 0);
					unk_0x290A57C93304EF16(0, sLocal_296, "react_loop", 8f, -4f, 12400, 8, 0, 0, 0, 0);
					unk_0xCFE67FBB69F1C410(uVar0);
					unk_0x37338B7B7C4982DC(iLocal_289);
					unk_0x8B06B801B92CEC2D(iLocal_289, uVar0);
					iLocal_466 += 4;
				}
			}
			else if (func_3(&uLocal_96, Local_438[1 /*3*/].f_1, Local_438[1 /*3*/].f_2, 7, 0, 0, 0))
			{
				iLocal_466 += 4;
			}
		}
		else if (bLocal_337)
		{
			if (bLocal_414)
			{
				iLocal_466 += 4;
			}
			else if (func_3(&uLocal_96, "MET1AUD", "MET1_TNOGOF", 7, 0, 0, 0))
			{
				iLocal_466 += 4;
				bLocal_414 = true;
			}
		}
		else if (!bLocal_414)
		{
			if (func_3(&uLocal_96, Local_438[2 /*3*/].f_1, Local_438[2 /*3*/].f_2, 7, 0, 0, 0))
			{
				iLocal_466 += 4;
			}
		}
	}
	else if (iLocal_466 == 4)
	{
		if (!func_23())
		{
			iLocal_466++;
		}
	}
	if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		if (iLocal_468 && !func_23())
		{
			if (func_186())
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_TRCOPS", 7, 1, 0, 0))
				{
					iLocal_467 = unk_0x84A97C70FFDEC0C8();
					iLocal_468 = 0;
				}
			}
			else if (func_3(&uLocal_96, "MET1AUD", "MET1_TRCOPS", 7, 0, 0, 0))
			{
				iLocal_467 = unk_0x84A97C70FFDEC0C8();
				iLocal_468 = 0;
			}
		}
	}
	else if (iLocal_469)
	{
		if (!func_23())
		{
			if (func_3(&uLocal_96, Local_438[8 /*3*/].f_1, Local_438[8 /*3*/].f_2, 7, 0, 0, 0))
			{
				iLocal_469 = 0;
				iLocal_467 = unk_0x84A97C70FFDEC0C8();
			}
		}
	}
	else
	{
		if (iLocal_466 == 5)
		{
			if (bLocal_336)
			{
				iLocal_466++;
				iLocal_467 = unk_0x84A97C70FFDEC0C8();
			}
			else
			{
				iLocal_466 += 3;
			}
		}
		else if (iLocal_466 == 6)
		{
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_467) > Local_438[3 /*3*/] && !func_56(unk_0xD5A676B97920D126(), Local_527, 50f))
			{
				if (func_3(&uLocal_96, Local_438[3 /*3*/].f_1, Local_438[3 /*3*/].f_2, 7, 0, 0, 0))
				{
					if (!bLocal_337)
					{
						unk_0x456121A0AAC868D4(&uVar1);
						unk_0x290A57C93304EF16(0, sLocal_296, "react_intro", 8f, -8f, 4900, 8, 0, 0, 0, 0);
						unk_0x290A57C93304EF16(0, sLocal_296, "react_loop", 8f, -4f, 12400, 8, 0, 0, 0, 0);
						unk_0xCFE67FBB69F1C410(uVar1);
						unk_0x37338B7B7C4982DC(iLocal_289);
						unk_0x8B06B801B92CEC2D(iLocal_289, uVar1);
					}
					iLocal_466++;
				}
			}
		}
		else if (iLocal_466 == 7)
		{
			if (!func_23())
			{
				iLocal_466++;
			}
		}
		if (iLocal_466 == 8)
		{
			if (func_26(iLocal_273))
			{
				if ((unk_0xB38A470B669AC00B(iLocal_273) < 900 || unk_0xD5ABCE2B8F82DD84(iLocal_273) < 900f) || unk_0x3FE948D881FDB558(iLocal_273) < 900f)
				{
					iLocal_466++;
					iLocal_467 = unk_0x84A97C70FFDEC0C8();
				}
				else
				{
					iLocal_466 += 3;
				}
			}
		}
		else if (iLocal_466 == 9)
		{
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_467) > Local_438[4 /*3*/] && !func_56(unk_0xD5A676B97920D126(), Local_527, 50f))
			{
				if (func_3(&uLocal_96, Local_438[4 /*3*/].f_1, Local_438[4 /*3*/].f_2, 7, 0, 0, 0))
				{
					iLocal_466++;
				}
			}
		}
		else if (iLocal_466 == 10)
		{
			if (!func_23())
			{
				iLocal_466++;
			}
		}
		if (iLocal_466 == 11)
		{
			if (!bLocal_336)
			{
				iLocal_466++;
				iLocal_467 = unk_0x84A97C70FFDEC0C8();
			}
			else
			{
				iLocal_466 += 3;
			}
		}
		else if (iLocal_466 == 12)
		{
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_467) > Local_438[5 /*3*/] && !func_56(unk_0xD5A676B97920D126(), Local_527, 50f))
			{
				if (func_3(&uLocal_96, Local_438[5 /*3*/].f_1, Local_438[5 /*3*/].f_2, 7, 0, 0, 0))
				{
					iLocal_466++;
				}
			}
		}
		else if (iLocal_466 == 13)
		{
			if (!func_23())
			{
				iLocal_466++;
			}
		}
		if (iLocal_466 == 14)
		{
			iLocal_466++;
			iLocal_467 = unk_0x84A97C70FFDEC0C8();
		}
		else if (iLocal_466 == 15)
		{
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_467) > Local_438[6 /*3*/] && !func_56(unk_0xD5A676B97920D126(), Local_527, 50f))
			{
				if (func_3(&uLocal_96, Local_438[6 /*3*/].f_1, Local_438[6 /*3*/].f_2, 7, 0, 0, 0))
				{
					iLocal_466++;
				}
			}
		}
		else if (iLocal_466 == 16)
		{
			if (!func_23())
			{
				iLocal_466++;
			}
		}
		if (iLocal_466 == 17)
		{
			iLocal_466++;
			iLocal_467 = unk_0x84A97C70FFDEC0C8();
		}
		else if (iLocal_466 == 18)
		{
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_467) > Local_438[7 /*3*/] && !func_56(unk_0xD5A676B97920D126(), Local_527, 50f))
			{
				if (func_3(&uLocal_96, Local_438[7 /*3*/].f_1, Local_438[7 /*3*/].f_2, 7, 0, 0, 0))
				{
					iLocal_466++;
				}
			}
		}
		else if (iLocal_466 == 19)
		{
			if (!func_23())
			{
				iLocal_466++;
			}
		}
	}
}

int func_186()
{
	iLocal_572 = 0;
	while (iLocal_572 <= 8)
	{
		if (func_187(Local_341[iLocal_572 /*3*/].f_2, 0, 0))
		{
			return 1;
		}
		iLocal_572++;
	}
	return 0;
}

bool func_187(char* sParam0, int iParam1, int iParam2)
{
	unk_0xC450F7ACA7F40F98(sParam0);
	if (iParam1 == 1)
	{
		unk_0xB1953EBEF4D6BD85(iParam2);
	}
	return unk_0x1B1A26465DF20C87();
}

int func_188()
{
	if (iLocal_274 && unk_0xF7FB02DF50202630(iLocal_273))
	{
		return 1;
	}
	return 0;
}

void func_189()
{
	Global_14611 = 0;
	func_190();
}

void func_190()
{
	if (unk_0x33688D334D224255())
	{
		unk_0xB6A622037A2FE913();
		Global_16756 = 0;
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

bool func_191(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iParam0, iParam3), unk_0xC086F8D75730FA3A(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_192()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
	{
		iVar0 = unk_0x3349F29CAC088F0B(unk_0xD5A676B97920D126());
		if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
		{
			iVar1 = unk_0x98BE504E8B389665(iVar0, 0, 0);
			if (!unk_0x00B5B0B68211D89B(iVar1))
			{
				if (iVar1 != unk_0xD5A676B97920D126())
				{
					if (unk_0x2A29BF08180E7ADF(iVar1))
					{
						if (!unk_0xE1A5247B3FE06469(iVar1, unk_0xD5A676B97920D126()))
						{
							unk_0x0988FFC0C75637DF(iVar1, unk_0xD5A676B97920D126(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

int func_193(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_26(iParam0))
		{
			iVar0 = unk_0x890C68C377CE0CA4(iParam0);
			unk_0x1BDDADB5ACDFD382(iVar0, iParam2);
			unk_0x0D792BA553E57B27(iVar0, iParam3);
			unk_0xF563C3AC64885E69(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0xF563C3AC64885E69(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

int func_194(int iParam0)
{
	if (Local_341[iParam0 /*3*/].f_1 < Local_341[iParam0 /*3*/] || Local_341[iParam0 /*3*/] == -1)
	{
		return 1;
	}
	return 0;
}

void func_195()
{
	if (bLocal_312 == 0)
	{
		if ((unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0) && unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0)) && unk_0x78D3CDB884C74FEB(iLocal_273) > 30f)
		{
			fLocal_315 = (fLocal_315 + (1f * unk_0x0000000050597EE2()));
		}
		if (unk_0x84A97C70FFDEC0C8() > iLocal_314 && unk_0x0A5AE03B164FA4EE(unk_0xFB6B3EEFAB2DD12C()))
		{
			iLocal_313++;
			unk_0xD468567899105761(unk_0xFB6B3EEFAB2DD12C());
			iLocal_314 = unk_0x84A97C70FFDEC0C8() + 2000;
		}
		if (iLocal_313 > 2 || fLocal_315 > 10f)
		{
			bLocal_312 = true;
		}
	}
}

int func_196(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_26(iParam0))
	{
		iVar0 = unk_0x890C68C377CE0CA4(iParam0);
		unk_0x1BDDADB5ACDFD382(iVar0, iParam1);
		unk_0x0D792BA553E57B27(iVar0, iParam2);
		unk_0xF563C3AC64885E69(iVar0, 1f);
	}
	return iVar0;
}

void func_197()
{
	bLocal_312 = false;
	iLocal_313 = 0;
	iLocal_314 = unk_0x84A97C70FFDEC0C8() + 2000;
	fLocal_315 = 0f;
}

void func_198(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0xCC257DA11A122B5F("FinaleC2", unk_0x0FBCE11007AF301F()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91523)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91523)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_268(1);
		if (iParam0 <= Global_91523)
		{
		}
		iVar1 = func_266(unk_0x0FBCE11007AF301F(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101652.f_8028.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_264(iVar1);
			cVar3 = { Global_82607[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_101652.f_8028.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x4426F149C026705C(&cVar3, uVar2, Global_91523, iParam0);
		}
		else
		{
			iVar5 = func_259(unk_0x0FBCE11007AF301F(), 1);
			if (iVar5 != -1)
			{
				Global_101652.f_17517[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_258(iVar5)}, 4);
				unk_0x4426F149C026705C(&uVar6, 0, Global_91523, iParam0);
			}
			else
			{
				iVar10 = func_257(&(Global_91486.f_3));
				if (iVar10 > -1)
				{
					Global_101652.f_23929.f_4[iVar10] = 0;
				}
			}
		}
		Global_85997 = iParam2;
		Global_91523 = iParam0;
		func_199(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xCC257DA11A122B5F(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91523)
	{
	}
}

void func_199(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_200(&Global_95993, unk_0x0FBCE11007AF301F(), iParam0, uParam1, iParam3, iParam2);
}

void func_200(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_10();
	uParam0->f_1 = func_246();
	unk_0x63B2F81125DA4B32(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		func_230(&(uParam0->f_2305), 0);
		func_229(unk_0xD5A676B97920D126());
		func_223(unk_0xD5A676B97920D126(), 0);
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_101652.f_2079.f_539.f_294[iVar1];
		if (iVar1 == func_222())
		{
			func_218(unk_0xD5A676B97920D126(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91276[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91276[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91276[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91276[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91276[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91276[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91276[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91276[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91276[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91276[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_101652.f_2079.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_101652.f_2079.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_101652.f_19507.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52992[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_101652.f_2079.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_101652.f_2079.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101652.f_2079.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101652.f_2079.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101652.f_2079.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101652.f_2079[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x5BC7B5709E38CBE0(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x5BC7B5709E38CBE0(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x5BC7B5709E38CBE0(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_202(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_201(&(uParam0->f_2401));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_201(var uParam0)
{
	*uParam0 = Global_87668;
	uParam0->f_1 = Global_87669;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_202(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xD5A676B97920D126();
	}
	if (unk_0x7887B64A08364778(iParam2))
	{
		uParam1->f_5 = func_13(iParam2);
	}
	if (func_215(iParam2, &iVar0, iParam3, iParam5))
	{
		func_203(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x7887B64A08364778(iVar0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x960985BE189C5A3B(iVar0, joaat("skylift")) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iVar0, 0))
			{
				func_203(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_203(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xA4DB44DF73EF4FE5(iParam2, 0))
	{
		func_205(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_204(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91486.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_205(var uParam0, int iParam1, int iParam2)
{
	func_211(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_208(iParam1, 145, 0);
	uParam0->f_11 = func_207(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_206(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
		uParam0->f_6 = unk_0x714F015B4D2DE1DC(iParam1);
		uParam0->f_3 = { unk_0x9C0A225C3A240597(iParam1) };
		if (unk_0x1AC9C20D51EE6DC3(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69431 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7887B64A08364778(Global_68526.f_484[iVar0]))
		{
			if (iParam0 == Global_68526.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 145;
	}
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7887B64A08364778(Global_89150[iVar0]))
		{
			if (Global_89150[iVar0] == iParam0)
			{
				return Global_89160[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7887B64A08364778(Global_89150[iVar0]))
		{
			if (Global_89150[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_89160[iVar0])
				{
					if (iParam2 == 0 || unk_0xA0A4DA31DEDFAC4F(iParam0) == func_209(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_12(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_210(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_210(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101652.f_8028.f_99.f_58[128] && !Global_101652.f_8028.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_101652.f_8028.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101652.f_8028.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_211(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		func_214(uParam1);
		uParam1->f_66 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2CC6A8460C4261C6(iParam0), 16);
		*uParam1 = unk_0x643D0787FF300BE8(iParam0);
		unk_0xAB44311BC9F89232(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFF130F4559BF748(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x43FF1E5EC4917728(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF0C3A770E8892FA(iParam0);
		uParam1->f_67 = unk_0x49CCC8B15830B17D(iParam0);
		uParam1->f_69 = unk_0x65E205594044F652(iParam0);
		uParam1->f_70 = unk_0xF7E41E4E5E67E2CB(iParam0);
		unk_0x956FB9F729445ED6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xF69AB637A0DAC546(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1150CC5330ABD6DF(iParam0, 2))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 3))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 1))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xEF9CF6170A8C90B7(iParam0, 0))
		{
			uParam1->f_68 = unk_0x80F6A1A9BF0E38FD(iParam0);
		}
		if (unk_0x825416FB822BF706(uParam1->f_66))
		{
			if (unk_0x93B92294DAD9D50D(iParam0))
			{
				switch (unk_0xB230881064F01DEF(iParam0))
				{
					case 2:
					case 0:
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 23);
						unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 23);
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xAB35C8D69EA2E6B5(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 9);
		}
		if (unk_0x7E2FFDDA80D69669(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 10);
		}
		if (unk_0x826C510E26394C33(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 13);
			unk_0xD31BD28E3DFD0487(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x5451EB0FF6AB9E17(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 12);
		}
		func_213(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x90ECFFEFD5446B32(iParam0, iVar0 + 1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), func_212(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0A330F7918C05F13(iParam0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_77), 11);
		}
		if (unk_0xA438D75809973A56(iParam0, "IgnoredByQuickSave") && unk_0x79945CA981E4560A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_77), 27);
		}
	}
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_213(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA4DB44DF73EF4FE5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x83608391BBAB09A9(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xFA1526FE26DC997C(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xFFB080E19B6AD134(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x54352EF465143135(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x54352EF465143135(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_214(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_215(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			if (iParam0 == unk_0xD5A676B97920D126())
			{
				*uParam1 = unk_0x80AA649904BB5788();
			}
			else
			{
				*uParam1 = unk_0x0DBD8FE531FD620D(iParam0, 1);
			}
			if (unk_0x7887B64A08364778(*uParam1))
			{
				if (unk_0xA4DB44DF73EF4FE5(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(*uParam1, 1), unk_0xC086F8D75730FA3A(iParam0, 1), 1) < 100f)
					{
						if (unk_0x960985BE189C5A3B(*uParam1, joaat("taxi")))
						{
							if (unk_0x98BE504E8B389665(*uParam1, -1, 0) != iParam0 && unk_0x98BE504E8B389665(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_216(*uParam1, func_10(), 1))
						{
							sVar0 = unk_0x0FBCE11007AF301F();
							if (!unk_0xCC257DA11A122B5F(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x6A0583ECFCCECC9B(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xA438D75809973A56(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x79945CA981E4560A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x960985BE189C5A3B(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_216(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7887B64A08364778(iParam0) || !unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_217(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF44A5E894FE76438(Global_101652.f_6172[iVar9], 0))
		{
			if (unk_0x2C1F463EB409D0B0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_217(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_218(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		iVar0 = func_13(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_221(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_220(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_12(iVar0))
		{
			uParam1->f_59 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x1995B52453EF6537() && unk_0xA0A4DA31DEDFAC4F(iParam0) == unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			if (func_219(161, -1))
			{
				uParam1->f_59 = func_108(2045, Global_69516, 0);
			}
			else
			{
				uParam1->f_59 = func_108(747, Global_69516, 0);
			}
			uParam1->f_60 = func_108(748, Global_69516, 0);
			uParam1->f_61 = func_108(749, Global_69516, 0);
		}
		if (unk_0x1995B52453EF6537() && iParam0 == unk_0xD5A676B97920D126())
		{
			if (func_219(161, -1))
			{
				uParam1->f_59 = func_108(2045, Global_69516, 0);
			}
			else
			{
				uParam1->f_59 = func_108(747, Global_69516, 0);
			}
		}
	}
}

int func_219(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522528[iParam0 /*3*/][func_107(iParam1)];
	if (unk_0xC76B1795CAE597C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_220(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_13(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xAB9908FC72EDECCD(iParam0, iParam1);
		*uParam3 = unk_0x3B8EAC78093F7707(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x24F65742A2FF75C2(iParam0) && unk_0x59B1F5BAB938B866(iParam0) != -1)
				{
					*uParam2 = unk_0x59B1F5BAB938B866(iParam0);
					*uParam3 = unk_0x309118E8B693DC86(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_221(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_13(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x0DF5DCF0FB12F865(iParam0, iParam1);
		*uParam3 = unk_0xF48FEED29B821958(iParam0, iParam1);
		*uParam4 = unk_0x2A8A29E2EFF14437(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_222()
{
	func_11();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_223(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_13(iParam0);
	if (func_12(iVar0) && !unk_0x00B5B0B68211D89B(iParam0))
	{
		if (iParam0 == unk_0xD5A676B97920D126())
		{
			func_224(iParam0, &(Global_101652.f_2079.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_101652.f_2079.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x7577E26F2E9239BF(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x8112C04EC95B41F9();
					if (Global_101652.f_2079.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101652.f_2079.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xE8500CB551D56C5E(unk_0xFB6B3EEFAB2DD12C(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xB924315F0872835A(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xB924315F0872835A(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xB924315F0872835A(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_224(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_228(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x9B30B9013A2D9ACA(iParam0, func_228(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xEC114559311F56E2(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xB8A73E7DA87B2968(&(Var4.f_2), (20 + unk_0xEF5797A178BC1DCB(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x01648DF7BF4D1636(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_226(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xBC123D210F0BF5FB(iParam0, Var4.f_0, iVar2))
						{
							unk_0xB8A73E7DA87B2968(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_226(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x41DD9BE0891252D4();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x8B2BCE658D6CB0A1(iVar7, &Var9) && !func_225(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x68410A55F20AE7A5(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0xEC114559311F56E2(iParam0, Var4.f_0);
					if (unk_0xE5A6095B39C65EBC(iParam0, Var4.f_0, 0))
					{
						unk_0xB8A73E7DA87B2968(&(Var4.f_2), (20 + unk_0xEF5797A178BC1DCB(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xB8A73E7DA87B2968(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x01648DF7BF4D1636(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0xA9F7970C93266CD4(iVar7))
					{
						if (unk_0xCE4C3C6C9F6705A1(iVar7, iVar1, &Var48))
						{
							if (unk_0xBC123D210F0BF5FB(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xB8A73E7DA87B2968(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xE5A6095B39C65EBC(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_225(int iParam0)
{
	if (unk_0x1995B52453EF6537())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_227(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0xA9F7970C93266CD4(iVar1))
					{
						if (unk_0xCE4C3C6C9F6705A1(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_227(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x41DD9BE0891252D4();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x8B2BCE658D6CB0A1(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_228(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = func_13(iParam0);
	if (func_12(iVar0) && !unk_0x00B5B0B68211D89B(iParam0))
	{
		Global_101652.f_2079.f_539.f_294[iVar0] = unk_0x378417C04D2D42A5(iParam0);
	}
}

void func_230(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
	uParam0->f_3 = unk_0x714F015B4D2DE1DC(unk_0xD5A676B97920D126());
	uParam0->f_5 = unk_0xB94077C2679C1B6F(unk_0xD5A676B97920D126());
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		uParam0->f_4 = unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0xAB964FCFAC3C767A(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xF44A5E894FE76438(Global_69945, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xF44A5E894FE76438(Global_69945, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xF44A5E894FE76438(Global_69945, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xF44A5E894FE76438(Global_69945, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0xC294D34374133831(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_234(&iVar0))
		{
			if (func_232(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_10();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_231(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_231(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2A962D5F6CB393D4(Param0))
	{
		iVar0 = unk_0xC294D34374133831(Param4, sParam3);
		if (!unk_0x7B66213B5E371C3F(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x44FA3A8ACC24BDA5(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_232(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_233(*uParam1, 0f, 0f, 0f, 0);
}

bool func_233(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_234(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (func_245())
		{
			*uParam0 = func_240(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 6, -1, 0, 1, -1);
			if (func_239(*uParam0) && !func_235(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_235(int iParam0)
{
	return func_236(iParam0, 0, 1);
}

int func_236(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF44A5E894FE76438(Global_91538.f_1308[iParam0], iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_238() == 0)
		{
			return unk_0xF44A5E894FE76438(func_108(func_237(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_238()
{
	return Global_25185;
}

int func_239(int iParam0)
{
	return func_236(iParam0, 5, 1);
}

int func_240(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45)
	{
		if (iParam3 == 6 || iParam3 == func_244(iVar0))
		{
			if (!bParam5 || func_243(iVar0))
			{
				fVar1 = unk_0x8E92CDAEB8357ABD(Param0, func_241(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_241(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_242(Global_92999);
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_242(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_243(int iParam0)
{
	return func_236(iParam0, 0, 0);
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
	}
	return 6;
}

bool func_245()
{
	return Global_91538.f_303 > 0;
}

var func_246()
{
	var uVar0;
	
	func_256(&uVar0, unk_0xABA05E2C283C3D5F());
	func_255(&uVar0, unk_0xF72CA3D5BA977203());
	func_254(&uVar0, unk_0x83D6515EE2CBF18C());
	func_249(&uVar0, unk_0x3D13C79BF80EB767());
	func_248(&uVar0, unk_0xA93FEF8677A8AF58());
	func_247(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

void func_247(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_248(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_253(*uParam0);
	iVar1 = func_251(*uParam0);
	if (iParam1 < 1 || iParam1 > func_250(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_250(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_251(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_252(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
}

int func_252(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_253(var uParam0)
{
	return uParam0 & 15;
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_257(char* sParam0)
{
	if (unk_0xCC257DA11A122B5F("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xCC257DA11A122B5F("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xCC257DA11A122B5F("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_258(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_259(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x6D9FF4C899CD785F(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_260(iVar0, &sVar1);
		if (unk_0x6D9FF4C899CD785F(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_260(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_261(uParam1, "Abigail1", func_263(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 1:
			func_261(uParam1, "Abigail2", func_263(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 2:
			func_261(uParam1, "Barry1", func_263(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 3:
			func_261(uParam1, "Barry2", func_263(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_262(iParam0), 1, 1);
			break;
		
		case 4:
			func_261(uParam1, "Barry3", func_263(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 5:
			func_261(uParam1, "Barry3A", func_263(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 6:
			func_261(uParam1, "Barry3C", func_263(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 7:
			func_261(uParam1, "Barry4", func_263(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_262(iParam0), 0, 0);
			break;
		
		case 8:
			func_261(uParam1, "Dreyfuss1", func_263(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 9:
			func_261(uParam1, "Epsilon1", func_263(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 10:
			func_261(uParam1, "Epsilon2", func_263(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 11:
			func_261(uParam1, "Epsilon3", func_263(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 12:
			func_261(uParam1, "Epsilon4", func_263(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 13:
			func_261(uParam1, "Epsilon5", func_263(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 14:
			func_261(uParam1, "Epsilon6", func_263(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 15:
			func_261(uParam1, "Epsilon7", func_263(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 16:
			func_261(uParam1, "Epsilon8", func_263(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 17:
			func_261(uParam1, "Extreme1", func_263(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 18:
			func_261(uParam1, "Extreme2", func_263(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 19:
			func_261(uParam1, "Extreme3", func_263(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 20:
			func_261(uParam1, "Extreme4", func_263(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 21:
			func_261(uParam1, "Fanatic1", func_263(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_262(iParam0), 1, 0);
			break;
		
		case 22:
			func_261(uParam1, "Fanatic2", func_263(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_262(iParam0), 1, 0);
			break;
		
		case 23:
			func_261(uParam1, "Fanatic3", func_263(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_262(iParam0), 0, 1);
			break;
		
		case 24:
			func_261(uParam1, "Hao1", func_263(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_262(iParam0), 0, 1);
			break;
		
		case 25:
			func_261(uParam1, "Hunting1", func_263(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 26:
			func_261(uParam1, "Hunting2", func_263(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 27:
			func_261(uParam1, "Josh1", func_263(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 28:
			func_261(uParam1, "Josh2", func_263(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_262(iParam0), 1, 1);
			break;
		
		case 29:
			func_261(uParam1, "Josh3", func_263(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_262(iParam0), 1, 1);
			break;
		
		case 30:
			func_261(uParam1, "Josh4", func_263(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 31:
			func_261(uParam1, "Maude1", func_263(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 32:
			func_261(uParam1, "Minute1", func_263(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 33:
			func_261(uParam1, "Minute2", func_263(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 34:
			func_261(uParam1, "Minute3", func_263(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 35:
			func_261(uParam1, "MrsPhilips1", func_263(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 36:
			func_261(uParam1, "MrsPhilips2", func_263(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 37:
			func_261(uParam1, "Nigel1", func_263(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 38:
			func_261(uParam1, "Nigel1A", func_263(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_262(iParam0), 1, 1);
			break;
		
		case 39:
			func_261(uParam1, "Nigel1B", func_263(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_262(iParam0), 1, 1);
			break;
		
		case 40:
			func_261(uParam1, "Nigel1C", func_263(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_262(iParam0), 1, 1);
			break;
		
		case 41:
			func_261(uParam1, "Nigel1D", func_263(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_262(iParam0), 1, 1);
			break;
		
		case 42:
			func_261(uParam1, "Nigel2", func_263(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_262(iParam0), 1, 1);
			break;
		
		case 43:
			func_261(uParam1, "Nigel3", func_263(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_262(iParam0), 1, 1);
			break;
		
		case 44:
			func_261(uParam1, "Omega1", func_263(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 45:
			func_261(uParam1, "Omega2", func_263(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 46:
			func_261(uParam1, "Paparazzo1", func_263(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 47:
			func_261(uParam1, "Paparazzo2", func_263(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 48:
			func_261(uParam1, "Paparazzo3", func_263(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 49:
			func_261(uParam1, "Paparazzo3A", func_263(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 50:
			func_261(uParam1, "Paparazzo3B", func_263(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 51:
			func_261(uParam1, "Paparazzo4", func_263(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 52:
			func_261(uParam1, "Rampage1", func_263(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 54:
			func_261(uParam1, "Rampage3", func_263(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 55:
			func_261(uParam1, "Rampage4", func_263(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 56:
			func_261(uParam1, "Rampage5", func_263(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_262(iParam0), 0, 0);
			break;
		
		case 53:
			func_261(uParam1, "Rampage2", func_263(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_262(iParam0), 1, 0);
			break;
		
		case 57:
			func_261(uParam1, "TheLastOne", func_263(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 58:
			func_261(uParam1, "Tonya1", func_263(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 59:
			func_261(uParam1, "Tonya2", func_263(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 60:
			func_261(uParam1, "Tonya3", func_263(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 61:
			func_261(uParam1, "Tonya4", func_263(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		case 62:
			func_261(uParam1, "Tonya5", func_263(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_262(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_261(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_263(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_258(iParam0) };
	if (unk_0xC55B9553B3EDADE9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_265(Global_101652.f_8028.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_265(Global_101652.f_8028.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_265(Global_101652.f_8028.f_99.f_205[11]);
			break;
		
		case 90:
			return func_265(Global_101652.f_8028.f_99.f_205[7]);
			break;
		
		case 93:
			return func_265(Global_101652.f_8028.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_266(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6D9FF4C899CD785F(sParam0);
	iVar1 = func_267(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_267(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82607[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_268(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53000[iVar0 /*3*/][0] = Global_101652.f_19507[iVar0];
		Global_53000.f_31[iVar0 /*3*/][0] = Global_101652.f_19507.f_11[iVar0];
		Global_53000.f_62[iVar0 /*3*/][0] = Global_101652.f_19507.f_22[iVar0];
		Global_53000.f_93[iVar0 /*3*/][0] = Global_101652.f_19507.f_33[iVar0];
		Global_53000.f_124[iVar0 /*3*/][0] = Global_101652.f_19507.f_44[iVar0];
		Global_53000.f_155[iVar0 /*3*/][0] = Global_101652.f_19507.f_55[iVar0];
		Global_53000.f_186[iVar0 /*3*/][0] = Global_101652.f_19507.f_66[iVar0];
		Global_53000.f_217[iVar0 /*3*/][0] = Global_101652.f_19507.f_77[iVar0];
		Global_53000.f_248[iVar0 /*3*/][0] = Global_101652.f_19507.f_88[iVar0];
		if (!bParam0)
		{
			Global_53000[iVar0 /*3*/][1] = Global_101652.f_19507[iVar0];
			Global_53000.f_31[iVar0 /*3*/][1] = Global_101652.f_19507.f_11[iVar0];
			Global_53000.f_62[iVar0 /*3*/][1] = Global_101652.f_19507.f_22[iVar0];
			Global_53000.f_93[iVar0 /*3*/][1] = Global_101652.f_19507.f_33[iVar0];
			Global_53000.f_124[iVar0 /*3*/][1] = Global_101652.f_19507.f_44[iVar0];
			Global_53000.f_155[iVar0 /*3*/][1] = Global_101652.f_19507.f_55[iVar0];
			Global_53000.f_186[iVar0 /*3*/][1] = Global_101652.f_19507.f_66[iVar0];
			Global_53000.f_217[iVar0 /*3*/][1] = Global_101652.f_19507.f_77[iVar0];
			Global_53000.f_248[iVar0 /*3*/][1] = Global_101652.f_19507.f_88[iVar0];
		}
		iVar0++;
	}
}

int func_269(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x6678F4628618607C(Param0);
	unk_0x0D792BA553E57B27(iVar0, iParam3);
	unk_0xF563C3AC64885E69(iVar0, 1f);
	unk_0xD947D2F43FD7F6D7(iVar0, iParam4);
	return iVar0;
}

void func_270()
{
	var uVar0;
	
	switch (iLocal_93)
	{
		case 0:
			unk_0x49E996A1E39EAAD7(sLocal_296);
			if (func_26(iLocal_290))
			{
				unk_0x37338B7B7C4982DC(iLocal_290);
				unk_0x738326127C161284(iLocal_290, 2, 0);
				if (unk_0x6A0583ECFCCECC9B(iLocal_290, 0))
				{
					unk_0x456121A0AAC868D4(&uVar0);
					unk_0xE9148EE8AA200B60(0, 0, 257);
					unk_0x7C6B104B5E7A8C41(0, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 2000f, -1, 0, 0);
					unk_0xCFE67FBB69F1C410(uVar0);
					unk_0x8B06B801B92CEC2D(iLocal_290, uVar0);
					unk_0x873418BFBF9A6780(&uVar0);
				}
				else
				{
					unk_0x7C6B104B5E7A8C41(iLocal_290, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 2000f, -1, 0, 0);
				}
				iLocal_413 = 0;
				bLocal_414 = false;
				iLocal_415 = 0;
				iLocal_416 = 0;
				bLocal_376 = false;
				bLocal_375 = false;
				iLocal_374 = unk_0x84A97C70FFDEC0C8();
				iLocal_417 = 0;
				if (func_23())
				{
					func_54();
				}
				bLocal_604 = false;
				bLocal_605 = false;
				func_317();
				uLocal_606[0] = unk_0x84A97C70FFDEC0C8() + 10000;
				uLocal_606[1] = unk_0x84A97C70FFDEC0C8() + 10000;
				func_27(&uLocal_297);
				uLocal_297 = func_193(iLocal_290, 1, 0, 5);
				func_316(&uLocal_297, "MET1KSTKRED", "MET1KSTKBLU", &uLocal_299, &iLocal_300, 1, 1);
				unk_0x9B099BCCBD872090(iLocal_290, 1, 0);
				func_294(&uLocal_261, iLocal_290, 0, 0, 1, 1, 1);
				func_27(&uLocal_298);
				func_182(5);
				func_293();
				iLocal_93 = 1;
			}
			else
			{
				func_27(&uLocal_297);
				bLocal_336 = true;
				func_292();
				bLocal_337 = func_282();
				iLocal_93 = 2;
			}
			break;
		
		case 1:
			func_281(&uLocal_297, "MET1KSTKRED", "MET1KSTKBLU", &uLocal_299, iLocal_300, 1);
			if (func_26(iLocal_290))
			{
				if (!func_191(iLocal_290, unk_0xD5A676B97920D126(), 80f, 1) && !unk_0xBB5DD90D4926F21A(iLocal_290))
				{
					func_33(&iLocal_290);
					bLocal_337 = func_282();
					iLocal_93 = 2;
				}
				else
				{
					if (iLocal_413)
					{
						func_277();
					}
					else if ((((unk_0x1A77C0702D82B43D(iLocal_290) && !unk_0x9B0C8A2FC23E64AB(iLocal_290)) && !unk_0x03D369634BAB7D91(iLocal_290)) && !unk_0xF60B0BCAFB1D30FF(iLocal_290)) && !unk_0x7C4BC3264552091A(iLocal_290))
					{
						if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
						{
							if (func_3(&uLocal_96, "MET1AUD", "MET1_THERUN", 7, 1, 0, 0))
							{
								iLocal_413 = 1;
							}
						}
						else if (func_3(&uLocal_96, "MET1AUD", "MET1_THERUN", 7, 0, 0, 0))
						{
							iLocal_413 = 1;
						}
					}
					if (unk_0x1A77C0702D82B43D(unk_0xD5A676B97920D126()))
					{
						func_192();
					}
					func_294(&uLocal_261, iLocal_290, 0, 0, 1, 1, 1);
					func_273();
					unk_0x759857815829A6A8(iLocal_290, 2.2f);
					func_293();
				}
			}
			else
			{
				func_27(&uLocal_297);
				bLocal_336 = true;
				bLocal_337 = func_282();
				func_292();
				iLocal_93 = 2;
			}
			break;
		
		case 2:
			func_27(&uLocal_297);
			if (func_186())
			{
				unk_0x59C0D363E5A5B548();
			}
			func_271(&uLocal_261, 0, 0);
			func_182(6);
			iLocal_93 = 0;
			iLocal_92 = 7;
			break;
	}
}

void func_271(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x6125B94865C458A0(iParam2);
		unk_0x044DCEA35050EC01("FocusIn");
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x33E4179F57B9F232(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x1C079483C9D16F36(sVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x1C079483C9D16F36(uParam0->f_3))
	{
		if (func_272(uParam0->f_3))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
	if (!unk_0x1C079483C9D16F36(sVar0))
	{
		if (func_272(sVar0))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
}

bool func_272(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_273()
{
	if (!bLocal_604)
	{
		if ((unk_0x84A97C70FFDEC0C8() - iLocal_603) > 3000)
		{
			func_276(1);
			if (((func_275(Local_584[0 /*3*/], Local_584[2 /*3*/], 1f) && !unk_0x534EC97E12C7FCD5(iLocal_290)) && !unk_0x9B0C8A2FC23E64AB(iLocal_290)) && !unk_0x03D369634BAB7D91(iLocal_290))
			{
				unk_0xD4BBFF77570A437F(iLocal_290, -1);
				bLocal_604 = true;
			}
		}
		if (!bLocal_604)
		{
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && !unk_0x6A0583ECFCCECC9B(iLocal_290, 0))
			{
				if (((unk_0x84A97C70FFDEC0C8() > uLocal_606[0] && func_191(unk_0xD5A676B97920D126(), iLocal_290, 20f, 1)) && !unk_0x9B0C8A2FC23E64AB(iLocal_290)) && !unk_0x03D369634BAB7D91(iLocal_290))
				{
					func_274(0, 0);
				}
				else if (unk_0x84A97C70FFDEC0C8() > uLocal_606[1])
				{
					if ((unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), unk_0x7E140C583F91AE2B(iLocal_290, 0f, 1f, -2f), unk_0x7E140C583F91AE2B(iLocal_290, 0f, 7f, 5f), 5f, 0, 1, 0) && !unk_0x9B0C8A2FC23E64AB(iLocal_290)) && !unk_0x03D369634BAB7D91(iLocal_290))
					{
						func_274(0, 1);
					}
					else
					{
						uLocal_606[1] = unk_0x84A97C70FFDEC0C8() + 2000;
					}
				}
			}
			else if (!bLocal_605 && !unk_0x6A0583ECFCCECC9B(iLocal_290, 0))
			{
				func_274(1, 1);
			}
		}
	}
}

void func_274(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		unk_0x7C6B104B5E7A8C41(iLocal_290, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 2000f, -1, 0, 0);
		uLocal_606[0] = unk_0x84A97C70FFDEC0C8() + 10000;
		if (bParam1)
		{
			uLocal_606[1] = unk_0x84A97C70FFDEC0C8() + 10000;
		}
		else
		{
			uLocal_606[1] = unk_0x84A97C70FFDEC0C8() + 2000;
		}
		bLocal_605 = false;
	}
	else
	{
		unk_0xBB8F1D58B7578137(iLocal_290, unk_0xD5A676B97920D126(), 2000f, -1, 0, 0);
		uLocal_606[0] = unk_0x84A97C70FFDEC0C8() + 10000;
		if (bParam1)
		{
			uLocal_606[1] = unk_0x84A97C70FFDEC0C8() + 10000;
		}
		else
		{
			uLocal_606[1] = unk_0x84A97C70FFDEC0C8() + 2000;
		}
		bLocal_605 = true;
	}
}

bool func_275(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

void func_276(bool bParam0)
{
	iLocal_603 = unk_0x84A97C70FFDEC0C8();
	Local_584[0 /*3*/] = { Local_584[1 /*3*/] };
	Local_584[1 /*3*/] = { Local_584[2 /*3*/] };
	Local_584[2 /*3*/] = { Local_584[3 /*3*/] };
	Local_584[3 /*3*/] = { Local_584[4 /*3*/] };
	Local_584[4 /*3*/] = { Local_584[5 /*3*/] };
	if (bParam0)
	{
		Local_584[5 /*3*/] = { unk_0xC086F8D75730FA3A(iLocal_290, 1) };
	}
	else
	{
		Local_584[5 /*3*/] = { unk_0xC086F8D75730FA3A(Local_277.f_0, 1) };
	}
}

void func_277()
{
	bool bVar0;
	
	if (func_280() && unk_0x84A97C70FFDEC0C8() > iLocal_412)
	{
		if (iLocal_380 == 0 || iLocal_380 == 1)
		{
			if (func_26(iLocal_273) && (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0) || func_191(unk_0xD5A676B97920D126(), iLocal_273, 15f, 1)))
			{
				iLocal_380 = 4;
			}
		}
	}
	switch (iLocal_417)
	{
		case 0:
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_374) > 4000)
			{
				func_21(&uLocal_96, 4, iLocal_290, "Stalker", 0, 1);
				iLocal_417 = 1;
			}
			break;
		
		case 1:
			if (func_26(iLocal_273) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			if (func_26(iLocal_290))
			{
				if (func_191(unk_0xD5A676B97920D126(), iLocal_290, 25f, 1))
				{
					if (bVar0 && iLocal_415 > iLocal_416)
					{
						if (iLocal_416 < 3)
						{
							iLocal_417 = 5;
						}
						else if (iLocal_415 < 3)
						{
							iLocal_417 = 2;
						}
						else
						{
							iLocal_417 = 3;
						}
					}
					else if (iLocal_415 < 3)
					{
						iLocal_417 = 2;
					}
					else if (bVar0 && iLocal_416 < 3)
					{
						iLocal_417 = 5;
					}
					else
					{
						iLocal_417 = 3;
					}
				}
				else if (bVar0)
				{
					if (!func_191(unk_0xD5A676B97920D126(), iLocal_290, (80f * 0.75f), 1))
					{
						if (!bLocal_414)
						{
							iLocal_417 = 8;
						}
						else if (iLocal_416 < 3)
						{
							iLocal_417 = 5;
						}
						else
						{
							bLocal_376 = false;
							bLocal_410 = false;
							iLocal_374 = unk_0x84A97C70FFDEC0C8();
							iLocal_417 = 0;
						}
					}
					else if (iLocal_416 < 3)
					{
						iLocal_417 = 5;
					}
					else
					{
						bLocal_376 = false;
						bLocal_410 = false;
						iLocal_374 = unk_0x84A97C70FFDEC0C8();
						iLocal_417 = 0;
					}
				}
				else if ((!bLocal_414 && !func_191(unk_0xD5A676B97920D126(), iLocal_290, (80f * 0.5f), 1)) && func_191(unk_0xD5A676B97920D126(), iLocal_289, 15f, 1))
				{
					iLocal_417 = 8;
				}
			}
			break;
		
		case 2:
			if (func_26(iLocal_290))
			{
				if (func_191(unk_0xD5A676B97920D126(), iLocal_290, 25f, 1))
				{
					if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
					{
						if (func_3(&uLocal_96, Local_418[iLocal_415 /*3*/].f_1, Local_418[iLocal_415 /*3*/].f_2, 7, 1, 0, 0))
						{
							bLocal_375 = true;
							bLocal_376 = false;
							bLocal_410 = false;
							iLocal_417 = 10;
						}
					}
					else if (func_3(&uLocal_96, Local_418[iLocal_415 /*3*/].f_1, Local_418[iLocal_415 /*3*/].f_2, 7, 0, 0, 0))
					{
						bLocal_375 = true;
						bLocal_376 = false;
						bLocal_410 = false;
						iLocal_417 = 10;
					}
				}
				else
				{
					bLocal_375 = false;
					bLocal_376 = false;
					bLocal_410 = false;
					iLocal_374 = unk_0x84A97C70FFDEC0C8();
					iLocal_417 = 0;
				}
			}
			break;
		
		case 3:
			if (func_26(iLocal_290))
			{
				if (func_191(unk_0xD5A676B97920D126(), iLocal_290, 25f, 1))
				{
					if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
					{
						if (func_3(&uLocal_96, "MET1AUD", "MET1_STWR", 7, 1, 0, 0))
						{
							bLocal_375 = true;
							bLocal_376 = false;
							bLocal_410 = false;
							iLocal_417 = 10;
						}
					}
					else if (func_3(&uLocal_96, "MET1AUD", "MET1_STWR", 7, 0, 0, 0))
					{
						bLocal_375 = true;
						bLocal_376 = false;
						bLocal_410 = false;
						iLocal_417 = 10;
					}
				}
				else
				{
					bLocal_375 = false;
					bLocal_376 = false;
					bLocal_410 = false;
					iLocal_374 = unk_0x84A97C70FFDEC0C8();
					iLocal_417 = 0;
				}
			}
			break;
		
		case 5:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, Local_428[iLocal_416 /*3*/].f_1, Local_428[iLocal_416 /*3*/].f_2, 7, 1, 0, 0))
				{
					bLocal_375 = false;
					bLocal_376 = true;
					bLocal_410 = false;
					iLocal_417 = 10;
				}
			}
			else if (func_3(&uLocal_96, Local_428[iLocal_416 /*3*/].f_1, Local_428[iLocal_416 /*3*/].f_2, 7, 0, 0, 0))
			{
				bLocal_375 = false;
				bLocal_376 = true;
				bLocal_410 = false;
				iLocal_417 = 10;
			}
			break;
		
		case 8:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_TNOGOF", 7, 1, 0, 0))
				{
					bLocal_414 = true;
					bLocal_375 = false;
					bLocal_376 = false;
					bLocal_410 = false;
					iLocal_417 = 10;
				}
			}
			else if (func_3(&uLocal_96, "MET1AUD", "MET1_TNOGOF", 7, 0, 0, 0))
			{
				bLocal_414 = true;
				bLocal_375 = false;
				bLocal_376 = false;
				bLocal_410 = false;
				iLocal_417 = 10;
			}
			break;
		
		case 4:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_MESS", 7, 1, 0, 0))
				{
					iLocal_331 = unk_0x84A97C70FFDEC0C8();
					bLocal_375 = false;
					bLocal_376 = false;
					iLocal_377 = 0;
					bLocal_410 = true;
					iLocal_380 = 10;
				}
			}
			else if (func_3(&uLocal_96, "MET1AUD", "MET1_MESS", 7, 0, 0, 0))
			{
				iLocal_331 = unk_0x84A97C70FFDEC0C8();
				bLocal_375 = false;
				bLocal_376 = false;
				iLocal_377 = 0;
				bLocal_410 = true;
				iLocal_380 = 10;
			}
			break;
		
		case 10:
			if (!func_23())
			{
				if (bLocal_375)
				{
					iLocal_415++;
				}
				else if (bLocal_376)
				{
					iLocal_416++;
				}
				if (bLocal_410)
				{
					iLocal_412 = unk_0x84A97C70FFDEC0C8() + 15000;
				}
				iLocal_374 = unk_0x84A97C70FFDEC0C8();
				iLocal_417 = 0;
			}
			else if (bLocal_375 && func_26(iLocal_290))
			{
				if (!func_191(unk_0xD5A676B97920D126(), iLocal_290, 25f, 1))
				{
					func_189();
				}
				if (unk_0x7D720C677145C91C(iLocal_290, unk_0xD5A676B97920D126(), 1))
				{
					if (func_278() == 4)
					{
						func_54();
					}
					unk_0x3C05FE2296BF5F53(iLocal_290);
				}
			}
			else if (bLocal_376 && func_26(iLocal_273))
			{
				if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 1) && !func_191(unk_0xD5A676B97920D126(), iLocal_290, 25f, 1))
				{
					func_189();
				}
			}
			break;
		
		case 11:
			break;
	}
}

int func_278()
{
	int iVar0;
	char cVar1[24];
	char* sVar7;
	
	if (Global_15745 == 4)
	{
		iVar0 = unk_0xF29A0451BC42EF27();
		iVar0 = (iVar0 + Global_16755);
		if (iVar0 > -1)
		{
			if (unk_0xA6AD4206830E160C(&(Global_14613[iVar0 /*6*/])))
			{
				cVar1 = { Global_15364 };
				StringConCat(&cVar1, "SL", 24);
				sVar7 = unk_0x5A10E58CB09E5ADB(unk_0xBC2999B1C8F62EDD(&cVar1), iVar0 * 3, iVar0 * 3 + 1);
				return func_279(sVar7);
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -2;
		}
	}
	return -3;
}

int func_279(char* sParam0)
{
	if (unk_0xCC257DA11A122B5F(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_280()
{
	int iVar0;
	
	if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
	{
		iLocal_411 = unk_0x84A97C70FFDEC0C8();
		return 1;
	}
	else
	{
		iVar0 = (unk_0x84A97C70FFDEC0C8() - iLocal_411);
		if (iVar0 > 0 && iVar0 < 4500)
		{
			return 1;
		}
	}
	return 0;
}

void func_281(var uParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		if ((unk_0x84A97C70FFDEC0C8() - *uParam3) > 500)
		{
			if (unk_0xDB44BCF552894B8E(*uParam0) == 1)
			{
				unk_0x4F095059F1C175D5(*uParam0, 3);
				unk_0x2EDAF851B28036F0(*uParam0, "BLIP_FRIEND");
				if ((unk_0x84A97C70FFDEC0C8() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0xE7C48EF8F50001B1() || func_187(sParam1, 0, 0))
					{
						func_29(sParam2, 7500, 0);
					}
				}
				*uParam3 = unk_0x84A97C70FFDEC0C8();
			}
			else
			{
				unk_0x4F095059F1C175D5(*uParam0, 1);
				unk_0x2EDAF851B28036F0(*uParam0, "BLIP_ENEMY");
				if ((unk_0x84A97C70FFDEC0C8() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0xE7C48EF8F50001B1() || func_187(sParam2, 0, 0))
					{
						func_29(sParam1, 7500, 0);
					}
				}
				*uParam3 = unk_0x84A97C70FFDEC0C8();
			}
		}
	}
	if ((unk_0x84A97C70FFDEC0C8() - iParam4) > 7500)
	{
		if (func_187(sParam1, 0, 0))
		{
			unk_0x0CA19C427F18E80B(sParam1);
		}
		if (func_187(sParam2, 0, 0))
		{
			unk_0x0CA19C427F18E80B(sParam2);
		}
	}
}

int func_282()
{
	if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0) && unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
	{
		return 1;
	}
	else if (bLocal_336)
	{
		if (func_191(unk_0xD5A676B97920D126(), iLocal_289, 10f, 1))
		{
			return 1;
		}
		else if (func_56(iLocal_289, unk_0xC086F8D75730FA3A(iLocal_290, 0), 10f))
		{
			return 1;
		}
		else if (func_283(iLocal_289, unk_0xD5A676B97920D126(), 1126825984, 1, 250, 7))
		{
			return 1;
		}
		else if (func_283(iLocal_289, iLocal_290, 1126825984, 1, 250, 7))
		{
			return 1;
		}
	}
	else if (func_283(iLocal_289, unk_0xD5A676B97920D126(), 1126825984, 1, 250, 7))
	{
		return 1;
	}
	return 0;
}

bool func_283(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_291(iParam0, iParam1);
	if (!func_26(iParam0) || !func_26(iParam1))
	{
		if (iVar4 != -1)
		{
			func_290(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_287(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_286();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_284(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x84A97C70FFDEC0C8() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_284(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_26(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_285(iParam4, iParam7) };
		*uParam0 = unk_0xE819DF1A8AD7E307(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xEE7715D6C4A7B1F2(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x6DA4D1391A7B813F(iVar7))
	{
		func_26(iVar7);
		if (unk_0x36B702E1B6552B8A(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0xD9F91573B5BD0A2A(Param1, unk_0xC086F8D75730FA3A(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x84A97C70FFDEC0C8();
			return 1;
		}
		return 0;
	}
	if (unk_0x8041FE602D4689B1(iVar7))
	{
		func_26(iVar7);
		if (unk_0x6A0583ECFCCECC9B(iParam4, 0))
		{
			if (unk_0x9A1EB82BF4C4844D(iVar7) == unk_0x0DBD8FE531FD620D(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0xD9F91573B5BD0A2A(Param1, unk_0xC086F8D75730FA3A(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x84A97C70FFDEC0C8();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_285(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x7BC26452241AC7C9(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xC086F8D75730FA3A(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xC086F8D75730FA3A(iParam0, 1);
}

int func_286()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_287(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_289(unk_0xC086F8D75730FA3A(iParam1, 1) - unk_0xC086F8D75730FA3A(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xF42BD66111346ACC(iParam0) };
	}
	else
	{
		Var3 = { func_289(unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 5f, 0f) - unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_288(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_288(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_289(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_290(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_291(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_292()
{
	iLocal_338 = 1;
	iLocal_340 = unk_0x84A97C70FFDEC0C8();
}

void func_293()
{
	func_283(iLocal_289, unk_0xD5A676B97920D126(), 1126825984, 1, 250, 7);
	func_283(iLocal_289, iLocal_290, 1126825984, 1, 250, 7);
}

void func_294(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_295(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_295(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_296(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_296(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
	{
		func_271(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_297(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_297(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x96F8C2C945A9B758())
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x1C079483C9D16F36(iVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_272(iVar0))
	{
		func_315();
	}
	if (func_314(iParam1) && unk_0xA3E7DE487D314279(iParam1))
	{
		iVar1 = 0;
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			unk_0x5C5EA29ED298B14F(unk_0x36B702E1B6552B8A(iParam1));
			unk_0x8E5A2F0D57C1DF15(unk_0x36B702E1B6552B8A(iParam1), 1);
			if (unk_0x33853ED448B52835(unk_0x36B702E1B6552B8A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8041FE602D4689B1(iParam1))
		{
			unk_0x5362ADB0E848B600(unk_0x9A1EB82BF4C4844D(iParam1));
			if (unk_0xF39AD11288893C1D(unk_0x9A1EB82BF4C4844D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam1))
		{
			unk_0xAA8FA16ED286C065(unk_0x028455DF6C933604(iParam1));
			if (unk_0xE5C01F114CB61F98(unk_0x028455DF6C933604(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x96F8C2C945A9B758())
		{
			if (func_309(uParam0, bParam7, bParam9, 0))
			{
				func_306(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_302(iVar0))
				{
					if ((unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0)) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if ((iVar1 && !unk_0xA14FC57CB26C2B67()) && uParam8)
						{
							if (!func_272(iVar0))
							{
								func_301(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
								{
									func_300(1);
								}
							}
						}
					}
				}
			}
			else if (func_302(iVar0))
			{
				if (unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0))
				{
					if (((unk_0xBB5DD90D4926F21A(iParam1) && iVar1) && !unk_0xA14FC57CB26C2B67()) && uParam8)
					{
						if (!func_272(iVar0))
						{
							func_301(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
							{
								func_300(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x1C079483C9D16F36(sParam5))
			{
				if (func_272(sParam5))
				{
					unk_0x04890EB0282525A5(1);
				}
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
					{
						func_271(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
					{
						func_271(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
					{
						func_271(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
					{
						func_271(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
					{
						func_271(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
				{
					func_271(uParam0, iVar0, 1);
				}
			}
			if (!func_309(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_299(uParam0))
				{
					func_298(uParam0);
				}
			}
		}
	}
	else
	{
		func_271(uParam0, iVar0, 0);
	}
}

void func_298(var uParam0)
{
	if (func_314(unk_0xD5A676B97920D126()))
	{
		unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x33E4179F57B9F232(1);
		unk_0x6125B94865C458A0(0);
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		unk_0x044DCEA35050EC01("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_299(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x84A97C70FFDEC0C8()
		{
			return 1;
		}
	}
	return 0;
}

int func_300(bool bParam0)
{
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101652.f_8992.f_100++;
			}
			return Global_101652.f_8992.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101652.f_8992.f_101++;
			}
			return Global_101652.f_8992.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101652.f_8992.f_102++;
			}
			return Global_101652.f_8992.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_301(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_302(char* sParam0)
{
	if (!func_303(1, 1, 0))
	{
		if ((!unk_0xC55B9553B3EDADE9(sParam0) && func_272(sParam0)) || func_272("CMN_HINT"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return 0;
	}
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (func_300(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_300(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_300(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_303(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB0D174BA6F10DF7B())
	{
		return 0;
	}
	if (func_305(0))
	{
		return 0;
	}
	if (func_304())
	{
		return 0;
	}
	if (unk_0x976A3E0B7A766593())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52999)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
		{
			if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
			{
				return 0;
			}
			if (unk_0x2AD8D2893EF54BC3())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_304()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_305(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_306(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		func_271(uParam0, 0, 0);
	}
	if (func_233(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			iVar0 = unk_0x36B702E1B6552B8A(iParam1);
			if (!unk_0x6A0583ECFCCECC9B(iVar0, 0))
			{
				if (unk_0xBEC34BF6B72C417A(iVar0))
				{
					if (!func_307())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x300B1E56EE76D45C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x33E4179F57B9F232(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x218CB9DF4F72DD01(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iParam1, -1, iVar3, iVar4);
	unk_0xAAD655F2351CC4B7("FocusIn", 0, 0);
	unk_0xE3E53903AE9B5BD5("HINT_CAM_SCENE");
	unk_0xA93E75A5493862BD(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_307()
{
	return func_308(unk_0xFB6B3EEFAB2DD12C());
}

int func_308(int iParam0)
{
	if (unk_0xA0A4DA31DEDFAC4F(unk_0x4572B13EE70C8F52(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_309(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (func_313(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_312(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_312(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_313(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_299(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (!func_313(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_312(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_312(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_313(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (!func_313(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_312(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_312(bParam1, bParam2, bParam3) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_313(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (func_311(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_310(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || func_310(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_311(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_299(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_303(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_315();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_310(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_303(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_311(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_303(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_312(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_303(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_313(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_303(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_314(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0x8041FE602D4689B1(iParam0))
		{
			if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x6DA4D1391A7B813F(iParam0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_315()
{
	unk_0xB8A73E7DA87B2968(&Global_2314, 4);
}

void func_316(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		if (bParam5)
		{
			unk_0x4F095059F1C175D5(*uParam0, 1);
			unk_0x2EDAF851B28036F0(*uParam0, "BLIP_ENEMY");
			if (iParam6 && !func_23())
			{
				if (!unk_0xE7C48EF8F50001B1() || func_187(sParam2, 0, 0))
				{
					func_29(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			unk_0x4F095059F1C175D5(*uParam0, 3);
			unk_0x2EDAF851B28036F0(*uParam0, "BLIP_FRIEND");
			if (iParam6 && !func_23())
			{
				if (!unk_0xE7C48EF8F50001B1() || func_187(sParam1, 0, 0))
				{
					func_29(sParam2, 7500, 0);
				}
			}
		}
		*uParam3 = unk_0x84A97C70FFDEC0C8();
		*uParam4 = unk_0x84A97C70FFDEC0C8();
	}
}

void func_317()
{
	struct<3> Var0;
	
	Var0 = { unk_0xC086F8D75730FA3A(iLocal_290, 1) };
	Local_584[0 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 15f) };
	Local_584[1 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 12f) };
	Local_584[2 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 9f) };
	Local_584[3 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 6f) };
	Local_584[4 /*3*/] = { Var0.f_0, Var0.f_1, (Var0.f_2 + 3f) };
	Local_584[5 /*3*/] = { Var0 };
}

void func_318()
{
	switch (iLocal_93)
	{
		case 0:
			if (func_26(iLocal_290))
			{
				func_294(&uLocal_261, iLocal_290, 0, 0, 1, 1, 1);
				if (!func_191(unk_0xD5A676B97920D126(), iLocal_290, 220f, 1))
				{
					func_27(&uLocal_297);
					sLocal_573 = "MET1ESCAPE";
					iLocal_92 = 11;
					iLocal_93 = 0;
				}
				else
				{
					if (func_194(4) && (unk_0x2428688746A375BE(203) == 0 || !func_23()))
					{
						func_28(4);
					}
					iLocal_374 = unk_0x84A97C70FFDEC0C8();
					iLocal_412 = unk_0x84A97C70FFDEC0C8();
					iLocal_411 = (unk_0x84A97C70FFDEC0C8() - 4500);
					iLocal_380 = 0;
					iLocal_372 = 0;
					iLocal_373 = 0;
					bLocal_375 = false;
					bLocal_376 = false;
					iLocal_377 = 0;
					bLocal_410 = false;
					iLocal_378 = (unk_0x84A97C70FFDEC0C8() - 1000);
					Local_320[0 /*3*/] = { Local_479 };
					Local_320[1 /*3*/] = { Local_320[0 /*3*/] };
					Local_320[2 /*3*/] = { Local_320[1 /*3*/] };
					iLocal_330 = unk_0x84A97C70FFDEC0C8();
					iLocal_331 = unk_0x84A97C70FFDEC0C8();
					if (!iLocal_333)
					{
						iLocal_333 = 1;
						unk_0x37338B7B7C4982DC(iLocal_290);
						unk_0x1DC0501F19F1A583(iLocal_290, Local_277.f_0, unk_0xD5A676B97920D126(), 8, 25f, 786477, 100f, 1f, 1);
					}
					iLocal_603 = unk_0x84A97C70FFDEC0C8();
					if (func_26(Local_277.f_0))
					{
						Local_584[0 /*3*/] = { unk_0xC086F8D75730FA3A(Local_277.f_0, 1) };
						Local_584[1 /*3*/] = { Local_584[0 /*3*/] };
						Local_584[2 /*3*/] = { Local_584[1 /*3*/] };
					}
					func_334(&bLocal_609, &uLocal_610, &uLocal_611, &uLocal_612);
					iLocal_613 = unk_0x84A97C70FFDEC0C8();
					if (unk_0x6901135DDCC4904D(uLocal_297))
					{
						func_333(uLocal_297, iLocal_290, 220f, 0.75f, 0);
					}
					iLocal_93 = 1;
				}
				if (iLocal_305)
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
					{
						iLocal_305 = 0;
						func_27(&uLocal_298);
						unk_0x59C0D363E5A5B548();
					}
				}
				else if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
				{
					iLocal_305 = 1;
					uLocal_298 = func_196(iLocal_273, 1, 5);
					func_28(5);
				}
				func_293();
			}
			else
			{
				func_271(&uLocal_261, 0, 0);
				func_27(&uLocal_297);
				bLocal_336 = true;
				bLocal_337 = func_282();
				func_292();
				iLocal_93 = 0;
				iLocal_92 = 7;
				unk_0x59C0D363E5A5B548();
			}
			break;
		
		case 1:
			if (func_26(iLocal_290))
			{
				if (func_330())
				{
					func_27(&uLocal_297);
					iLocal_93 = 0;
					iLocal_92 = 6;
				}
				else if (!unk_0x6A0583ECFCCECC9B(iLocal_290, 0))
				{
					iLocal_93 = 0;
					iLocal_92 = 6;
				}
				else if (!func_191(unk_0xD5A676B97920D126(), iLocal_290, 220f, 1))
				{
					func_27(&uLocal_297);
					sLocal_573 = "MET1ESCAPE";
					iLocal_92 = 11;
					iLocal_93 = 0;
				}
				else
				{
					if (func_194(4) && (unk_0x2428688746A375BE(203) == 0 || !func_23()))
					{
						func_28(4);
					}
					func_328();
					func_326();
					if (iLocal_305)
					{
						if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
						{
							iLocal_305 = 0;
							func_27(&uLocal_298);
							unk_0x59C0D363E5A5B548();
							if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
							{
								iLocal_306 = 0;
							}
							else
							{
								iLocal_306 = 1;
								iLocal_307 = 0;
								uLocal_298 = func_193(iLocal_289, 1, 1, 5);
								func_28(2);
							}
						}
						else if (func_194(6))
						{
							if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 60f, 1))
							{
								func_28(6);
							}
						}
						else if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 160f, 1))
						{
							sLocal_573 = "MET1ABANDON";
							iLocal_93 = 0;
							iLocal_92 = 11;
						}
						else if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
						{
							func_192();
						}
					}
					else if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
					{
						iLocal_305 = 1;
						uLocal_298 = func_196(iLocal_273, 1, 5);
						if (!func_324())
						{
							func_28(5);
						}
						if (func_23())
						{
							func_189();
						}
					}
					else if (iLocal_306)
					{
						if (!iLocal_307 && !func_188())
						{
							iLocal_307 = 1;
							unk_0x87D70F1F81DB77D3(iLocal_289, iLocal_273, 20000, 0, 2f, 1, 0);
						}
						if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
						{
							iLocal_306 = 0;
							func_27(&uLocal_298);
						}
						else if (func_194(6))
						{
							if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 60f, 1))
							{
								func_28(6);
							}
						}
						else if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 160f, 1))
						{
							sLocal_573 = "MET1ABANDON";
							iLocal_93 = 0;
							iLocal_92 = 11;
						}
					}
					else if (!unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
					{
						iLocal_306 = 1;
						iLocal_307 = 0;
						uLocal_298 = func_193(iLocal_289, 1, 1, 5);
						func_28(2);
						if (func_23())
						{
							func_54();
						}
					}
				}
				if ((unk_0x6901135DDCC4904D(uLocal_297) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0)) && unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
				{
					func_333(uLocal_297, iLocal_290, 220f, 0.75f, 0);
				}
				func_294(&uLocal_261, iLocal_290, 0, 0, 1, 1, 1);
				if (unk_0x96F8C2C945A9B758())
				{
					func_323(1);
				}
				else
				{
					func_323(0);
				}
				func_293();
			}
			else
			{
				func_27(&uLocal_297);
				func_271(&uLocal_261, 0, 0);
				bLocal_336 = true;
				func_292();
				bLocal_337 = func_282();
				iLocal_93 = 0;
				iLocal_92 = 7;
			}
			func_322();
			func_319();
			break;
		
		case 2:
			func_35(1);
			break;
	}
}

void func_319()
{
	if (iLocal_377 == 1 && (iLocal_380 == 0 || iLocal_380 == 1))
	{
		iLocal_380 = 6;
	}
	else
	{
		iLocal_377 = 0;
	}
	iLocal_379 = (unk_0x84A97C70FFDEC0C8() - iLocal_378);
	if ((((iLocal_379 > 0 && iLocal_379 < 250) && (iLocal_380 == 0 || iLocal_380 == 1)) && unk_0x78D3CDB884C74FEB(iLocal_273) < 1.5f) && unk_0x78D3CDB884C74FEB(Local_277.f_0) > 3f)
	{
		iLocal_380 = 8;
	}
	if (func_321())
	{
		iLocal_378 = unk_0x84A97C70FFDEC0C8();
	}
	if (func_280() && unk_0x84A97C70FFDEC0C8() > iLocal_412)
	{
		if (iLocal_380 == 0 || iLocal_380 == 1)
		{
			iLocal_380 = 4;
		}
	}
	switch (iLocal_380)
	{
		case 0:
			if ((((unk_0x84A97C70FFDEC0C8() - iLocal_374) > 4000 && func_26(iLocal_290)) && !func_186()) && !func_23())
			{
				func_21(&uLocal_96, 4, iLocal_290, "Stalker", 0, 1);
				iLocal_380 = 1;
			}
			break;
		
		case 1:
			if (func_26(iLocal_290))
			{
				if (!func_191(unk_0xD5A676B97920D126(), iLocal_290, (220f * 0.75f), 1))
				{
					if (unk_0x6A0583ECFCCECC9B(iLocal_290, 0))
					{
						iLocal_380 = 8;
					}
				}
				else if (func_320() && (unk_0x84A97C70FFDEC0C8() - iLocal_331) > 6000)
				{
					iLocal_380 = 7;
				}
				else if (func_191(unk_0xD5A676B97920D126(), iLocal_290, 50f, 1))
				{
					if (iLocal_372 > iLocal_373)
					{
						if (iLocal_373 < 4)
						{
							iLocal_380 = 5;
						}
						else if (iLocal_372 < 5)
						{
							iLocal_380 = 2;
						}
						else
						{
							bLocal_375 = false;
							iLocal_374 = unk_0x84A97C70FFDEC0C8();
							iLocal_380 = 0;
						}
					}
					else if (iLocal_372 < 5)
					{
						iLocal_380 = 2;
					}
					else if (iLocal_373 < 4)
					{
						iLocal_380 = 5;
					}
					else
					{
						bLocal_376 = false;
						iLocal_374 = unk_0x84A97C70FFDEC0C8();
						iLocal_380 = 0;
					}
				}
				else if (iLocal_373 < 4)
				{
					iLocal_380 = 5;
				}
				else
				{
					bLocal_376 = false;
					iLocal_374 = unk_0x84A97C70FFDEC0C8();
					iLocal_380 = 0;
				}
			}
			break;
		
		case 2:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, Local_381[iLocal_372 /*3*/].f_1, Local_381[iLocal_372 /*3*/].f_2, 7, 1, 0, 0))
				{
					bLocal_375 = true;
					bLocal_376 = false;
					bLocal_410 = false;
					iLocal_380 = 10;
				}
			}
			else if (func_3(&uLocal_96, Local_381[iLocal_372 /*3*/].f_1, Local_381[iLocal_372 /*3*/].f_2, 7, 0, 0, 0))
			{
				bLocal_375 = true;
				bLocal_376 = false;
				bLocal_410 = false;
				iLocal_380 = 10;
			}
			break;
		
		case 5:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, Local_397[iLocal_373 /*3*/].f_1, Local_397[iLocal_373 /*3*/].f_2, 7, 1, 0, 0))
				{
					bLocal_375 = false;
					bLocal_376 = true;
					bLocal_410 = false;
					iLocal_380 = 10;
				}
			}
			else if (func_3(&uLocal_96, Local_397[iLocal_373 /*3*/].f_1, Local_397[iLocal_373 /*3*/].f_2, 7, 0, 0, 0))
			{
				bLocal_375 = false;
				bLocal_376 = true;
				bLocal_410 = false;
				iLocal_380 = 10;
			}
			break;
		
		case 8:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_GETHIM", 7, 1, 0, 0))
				{
					bLocal_375 = false;
					bLocal_376 = false;
					bLocal_410 = false;
					iLocal_380 = 10;
				}
			}
			else if (func_3(&uLocal_96, "MET1AUD", "MET1_GETHIM", 7, 0, 0, 0))
			{
				bLocal_375 = false;
				bLocal_376 = false;
				bLocal_410 = false;
				iLocal_380 = 10;
			}
			break;
		
		case 6:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_BASH", 7, 1, 0, 0))
				{
					bLocal_375 = false;
					bLocal_376 = false;
					iLocal_377 = 0;
					bLocal_410 = false;
					iLocal_380 = 10;
				}
			}
			else if (func_3(&uLocal_96, "MET1AUD", "MET1_BASH", 7, 0, 0, 0))
			{
				bLocal_375 = false;
				bLocal_376 = false;
				iLocal_377 = 0;
				bLocal_410 = false;
				iLocal_380 = 10;
			}
			break;
		
		case 7:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_STOP", 7, 1, 0, 0))
				{
					iLocal_331 = unk_0x84A97C70FFDEC0C8();
					bLocal_375 = false;
					bLocal_376 = false;
					iLocal_377 = 0;
					bLocal_410 = false;
					iLocal_380 = 10;
				}
			}
			else if (func_3(&uLocal_96, "MET1AUD", "MET1_STOP", 7, 0, 0, 0))
			{
				iLocal_331 = unk_0x84A97C70FFDEC0C8();
				bLocal_375 = false;
				bLocal_376 = false;
				iLocal_377 = 0;
				bLocal_410 = false;
				iLocal_380 = 10;
			}
			break;
		
		case 4:
			if (func_187("MET1KSTKRED", 0, 0) || func_187("MET1KSTKBLU", 0, 0))
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_MESS", 7, 1, 0, 0))
				{
					iLocal_331 = unk_0x84A97C70FFDEC0C8();
					bLocal_375 = false;
					bLocal_376 = false;
					iLocal_377 = 0;
					bLocal_410 = true;
					iLocal_380 = 10;
				}
			}
			else if (func_3(&uLocal_96, "MET1AUD", "MET1_MESS", 7, 0, 0, 0))
			{
				iLocal_331 = unk_0x84A97C70FFDEC0C8();
				bLocal_375 = false;
				bLocal_376 = false;
				iLocal_377 = 0;
				bLocal_410 = true;
				iLocal_380 = 10;
			}
			break;
		
		case 10:
			if (!func_23())
			{
				if (bLocal_375)
				{
					iLocal_372++;
				}
				else if (bLocal_376)
				{
					iLocal_373++;
				}
				if (bLocal_410)
				{
					iLocal_412 = unk_0x84A97C70FFDEC0C8() + 15000;
				}
				iLocal_374 = unk_0x84A97C70FFDEC0C8();
				iLocal_380 = 0;
			}
			break;
		
		case 11:
			break;
	}
}

int func_320()
{
	if (func_275(Local_320[0 /*3*/], Local_320[2 /*3*/], 2f))
	{
		return 1;
	}
	iLocal_331 = unk_0x84A97C70FFDEC0C8();
	return 0;
}

int func_321()
{
	if (unk_0xC9CACD72C7228F98(iLocal_273))
	{
		if (func_26(Local_277.f_0) && unk_0xC85EEB48C05E2A8A(iLocal_273, Local_277.f_0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_322()
{
	if ((unk_0x84A97C70FFDEC0C8() - iLocal_330) > 3000)
	{
		Local_320[0 /*3*/] = { Local_320[1 /*3*/] };
		Local_320[1 /*3*/] = { Local_320[2 /*3*/] };
		Local_320[2 /*3*/] = { unk_0xC086F8D75730FA3A(iLocal_273, 1) };
		iLocal_330 = unk_0x84A97C70FFDEC0C8();
	}
}

void func_323(int iParam0)
{
	if (iParam0 && !unk_0x0FE8D1B72C1924FE("M_E_TRACEY_FOCUS_CAM"))
	{
		unk_0xE3E53903AE9B5BD5("M_E_TRACEY_FOCUS_CAM");
	}
	else if (iParam0 == 0 && unk_0x0FE8D1B72C1924FE("M_E_TRACEY_FOCUS_CAM"))
	{
		unk_0xB3C38A4B84C152BF("M_E_TRACEY_FOCUS_CAM");
	}
}

int func_324()
{
	float fVar0;
	
	if (func_26(Local_277.f_0))
	{
		fVar0 = func_325(unk_0x8EC566688AB2FFE4(Local_277.f_0), 0f, 360f);
		if (fVar0 > 150f && fVar0 < 210f)
		{
			return 1;
		}
	}
	return 0;
}

float func_325(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_326()
{
	if (func_26(Local_277.f_0))
	{
		if ((unk_0x84A97C70FFDEC0C8() - iLocal_603) > 3000)
		{
			func_276(0);
			if (func_275(Local_584[3 /*3*/], Local_584[5 /*3*/], 2f) && func_327())
			{
				iLocal_92 = 6;
				iLocal_93 = 0;
			}
			else if (func_275(Local_584[0 /*3*/], Local_584[5 /*3*/], 2f))
			{
				iLocal_92 = 6;
				iLocal_93 = 0;
			}
		}
	}
}

int func_327()
{
	if (func_56(iLocal_273, unk_0x7E140C583F91AE2B(Local_277.f_0, 0f, 3.2f, 0.5f), 3f) || func_56(iLocal_273, unk_0x7E140C583F91AE2B(Local_277.f_0, 0f, -3.2f, 0.5f), 3f))
	{
		return 1;
	}
	return 0;
}

void func_328()
{
	if (iLocal_617 == 0)
	{
		if (bLocal_609 && (unk_0x84A97C70FFDEC0C8() - iLocal_613) > iLocal_615)
		{
			iLocal_613 = unk_0x84A97C70FFDEC0C8();
			iLocal_617 = 2;
		}
		else if ((unk_0x84A97C70FFDEC0C8() - iLocal_613) > iLocal_616 && unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), unk_0x7E140C583F91AE2B(Local_277.f_0, 0f, -0.5f, -1.5f), unk_0x7E140C583F91AE2B(Local_277.f_0, 0f, 6f, 2f), 12f, 0, 1, 0))
		{
			iLocal_613 = unk_0x84A97C70FFDEC0C8();
			iLocal_617 = 1;
		}
	}
	if (iLocal_617 == 1)
	{
		if (bLocal_609)
		{
			iLocal_617 = 2;
		}
		else if ((unk_0x84A97C70FFDEC0C8() - iLocal_613) < iLocal_614 && func_329(1))
		{
			unk_0x3441075BD734FF79(iLocal_290, 1, unk_0xD5A676B97920D126(), 0, 0f, 0f, 0f, 0, 300, 300);
		}
		else
		{
			iLocal_613 = unk_0x84A97C70FFDEC0C8();
			iLocal_617 = 0;
		}
	}
	if (iLocal_617 == 2)
	{
		if ((unk_0x84A97C70FFDEC0C8() - iLocal_613) < iLocal_614 && func_329(0))
		{
			unk_0x3441075BD734FF79(iLocal_290, 1, unk_0xD5A676B97920D126(), 0, 0f, 0f, 0f, 0, 150, 400);
		}
		else
		{
			iLocal_613 = unk_0x84A97C70FFDEC0C8();
			iLocal_617 = 0;
		}
	}
}

int func_329(int iParam0)
{
	if (iParam0 == 1 || iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_330()
{
	if (unk_0x7887B64A08364778(Local_277.f_0))
	{
		if (unk_0xB529B2A4B7C64D6D(Local_277.f_0, 0) || !unk_0xA4DB44DF73EF4FE5(Local_277.f_0, 0))
		{
			return 1;
		}
		if (func_332(Local_277.f_0, &bLocal_609, &uLocal_610, &uLocal_611, &uLocal_612, 6, 1082130432))
		{
			return 1;
		}
		if (bLocal_609)
		{
			iLocal_377 = 1;
		}
		if (unk_0xF7FB02DF50202630(Local_277.f_0))
		{
			if (iLocal_318)
			{
				if ((unk_0x84A97C70FFDEC0C8() - iLocal_319) > 7000)
				{
					return 1;
				}
			}
			else
			{
				iLocal_318 = 1;
				iLocal_319 = unk_0x84A97C70FFDEC0C8();
			}
		}
		else
		{
			if (iLocal_318)
			{
			}
			iLocal_318 = 0;
		}
		if (func_331(Local_277.f_0))
		{
			return 1;
		}
	}
	return 0;
}

int func_331(int iParam0)
{
	if (((unk_0xA53003F5B0019FFC(iParam0, 0, 0) || unk_0xA53003F5B0019FFC(iParam0, 1, 0)) || unk_0xA53003F5B0019FFC(iParam0, 4, 0)) || unk_0xA53003F5B0019FFC(iParam0, 5, 0))
	{
		return 1;
	}
	return 0;
}

int func_332(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (unk_0xC85EEB48C05E2A8A(iVar0, iParam0))
		{
			if ((!*uParam1 && (unk_0x84A97C70FFDEC0C8() - *uParam2) > 500) && *uParam4 >= fParam6)
			{
				*uParam1 = 1;
				*uParam3++;
				if (*uParam3 >= iParam5)
				{
					return 1;
				}
			}
		}
		else if (*uParam1)
		{
			*uParam2 = unk_0x84A97C70FFDEC0C8();
			*uParam1 = 0;
		}
		Var1 = { func_289(unk_0xC086F8D75730FA3A(iVar0, 1) - unk_0xC086F8D75730FA3A(iParam0, 1)) };
		Var4 = { unk_0x9C0A225C3A240597(iParam0) - unk_0x9C0A225C3A240597(iVar0) };
		*uParam4 = func_288(Var4, Var1);
	}
	return 0;
}

void func_333(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x6901135DDCC4904D(uParam0))
	{
		if ((unk_0x7887B64A08364778(iParam1) && unk_0x7887B64A08364778(unk_0xD5A676B97920D126())) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (unk_0x8041FE602D4689B1(iParam1))
			{
				if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam1), 0))
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x5AF5569613C76AC3(uParam0, 1);
						unk_0x97C445677A852D45(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x5AF5569613C76AC3(uParam0, 0);
						unk_0x97C445677A852D45(uParam0, 255);
					}
				}
			}
			else if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam1)))
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x5AF5569613C76AC3(uParam0, 1);
						unk_0x97C445677A852D45(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x5AF5569613C76AC3(uParam0, 0);
						unk_0x97C445677A852D45(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_334(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0f;
}

void func_335()
{
	var uVar0;
	
	switch (iLocal_93)
	{
		case 0:
			if (!func_340())
			{
				func_338();
				unk_0x49E996A1E39EAAD7("missmichael_event@tracy");
				unk_0x49E996A1E39EAAD7(sLocal_296);
				if (iLocal_305)
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
					{
						iLocal_305 = 0;
						func_27(&uLocal_298);
						unk_0x59C0D363E5A5B548();
					}
				}
				else if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
				{
					iLocal_305 = 1;
					uLocal_298 = func_196(iLocal_273, 1, 5);
					func_28(5);
				}
				if (!iLocal_334 && func_3(&uLocal_96, "MET1AUD", "MET1_LOCX", 7, 0, 0, 0))
				{
					iLocal_334 = 1;
				}
				if (func_336(Local_277.f_6, Local_277.f_9, 0))
				{
					iLocal_332 = 0;
					iLocal_333 = 0;
					iLocal_335 = 0;
					unk_0x9773EF10686D53C8(Local_277.f_0, Local_277.f_10);
					unk_0x456121A0AAC868D4(&uVar0);
					unk_0x3690E6B5EAFA8E93(0, Local_277.f_0, unk_0xC086F8D75730FA3A(iLocal_273, 1), 4, 35f, 2883621, 10f, 12f, 1);
					unk_0x95047F6BD606A176(0, Local_277.f_0, iLocal_273, -1, 25f, 2883621, -1082130432, 20, 1101004800);
					unk_0xCFE67FBB69F1C410(uVar0);
					unk_0x8B06B801B92CEC2D(iLocal_290, uVar0);
					unk_0x873418BFBF9A6780(&uVar0);
					func_198(3, "Stalker appears (CP2)", 0, 0, 0, 1);
					bLocal_336 = false;
					func_293();
					iLocal_93 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_305)
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
				{
					iLocal_305 = 0;
					func_27(&uLocal_298);
					unk_0x59C0D363E5A5B548();
				}
			}
			else if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
			{
				iLocal_305 = 1;
				uLocal_298 = func_196(iLocal_273, 1, 5);
				func_28(5);
			}
			if (func_26(iLocal_290))
			{
				if (func_26(Local_277.f_0))
				{
					if (!iLocal_335)
					{
						if (unk_0xD7669BF035CDA5F6("missmichael_event@tracy") && func_3(&uLocal_96, "MET1AUD", "MET1_TENDb", 7, 0, 0, 0))
						{
							unk_0x290A57C93304EF16(iLocal_289, "missmichael_event@tracy", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x6989DACCC7A558AE("missmichael_event@tracy");
							if (!unk_0x6901135DDCC4904D(uLocal_297))
							{
								uLocal_297 = func_196(Local_277.f_0, 0, 5);
								unk_0x2EDAF851B28036F0(uLocal_297, "MET1LBSTALK");
								func_182(4);
							}
							iLocal_335 = 1;
						}
					}
					else
					{
						if (func_194(4) && (unk_0x2428688746A375BE(203) == 0 || !func_23()))
						{
							func_28(4);
						}
						if (!iLocal_332)
						{
							if (unk_0x7D720C677145C91C(Local_277.f_0, unk_0xD5A676B97920D126(), 1) || unk_0x7D720C677145C91C(iLocal_290, unk_0xD5A676B97920D126(), 1))
							{
								unk_0x3C05FE2296BF5F53(iLocal_290);
								unk_0x3C05FE2296BF5F53(Local_277.f_0);
								iLocal_332 = 1;
							}
							else if (func_191(unk_0xD5A676B97920D126(), iLocal_290, 15f, 1))
							{
								iLocal_332 = 1;
							}
						}
						else
						{
							unk_0x1DC0501F19F1A583(iLocal_290, Local_277.f_0, unk_0xD5A676B97920D126(), 8, 25f, 786477, 100f, 1f, 1);
							iLocal_333 = 1;
							iLocal_93 = 2;
						}
						if (!func_191(unk_0xD5A676B97920D126(), iLocal_290, 220f, 1))
						{
							func_27(&uLocal_297);
							func_27(&uLocal_298);
							sLocal_573 = "MET1ESCAPE";
							iLocal_92 = 11;
							iLocal_93 = 0;
						}
						func_294(&uLocal_261, iLocal_290, 0, 0, 1, 1, 1);
						if (unk_0x6901135DDCC4904D(uLocal_297))
						{
							func_333(uLocal_297, iLocal_290, 220f, 0.75f, 0);
						}
					}
				}
				else
				{
					iLocal_92 = 6;
					iLocal_93 = 0;
				}
				func_293();
			}
			else
			{
				func_27(&uLocal_297);
				bLocal_336 = true;
				bLocal_337 = func_282();
				func_292();
				iLocal_93 = 0;
				iLocal_92 = 7;
				unk_0x59C0D363E5A5B548();
			}
			break;
		
		case 2:
			unk_0x1B0911E42F22C137(1);
			if (func_194(4) && (unk_0x2428688746A375BE(203) == 0 || !func_23()))
			{
				func_28(4);
			}
			if (iLocal_305)
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
				{
					iLocal_305 = 0;
					func_27(&uLocal_298);
					unk_0x59C0D363E5A5B548();
				}
			}
			else if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
			{
				iLocal_305 = 1;
				uLocal_298 = func_196(iLocal_273, 1, 5);
				func_28(5);
			}
			func_293();
			iLocal_93 = 0;
			iLocal_92 = 5;
			break;
	}
}

int func_336(struct<3> Param0, float fParam3, int iParam4)
{
	if (iParam4 && !iLocal_292)
	{
		unk_0x4ACD1E4CBA159ED1(iLocal_291);
		unk_0x4ACD1E4CBA159ED1(Local_277.f_1);
		iLocal_292 = 1;
	}
	if (func_26(Local_277.f_0) && func_26(iLocal_290))
	{
		return 1;
	}
	else if (iLocal_292)
	{
		if (unk_0x7AD0E9452821C95D(iLocal_291) && unk_0x7AD0E9452821C95D(Local_277.f_1))
		{
			unk_0xBCDF9E3086B4229C(Local_277.f_6, 5f, 0, 0, 0, 0, 0);
			Local_277.f_0 = unk_0xDE8A46A23FDCBBFE(Local_277.f_1, Param0, fParam3, 1, 1);
			unk_0x8188DB74546FF484(Local_277.f_1);
			unk_0xC243EB5E21E9A4EE(Local_277.f_0, 145, 111);
			unk_0x2D739561304957CC(Local_277.f_0, 1084227584);
			unk_0x19E33E4939B83297(Local_277.f_0, 1);
			unk_0xD8D30EB401DF0DA3(Local_277.f_0, 1);
			unk_0x09AB636BA0F9BE90(Local_277.f_0, 1, 1, 0);
			unk_0x6D20A3AA82585D8C(Local_277.f_0, 1);
			unk_0xBC82BAA0C1572324(Local_277.f_0);
			func_337(Local_277.f_0, 0);
			unk_0x233D2784147A4FE4(Local_277.f_0, "M_E_TRACEY_STALKERS_CAR_GROUP", 0);
			iLocal_317 = 1;
			iLocal_290 = unk_0x0BD2D83BDCAED6E6(Local_277.f_0, 26, iLocal_291, -1, 1, 1);
			unk_0x5BD2F51088536150(iLocal_290, 9, 0, 0, 0);
			unk_0x5BD2F51088536150(iLocal_290, 8, 0, 0, 0);
			unk_0x5BD2F51088536150(iLocal_290, 0, 0, 0, 0);
			unk_0x5BD2F51088536150(iLocal_290, 2, 1, 0, 0);
			unk_0x5BD2F51088536150(iLocal_290, 3, 0, 0, 0);
			unk_0x5BD2F51088536150(iLocal_290, 4, 1, 0, 0);
			unk_0x8188DB74546FF484(iLocal_291);
			unk_0x5457695C257D1470(iLocal_290, 1);
			unk_0x7D99F00F48D15ADB(iLocal_290, 1);
			func_21(&uLocal_96, 4, iLocal_290, "Stalker", 0, 1);
			unk_0x237B0CFB6EEBD3BA(iLocal_290, 281, 1);
			iLocal_292 = 0;
			iLocal_626 = unk_0x84A97C70FFDEC0C8() + 1000;
			return 1;
		}
	}
	else
	{
		unk_0x4ACD1E4CBA159ED1(iLocal_291);
		unk_0x4ACD1E4CBA159ED1(Local_277.f_1);
		iLocal_292 = 1;
	}
	return 0;
}

void func_337(int iParam0, int iParam1)
{
	Global_91486.f_22[iParam1] = iParam0;
}

void func_338()
{
	int iVar0;
	
	if (func_56(unk_0xD5A676B97920D126(), Local_487[3 /*8*/], Local_487[3 /*8*/].f_3))
	{
		if (unk_0x07C31E0D8AE8CF82(Local_277.f_1, Local_546[0 /*3*/], 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		Local_277.f_6 = { Local_546[iVar0 /*3*/] };
		Local_277.f_9 = fLocal_565[iVar0];
		Local_277.f_10 = 15f;
	}
	else
	{
		if (func_339())
		{
			if (unk_0x07C31E0D8AE8CF82(Local_277.f_1, Local_546[2 /*3*/], 0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 3;
			}
		}
		else if (unk_0x07C31E0D8AE8CF82(Local_277.f_1, Local_546[4 /*3*/], 0))
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 5;
		}
		Local_277.f_6 = { Local_546[iVar0 /*3*/] };
		Local_277.f_9 = fLocal_565[iVar0];
		Local_277.f_10 = 25f;
	}
}

int func_339()
{
	struct<3> Var0;
	
	Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
	if (Var0.f_2 < Local_487[3 /*8*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_340()
{
	if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		sLocal_573 = "MET1CPSTALK";
		iLocal_92 = 11;
		iLocal_93 = 0;
		return 1;
	}
	return 0;
}

void func_341()
{
	if (iLocal_625 == 1 && unk_0x84A97C70FFDEC0C8() > iLocal_624)
	{
		unk_0x3883CF8F721E3AE3();
		iLocal_625 = 0;
	}
	switch (iLocal_93)
	{
		case 0:
			if (func_26(iLocal_273))
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 1))
				{
					iLocal_305 = 0;
				}
				else
				{
					iLocal_305 = 1;
				}
				if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 1))
				{
					iLocal_306 = 0;
				}
				else
				{
					iLocal_306 = 1;
				}
				iLocal_520 = 0;
				iLocal_316 = 0;
				Local_320[0 /*3*/] = { Local_479 };
				Local_320[1 /*3*/] = { Local_320[0 /*3*/] };
				Local_320[2 /*3*/] = { Local_320[1 /*3*/] };
				iLocal_330 = unk_0x84A97C70FFDEC0C8();
				iLocal_331 = unk_0x84A97C70FFDEC0C8();
				iLocal_93 = 1;
				func_195();
			}
			break;
		
		case 1:
			if (!func_340())
			{
				func_322();
				func_195();
				if (iLocal_305)
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
					{
						iLocal_305 = 0;
						func_27(&uLocal_297);
						unk_0x59C0D363E5A5B548();
						if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
						{
							iLocal_306 = 0;
							if (iLocal_316 == 5 && !func_56(unk_0xD5A676B97920D126(), Local_487[iLocal_520 /*8*/], Local_487[iLocal_520 /*8*/].f_3))
							{
								uLocal_297 = func_269(Local_487[iLocal_520 /*8*/], 5, 1);
							}
							else if (iLocal_316 == 1)
							{
								iLocal_316 = 2;
							}
						}
						else
						{
							iLocal_306 = 1;
							iLocal_307 = 0;
						}
					}
					else if (func_344(iLocal_289, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						unk_0x37338B7B7C4982DC(iLocal_289);
						unk_0xBB8F1D58B7578137(iLocal_289, unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
						if (func_23())
						{
							if (func_278() == 3)
							{
								func_54();
							}
							else
							{
								func_189();
							}
						}
						sLocal_573 = "MET1TRASCARE";
						iLocal_92 = 11;
						iLocal_93 = 0;
					}
					else if (func_194(6))
					{
						if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 60f, 1))
						{
							func_28(6);
						}
					}
					else if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 160f, 1))
					{
						sLocal_573 = "MET1ABANDON";
						iLocal_93 = 0;
						iLocal_92 = 11;
					}
					else if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
					{
						func_192();
					}
				}
				else if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
				{
					iLocal_305 = 1;
					func_27(&uLocal_297);
					uLocal_297 = func_196(iLocal_273, 1, 5);
					func_28(5);
					if (func_23())
					{
						func_189();
					}
				}
				else if (iLocal_306)
				{
					if (!iLocal_307 && !func_188())
					{
						iLocal_307 = 1;
						unk_0x87D70F1F81DB77D3(iLocal_289, iLocal_273, 20000, 0, 2f, 1, 0);
					}
					if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
					{
						iLocal_306 = 0;
						func_27(&uLocal_297);
						if (iLocal_520 < 4)
						{
							if (iLocal_316 == 1)
							{
								iLocal_316 = 2;
							}
							else if (iLocal_316 == 6)
							{
								iLocal_316 = 7;
							}
						}
					}
					else if (func_194(6))
					{
						if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 60f, 1))
						{
							func_28(6);
						}
					}
					else if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 160f, 1))
					{
						sLocal_573 = "MET1ABANDON";
						iLocal_93 = 0;
						iLocal_92 = 11;
					}
				}
				else if (!unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
				{
					iLocal_306 = 1;
					iLocal_307 = 0;
					func_27(&uLocal_297);
					uLocal_297 = func_193(iLocal_289, 1, 1, 5);
					func_28(2);
					if (func_23())
					{
						func_54();
					}
				}
				else
				{
					switch (iLocal_316)
					{
						case 0:
							if (!func_188())
							{
								if (func_3(&uLocal_96, "MET1AUD", Local_487[iLocal_520 /*8*/].f_4, 8, 0, 0, 0))
								{
									iLocal_316 = 1;
								}
							}
							break;
						
						case 1:
							if (func_23())
							{
								iLocal_316 = 2;
							}
							break;
						
						case 2:
							if (func_23())
							{
								if (unk_0xF29A0451BC42EF27() >= Local_487[iLocal_520 /*8*/].f_7)
								{
									uLocal_297 = func_269(Local_487[iLocal_520 /*8*/], 5, 1);
									iLocal_316 = 3;
								}
							}
							else
							{
								uLocal_297 = func_269(Local_487[iLocal_520 /*8*/], 5, 1);
								iLocal_316 = 3;
							}
							break;
						
						case 3:
							if (!unk_0x6901135DDCC4904D(uLocal_297))
							{
								uLocal_297 = func_269(Local_487[iLocal_520 /*8*/], 5, 1);
							}
							if (func_56(unk_0xD5A676B97920D126(), Local_487[iLocal_520 /*8*/], Local_487[iLocal_520 /*8*/].f_3))
							{
								iLocal_316 = 5;
							}
							else if (!func_23())
							{
								iLocal_543 = unk_0x84A97C70FFDEC0C8() + 2000;
								iLocal_316 = 4;
							}
							break;
						
						case 4:
							if (!unk_0x6901135DDCC4904D(uLocal_297))
							{
								uLocal_297 = func_269(Local_487[iLocal_520 /*8*/], 5, 1);
							}
							if (func_56(unk_0xD5A676B97920D126(), Local_487[iLocal_520 /*8*/], Local_487[iLocal_520 /*8*/].f_3))
							{
								iLocal_316 = 5;
							}
							else if (!func_23() && unk_0x84A97C70FFDEC0C8() > iLocal_543)
							{
								if (!func_188())
								{
									if (bLocal_312 && !unk_0xCC257DA11A122B5F(Local_487[iLocal_520 /*8*/].f_6, "NULL"))
									{
										if (func_3(&uLocal_96, "MET1AUD", Local_487[iLocal_520 /*8*/].f_6, 8, 0, 0, 0))
										{
											iLocal_316 = 5;
										}
									}
									else if (func_3(&uLocal_96, "MET1AUD", Local_487[iLocal_520 /*8*/].f_5, 8, 0, 0, 0))
									{
										iLocal_316 = 5;
									}
								}
							}
							break;
						
						case 5:
							if (func_56(unk_0xD5A676B97920D126(), Local_487[iLocal_520 /*8*/], Local_487[iLocal_520 /*8*/].f_3))
							{
								iLocal_520++;
								func_27(&uLocal_297);
								func_343();
								if (iLocal_520 < 4 && func_23())
								{
									func_189();
									iLocal_316 = 6;
								}
								else
								{
									if (iLocal_520 == 4 && func_23())
									{
										func_189();
									}
									iLocal_545 = 0;
									iLocal_316 = 7;
								}
							}
							else if (!unk_0x6901135DDCC4904D(uLocal_297))
							{
								uLocal_297 = func_269(Local_487[iLocal_520 /*8*/], 5, 1);
							}
							else
							{
								func_342();
							}
							break;
						
						case 6:
							if (!func_23())
							{
								iLocal_545 = 1;
								iLocal_543 = (unk_0x84A97C70FFDEC0C8() + iLocal_544);
								iLocal_316 = 7;
							}
							break;
						
						case 7:
							if (iLocal_545)
							{
								if (unk_0x84A97C70FFDEC0C8() > iLocal_543)
								{
									iLocal_545 = 0;
								}
							}
							else if (iLocal_520 < 4)
							{
								iLocal_543 = unk_0x84A97C70FFDEC0C8();
								iLocal_316 = 0;
							}
							else
							{
								iLocal_334 = 0;
								unk_0x49E996A1E39EAAD7("missmichael_event@tracy");
								iLocal_93 = 2;
							}
							break;
						}
					}
			}
			if (iLocal_520 >= 2)
			{
				unk_0x43C5A23247934BA2(0.5f);
			}
			break;
		
		case 2:
			if (!func_340())
			{
				func_27(&uLocal_297);
				if (iLocal_305)
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
					{
						iLocal_305 = 0;
						func_27(&uLocal_298);
						unk_0x59C0D363E5A5B548();
					}
				}
				else if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
				{
					iLocal_305 = 1;
					uLocal_298 = func_196(iLocal_273, 1, 5);
					func_28(5);
				}
				func_336(0f, 0f, 0f, 0f, 1);
				if (func_3(&uLocal_96, "MET1AUD", "MET1_LOCX", 7, 0, 0, 0))
				{
					iLocal_334 = 1;
				}
				func_338();
				iLocal_92 = 4;
				iLocal_93 = 0;
			}
			unk_0x43C5A23247934BA2(0.5f);
			break;
	}
}

void func_342()
{
	if (((!func_23() && !func_188()) && unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0)) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
	{
		if (func_320() && (unk_0x84A97C70FFDEC0C8() - iLocal_331) > 18000)
		{
			func_3(&uLocal_96, "MET1AUD", "MET1_NOTGO", 4, 0, 0, 0);
			iLocal_331 = unk_0x84A97C70FFDEC0C8();
		}
	}
}

void func_343()
{
	var uVar0[2];
	struct<3> Var3[4];
	struct<5> Var16;
	struct<4> Var27;
	
	Var16 = 2;
	Var16.f_1 = 4;
	Var16.f_1.f_5 = 4;
	Var27 = 2;
	Var27.f_1 = 3;
	Var27.f_1.f_4 = 3;
	Var3[0 /*3*/] = { unk_0x7E140C583F91AE2B(iLocal_273, -8f, 2f, 0f) };
	Var3[1 /*3*/] = { unk_0x7E140C583F91AE2B(iLocal_273, -8f, 8f, 0f) };
	Var3[2 /*3*/] = { unk_0x7E140C583F91AE2B(iLocal_273, 8f, 2f, 0f) };
	Var3[3 /*3*/] = { unk_0x7E140C583F91AE2B(iLocal_273, 8f, 8f, 0f) };
	Var27[0 /*4*/][0] = unk_0x7BC26452241AC7C9(0, 3);
	if (Var27[0 /*4*/][0] < 2)
	{
		Var27[0 /*4*/][1] = unk_0x7BC26452241AC7C9(2, 3);
	}
	else
	{
		Var27[0 /*4*/][1] = unk_0x7BC26452241AC7C9(0, 1);
	}
	if (Var27[0 /*4*/][0] > 1)
	{
		Var27[0 /*4*/][2] = unk_0x7BC26452241AC7C9(2, 3);
	}
	else
	{
		Var27[0 /*4*/][2] = unk_0x7BC26452241AC7C9(0, 1);
	}
	Var16[0 /*5*/][0] = unk_0x7BC26452241AC7C9(300, 600);
	Var16[0 /*5*/][1] = unk_0x7BC26452241AC7C9(400, 1000);
	Var16[0 /*5*/][2] = unk_0x7BC26452241AC7C9(500, 1000);
	Var16[0 /*5*/][3] = unk_0x7BC26452241AC7C9(500, 1000);
	unk_0x456121A0AAC868D4(&(uVar0[0]));
	unk_0xFEC48628C9B9C876(0, Var16[0 /*5*/][0]);
	unk_0x8AEEE13F802C81D6(0, Var3[Var27[0 /*4*/][0] /*3*/], Var16[0 /*5*/][1], 2048, 2);
	unk_0x8AEEE13F802C81D6(0, Var3[Var27[0 /*4*/][1] /*3*/], Var16[0 /*5*/][2], 2048, 2);
	unk_0x8AEEE13F802C81D6(0, Var3[Var27[0 /*4*/][2] /*3*/], Var16[0 /*5*/][3], 2048, 2);
	unk_0xCFE67FBB69F1C410(uVar0[0]);
	unk_0x8B06B801B92CEC2D(iLocal_289, uVar0[0]);
	unk_0x873418BFBF9A6780(&(uVar0[0]));
	Var27[1 /*4*/][0] = unk_0x7BC26452241AC7C9(0, 3);
	if (Var27[0 /*4*/][0] == Var27[1 /*4*/][0])
	{
		Var27[1 /*4*/][0] = unk_0x7BC26452241AC7C9(0, 3);
	}
	if (Var27[1 /*4*/][0] < 2)
	{
		Var27[1 /*4*/][1] = unk_0x7BC26452241AC7C9(2, 3);
	}
	else
	{
		Var27[1 /*4*/][1] = unk_0x7BC26452241AC7C9(0, 1);
	}
	if (Var27[1 /*4*/][0] > 1)
	{
		Var27[1 /*4*/][1] = unk_0x7BC26452241AC7C9(2, 3);
	}
	else
	{
		Var27[1 /*4*/][1] = unk_0x7BC26452241AC7C9(0, 1);
	}
	Var16[1 /*5*/][0] = 0;
	Var16[1 /*5*/][1] = unk_0x7BC26452241AC7C9(500, 1000);
	Var16[1 /*5*/][2] = unk_0x7BC26452241AC7C9(500, 1000);
	Var16[1 /*5*/][3] = unk_0x7BC26452241AC7C9(500, 1000);
	unk_0x456121A0AAC868D4(&(uVar0[1]));
	unk_0xFEC48628C9B9C876(0, Var16[1 /*5*/][0]);
	unk_0x8AEEE13F802C81D6(0, Var3[Var27[1 /*4*/][0] /*3*/], Var16[1 /*5*/][1], 2048, 2);
	unk_0x8AEEE13F802C81D6(0, Var3[Var27[1 /*4*/][1] /*3*/], Var16[1 /*5*/][2], 2048, 2);
	unk_0x8AEEE13F802C81D6(0, Var3[Var27[1 /*4*/][2] /*3*/], Var16[1 /*5*/][3], 2048, 2);
	unk_0xCFE67FBB69F1C410(uVar0[1]);
	unk_0x8B06B801B92CEC2D(unk_0xD5A676B97920D126(), uVar0[1]);
	unk_0x873418BFBF9A6780(&(uVar0[1]));
}

int func_344(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_26(unk_0xD5A676B97920D126()) && func_26(iParam0))
	{
		if (unk_0x7D720C677145C91C(iParam0, unk_0xD5A676B97920D126(), 1))
		{
			return 1;
		}
		if (func_349(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
		{
			if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) - unk_0xC086F8D75730FA3A(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_348(unk_0xD5A676B97920D126(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_345(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_26(unk_0xD5A676B97920D126()) && func_26(iParam0))
	{
		if (func_347(iParam0) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iParam0))
		{
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_346(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_346(int iParam0, float fParam1)
{
	return func_283(iParam0, unk_0xD5A676B97920D126(), fParam1, 1, 250, 7);
}

int func_347(int iParam0)
{
	if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iParam0) && unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_348(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF42BD66111346ACC(iParam0) };
	Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) - unk_0xC086F8D75730FA3A(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_349(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_26(unk_0xD5A676B97920D126()) && func_26(iParam0))
	{
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_353(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_350(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xAB3AA0F867F67480(unk_0xD5A676B97920D126()))
			{
				if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
				{
					if (unk_0x1DEB1994A3C25E35(unk_0xC086F8D75730FA3A(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_353(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_350(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_350(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x94831A9ACDA94EDA(unk_0xC086F8D75730FA3A(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x94831A9ACDA94EDA(unk_0xC086F8D75730FA3A(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x94831A9ACDA94EDA(unk_0xC086F8D75730FA3A(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x94831A9ACDA94EDA(unk_0xC086F8D75730FA3A(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_351(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_351(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4B16FF7207D89FDF(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_351(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_352(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_352(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_289(Param1 - unk_0xC086F8D75730FA3A(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xF42BD66111346ACC(iParam0) };
	}
	else
	{
		Var3 = { func_289(unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 5f, 0f) - unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_288(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_353(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
		{
			if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x1DEB1994A3C25E35(unk_0xC086F8D75730FA3A(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_354()
{
	var uVar0;
	
	switch (iLocal_93)
	{
		case 0:
			unk_0x49E996A1E39EAAD7(sLocal_296);
			if (!func_340())
			{
				if (!func_2())
				{
					if (((func_366(&iLocal_289, Local_483, iLocal_486, 1) && func_357(&iLocal_273, 15, Local_479, fLocal_482, 1, 0)) && unk_0xD7669BF035CDA5F6(sLocal_296)) && func_26(iLocal_273))
					{
						iLocal_293 = 1;
						unk_0x5457695C257D1470(iLocal_289, 1);
						func_22(&uLocal_96, 3);
						func_21(&uLocal_96, 3, iLocal_289, "TRACEY", 0, 1);
						unk_0x237B0CFB6EEBD3BA(iLocal_289, 32, 0);
						unk_0x237B0CFB6EEBD3BA(iLocal_289, 26, 1);
						func_356();
						unk_0x290A57C93304EF16(iLocal_289, sLocal_296, "nervous_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x7D99F00F48D15ADB(iLocal_289, 1);
						unk_0x6D20A3AA82585D8C(iLocal_273, 1);
						unk_0xD7F5C6888DC98485(iLocal_273, 1);
						unk_0x19E33E4939B83297(iLocal_273, 1);
						unk_0xBC82BAA0C1572324(iLocal_273);
						unk_0x70057AC4F7A58052(iLocal_273, 1);
						func_337(iLocal_273, 1);
						iLocal_274 = 1;
						unk_0x1B0911E42F22C137(0);
						iLocal_369 = unk_0x84A97C70FFDEC0C8();
						iLocal_370 = 0;
						iLocal_371 = 0;
						iLocal_304 = 0;
						iLocal_311 = 0;
						iLocal_93 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_95 == 0)
			{
				if (func_56(unk_0xD5A676B97920D126(), Local_479, 200f))
				{
					iLocal_95 = 1;
				}
			}
			else if (!func_56(unk_0xD5A676B97920D126(), Local_479, 300f))
			{
				iLocal_95 = 0;
			}
			if (!func_2())
			{
				if (!func_340())
				{
					switch (iLocal_304)
					{
						case 0:
							if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 246.1479f, -39.21085f, 67.89664f, 202.6635f, -23.77725f, 72.90416f, 22f, 0, 1, 0) || unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 233.7891f, -45.51515f, 67.57388f, 229.9916f, -55.96275f, 72.28979f, 12.5f, 0, 1, 0))
							{
								if (func_23())
								{
									func_54();
								}
								unk_0x456121A0AAC868D4(&uVar0);
								unk_0x290A57C93304EF16(0, sLocal_296, "breakout", 8f, -4f, -1, 0, 0, 0, 0, 0);
								unk_0x87D70F1F81DB77D3(0, iLocal_273, 60000, 0, 2f, 1, 0);
								unk_0xCFE67FBB69F1C410(uVar0);
								unk_0x37338B7B7C4982DC(iLocal_289);
								unk_0x0988FFC0C75637DF(iLocal_289, unk_0xD5A676B97920D126(), 4000, 0, 3);
								unk_0x8B06B801B92CEC2D(iLocal_289, uVar0);
								unk_0x873418BFBF9A6780(&uVar0);
								unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 170, 1);
								unk_0xB083C46F5A46BC3D(3);
								iLocal_624 = unk_0x84A97C70FFDEC0C8() + 10000;
								iLocal_625 = 1;
								iLocal_304 = 1;
							}
							else
							{
								func_355();
							}
							break;
						
						case 1:
							if (func_3(&uLocal_96, "MET1AUD", "MET1_SEES", 7, 1, 0, 0) || unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
							{
								func_198(2, "Met Tracey (CP2)", 0, 0, 0, 1);
								iLocal_94 = 4;
								iLocal_308 = unk_0x84A97C70FFDEC0C8();
								func_27(&uLocal_297);
								uLocal_297 = func_196(iLocal_273, 1, 5);
								func_28(1);
								iLocal_304 = 2;
							}
							if (iLocal_625 == 1 && unk_0x84A97C70FFDEC0C8() > iLocal_624)
							{
								unk_0x3883CF8F721E3AE3();
								iLocal_625 = 0;
							}
							unk_0x0988FFC0C75637DF(iLocal_289, unk_0xD5A676B97920D126(), 2000, 2048, 4);
							break;
						
						case 2:
							if (((!iLocal_311 && !func_23()) && !func_187("MET1TCAR", 0, 0)) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
							{
								if (func_3(&uLocal_96, "MET1AUD", "MET1_GETIN", 7, 0, 0, 0))
								{
									iLocal_311 = 1;
								}
							}
							if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
							{
								unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 170, 0);
								if (unk_0x04D83291EB9DE51D(iLocal_289, iLocal_273, 0))
								{
									unk_0x59C0D363E5A5B548();
									unk_0x37338B7B7C4982DC(iLocal_289);
									func_182(3);
									iLocal_93 = 2;
								}
								else if (func_194(2))
								{
									func_27(&uLocal_297);
									uLocal_297 = func_193(iLocal_289, 1, 1, 5);
									unk_0x2EDAF851B28036F0(uLocal_297, "MET1LBTRAC");
									func_28(2);
								}
							}
							unk_0x0988FFC0C75637DF(iLocal_289, unk_0xD5A676B97920D126(), 2000, 2048, 4);
							if (iLocal_625 == 1 && unk_0x84A97C70FFDEC0C8() > iLocal_624)
							{
								unk_0x3883CF8F721E3AE3();
								iLocal_625 = 0;
							}
							break;
					}
					if (iLocal_304 != 0)
					{
						if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 100f, 1))
						{
							sLocal_573 = "MET1ABANDON";
							iLocal_92 = 11;
							iLocal_93 = 0;
						}
						else if (!func_191(unk_0xD5A676B97920D126(), iLocal_289, 50f, 1))
						{
							func_28(6);
						}
					}
					if (func_344(iLocal_289, 1, 1116471296, 1126825984, 1, 0, 0, 0))
					{
						unk_0x37338B7B7C4982DC(iLocal_289);
						unk_0xBB8F1D58B7578137(iLocal_289, unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
						if (func_23())
						{
							if (func_278() == 3)
							{
								func_54();
							}
							else
							{
								func_189();
							}
						}
						sLocal_573 = "MET1TRASCARE";
						iLocal_92 = 11;
						iLocal_93 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (!func_340())
			{
				func_27(&uLocal_297);
				iLocal_93 = 0;
				iLocal_92 = 3;
				func_197();
			}
			if (iLocal_625 == 1 && unk_0x84A97C70FFDEC0C8() > iLocal_624)
			{
				unk_0x3883CF8F721E3AE3();
				iLocal_625 = 0;
			}
			break;
	}
}

void func_355()
{
	switch (iLocal_371)
	{
		case 0:
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_369) > 5000 && func_191(iLocal_289, unk_0xD5A676B97920D126(), 25f, 1))
			{
				iLocal_371 = 9;
			}
			break;
		
		case 9:
			if (func_26(unk_0xD5A676B97920D126()))
			{
				if (func_3(&uLocal_96, "MET1AUD", "MET1_PACE", 7, 0, 0, 0))
				{
					if (iLocal_574 != 2)
					{
						func_182(2);
					}
					iLocal_371 = 10;
				}
			}
			break;
		
		case 10:
			if (!func_23())
			{
				iLocal_370++;
				if (iLocal_370 < 4)
				{
					iLocal_369 = unk_0x84A97C70FFDEC0C8();
					iLocal_371 = 0;
				}
				else
				{
					iLocal_371 = 11;
				}
			}
			break;
		
		case 11:
			break;
	}
}

void func_356()
{
	if (!iLocal_294)
	{
		unk_0x5CF7BD3BFEB33582("FRIENDLIES", &iLocal_295);
		unk_0x42AFB71D42AF78EA(1, iLocal_295, joaat("player"));
		unk_0x42AFB71D42AF78EA(1, joaat("player"), iLocal_295);
		iLocal_294 = 1;
	}
	if (unk_0xE9FC689BC2AB1F82(iLocal_289))
	{
		unk_0x195690A8FA7145B8(iLocal_289);
	}
	unk_0x417BCC1ECC12E9A2(iLocal_289, iLocal_295);
}

int func_357(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	struct<98> Var0;
	int iVar98;
	int iVar99;
	
	if (!func_12(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_365(iParam1, &Var0, iParam7);
		if (unk_0x7887B64A08364778(*iParam0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(*iParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_101652.f_2079.f_539.f_2846[0 /*197*/][0 /*98*/] == Var0.f_0) || (iParam1 == 15 && Global_101652.f_2079.f_539.f_2846[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (iParam1 == 17)
			{
				iVar98 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar98 = 1;
			}
			unk_0x4ACD1E4CBA159ED1(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/]);
			if (unk_0x7AD0E9452821C95D(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/]))
			{
				*iParam0 = unk_0xDE8A46A23FDCBBFE(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/], Param2, fParam5, 0, 0);
				unk_0x2D739561304957CC(*iParam0, 1084227584);
				unk_0x09D754A98E6A98B1(*iParam0, 0);
				unk_0x74CEDCAB129EF1AC(*iParam0, 0);
				unk_0x70057AC4F7A58052(*iParam0, 1);
				unk_0xE81D470B804DC69A(*iParam0, 1250);
				unk_0x26F5F15AFEF0CC8A(*iParam0, 1250f);
				unk_0x525451C25B51E42B(*iParam0, 1250f);
				Var0.f_3 = 1250;
				unk_0xC243EB5E21E9A4EE(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_5, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_6);
				unk_0x44ADE3DECA6FE50F(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_7, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_8);
				unk_0xDC5873FE07F6821C(*iParam0, Var0.f_2);
				iVar99 = 0;
				while (iVar99 < 12)
				{
					unk_0xE1896E88D2301642(*iParam0, iVar99 + 1, !Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_11[iVar99]);
					iVar99++;
				}
				if (Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_24)
				{
					if (unk_0xEF9CF6170A8C90B7(*iParam0, 0))
					{
						if (Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_24)
						{
							unk_0x0AAB849AA3F9460A(*iParam0, 1);
						}
						else
						{
							unk_0x19E33E4939B83297(*iParam0, 1);
						}
					}
				}
				unk_0x1364ED1BFBE98E4E(*iParam0, &(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_27));
				if (Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26 >= 0 && Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26 < unk_0xD4A0D498FF38017C())
				{
					unk_0xFBA8DB4F0E5F2215(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_26);
				}
				unk_0xF4537C80083CBF71(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_84, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_85, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_86);
				unk_0x5919F7382C7F12DB(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_88);
				unk_0xC97D204BBF00FC6C(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_87);
				unk_0xCF8D6A03AB9738AE(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_93, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_94, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_95);
				unk_0x0E014B94FC32A955(*iParam0, 2, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 28));
				unk_0x0E014B94FC32A955(*iParam0, 3, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 29));
				unk_0x0E014B94FC32A955(*iParam0, 0, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 30));
				unk_0x0E014B94FC32A955(*iParam0, 1, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_92, 31));
				if (unk_0xF72C45DFDBF9121C(*iParam0) > 1 && Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_89 >= 0)
				{
					unk_0x01DF175C46BF059E(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_89);
				}
				if (Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90 > -1)
				{
					if (!unk_0xA214826AC4BEA074(unk_0xA0A4DA31DEDFAC4F(*iParam0)))
					{
						if (unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(*iParam0)))
						{
							if (Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90 == 6)
							{
								unk_0xC6DCC91FF2EE9D39(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC6DCC91FF2EE9D39(*iParam0, Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_90);
						}
					}
				}
				func_361(iParam0, &(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_31), &(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/].f_81));
				unk_0xD2C5CB7D044F88FB(*iParam0, Var0.f_96);
				if (bParam6)
				{
					unk_0x8188DB74546FF484(Global_101652.f_2079.f_539.f_2846[0 /*197*/][iVar98 /*98*/]);
				}
				func_360(*iParam0);
				return 1;
			}
		}
		else
		{
			unk_0x4ACD1E4CBA159ED1(Var0.f_0);
			if (unk_0x7AD0E9452821C95D(Var0.f_0))
			{
				*iParam0 = unk_0xDE8A46A23FDCBBFE(Var0.f_0, Param2, fParam5, 0, 0);
				unk_0x2D739561304957CC(*iParam0, 1084227584);
				unk_0x09D754A98E6A98B1(*iParam0, 0);
				unk_0x74CEDCAB129EF1AC(*iParam0, 0);
				unk_0x70057AC4F7A58052(*iParam0, 1);
				func_358(iParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_360(*iParam0);
				}
				if (bParam6)
				{
					unk_0x8188DB74546FF484(Var0.f_0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_358(var uParam0, struct<98> Param1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		unk_0xE7D6BFCADFE1076B(*uParam0, Param1.f_4);
	}
	else
	{
		unk_0xC243EB5E21E9A4EE(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		unk_0x44ADE3DECA6FE50F(*uParam0, Param1.f_7, Param1.f_8);
	}
	unk_0xDC5873FE07F6821C(*uParam0, Param1.f_2);
	unk_0xE81D470B804DC69A(*uParam0, Param1.f_3);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		unk_0xE1896E88D2301642(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (unk_0xEF9CF6170A8C90B7(*uParam0, 0))
		{
			unk_0x0AAB849AA3F9460A(*uParam0, 1);
		}
	}
	if (func_359(&uVar2, &uVar1) && Param1.f_97)
	{
		unk_0x1364ED1BFBE98E4E(*uParam0, &uVar2);
		unk_0xFBA8DB4F0E5F2215(*uParam0, uVar1);
	}
	else if (!unk_0xC55B9553B3EDADE9(&(Param1.f_27)))
	{
		unk_0x1364ED1BFBE98E4E(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < unk_0xD4A0D498FF38017C())
		{
			unk_0xFBA8DB4F0E5F2215(*uParam0, Param1.f_26);
		}
	}
	unk_0xF4537C80083CBF71(*uParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	unk_0x5919F7382C7F12DB(*uParam0, Param1.f_88);
	unk_0xC97D204BBF00FC6C(*uParam0, Param1.f_87);
	unk_0xCF8D6A03AB9738AE(*uParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	unk_0x0E014B94FC32A955(*uParam0, 2, unk_0xF44A5E894FE76438(Param1.f_92, 28));
	unk_0x0E014B94FC32A955(*uParam0, 3, unk_0xF44A5E894FE76438(Param1.f_92, 29));
	unk_0x0E014B94FC32A955(*uParam0, 0, unk_0xF44A5E894FE76438(Param1.f_92, 30));
	unk_0x0E014B94FC32A955(*uParam0, 1, unk_0xF44A5E894FE76438(Param1.f_92, 31));
	if (unk_0xF72C45DFDBF9121C(*uParam0) > 1 && Param1.f_89 >= 0)
	{
		unk_0x01DF175C46BF059E(*uParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!unk_0xA214826AC4BEA074(unk_0xA0A4DA31DEDFAC4F(*uParam0)))
		{
			if (unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(*uParam0)))
			{
				if (Param1.f_90 == 6)
				{
					unk_0xC6DCC91FF2EE9D39(*uParam0, Param1.f_90);
				}
			}
			else
			{
				unk_0xC6DCC91FF2EE9D39(*uParam0, Param1.f_90);
			}
		}
	}
	func_361(uParam0, &(Param1.f_31), &(Param1.f_81));
	unk_0xD2C5CB7D044F88FB(*uParam0, Param1.f_96);
}

int func_359(var uParam0, var uParam1)
{
	if (unk_0x1995B52453EF6537())
	{
	}
	else if (Global_101652.f_19061.f_261)
	{
		*uParam0 = { Global_101652.f_19061.f_267 };
		*uParam1 = Global_101652.f_19061.f_271;
		return 1;
	}
	return 0;
}

void func_360(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x7887B64A08364778(Global_89180[iVar0]))
		{
			Global_89180[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

int func_361(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA4DB44DF73EF4FE5(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x83608391BBAB09A9(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x8A541F8CF0625EB6(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xDEFD029E49A376A2(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xFFB080E19B6AD134(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x620E4FB5E67DCA6B(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x47EE94F716B70695(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x47EE94F716B70695(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x47EE94F716B70695(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_364(unk_0xA0A4DA31DEDFAC4F(*uParam0), 1) && unk_0xFFB080E19B6AD134(*uParam0, 24) != func_363(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x47EE94F716B70695(*uParam0, 24, func_363(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_362(*uParam0))
	{
		unk_0xD7F5C6888DC98485(*uParam0, 1);
		unk_0x70057AC4F7A58052(*uParam0, 1);
	}
	return 1;
}

int func_362(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x7887B64A08364778(uParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0)) && unk_0x83608391BBAB09A9(iParam0) > 0)
	{
		unk_0x8A541F8CF0625EB6(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xFFB080E19B6AD134(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xE9B86150D9CD512B(iParam0, iVar1, unk_0xFFB080E19B6AD134(iParam0, iVar1)), 16);
				iVar2 = unk_0x6D9FF4C899CD785F(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x6D9FF4C899CD785F("MNU_CAGE") || iVar2 == unk_0x6D9FF4C899CD785F("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x7887B64A08364778(uParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		switch (unk_0xA0A4DA31DEDFAC4F(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x55333304BF43145A(iParam0, 38);
		iVar1 = unk_0x55333304BF43145A(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_12218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_12219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_12217)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_12220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_12222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_12221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_16659)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_16661)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_16665)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_16662)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_16669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_16667)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_16672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_365(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("tribike"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("sanchez"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1.f_0 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case joaat("faggio2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1.f_0 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case joaat("emperor"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1.f_0 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1.f_0 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("sanchez"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_366(int iParam0, struct<3> Param1, int iParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = func_53(15);
	unk_0x4ACD1E4CBA159ED1(iVar0);
	if (unk_0x7AD0E9452821C95D(iVar0))
	{
		func_33(iParam0);
		*iParam0 = unk_0x8C855D8124E955CE(26, iVar0, Param1, iParam4, 0, 0);
		unk_0x5BD2F51088536150(*iParam0, 3, 1, 1, 0);
		unk_0x5BD2F51088536150(*iParam0, 4, 5, 0, 0);
		unk_0x5BD2F51088536150(*iParam0, 6, 2, 0, 0);
		unk_0x5BD2F51088536150(*iParam0, 8, 1, 0, 0);
		if (bParam5)
		{
			unk_0x8188DB74546FF484(iVar0);
		}
		iLocal_626 = unk_0x84A97C70FFDEC0C8() + 1000;
		return 1;
	}
	return 0;
}

void func_367()
{
	switch (iLocal_93)
	{
		case 0:
			func_28(0);
			if (!unk_0x6901135DDCC4904D(uLocal_297))
			{
				uLocal_297 = func_369(Local_483, 1);
				func_368(&uLocal_297, 237.2897f, -60.5704f, 68.4345f, 70.9753f);
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				iLocal_305 = 0;
				func_182(1);
			}
			else
			{
				iLocal_305 = 1;
			}
			iLocal_93 = 1;
			break;
		
		case 1:
			if (!func_2())
			{
				if (iLocal_305 && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					iLocal_305 = 0;
					func_182(1);
				}
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
				{
					iLocal_92 = 10;
					iLocal_93 = 0;
				}
				else if (func_56(unk_0xD5A676B97920D126(), Local_479, 200f))
				{
					iLocal_93 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_2())
			{
				unk_0x49E996A1E39EAAD7(sLocal_296);
				unk_0xFC9F3169185868E7(Local_534[0 /*3*/], Local_534[1 /*3*/], Local_534.f_7, 0, 0, 1);
				uLocal_542 = unk_0x2B2CCF3F6B9ED3A3(227.4f, -66.5f, 67.5f, 249f, -30.8f, 72.5f, 0, 1, 1, 1);
				unk_0x500FFA49AC5ABB1D(Local_479, 30f, 0, 0, 0, 0);
				unk_0xBCDF9E3086B4229C(Local_479, 30f, 0, 0, 0, 0, 0);
				iLocal_93 = 0;
				iLocal_92 = 2;
			}
			break;
	}
}

void func_368(var uParam0, struct<3> Param1, float fParam4)
{
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		Global_100688 = *uParam0;
		Global_100693 = { Param1 };
		Global_100697 = fParam4;
	}
}

int func_369(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6678F4628618607C(Param0);
	unk_0x0D792BA553E57B27(uVar0, 7);
	unk_0xF563C3AC64885E69(iVar0, 0.7f);
	unk_0x4F095059F1C175D5(iVar0, 3);
	unk_0xD947D2F43FD7F6D7(iVar0, iParam3);
	unk_0x2EDAF851B28036F0(iVar0, "MET1LBTRAC");
	return iVar0;
}

void func_370()
{
	if (unk_0x4A980428C9937F4E(0))
	{
		func_182(0);
		func_371(0f, 0f, 0f, 0f, 1, 0);
		if (func_39(0))
		{
			func_60(500, 1);
		}
		iLocal_92 = 1;
		iLocal_93 = 0;
	}
}

void func_371(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x7887B64A08364778(Global_93588.f_4))
	{
		if (unk_0xA4DB44DF73EF4FE5(Global_93588.f_4, 0))
		{
			if (func_401(24) != Global_93588.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_398(unk_0xC086F8D75730FA3A(Global_93588.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_372(Global_93588.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_372(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x7887B64A08364778(Global_68526.f_484[25]) && unk_0xA4DB44DF73EF4FE5(Global_68526.f_484[25], 0))
			{
				if (Global_68526.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x2116DC64F00A4D05(iParam0) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("bus")) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_397(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_211(iParam0, &Var0);
		if (func_233(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
			uParam4 = unk_0x714F015B4D2DE1DC(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) != joaat("vehicle_gen_controller"))
			{
				Global_69514 = unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F());
			}
		}
		func_391(iParam5, &Var0, Param1, uParam4, func_207(iParam0));
		func_373(iParam5, iParam0, 0);
	}
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_390(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 12) && !unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68526.f_555[0 /*21*/].f_4 != unk_0xA0A4DA31DEDFAC4F(iParam1))
		{
			return;
		}
	}
	if (Global_69433 != -1 && Global_69433 != iParam0)
	{
		return;
	}
	if (unk_0x7887B64A08364778(iParam1))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam1, 0))
		{
			if (!unk_0x2A29BF08180E7ADF(iParam1))
			{
				unk_0xC53606C390BE2727(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101652.f_31373.f_4801 = func_246();
			}
			if (iParam1 != Global_68526.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_401(iParam0);
					if ((unk_0x7887B64A08364778(iVar0) && unk_0xA4DB44DF73EF4FE5(iVar0, 0)) && iParam1 != iVar0)
					{
						func_374(iVar0, 145);
					}
				}
				Global_69432 = iParam1;
				Global_69433 = iParam0;
				Global_69434 = iParam2;
			}
		}
	}
}

void func_374(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_375(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x98BE504E8B389665(iParam0, -1, 0);
		if (!unk_0x7887B64A08364778(iVar0))
		{
			iVar0 = unk_0x517A852AA8FDFD63(iParam0, -1);
		}
		if (unk_0x7887B64A08364778(iVar0) && !unk_0x00B5B0B68211D89B(iVar0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101652.f_2079.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA0A4DA31DEDFAC4F(iParam0) == Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xC55B9553B3EDADE9(&(Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xCC257DA11A122B5F(unk_0x2CC6A8460C4261C6(iParam0), &(Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101652.f_31373.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xA0A4DA31DEDFAC4F(iParam0) == Global_101652.f_31373.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xC55B9553B3EDADE9(&(Global_101652.f_31373.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xCC257DA11A122B5F(unk_0x2CC6A8460C4261C6(iParam0), &(Global_101652.f_31373.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101652.f_31373.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101652.f_31373.f_5590 = iParam1;
	Global_69431 = iParam0;
	Global_101652.f_31373.f_5588 = 1;
	func_211(iParam0, &(Global_101652.f_31373.f_5510));
}

int func_375(int iParam0)
{
	if ((((((((((!unk_0x7887B64A08364778(iParam0) || !unk_0xA4DB44DF73EF4FE5(iParam0, 0)) || func_216(iParam0, 0, 0)) || func_216(iParam0, 1, 0)) || func_216(iParam0, 2, 0)) || func_207(iParam0) != 145) || func_389(iParam0)) || func_388(iParam0)) || func_387(iParam0)) || func_386(iParam0)) || !func_376(unk_0xA0A4DA31DEDFAC4F(iParam0)))
	{
		if (func_388(iParam0))
		{
		}
		if (func_388(iParam0))
		{
		}
		if (func_216(iParam0, 0, 0))
		{
		}
		if (func_216(iParam0, 1, 0))
		{
		}
		if (func_216(iParam0, 2, 0))
		{
		}
		if (func_207(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_376(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_377(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xDA82A890460AACEE(iParam0) || unk_0x825416FB822BF706(iParam0)) || unk_0x4B09D3321F53E524(iParam0)) || unk_0x8F8A0D55EBDCBE44(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_377(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5B8C6C17DBDB0252(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("buffalo3") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("gauntlet2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_385())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x8858A4ECC3790CBC())
		{
			if (unk_0xAC7E4897AB3A644C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x68410A55F20AE7A5(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_384() && !func_383()) && !func_382()) && !func_381()) && !func_385())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF1A016B51831B87B() || unk_0x2D337DD29A7ABD30()) || unk_0x603D621ED5E06CB0())
		{
		}
		else if (!func_382())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_380(iParam0))
		{
			return 0;
		}
	}
	if (!func_378(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_378(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_379())
	{
		return 1;
	}
	unk_0x157A3D4FE52A3BBF(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x0E4E21380596D57E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_379()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482045)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x632066A9E8CB2C4D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5431 && !Global_262145.f_11409) && iVar1 < Global_262145.f_11410)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12221 && iVar1 < Global_262145.f_12233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12217 && iVar1 < Global_262145.f_12229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12218 && iVar1 < Global_262145.f_12230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12219 && iVar1 < Global_262145.f_12231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12220 && iVar1 < Global_262145.f_12232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12222 && iVar1 < Global_262145.f_12234)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12223 && iVar1 < Global_262145.f_12226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12224 && iVar1 < Global_262145.f_12227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12225 && iVar1 < Global_262145.f_12228)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14848 && iVar1 < Global_262145.f_14813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14843 && iVar1 < Global_262145.f_14808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14847 && iVar1 < Global_262145.f_14812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14846 && iVar1 < Global_262145.f_14811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14840 && iVar1 < Global_262145.f_14805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14841 && iVar1 < Global_262145.f_14806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14844 && iVar1 < Global_262145.f_14809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14845 && iVar1 < Global_262145.f_14810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14842 && iVar1 < Global_262145.f_14807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14850 && iVar1 < Global_262145.f_14815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14851 && iVar1 < Global_262145.f_14816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14839 && iVar1 < Global_262145.f_14804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14838 && iVar1 < Global_262145.f_14803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14837 && iVar1 < Global_262145.f_14802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14849 && iVar1 < Global_262145.f_14814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14852 && iVar1 < Global_262145.f_14817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14853 && iVar1 < Global_262145.f_14818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14854 && iVar1 < Global_262145.f_14819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14855 && iVar1 < Global_262145.f_14820)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15000 && iVar1 < Global_262145.f_15022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15001 && iVar1 < Global_262145.f_15023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15002 && iVar1 < Global_262145.f_15024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15003 && iVar1 < Global_262145.f_15025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15004 && iVar1 < Global_262145.f_15026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15005 && iVar1 < Global_262145.f_15027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15007 && iVar1 < Global_262145.f_15028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15008 && iVar1 < Global_262145.f_15029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15009 && iVar1 < Global_262145.f_15030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15010 && iVar1 < Global_262145.f_15031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15011 && iVar1 < Global_262145.f_15032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15012 && iVar1 < Global_262145.f_15033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15013 && iVar1 < Global_262145.f_15034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15019 && iVar1 < Global_262145.f_15041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15016 && iVar1 < Global_262145.f_15037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15017 && iVar1 < Global_262145.f_15038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15018 && iVar1 < Global_262145.f_15039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15006 && iVar1 < Global_262145.f_15040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15020 && iVar1 < Global_262145.f_15042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15014 && iVar1 < Global_262145.f_15035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15015 && iVar1 < Global_262145.f_15036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15021 && iVar1 < Global_262145.f_15043)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16649 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16650 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16651 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16652 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16653 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16654 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16655 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16656 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16657 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16658 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16659 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16660 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16661 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16662 && iVar1 < Global_262145.f_16703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16663 && iVar1 < Global_262145.f_16704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16664 && iVar1 < Global_262145.f_16705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16665 && iVar1 < Global_262145.f_16706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16666 && iVar1 < Global_262145.f_16707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16667 && iVar1 < Global_262145.f_16708)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16668 && iVar1 < Global_262145.f_16709)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16669 && iVar1 < Global_262145.f_16710)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16670 && iVar1 < Global_262145.f_16711)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16671 && iVar1 < Global_262145.f_16712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16672 && iVar1 < Global_262145.f_16713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16673 && iVar1 < Global_262145.f_16714)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_381()
{
	return 0;
}

int func_382()
{
	return 1;
}

int func_383()
{
	return 1;
}

int func_384()
{
	if (unk_0xF14C5BAFFF8F4CB7(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_385()
{
	var uVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		if (unk_0xA65719DC666C97C3())
		{
			if (unk_0x65D57B279D4CB27E())
			{
				unk_0x5BC7B5709E38CBE0(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xB8A73E7DA87B2968(&uVar0, 2);
				unk_0xB8A73E7DA87B2968(&uVar0, 4);
				unk_0xB8A73E7DA87B2968(&uVar0, 6);
				unk_0xB8A73E7DA87B2968(&Global_25, 2);
				unk_0xB8A73E7DA87B2968(&Global_25, 4);
				unk_0xB8A73E7DA87B2968(&Global_25, 6);
				unk_0xB924315F0872835A(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xE0A03D8892BEF6BB())
				{
					uVar0 = unk_0x2428688746A375BE(866);
					unk_0xB8A73E7DA87B2968(&uVar0, 0);
					unk_0xC0F82A66B119B68A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139115 == 2)
	{
		return 1;
	}
	else if (Global_139115 == 3)
	{
		return 0;
	}
	if (unk_0xE0A03D8892BEF6BB())
	{
		if (unk_0xF44A5E894FE76438(unk_0x2428688746A375BE(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	uVar1 = unk_0x2CC6A8460C4261C6(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCC257DA11A122B5F(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_377(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7887B64A08364778(Global_89180[iVar0]))
		{
			if (Global_89180[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_388(int iParam0)
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7887B64A08364778(Global_89150[iVar0]) && unk_0xA4DB44DF73EF4FE5(Global_89150[iVar0], 0))
			{
				if (Global_89150[iVar0] == iParam0 && unk_0xA0A4DA31DEDFAC4F(Global_89150[iVar0]) == unk_0xA0A4DA31DEDFAC4F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(Global_68526.f_484[24]))
	{
		if (iParam0 == Global_68526.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7887B64A08364778(Global_68526.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68526.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_390(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_209(0, 1);
			uParam0->f_12 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_209(0, 1);
			uParam0->f_12 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_209(1, 1);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_209(1, 2);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 19);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_209(1, 1);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_209(1, 2);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 19);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_209(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_209(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_209(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 11);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 11);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 9);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 9);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_385())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_385())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xF44A5E894FE76438(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101652.f_31373.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_233(Global_101652.f_31373.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_31373.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101652.f_31373.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101652.f_31373.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xF44A5E894FE76438(uParam0->f_9, 19))
	{
		if (!func_233(Global_101652.f_2079.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_2079.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101652.f_2079.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xF44A5E894FE76438(uParam0->f_9, 20))
	{
		if (!func_233(Global_101652.f_2079.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_2079.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101652.f_2079.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_391(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_390(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 10))
		{
			func_396(iParam0);
			func_395(uParam1, &(Global_101652.f_31373.f_69[Global_68526.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 11))
			{
				Global_101652.f_31373.f_1864[Global_68526.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101652.f_31373.f_1934[Global_68526.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_101652.f_31373.f_1864[Global_68526.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101652.f_31373.f_1934[Global_68526.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101652.f_31373.f_1958[Global_68526.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_392(iParam0, 1);
		}
	}
}

void func_392(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_394(iParam0, 0))
		{
			func_393(iParam0, 1, 0);
			func_393(iParam0, 2, 0);
			func_393(iParam0, 3, 0);
			func_393(iParam0, 4, 0);
			func_393(iParam0, 0, 1);
			Global_68526[iParam0] = 1;
		}
	}
	else
	{
		func_393(iParam0, 0, 0);
	}
}

void func_393(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_31373[iParam0]), iParam1);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_31373[iParam0]), iParam1);
	}
}

bool func_394(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_101652.f_31373[iParam0], iParam1);
}

void func_395(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_396(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_390(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7887B64A08364778(Global_68526.f_139[iParam0]))
		{
			unk_0xC53606C390BE2727(Global_68526.f_139[iParam0], 1, 1);
			unk_0xB24D3BF5DABD13AA(&(Global_68526.f_139[iParam0]));
			Global_68526.f_139[iParam0] = 0;
		}
		if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 13))
		{
			func_392(iParam0, 0);
		}
	}
}

void func_397(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_396(iParam0);
	func_392(iParam0, 0);
}

int func_398(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_399(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_399(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_86857[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86857[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_400(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(Param0, Global_86857[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_400(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_101652.f_6172[iParam0], 0);
}

int func_401(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68526.f_139[iParam0];
}

void func_402()
{
	if (!iLocal_338)
	{
		return;
	}
	if (iLocal_339)
	{
		return;
	}
	if (bLocal_337 && (unk_0x84A97C70FFDEC0C8() - iLocal_340) > 8000)
	{
		unk_0x24A6C3D7D286F02F((2.5f + 8f), 1073741824, 3);
		iLocal_339 = 1;
	}
	if (!bLocal_337 && (unk_0x84A97C70FFDEC0C8() - iLocal_340) > 2000)
	{
		unk_0x24A6C3D7D286F02F((2.5f + 2f), 1073741824, 3);
		iLocal_339 = 1;
	}
}

void func_403()
{
}

int func_404()
{
	if (!func_26(unk_0xD5A676B97920D126()))
	{
		func_407("DEFAULT");
		return 1;
	}
	else if (iLocal_293)
	{
		if (!func_26(iLocal_289))
		{
			func_407("MET1TRAKILL");
			return 1;
		}
		else if (func_406())
		{
			func_407("MET1TWRECK");
			return 1;
		}
		else if (func_405())
		{
			func_407("MET1STUCK");
			return 1;
		}
		else
		{
			unk_0x4C3AE97631B9B672(iLocal_289, 0);
		}
	}
	return 0;
}

int func_405()
{
	if (unk_0xF7FB02DF50202630(iLocal_273))
	{
		if (iLocal_275)
		{
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_276) > 7000)
			{
				return 1;
			}
		}
		else
		{
			iLocal_275 = 1;
			iLocal_276 = unk_0x84A97C70FFDEC0C8();
		}
	}
	else
	{
		if (iLocal_275)
		{
		}
		iLocal_275 = 0;
	}
	return 0;
}

int func_406()
{
	if (!func_26(iLocal_273))
	{
		return 1;
	}
	if (!unk_0xA4DB44DF73EF4FE5(iLocal_273, 0))
	{
		return 1;
	}
	return 0;
}

void func_407(char* sParam0)
{
	sLocal_573 = sParam0;
	iLocal_92 = 11;
	iLocal_93 = 0;
}

void func_408()
{
	switch (iLocal_93)
	{
		case 0:
			func_27(&uLocal_297);
			if (unk_0xC55B9553B3EDADE9(sLocal_573))
			{
				sLocal_573 = "DEFAULT";
			}
			if (unk_0xCC257DA11A122B5F(sLocal_573, "DEFAULT"))
			{
				func_412(0);
			}
			else
			{
				func_410(sLocal_573);
			}
			iLocal_93 = 1;
			break;
		
		case 1:
			if (func_409())
			{
				func_497(1, 0);
			}
			else
			{
				func_54();
			}
			break;
	}
}

int func_409()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91486 == 7 || Global_91486 == 8)
	{
		return 1;
	}
	return 0;
}

void func_410(char* sParam0)
{
	func_411(sParam0);
	func_412(0);
}

void func_411(char* sParam0)
{
	if (!unk_0xC55B9553B3EDADE9(sParam0))
	{
		if (unk_0xA65764871521D4D8(sParam0) <= 16)
		{
			StringCopy(&Global_69929, sParam0, 16);
			StringCopy(&Global_69933, "", 16);
			if (unk_0x48FF43A84774B0F5())
			{
				unk_0x3B2F2432D225195E();
			}
		}
	}
}

void func_412(int iParam0)
{
	int iVar0;
	
	if (Global_101652.f_8028 || func_39(0))
	{
		iVar0 = func_37();
		if (!func_413(iVar0))
		{
			return;
		}
		unk_0xB8A73E7DA87B2968(&(Global_82571[iVar0 /*5*/].f_1), 5);
		Global_91522 = iParam0;
	}
}

int func_413(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_418();
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		unk_0xAF433BF9CD4B48B6(5000);
	}
	iVar0 = Global_82571[iParam0 /*5*/];
	iVar1 = Global_69966.f_109[iVar0 /*4*/];
	func_417(iVar1, 1);
	unk_0x991BBF1AA54F8B25(unk_0xFB6B3EEFAB2DD12C());
	unk_0x8F9B28E7FCF099E4(unk_0xFB6B3EEFAB2DD12C());
	func_414(&(Global_101652.f_2079.f_539), iVar1);
	if (Global_85994 == Global_91523)
	{
		Global_101652.f_8028.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xF44A5E894FE76438(Global_82607[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xE044321D40979D1A(0);
		}
	}
	Global_101652.f_8028.f_330[iVar1 /*6*/].f_2++;
	Global_85994 = Global_91523;
	if (iParam0 == -1)
	{
		if (Global_101652.f_8028)
		{
		}
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_82571[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_82571[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_414(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101652.f_17476[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_416(Global_101652.f_17476[iVar0], &Var2, &fVar5))
			{
				Global_101652.f_17476[iVar0] = 318;
				func_415(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_89209[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_9 = 0f;
				Global_89209[iVar0 /*29*/].f_12 = 0f;
				Global_89209[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_10 = 0f;
				Global_89209[iVar0 /*29*/].f_13 = 0f;
				Global_89209[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_11 = 0f;
				Global_89209[iVar0 /*29*/].f_14 = 0f;
				Global_89209[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_26 = 0f;
				Global_89209[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_27 = 0f;
				Global_89209[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_415(var uParam0)
{
	*uParam0 = -15;
}

int func_416(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_416(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_416(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_417(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85804[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85804[iParam0 /*2*/] = 0;
	}
}

void func_418()
{
	Global_91521 = 1;
	if (unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		if (unk_0xC55B9553B3EDADE9(&Global_69929))
		{
			switch (func_10())
			{
				case 0:
					StringCopy(&Global_69929, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69929, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69929, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69933, "", 16);
		}
		Global_91521 = 0;
	}
	else if (!unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xC55B9553B3EDADE9(&Global_69929))
		{
			switch (func_10())
			{
				case 0:
					StringCopy(&Global_69929, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69929, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69929, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69933, "", 16);
		}
		Global_91521 = 0;
		unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 25);
	}
}

void func_419(bool bParam0, bool bParam1)
{
	struct<3> Var0[2];
	float fVar7;
	
	func_27(&uLocal_297);
	func_436();
	if (!bParam1)
	{
		unk_0x49E996A1E39EAAD7(sLocal_296);
	}
	if (bParam0)
	{
		Var0[0 /*3*/] = { func_435() };
		if (unk_0x4922BC1C77B0AAFC(Var0[0 /*3*/], &(Var0[1 /*3*/]), &fVar7, 1, 1077936128, 0))
		{
		}
		else
		{
			func_434(Var0[0 /*3*/], &(Var0[1 /*3*/]), &fVar7);
		}
		Local_618 = { Var0[1 /*3*/] };
		fLocal_621 = fVar7;
		unk_0xBCDF9E3086B4229C(Local_618, 10f, 0, 0, 0, 0, 0);
		func_433(Local_618, fLocal_621, 1, 0);
		func_431(Local_618, fLocal_621, 1);
		if (bParam1)
		{
			bLocal_336 = false;
		}
		else
		{
			bLocal_336 = true;
		}
	}
	else if ((((iLocal_92 == 3 || iLocal_92 == 4) || iLocal_92 == 5) && func_26(iLocal_273)) && func_26(iLocal_289))
	{
		if (func_26(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0))
			{
				func_430(unk_0xD5A676B97920D126(), iLocal_273, -1);
				Local_618 = { unk_0xC086F8D75730FA3A(iLocal_273, 1) };
			}
		}
	}
	else
	{
		Local_618 = { -52.8746f, -110.5227f, 56.9431f };
		unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Local_618, 1, 0, 0, 1);
		func_431(Local_618, 71.4f, 1);
		func_430(unk_0xD5A676B97920D126(), iLocal_273, -1);
	}
	func_198(4, "Drive home (CP3)", 0, 0, 0, 1);
	func_182(6);
	iLocal_92 = 7;
	iLocal_93 = 0;
	func_429(0);
	func_429(1);
	func_428(3, 0);
	func_429(4);
	func_428(7, 0);
	func_428(8, 0);
	func_428(5, 0);
	func_428(6, 0);
	if (bParam0)
	{
		while (!unk_0x4A980428C9937F4E(0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (!bParam1)
		{
			while (!unk_0xD7669BF035CDA5F6(sLocal_296))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		func_425(iLocal_273, -1, 0);
	}
	else
	{
		func_420(Local_618, 1112014848, 12, 5000, 0, 0);
	}
}

void func_420(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xC8CFC6E14D9BA068(Param0, iParam3, iParam4, 127);
	if (unk_0x54E901179EE643BE(uVar0))
	{
		iVar1 = (unk_0x84A97C70FFDEC0C8() + iParam5);
		while (!unk_0x22C1A315D07D9606(uVar0) && unk_0x84A97C70FFDEC0C8() < iVar1)
		{
			if (bParam7)
			{
				func_422();
			}
			if (bParam6)
			{
				func_421();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x84A97C70FFDEC0C8() < iVar1)
		{
		}
		unk_0x7DE9A6B403CB786D(uVar0);
	}
}

void func_421()
{
	Global_17151.f_6 = 1;
}

void func_422()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_305(0))
		{
			func_423(0);
		}
		unk_0xB8A73E7DA87B2968(&Global_2314, 2);
	}
}

void func_423(int iParam0)
{
	if (Global_14604)
	{
		func_424(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_7())
	{
		Global_14443.f_1 = 3;
	}
}

void func_424(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_305(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

void func_425(int iParam0, int iParam1, int iParam2)
{
	if (func_483() && func_427())
	{
		while (Global_91481 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xFD1B7FD28DB51A48(0);
		if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				unk_0xC521961CC9DBD0D1(unk_0xD5A676B97920D126());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (unk_0x7887B64A08364778(iParam0))
				{
					if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
					{
						if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iParam0, 0))
						{
							unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), iParam0, iParam1);
							unk_0xCA3B54980FA9D86F(0f, 1065353216);
							unk_0xB6AE7C18ADC0F901(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), true, 0);
			}
		}
		unk_0x1244B062D0C812FD();
		func_426(0);
	}
}

void func_426(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 13);
	}
}

bool func_427()
{
	return unk_0xF44A5E894FE76438(Global_91486.f_20, 13);
}

void func_428(int iParam0, int iParam1)
{
	Local_341[iParam0 /*3*/].f_1 = iParam1;
}

void func_429(int iParam0)
{
	if (Local_341[iParam0 /*3*/] == -1)
	{
	}
	else
	{
		Local_341[iParam0 /*3*/].f_1 = Local_341[iParam0 /*3*/];
	}
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	if (func_41(iParam0))
	{
		if (func_26(iParam1))
		{
			if (unk_0x4FAD9D28DF12811B(iParam0))
			{
				unk_0xBBAF4B768DDB7572(unk_0x409FD81493657096(iParam0), 0);
			}
			else
			{
				unk_0xBBAF4B768DDB7572(iParam0, 0);
			}
			unk_0x5467EF651716201E(iParam0, iParam1, iParam2);
		}
	}
}

void func_431(struct<3> Param0, float fParam3, bool bParam4)
{
	func_432();
	while (!func_357(&iLocal_273, 15, Param0, fParam3, 1, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (bParam4)
	{
		while (!func_366(&iLocal_289, Param0.f_0, Param0.f_1, (Param0.f_2 + 5f), 0, 1))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (func_26(iLocal_289) && func_26(iLocal_273))
		{
			unk_0x5467EF651716201E(iLocal_289, iLocal_273, 0);
		}
	}
	else
	{
		while (!func_366(&iLocal_289, Param0.f_0, Param0.f_1, (Param0.f_2 + 5f), 0, 1))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (func_26(iLocal_289) && func_26(iLocal_273))
		{
			unk_0x5467EF651716201E(iLocal_289, iLocal_273, 0);
		}
	}
	if (func_26(iLocal_289))
	{
		unk_0x5457695C257D1470(iLocal_289, 1);
		func_21(&uLocal_96, 3, iLocal_289, "TRACEY", 0, 1);
		unk_0x237B0CFB6EEBD3BA(iLocal_289, 32, 0);
		unk_0x237B0CFB6EEBD3BA(iLocal_289, 26, 1);
		unk_0x6D20A3AA82585D8C(iLocal_273, 1);
		func_356();
	}
	if (func_26(iLocal_273))
	{
		unk_0x19E33E4939B83297(iLocal_273, 1);
		unk_0xD7F5C6888DC98485(iLocal_273, 1);
		unk_0x09AB636BA0F9BE90(iLocal_273, 1, 1, 0);
		unk_0xBC82BAA0C1572324(iLocal_273);
		unk_0x70057AC4F7A58052(iLocal_273, 1);
		func_337(iLocal_273, 1);
		iLocal_274 = 1;
	}
	iLocal_293 = 1;
}

void func_432()
{
	iLocal_293 = 0;
	if (func_26(iLocal_289))
	{
		if (unk_0xE9FC689BC2AB1F82(iLocal_289))
		{
			unk_0x195690A8FA7145B8(iLocal_289);
		}
	}
	func_33(&iLocal_289);
	if (iLocal_274)
	{
		unk_0xE49CEAAA37CEC2B3(iLocal_273);
		iLocal_274 = 0;
	}
	func_31(&iLocal_273);
}

void func_433(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_483())
	{
		unk_0x7E85CEE862B85A74(0);
		unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 2);
		unk_0xFD1B7FD28DB51A48(1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), false, 0);
		}
		Global_91482 = { Param0 };
		Global_91485 = fParam3;
		Global_91481 = 1;
		if (iParam4 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 14);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 24);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 24);
		}
		func_426(1);
	}
}

void func_434(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0[4];
	float fVar13[4];
	int iVar18;
	
	Var0[0 /*3*/] = { -170.324f, -52.57f, 51.683f };
	fVar13[0] = 159.9f;
	Var0[1 /*3*/] = { 1196.14f, -1069.13f, 40.3586f };
	fVar13[1] = 107.2f;
	Var0[2 /*3*/] = { -1513.565f, -676.1716f, 27.4587f };
	fVar13[2] = 53.2f;
	Var0[3 /*3*/] = { 55.9539f, 342.8233f, 111.6553f };
	fVar13[3] = 242.4f;
	iVar18 = 0;
	iLocal_572 = 1;
	while (iLocal_572 < 4)
	{
		if (unk_0xB7A628320EFF8E47(Var0[iLocal_572 /*3*/], Param0) < unk_0xB7A628320EFF8E47(Var0[iVar18 /*3*/], Param0))
		{
			iVar18 = iLocal_572;
		}
		iLocal_572++;
	}
	*uParam3 = { Var0[iVar18 /*3*/] };
	*uParam4 = fVar13[iVar18];
}

Vector3 func_435()
{
	return Global_95993.f_2305;
}

void func_436()
{
	func_33(&iLocal_290);
	if (unk_0x7887B64A08364778(Local_277.f_0))
	{
		if (iLocal_317)
		{
			unk_0xE49CEAAA37CEC2B3(Local_277.f_0);
			iLocal_317 = 0;
		}
		unk_0xC1CDF4F2825C3F22(Local_277.f_0, 0);
		func_31(&Local_277);
	}
}

void func_437(bool bParam0)
{
	func_27(&uLocal_297);
	func_436();
	if (bParam0)
	{
		func_433(Local_487[3 /*8*/], 71.4f, 1, 0);
		func_431(Local_487[3 /*8*/], 71.4f, 1);
	}
	else
	{
		if (func_26(unk_0xD5A676B97920D126()))
		{
			unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Local_487[3 /*8*/], Local_487[3 /*8*/].f_1, (Local_487[3 /*8*/].f_2 + 8f), 1, 0, 0, 1);
			func_431(Local_487[3 /*8*/], 71.4f, 1);
			func_430(unk_0xD5A676B97920D126(), iLocal_273, -1);
		}
		if (func_26(iLocal_273))
		{
			unk_0xBCDF9E3086B4229C(unk_0x7E140C583F91AE2B(iLocal_273, 0f, -8f, 0f), 6f, 0, 0, 0, 0, 0);
		}
	}
	Local_277.f_6 = { Local_546[1 /*3*/] };
	Local_277.f_9 = fLocal_565[1];
	unk_0xBCDF9E3086B4229C(Local_277.f_6, 5f, 0, 0, 0, 0, 0);
	func_429(0);
	func_429(1);
	func_428(3, 0);
	func_428(4, 0);
	func_428(7, 0);
	func_428(8, 0);
	func_428(5, 0);
	func_428(6, 0);
	func_182(3);
	iLocal_92 = 4;
	iLocal_93 = 0;
	if (bParam0)
	{
		while (!unk_0x4A980428C9937F4E(0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_425(iLocal_273, -1, 0);
	}
	else
	{
		func_420(Local_487[3 /*8*/], 1112014848, 12, 5000, 0, 0);
		func_198(3, "Stalker appears (CP2)", 0, 0, 0, 1);
	}
}

void func_438(bool bParam0)
{
	func_27(&uLocal_297);
	bLocal_622 = false;
	if (func_26(unk_0xD5A676B97920D126()))
	{
		if (bParam0)
		{
			if (func_461())
			{
				Local_618 = { 99.6208f, -21.0027f, 67.0114f };
				fLocal_621 = 251.1f;
				bLocal_622 = true;
				unk_0xBCDF9E3086B4229C(99.6208f, -21.0027f, 67.0114f, 7f, 0, 0, 0, 0, 0);
				func_459();
				while (!func_458())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_623 = func_440(Local_618, fLocal_621);
			}
			else
			{
				unk_0x500FFA49AC5ABB1D(181.2331f, -33.9939f, 67.2522f, 3f, 1, 0, 0, 0);
				Local_618 = { 181.2331f, -33.9939f, 67.2522f };
				fLocal_621 = 255.3f;
			}
			func_433(Local_618, fLocal_621, 1, 0);
		}
		else if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			if ((func_26(iLocal_273) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_273, 0)) || (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && !unk_0xA4DB44DF73EF4FE5(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0)))
			{
				unk_0x500FFA49AC5ABB1D(181.2331f, -33.9939f, 67.2522f, 3f, 1, 0, 0, 0);
				unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), 181.2331f, -33.9939f, 67.2522f, 1, 0, 0, 1);
				unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), 255.3f);
				Local_618 = { 181.2331f, -33.9939f, 67.2522f };
			}
			else
			{
				unk_0xBCDF9E3086B4229C(99.6208f, -21.0027f, 67.0114f, 7f, 0, 0, 0, 0, 0);
				iLocal_623 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
				unk_0xBB9A2DB94A862D7A(iLocal_623, 99.6208f, -21.0027f, 67.0114f, 1, 0, 0, 1);
				unk_0x99569FEC2425586D(iLocal_623, 251.1f);
				unk_0x2D739561304957CC(iLocal_623, 1084227584);
				Local_618 = { 99.6208f, -21.0027f, 67.0114f };
				bLocal_622 = true;
			}
		}
		else
		{
			unk_0x500FFA49AC5ABB1D(181.2331f, -33.9939f, 67.2522f, 3f, 1, 0, 0, 0);
			unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), 181.2331f, -33.9939f, 67.2522f, 1, 0, 0, 1);
			unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), 255.3f);
			Local_618 = { 181.2331f, -33.9939f, 67.2522f };
		}
	}
	func_436();
	func_432();
	iLocal_94 = 0;
	func_439();
	iLocal_95 = 1;
	iLocal_92 = 1;
	iLocal_93 = 0;
	if ((func_26(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) || bLocal_622)
	{
		func_182(1);
	}
	else
	{
		func_182(0);
	}
	func_429(0);
	func_428(1, 0);
	func_428(3, 0);
	func_428(4, 0);
	func_428(7, 0);
	func_428(8, 0);
	func_428(5, 0);
	func_428(6, 0);
	if (bParam0)
	{
		while (!unk_0x4A980428C9937F4E(0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (bLocal_622)
		{
			func_425(iLocal_623, -1, 1);
		}
		else
		{
			func_425(0, -1, 1);
		}
	}
	else
	{
		func_420(Local_618, 1112014848, 12, 5000, 0, 0);
	}
	if (bLocal_622)
	{
		if (func_26(iLocal_623))
		{
			unk_0x09AB636BA0F9BE90(iLocal_623, 1, 1, 0);
			unk_0x9773EF10686D53C8(iLocal_623, 10f);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_439()
{
	iLocal_301 = unk_0x3D13C79BF80EB767();
	iLocal_302 = unk_0x83D6515EE2CBF18C();
	iLocal_303 = unk_0xF72CA3D5BA977203();
}

int func_440(struct<3> Param0, float fParam3)
{
	return func_441(&(Global_95993.f_2311), Param0, fParam3, 0);
}

int func_441(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_457(uParam0))
	{
		if (func_233(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x1FA2886237245376(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_456(uParam0))
		{
			unk_0x500FFA49AC5ABB1D(Param1, 5f, 1, 0, 0, 0);
			func_455(Param1, 5f, 0);
			iVar0 = unk_0xDE8A46A23FDCBBFE(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x7887B64A08364778(iVar0))
			{
				Var1 = { unk_0xC086F8D75730FA3A(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x5477ED2CB1DDA160(iVar0, Param1, 0, 0, 1);
				}
				func_451(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xDA82A890460AACEE(uParam0->f_12.f_66) || unk_0x3639509E03CDF255(uParam0->f_12.f_66))
				{
					if (!unk_0x3B486413FC922BCC(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x2D739561304957CC(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x1F4C5E9E5F24C698(unk_0xA0A4DA31DEDFAC4F(iVar0)))
						{
							func_450(uParam0->f_11, 1);
						}
						else if (unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(iVar0)))
						{
							func_450(uParam0->f_11, 2);
						}
					}
					unk_0x09D754A98E6A98B1(iVar0, 0);
					unk_0x74CEDCAB129EF1AC(iVar0, 0);
					unk_0x70057AC4F7A58052(iVar0, 1);
					func_449(iVar0, uParam0->f_11);
				}
				else if ((!func_446(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xCC257DA11A122B5F(unk_0x0FBCE11007AF301F(), "startup_positioning"))
				{
					iVar8 = func_445(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_442(iVar8);
					}
				}
				if (((Global_91486 != 13 && Global_91486 != 10) && Global_91486 != 11) && Global_91486 != 12)
				{
					if (unk_0x6D9FF4C899CD785F(&(Global_91486.f_3)) == Global_69514)
					{
						if (uParam0->f_12.f_66 == Global_101652.f_31373.f_69[21 /*78*/].f_66)
						{
							func_392(24, 0);
							func_442(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_374(iVar0, uParam0->f_11);
				}
				unk_0x8188DB74546FF484(uParam0->f_12.f_66);
				Var1 = { unk_0xC086F8D75730FA3A(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_442(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_390(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7887B64A08364778(Global_68526.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (unk_0xA4DB44DF73EF4FE5(Global_68526.f_139[iParam0], 0))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), Global_68526.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xC53606C390BE2727(Global_68526.f_139[iParam0], 1, 1);
				unk_0xAA8D7DFFDAAB903E(&(Global_68526.f_139[iParam0]));
			}
		}
		Global_68526[iParam0] = 1;
		if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_394(iParam0, 0)) && Global_69435.f_66 == 0) && Global_101652.f_31373.f_1958[Global_68526.f_555[0 /*21*/].f_14] != 0) && Global_101652.f_31373.f_1958[Global_68526.f_555[0 /*21*/].f_14] > 3) && (!func_443(0, Global_68526.f_555[0 /*21*/].f_12) || !func_443(1, Global_68526.f_555[0 /*21*/].f_12)))
			{
				func_395(&(Global_101652.f_31373.f_69[Global_68526.f_555[0 /*21*/].f_14 /*78*/]), &Global_69435);
				Global_69513 = Global_101652.f_31373.f_5591;
			}
			func_392(iParam0, 0);
		}
	}
}

int func_443(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_444(&(Global_101652.f_31373.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_377(Global_101652.f_31373.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_444(var uParam0)
{
	return *uParam0;
}

int func_445(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x7887B64A08364778(Global_68526.f_484[iVar0]) && !unk_0xB529B2A4B7C64D6D(Global_68526.f_484[iVar0], 0)) && unk_0xA4DB44DF73EF4FE5(Global_68526.f_484[iVar0], 0))
		{
			unk_0xAB44311BC9F89232(uParam0, &iVar1, &iVar2);
			unk_0xAB44311BC9F89232(Global_68526.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0xA0A4DA31DEDFAC4F(iParam0) == unk_0xA0A4DA31DEDFAC4F(Global_68526.f_484[iVar0]) && unk_0x49CCC8B15830B17D(iParam0) == unk_0x49CCC8B15830B17D(Global_68526.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_446(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xA0A4DA31DEDFAC4F(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_448(iParam0, Global_68526.f_139[38], 0))
			{
				func_442(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_448(iParam0, Global_68526.f_139[43], 1))
			{
				func_442(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xC57CE29906C6EA45(unk_0xD5A676B97920D126(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_448(iParam0, uVar1[iVar6], 1) && func_447(unk_0xC086F8D75730FA3A(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_233(Param1, 0f, 0f, 0f, 0)) || unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iParam0, 1), unk_0xC086F8D75730FA3A(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xAA8D7DFFDAAB903E(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x7887B64A08364778(Global_68526.f_484[14]) && unk_0xA4DB44DF73EF4FE5(iParam0, 0)) && unk_0xA4DB44DF73EF4FE5(Global_68526.f_484[14], 0))
			{
				if (unk_0xA0A4DA31DEDFAC4F(Global_68526.f_484[14]) == joaat("luxor2") && unk_0x49CCC8B15830B17D(iParam0) == unk_0x49CCC8B15830B17D(Global_68526.f_484[14]))
				{
					func_442(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x7887B64A08364778(Global_68526.f_484[20]) && unk_0xA4DB44DF73EF4FE5(iParam0, 0)) && unk_0xA4DB44DF73EF4FE5(Global_68526.f_484[20], 0))
			{
				if (unk_0xA0A4DA31DEDFAC4F(Global_68526.f_484[20]) == joaat("swift2") && unk_0x49CCC8B15830B17D(iParam0) == unk_0x49CCC8B15830B17D(Global_68526.f_484[20]))
				{
					func_442(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_447(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_448(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x7887B64A08364778(uParam1) && !unk_0xB529B2A4B7C64D6D(iParam1, 0)) && unk_0xA4DB44DF73EF4FE5(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xAB44311BC9F89232(uParam0, &iVar0, &iVar1);
			unk_0xAB44311BC9F89232(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x7887B64A08364778(Global_89150[iVar0]))
		{
			Global_89150[iVar0] = uParam0;
			Global_89160[iVar0] = iParam1;
			Global_89170[iVar0] = unk_0xA0A4DA31DEDFAC4F(uParam0);
			if (unk_0x1F4C5E9E5F24C698(Global_89170[iVar0]))
			{
				Global_89198[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_89198[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_450(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7887B64A08364778(Global_89150[iVar0]))
		{
			if (iParam0 == 145 || Global_89160[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0xA0A4DA31DEDFAC4F(Global_89150[iVar0]) == func_209(iParam0, iParam1))
				{
					if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), Global_89150[iVar0], 0))
					{
						unk_0xC53606C390BE2727(Global_89150[iVar0], 0, 1);
						unk_0xAA8D7DFFDAAB903E(&(Global_89150[iVar0]));
						Global_89160[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_451(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xA4DB44DF73EF4FE5(uParam0, 0))
	{
		if (unk_0x6D9FF4C899CD785F(&(uParam1->f_1)) != 0)
		{
			unk_0x1364ED1BFBE98E4E(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xD4A0D498FF38017C())
		{
			unk_0xFBA8DB4F0E5F2215(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xF44A5E894FE76438(uParam1->f_77, func_212(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), func_212(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xF44A5E894FE76438(uParam1->f_77, func_212(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), func_212(iVar1 + 1));
			}
		}
		if (unk_0xF44A5E894FE76438(uParam1->f_77, 13))
		{
			unk_0x72A53E120C5E406E(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE14D87E6E8F2F3E9(iParam0);
		}
		if (unk_0xF44A5E894FE76438(uParam1->f_77, 12))
		{
			unk_0x83F93D0977EBD9EF(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE9643F29A18DF444(iParam0);
		}
		unk_0xC243EB5E21E9A4EE(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x44ADE3DECA6FE50F(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xF44A5E894FE76438(uParam1->f_77, 15) || func_454(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_453())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xF4537C80083CBF71(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0xC97D204BBF00FC6C(iParam0, 0);
		}
		else
		{
			unk_0xC97D204BBF00FC6C(iParam0, 0);
			unk_0xC97D204BBF00FC6C(iParam0, uParam1->f_65);
		}
		unk_0x5919F7382C7F12DB(iParam0, !unk_0xF44A5E894FE76438(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xAFC3B32426D08964(iParam0, uParam1->f_70);
		}
		unk_0xCF8D6A03AB9738AE(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x0E014B94FC32A955(iParam0, 2, unk_0xF44A5E894FE76438(uParam1->f_77, 28));
		unk_0x0E014B94FC32A955(iParam0, 3, unk_0xF44A5E894FE76438(uParam1->f_77, 29));
		unk_0x0E014B94FC32A955(iParam0, 0, unk_0xF44A5E894FE76438(uParam1->f_77, 30));
		unk_0x0E014B94FC32A955(iParam0, 1, unk_0xF44A5E894FE76438(uParam1->f_77, 31));
		unk_0xC5D75F3BE926D48A(iParam0, unk_0xF44A5E894FE76438(uParam1->f_77, 10));
		if (unk_0xF72C45DFDBF9121C(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x01DF175C46BF059E(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xA214826AC4BEA074(unk_0xA0A4DA31DEDFAC4F(iParam0)))
			{
				if (unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_452(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_452(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xEF9CF6170A8C90B7(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x0AAB849AA3F9460A(iParam0, 1);
			}
			else
			{
				unk_0x19E33E4939B83297(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_361(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x4B09D3321F53E524(uParam1->f_66) && !unk_0xDA82A890460AACEE(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xF44A5E894FE76438(uParam1->f_77, func_212(iVar2 + 1)))
				{
					if (!unk_0x90ECFFEFD5446B32(iParam0, iVar2 + 1))
					{
						unk_0xE1896E88D2301642(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x90ECFFEFD5446B32(iParam0, iVar2 + 1))
				{
					unk_0xE1896E88D2301642(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("sheava") || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("omnis")) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("le7b"))
		{
			if (unk_0xFFB080E19B6AD134(iParam0, 0) == -1)
			{
				unk_0xE1896E88D2301642(iParam0, 1, false);
			}
		}
		if (unk_0x825416FB822BF706(uParam1->f_66))
		{
			if (!unk_0xF44A5E894FE76438(uParam1->f_77, 23))
			{
				if (unk_0xF44A5E894FE76438(uParam1->f_77, 22))
				{
					unk_0x1EC1DAAF33307EFC(iParam0, 2);
				}
				else
				{
					unk_0x1EC1DAAF33307EFC(iParam0, 3);
				}
			}
			else
			{
				unk_0x1EC1DAAF33307EFC(iParam0, 4);
			}
		}
		if (unk_0xF44A5E894FE76438(uParam1->f_77, 27))
		{
			unk_0x91B68C4ADBDEB5CC(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x91B68C4ADBDEB5CC(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_452(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83608391BBAB09A9(uParam0) > 0)
	{
		unk_0x8A541F8CF0625EB6(iParam0, 0);
		iVar0 = unk_0xFFB080E19B6AD134(iParam0, 24);
		iVar1 = unk_0x54352EF465143135(iParam0, 24);
		unk_0xC6DCC91FF2EE9D39(iParam0, uParam1);
		if (unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x620E4FB5E67DCA6B(iParam0, 24);
		}
		else
		{
			unk_0x47EE94F716B70695(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_453()
{
	return unk_0xF14C5BAFFF8F4CB7(joaat("mpindependence"));
}

int func_454(int iParam0)
{
	var uVar0;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (unk_0xFACD5AD331C52454("MPBitset", 3))
			{
				if (unk_0xA438D75809973A56(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x483BD2141ADAC3CE(iParam0, "MPBitset");
				}
				return unk_0xF44A5E894FE76438(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_455(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_390(&(Global_68526.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x8E92CDAEB8357ABD(Param0, Global_68526.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_442(iVar0);
			}
		}
		iVar0++;
	}
}

int func_456(var uParam0)
{
	if (func_457(uParam0))
	{
		if (unk_0x7AD0E9452821C95D(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_457(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_377(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_447(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_458()
{
	return func_456(&(Global_95993.f_2311));
}

void func_459()
{
	func_460(&(Global_95993.f_2311));
}

void func_460(var uParam0)
{
	if (func_457(uParam0))
	{
		unk_0x4ACD1E4CBA159ED1(uParam0->f_12.f_66);
	}
}

bool func_461()
{
	return func_457(&(Global_95993.f_2311));
}

void func_462(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_463(0, 1, 1);
	}
	if (!unk_0x7E3640C27B17457C())
	{
		unk_0x0FBCFDA15A0FB2D5(0);
	}
	func_59(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_463(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0xDA34CBADDA34A0B3())
	{
		while (bVar0)
		{
			bVar0 = unk_0xDA34CBADDA34A0B3();
			if (unk_0x30A37E559346657F())
			{
				unk_0xC26F738F0264B61E(0);
			}
			if (unk_0x3EB0F73F509A48BA())
			{
				unk_0xB3D2665821762068();
			}
			if (unk_0xDA34CBADDA34A0B3() && !unk_0x30A37E559346657F())
			{
				bVar0 = false;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (bParam0)
		{
			func_40(iParam1, iParam2, 1, 1);
		}
	}
}

void func_464(int iParam0, int iParam1, int iParam2)
{
	func_40(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xCA3B54980FA9D86F(0f, 1065353216);
		unk_0xB6AE7C18ADC0F901(0f);
	}
	if (iParam1 == 1)
	{
		func_60(500, 0);
	}
}

void func_465(int iParam0)
{
	if (unk_0x7887B64A08364778(*iParam0))
	{
		unk_0xB529B2A4B7C64D6D(*iParam0, 0);
		if (unk_0x2A29BF08180E7ADF(*iParam0) && unk_0x67F42C4B7B64C593(*iParam0, 1))
		{
			unk_0xB24D3BF5DABD13AA(iParam0);
		}
	}
}

void func_466(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
	fVar3 = unk_0x714F015B4D2DE1DC(unk_0xD5A676B97920D126());
	if (func_481() && func_478(iParam1, iParam2, iParam3, 1))
	{
		Var0 = { 0f, 0f, 0f };
		fVar3 = 0f;
		func_467(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1);
	}
	else if (unk_0x4922BC1C77B0AAFC(Var0, &Var0, &fVar3, 1, 1077936128, 0))
	{
		func_467(iParam0, Var0, fVar3, 1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1);
	}
}

void func_467(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_483() || !func_461())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!func_478(iParam6, iParam7, iParam8, iParam13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		func_459();
		while (!func_458())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		*iParam0 = func_440(Param1, fParam4);
	}
	else if (iParam9 == 1)
	{
		if (func_233(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { Global_95993.f_2311 };
			fParam4 = Global_95993.f_2311.f_6;
		}
		unk_0x500FFA49AC5ABB1D(Param1, 5f, 1, 0, 0, 0);
		func_455(Param1, 5f, 0);
		if (func_12(iParam12))
		{
			func_450(iParam12, 0);
			while (!func_468(iParam0, iParam12, Param1, fParam4, 1, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x4ACD1E4CBA159ED1(iParam10);
			while (!unk_0x7AD0E9452821C95D(iParam10))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			*iParam0 = unk_0xDE8A46A23FDCBBFE(iParam10, Param1, fParam4, 1, 1);
			if (unk_0x7887B64A08364778(*iParam0) && !unk_0xB529B2A4B7C64D6D(*iParam0, 0))
			{
				if (iParam11 == 0)
				{
					unk_0xE7D6BFCADFE1076B(*iParam0, 0);
				}
				else if (iParam11 > 0)
				{
					unk_0xC243EB5E21E9A4EE(*iParam0, iParam11, iParam11);
				}
			}
			unk_0x8188DB74546FF484(iParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((unk_0x7887B64A08364778(*iParam0) && !unk_0xB529B2A4B7C64D6D(*iParam0, 0)) && unk_0x7887B64A08364778(unk_0xD5A676B97920D126())) && !unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), *iParam0, -1);
			unk_0x2D739561304957CC(*iParam0, 1084227584);
		}
	}
}

int func_468(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_12(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_210(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x7887B64A08364778(*iParam0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_101652.f_2079.f_539.f_3544) && Global_101652.f_8028.f_99.f_58[131])
		{
			Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x4ACD1E4CBA159ED1(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x7AD0E9452821C95D(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xDE8A46A23FDCBBFE(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0x2D739561304957CC(*iParam0, 1084227584);
				unk_0x09D754A98E6A98B1(*iParam0, 0);
				unk_0x74CEDCAB129EF1AC(*iParam0, 0);
				unk_0x70057AC4F7A58052(*iParam0, 1);
				unk_0xE81D470B804DC69A(*iParam0, 1250);
				unk_0x26F5F15AFEF0CC8A(*iParam0, 1250f);
				unk_0x525451C25B51E42B(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC243EB5E21E9A4EE(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x44ADE3DECA6FE50F(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xDC5873FE07F6821C(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xE1896E88D2301642(*iParam0, iVar103 + 1, !Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xB76FE759FE310125(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_359(&uVar1, &uVar0))
				{
					unk_0x1364ED1BFBE98E4E(*iParam0, &uVar1);
					unk_0xFBA8DB4F0E5F2215(*iParam0, uVar0);
				}
				else
				{
					unk_0x1364ED1BFBE98E4E(*iParam0, &(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xD4A0D498FF38017C())
					{
						unk_0xFBA8DB4F0E5F2215(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xF4537C80083CBF71(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x5919F7382C7F12DB(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0xC97D204BBF00FC6C(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0xCF8D6A03AB9738AE(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x0E014B94FC32A955(*iParam0, 2, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x0E014B94FC32A955(*iParam0, 3, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x0E014B94FC32A955(*iParam0, 0, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x0E014B94FC32A955(*iParam0, 1, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xF72C45DFDBF9121C(*iParam0) > 1 && Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x01DF175C46BF059E(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xA214826AC4BEA074(unk_0xA0A4DA31DEDFAC4F(*iParam0)))
					{
						if (unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(*iParam0)))
						{
							if (Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xC6DCC91FF2EE9D39(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC6DCC91FF2EE9D39(*iParam0, Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_361(iParam0, &(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0xD2C5CB7D044F88FB(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xA0A4DA31DEDFAC4F(*iParam0) == joaat("bodhi2"))
					{
						func_476(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x8188DB74546FF484(Global_101652.f_2079.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_449(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x4ACD1E4CBA159ED1(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x7AD0E9452821C95D(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xDE8A46A23FDCBBFE(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0x2D739561304957CC(*iParam0, 1084227584);
				unk_0x09D754A98E6A98B1(*iParam0, 0);
				unk_0x74CEDCAB129EF1AC(*iParam0, 0);
				unk_0x70057AC4F7A58052(*iParam0, 1);
				unk_0xE81D470B804DC69A(*iParam0, 1250);
				unk_0x26F5F15AFEF0CC8A(*iParam0, 1250f);
				unk_0x525451C25B51E42B(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC243EB5E21E9A4EE(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x44ADE3DECA6FE50F(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xDC5873FE07F6821C(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xE1896E88D2301642(*iParam0, iVar104 + 1, !Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xB76FE759FE310125(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_359(&uVar1, &uVar0))
				{
					unk_0x1364ED1BFBE98E4E(*iParam0, &uVar1);
					unk_0xFBA8DB4F0E5F2215(*iParam0, uVar0);
				}
				else
				{
					unk_0x1364ED1BFBE98E4E(*iParam0, &(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xD4A0D498FF38017C())
					{
						unk_0xFBA8DB4F0E5F2215(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xF4537C80083CBF71(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x5919F7382C7F12DB(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0xC97D204BBF00FC6C(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0xCF8D6A03AB9738AE(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x0E014B94FC32A955(*iParam0, 2, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x0E014B94FC32A955(*iParam0, 3, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x0E014B94FC32A955(*iParam0, 0, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x0E014B94FC32A955(*iParam0, 1, unk_0xF44A5E894FE76438(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xF72C45DFDBF9121C(*iParam0) > 1 && Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x01DF175C46BF059E(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xA214826AC4BEA074(unk_0xA0A4DA31DEDFAC4F(*iParam0)))
					{
						if (unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(*iParam0)))
						{
							if (Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xC6DCC91FF2EE9D39(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xC6DCC91FF2EE9D39(*iParam0, Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_361(iParam0, &(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0xD2C5CB7D044F88FB(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xA0A4DA31DEDFAC4F(*iParam0) == joaat("bodhi2"))
					{
						func_476(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x8188DB74546FF484(Global_101652.f_2079.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_449(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x4ACD1E4CBA159ED1(Var5.f_0);
			if (unk_0x7AD0E9452821C95D(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0xDE8A46A23FDCBBFE(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0x2D739561304957CC(*iParam0, 1084227584);
				unk_0x09D754A98E6A98B1(*iParam0, 0);
				unk_0x74CEDCAB129EF1AC(*iParam0, 0);
				unk_0x70057AC4F7A58052(*iParam0, 1);
				StringCopy(&cVar106, unk_0x2CC6A8460C4261C6(*iParam0), 16);
				unk_0xE81D470B804DC69A(*iParam0, 1250);
				unk_0x26F5F15AFEF0CC8A(*iParam0, 1250f);
				unk_0x525451C25B51E42B(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC243EB5E21E9A4EE(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x44ADE3DECA6FE50F(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xDC5873FE07F6821C(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xE1896E88D2301642(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0xB76FE759FE310125(*iParam0, Var5.f_24);
				}
				if (func_359(&uVar1, &uVar0))
				{
					unk_0x1364ED1BFBE98E4E(*iParam0, &uVar1);
					unk_0xFBA8DB4F0E5F2215(*iParam0, uVar0);
				}
				else
				{
					unk_0x1364ED1BFBE98E4E(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xD4A0D498FF38017C())
					{
						unk_0xFBA8DB4F0E5F2215(*iParam0, Var5.f_26);
					}
				}
				unk_0xF4537C80083CBF71(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x5919F7382C7F12DB(*iParam0, Var5.f_88);
				unk_0xC97D204BBF00FC6C(*iParam0, Var5.f_87);
				unk_0xCF8D6A03AB9738AE(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x0E014B94FC32A955(*iParam0, 2, unk_0xF44A5E894FE76438(Var5.f_92, 28));
				unk_0x0E014B94FC32A955(*iParam0, 3, unk_0xF44A5E894FE76438(Var5.f_92, 29));
				unk_0x0E014B94FC32A955(*iParam0, 0, unk_0xF44A5E894FE76438(Var5.f_92, 30));
				unk_0x0E014B94FC32A955(*iParam0, 1, unk_0xF44A5E894FE76438(Var5.f_92, 31));
				if (unk_0xF72C45DFDBF9121C(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x01DF175C46BF059E(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0xA214826AC4BEA074(unk_0xA0A4DA31DEDFAC4F(*iParam0)))
					{
						if (unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xC6DCC91FF2EE9D39(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xC6DCC91FF2EE9D39(*iParam0, Var5.f_90);
						}
					}
				}
				func_361(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0xD2C5CB7D044F88FB(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0xA0A4DA31DEDFAC4F(*iParam0) == joaat("bagger") && !Global_101652.f_8028.f_99.f_58[118])
					{
						unk_0x1364ED1BFBE98E4E(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xA0A4DA31DEDFAC4F(*iParam0) == joaat("bodhi2"))
					{
						func_476(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_101652.f_2079.f_539.f_3544) && Global_101652.f_8028.f_99.f_58[131]) && unk_0xA0A4DA31DEDFAC4F(*iParam0) == joaat("tailgater"))
				{
					unk_0x47EE94F716B70695(*iParam0, 6, 1, false);
					unk_0x47EE94F716B70695(*iParam0, 14, 7, false);
					unk_0x47EE94F716B70695(*iParam0, 11, 2, false);
					unk_0x47EE94F716B70695(*iParam0, 2, 3, false);
					unk_0x47EE94F716B70695(*iParam0, 7, 5, false);
					unk_0x47EE94F716B70695(*iParam0, 0, 0, false);
					unk_0x47EE94F716B70695(*iParam0, 3, 3, false);
					unk_0x47EE94F716B70695(*iParam0, 13, 1, false);
					unk_0x47EE94F716B70695(*iParam0, 4, 3, false);
					unk_0x47EE94F716B70695(*iParam0, 12, 2, false);
					unk_0xDEFD029E49A376A2(*iParam0, 22, true);
					unk_0xC6DCC91FF2EE9D39(*iParam0, 2);
					unk_0x47EE94F716B70695(*iParam0, 23, 11, false);
					unk_0xC97D204BBF00FC6C(*iParam0, 2);
					Global_101652.f_2079.f_539.f_3544 = 1;
					func_469(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x8188DB74546FF484(Var5.f_0);
				}
				if (bVar105)
				{
					func_449(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_469(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_12(iParam0) && unk_0x7887B64A08364778(*iParam1)) && unk_0xA4DB44DF73EF4FE5(*iParam1, 0))
	{
		if (iParam2 > Global_101652.f_2079.f_539.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_374(*iParam1, iParam0);
		}
		if (unk_0x83608391BBAB09A9(*iParam1) != 0)
		{
			unk_0x8A541F8CF0625EB6(*iParam1, 0);
		}
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = unk_0xA0A4DA31DEDFAC4F(*iParam1);
		if (unk_0xF66780FB1B1C11AA(*iParam1, &iVar1))
		{
			Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0xA0A4DA31DEDFAC4F(iVar1);
		}
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xF025895E5FCD89B9(*iParam1);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xB38A470B669AC00B(*iParam1);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x90ECFFEFD5446B32(*iParam1, 1);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x90ECFFEFD5446B32(*iParam1, 2);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x90ECFFEFD5446B32(*iParam1, 3);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x90ECFFEFD5446B32(*iParam1, 4);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x90ECFFEFD5446B32(*iParam1, 5);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x90ECFFEFD5446B32(*iParam1, 6);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x90ECFFEFD5446B32(*iParam1, 7);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x90ECFFEFD5446B32(*iParam1, 8);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x90ECFFEFD5446B32(*iParam1, 9);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x90ECFFEFD5446B32(*iParam1, 10);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x90ECFFEFD5446B32(*iParam1, 11);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x90ECFFEFD5446B32(*iParam1, 12);
		if (unk_0xEF9CF6170A8C90B7(*iParam1, 0))
		{
			iVar2 = unk_0x80F6A1A9BF0E38FD(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0xFDD9C8C921B18ACC();
		StringCopy(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x2CC6A8460C4261C6(*iParam1), 16);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x643D0787FF300BE8(*iParam1);
		unk_0xAB44311BC9F89232(*iParam1, &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xCFF130F4559BF748(*iParam1, &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x43FF1E5EC4917728(*iParam1, &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0xAB35C8D69EA2E6B5(*iParam1);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0xEF0C3A770E8892FA(*iParam1);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x49CCC8B15830B17D(*iParam1);
		Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x65E205594044F652(*iParam1);
		unk_0xF69AB637A0DAC546(*iParam1, &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x1150CC5330ABD6DF(*iParam1, 2))
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x1150CC5330ABD6DF(*iParam1, 3))
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x1150CC5330ABD6DF(*iParam1, 0))
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x1150CC5330ABD6DF(*iParam1, 1))
		{
			unk_0xB8A73E7DA87B2968(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_101652.f_2079.f_539.f_3545[iParam0] = 10;
		if ((unk_0x08E3DE348DE28262(*iParam1) >= 0 && unk_0x08E3DE348DE28262(*iParam1) < 255) && func_473(*iParam1, 0, &uVar0))
		{
			func_213(iParam1, &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_101652.f_19061[iParam0 /*43*/].f_40 = 1;
				Global_101652.f_19061[iParam0 /*43*/] = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_101652.f_19061[iParam0 /*43*/].f_3 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_101652.f_19061[iParam0 /*43*/].f_4 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_101652.f_19061[iParam0 /*43*/].f_5 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_101652.f_19061[iParam0 /*43*/].f_6 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_101652.f_19061[iParam0 /*43*/].f_10 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_101652.f_19061[iParam0 /*43*/].f_16 = !Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_101652.f_19061[iParam0 /*43*/].f_19 = { Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_101652.f_19061[iParam0 /*43*/].f_23 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_101652.f_19061[iParam0 /*43*/].f_7 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_101652.f_19061[iParam0 /*43*/].f_8 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_101652.f_19061[iParam0 /*43*/].f_9 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_101652.f_19061[iParam0 /*43*/].f_11 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_101652.f_19061[iParam0 /*43*/].f_12 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_101652.f_19061[iParam0 /*43*/].f_13 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_101652.f_19061[iParam0 /*43*/].f_14 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_101652.f_19061[iParam0 /*43*/].f_15 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_101652.f_19061[iParam0 /*43*/].f_18 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_101652.f_19061[iParam0 /*43*/].f_17 = Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_101652.f_19061[iParam0 /*43*/].f_24 = unk_0x55333304BF43145A(*iParam1, 11) + 1;
				Global_101652.f_19061[iParam0 /*43*/].f_25 = unk_0x55333304BF43145A(*iParam1, 12) + 1;
				Global_101652.f_19061[iParam0 /*43*/].f_26 = unk_0x55333304BF43145A(*iParam1, 4) + 1;
				Global_101652.f_19061[iParam0 /*43*/].f_27 = unk_0x55333304BF43145A(*iParam1, 23) + 1;
				Global_101652.f_19061[iParam0 /*43*/].f_28 = unk_0x55333304BF43145A(*iParam1, 14) + 1;
				Global_101652.f_19061[iParam0 /*43*/].f_29 = unk_0x55333304BF43145A(*iParam1, 16) + 1;
				Global_101652.f_19061[iParam0 /*43*/].f_30 = unk_0x55333304BF43145A(*iParam1, 15) + 1;
				Global_101652.f_19061[iParam0 /*43*/].f_32 = unk_0x747C5AB90E200CA1(*iParam1);
				Global_101652.f_19061[iParam0 /*43*/].f_33[0] = unk_0xB864D56CC6F2A9C7(*iParam1);
				Global_101652.f_19061[iParam0 /*43*/].f_33[1] = unk_0x8981038A16D8B6F0(*iParam1, 14, 0);
				Global_101652.f_19061[iParam0 /*43*/].f_33[2] = unk_0x8981038A16D8B6F0(*iParam1, 14, 1);
				Global_101652.f_19061[iParam0 /*43*/].f_33[3] = unk_0x8981038A16D8B6F0(*iParam1, 14, 2);
				Global_101652.f_19061[iParam0 /*43*/].f_33[4] = unk_0x8981038A16D8B6F0(*iParam1, 14, 3);
				Global_101652.f_19061[iParam0 /*43*/].f_39 = unk_0xD6E462BF5A059F5D(*iParam1);
				Global_101652.f_19061[iParam0 /*43*/].f_31 = func_472(*iParam1);
				Global_101652.f_19061[iParam0 /*43*/].f_33[0] = unk_0x25DF58A7CAB057E9(*iParam1);
				unk_0xE3D66044870316F8(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_470(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_101652.f_19061[iParam0 /*43*/].f_1));
				unk_0x98D229AF67196EED(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_470(Global_101652.f_2079.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_101652.f_19061[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_470(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_471(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_471(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0)) && unk_0x08E3DE348DE28262(iParam0) >= 0) && unk_0x08E3DE348DE28262(iParam0) < 255)
	{
		if (unk_0xD6E462BF5A059F5D(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xD6E462BF5A059F5D(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xD6E462BF5A059F5D(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xD6E462BF5A059F5D(iParam0) == 0)
		{
			if (unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

int func_473(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x5B8C6C17DBDB0252(unk_0xA0A4DA31DEDFAC4F(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	if (!func_474(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x2116DC64F00A4D05(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x1995B52453EF6537())
	{
		if ((func_387(iParam0) && unk_0xA0A4DA31DEDFAC4F(iParam0) != joaat("sentinel2")) && unk_0xA0A4DA31DEDFAC4F(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_474(int iParam0, bool bParam1, var uParam2)
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((((((!unk_0x1F4C5E9E5F24C698(iParam0) && !unk_0x7F132EC931B9581A(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x1995B52453EF6537())
	{
		if (func_475(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x1995B52453EF6537())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_476(var uParam0)
{
	if (!func_477(*uParam0))
	{
		unk_0xE1896E88D2301642(*uParam0, 5, !Global_101652.f_8028.f_99.f_58[119]);
	}
}

bool func_477(int iParam0)
{
	return unk_0x90ECFFEFD5446B32(iParam0, 5);
}

int func_478(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xDA82A890460AACEE(Global_95993.f_2311.f_12.f_66))
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0x4B09D3321F53E524(Global_95993.f_2311.f_12.f_66))
	{
		return 0;
	}
	if (iParam2 == 0 && func_480(Global_95993.f_2311.f_12.f_66))
	{
		return 0;
	}
	if (iParam3 == 0 && unk_0x825416FB822BF706(Global_95993.f_2311.f_12.f_66))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_479())
		{
			return 0;
		}
	}
	return 1;
}

int func_479()
{
	float fVar0;
	
	if (!func_461())
	{
		return 0;
	}
	if ((unk_0xDA82A890460AACEE(Global_95993.f_2311.f_12.f_66) || unk_0x825416FB822BF706(Global_95993.f_2311.f_12.f_66)) || unk_0x8F8A0D55EBDCBE44(Global_95993.f_2311.f_12.f_66))
	{
		return 0;
	}
	fVar0 = unk_0xF87161EBC8D5AAC9(Global_95993.f_2311.f_12.f_66);
	if (fVar0 < 37f)
	{
		return 0;
	}
	return 1;
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

var func_481()
{
	return Global_93588.f_2311.f_8;
}

int func_482()
{
	if (!Global_91486 == 10 && !Global_91486 == 9)
	{
		return 0;
	}
	return Global_91486.f_2;
}

int func_483()
{
	if (Global_91486 == 10 || Global_91486 == 9)
	{
		return 1;
	}
	return 0;
}

void func_484()
{
	if (func_494() == 1)
	{
		bLocal_533 = true;
	}
	else
	{
		bLocal_533 = false;
	}
	iLocal_615 = 1000;
	iLocal_616 = 1500;
	iLocal_614 = 3500;
	unk_0x68A99AC5778ED123("MET1", 0);
	func_493();
	func_491();
	func_490();
	func_489();
	func_488();
	func_487();
	func_486(&Local_534, 200.34f, -30.73f, 60.91f, 244.07f, -45.73f, 77.22f, 30f);
	unk_0xFA03BA297FE81584(Local_277.f_1, 1);
	unk_0xFA03BA297FE81584(joaat("issi2"), 1);
	func_485(1);
	iLocal_317 = 0;
	iLocal_333 = 0;
	iLocal_293 = 0;
	func_21(&uLocal_96, 0, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
	sLocal_573 = "DEFAULT";
	func_439();
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_574 = -1;
	if (func_483())
	{
		unk_0xCFA9C9147FB79A6C("EXTRASUNNY");
	}
	else
	{
		unk_0xA00D6118F1C4B6E5("EXTRASUNNY", 20f);
	}
	unk_0x8FE45474D7594498(2);
	unk_0xFA5E84DCAE200259(0.2f);
}

void func_485(int iParam0)
{
	unk_0xFA03BA297FE81584(joaat("bus"), iParam0);
	unk_0xFA03BA297FE81584(joaat("coach"), iParam0);
	unk_0xFA03BA297FE81584(joaat("mixer"), iParam0);
	unk_0xFA03BA297FE81584(joaat("mixer2"), iParam0);
	unk_0xFA03BA297FE81584(joaat("rubble"), iParam0);
	unk_0xFA03BA297FE81584(joaat("tiptruck2"), iParam0);
	unk_0xFA03BA297FE81584(joaat("tiptruck"), iParam0);
	unk_0xFA03BA297FE81584(joaat("scrap"), iParam0);
	unk_0xFA03BA297FE81584(joaat("biff"), iParam0);
	unk_0xFA03BA297FE81584(joaat("packer"), iParam0);
	unk_0xFA03BA297FE81584(joaat("phantom"), iParam0);
	unk_0xFA03BA297FE81584(joaat("benson"), iParam0);
	unk_0xFA03BA297FE81584(joaat("trash"), iParam0);
	unk_0xFA03BA297FE81584(joaat("pounder"), iParam0);
}

void func_486(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param4 };
	uParam0->f_7 = fParam7;
}

void func_487()
{
	Local_546[0 /*3*/] = { -224.0988f, -62.9169f, 48.8994f };
	fLocal_565[0] = 250.2f;
	Local_546[1 /*3*/] = { -98.7688f, -90.0482f, 56.5581f };
	fLocal_565[1] = 72.7f;
	Local_546[2 /*3*/] = { -190.0195f, -64.3358f, 50.6959f };
	fLocal_565[2] = 70.37f;
	Local_546[3 /*3*/] = { -254.3389f, -16.5055f, 48.7322f };
	fLocal_565[3] = 170.42f;
	Local_546[4 /*3*/] = { -145.0999f, -91.2274f, 54.1001f };
	fLocal_565[4] = 249.33f;
	Local_546[5 /*3*/] = { -35.9104f, -97.4508f, 56.3653f };
	fLocal_565[5] = 163.63f;
}

void func_488()
{
	iLocal_572 = 0;
	Local_487[iLocal_572 /*8*/] = { 245.6922f, -209.0348f, 52.8895f };
	Local_487[iLocal_572 /*8*/].f_3 = 20f;
	Local_487[iLocal_572 /*8*/].f_4 = "MET1_LOC1";
	Local_487[iLocal_572 /*8*/].f_5 = "MET1_CHAT1";
	Local_487[iLocal_572 /*8*/].f_6 = "NULL";
	Local_487[iLocal_572 /*8*/].f_7 = 1;
	iLocal_572++;
	Local_487[iLocal_572 /*8*/] = { 52.766f, -283.8273f, 46.6203f };
	Local_487[iLocal_572 /*8*/].f_3 = 20f;
	Local_487[iLocal_572 /*8*/].f_4 = "MET1_LOC2";
	Local_487[iLocal_572 /*8*/].f_5 = "MET1_CHAT2";
	Local_487[iLocal_572 /*8*/].f_6 = "MET1_CHAT2C";
	Local_487[iLocal_572 /*8*/].f_7 = 2;
	iLocal_572++;
	Local_487[iLocal_572 /*8*/] = { -129.7824f, -259.7662f, 42.2812f };
	Local_487[iLocal_572 /*8*/].f_3 = 20f;
	Local_487[iLocal_572 /*8*/].f_4 = "MET1_LOC3";
	Local_487[iLocal_572 /*8*/].f_5 = "MET1_CHAT3";
	Local_487[iLocal_572 /*8*/].f_6 = "MET1_CHAT3C";
	Local_487[iLocal_572 /*8*/].f_7 = 2;
	iLocal_572++;
	Local_487[iLocal_572 /*8*/] = { -160.47f, -75.1948f, 52.7966f };
	Local_487[iLocal_572 /*8*/].f_3 = 40f;
	Local_487[iLocal_572 /*8*/].f_4 = "MET1_LOC4";
	Local_487[iLocal_572 /*8*/].f_5 = "MET1_CHAT4";
	Local_487[iLocal_572 /*8*/].f_6 = "MET1_CHAT4C";
	Local_487[iLocal_572 /*8*/].f_7 = 2;
	iLocal_572++;
	iLocal_520 = 0;
}

void func_489()
{
	Local_277.f_1 = joaat("tornado2");
	Local_277.f_2 = 0;
	Local_277.f_6 = { -58.8963f, -191.2678f, 51.1096f };
	Local_277.f_9 = 66.9f;
}

void func_490()
{
	Local_381[0 /*3*/] = 0;
	Local_381[0 /*3*/].f_1 = "MET1AUD";
	Local_381[0 /*3*/].f_2 = "MET1_TRCC1";
	Local_381[1 /*3*/] = 0;
	Local_381[1 /*3*/].f_1 = "MET1AUD";
	Local_381[1 /*3*/].f_2 = "MET1_TRCC2";
	Local_381[2 /*3*/] = 0;
	Local_381[2 /*3*/].f_1 = "MET1AUD";
	Local_381[2 /*3*/].f_2 = "MET1_TRCC3";
	Local_381[3 /*3*/] = 0;
	Local_381[3 /*3*/].f_1 = "MET1AUD";
	Local_381[3 /*3*/].f_2 = "MET1_TRCC4";
	Local_381[4 /*3*/] = 0;
	Local_381[4 /*3*/].f_1 = "MET1AUD";
	Local_381[4 /*3*/].f_2 = "MET1_TRCC5";
	Local_397[0 /*3*/] = 0;
	Local_397[0 /*3*/].f_1 = "MET1AUD";
	Local_397[0 /*3*/].f_2 = "MET1_ST1";
	Local_397[1 /*3*/] = 0;
	Local_397[1 /*3*/].f_1 = "MET1AUD";
	Local_397[1 /*3*/].f_2 = "MET1_ST2";
	Local_397[2 /*3*/] = 0;
	Local_397[2 /*3*/].f_1 = "MET1AUD";
	Local_397[2 /*3*/].f_2 = "MET1_ST3";
	Local_397[3 /*3*/] = 0;
	Local_397[3 /*3*/].f_1 = "MET1AUD";
	Local_397[3 /*3*/].f_2 = "MET1_ST4";
	Local_418[0 /*3*/] = 0;
	Local_418[0 /*3*/].f_1 = "MET1AUD";
	Local_418[0 /*3*/].f_2 = "MET1_STW1";
	Local_418[1 /*3*/] = 0;
	Local_418[1 /*3*/].f_1 = "MET1AUD";
	Local_418[1 /*3*/].f_2 = "MET1_STW2";
	Local_418[2 /*3*/] = 0;
	Local_418[2 /*3*/].f_1 = "MET1AUD";
	Local_418[2 /*3*/].f_2 = "MET1_STW3";
	Local_428[0 /*3*/] = 0;
	Local_428[0 /*3*/].f_1 = "MET1AUD";
	Local_428[0 /*3*/].f_2 = "MET1_TRFC1";
	Local_428[1 /*3*/] = 0;
	Local_428[1 /*3*/].f_1 = "MET1AUD";
	Local_428[1 /*3*/].f_2 = "MET1_TRFC2";
	Local_428[2 /*3*/] = 0;
	Local_428[2 /*3*/].f_1 = "MET1AUD";
	Local_428[2 /*3*/].f_2 = "MET1_TRFC3";
	Local_438[0 /*3*/] = 0;
	Local_438[0 /*3*/].f_1 = "MET1AUD";
	Local_438[0 /*3*/].f_2 = "MET1_TSDEAD1";
	Local_438[1 /*3*/] = 0;
	Local_438[1 /*3*/].f_1 = "MET1AUD";
	Local_438[1 /*3*/].f_2 = "MET1_TSDEAD2";
	Local_438[2 /*3*/] = 0;
	Local_438[2 /*3*/].f_1 = "MET1AUD";
	Local_438[2 /*3*/].f_2 = "MET1_TSESCP1";
	Local_438[3 /*3*/] = 5000;
	Local_438[3 /*3*/].f_1 = "MET1AUD";
	Local_438[3 /*3*/].f_2 = "MET1_GOHOM1";
	Local_438[4 /*3*/] = 8000;
	Local_438[4 /*3*/].f_1 = "MET1AUD";
	Local_438[4 /*3*/].f_2 = "MET1_GOHOM2";
	Local_438[5 /*3*/] = 8000;
	Local_438[5 /*3*/].f_1 = "MET1AUD";
	Local_438[5 /*3*/].f_2 = "MET1_GOHOM3";
	Local_438[6 /*3*/] = 8000;
	Local_438[6 /*3*/].f_1 = "MET1AUD";
	Local_438[6 /*3*/].f_2 = "MET1_GOHOM4";
	Local_438[7 /*3*/] = 8000;
	Local_438[7 /*3*/].f_1 = "MET1AUD";
	Local_438[7 /*3*/].f_2 = "MET1_GOHOM5";
	Local_438[8 /*3*/] = 0;
	Local_438[8 /*3*/].f_1 = "MET1AUD";
	Local_438[8 /*3*/].f_2 = "MET1_GOHOMC";
}

void func_491()
{
	Local_341[0 /*3*/] = { func_492("MET1INITDRV", 1) };
	Local_341[1 /*3*/] = { func_492("MET1TCAR", 1) };
	Local_341[2 /*3*/] = { func_492("MET1WAIT", 1) };
	Local_341[3 /*3*/] = { func_492("MET1WANT", -1) };
	Local_341[4 /*3*/] = { func_492("MET1CHASE", 1) };
	Local_341[5 /*3*/] = { func_492("MET1GETBKT", 1) };
	Local_341[6 /*3*/] = { func_492("MET1DLT", 1) };
	Local_341[7 /*3*/] = { func_492("MET1HOME", 1) };
	Local_341[8 /*3*/] = { func_492("MET1HOTEL", 1) };
}

Vector3 func_492(char* sParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_2 = sParam0;
	Var0.f_0 = iParam1;
	Var0.f_1 = 0;
	return Var0;
}

void func_493()
{
	sLocal_575[0] = "NONE";
	sLocal_575[1] = "M_E_TRACEY_GO_TO_TRACEY";
	sLocal_575[2] = "M_E_TRACEY_ENTER_TRACEYS_CAR";
	sLocal_575[3] = "M_E_TRACEY_FIND_STALKER";
	sLocal_575[4] = "M_E_TRACEY_STOP_STALKERS_CAR";
	sLocal_575[5] = "M_E_TRACEY_DEAL_WITH_STALKER";
	sLocal_575[6] = "M_E_TRACEY_TAKE_TRACEY_HOME";
	sLocal_575[7] = "NONE";
}

int func_494()
{
	if (Global_33143[11] == 1)
	{
		return 4;
	}
	if (!func_496(21))
	{
		return 0;
	}
	if (!func_495(130))
	{
		return 1;
	}
	if (!func_495(131))
	{
		return 2;
	}
	if (!func_496(22))
	{
		return 1;
	}
	if (!func_496(49))
	{
		return 3;
	}
	if (!func_496(28))
	{
		return 1;
	}
	return 3;
}

int func_495(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101652.f_8028.f_99.f_58[iParam0];
}

int func_496(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101652.f_8028.f_330[iParam0 /*6*/];
}

void func_497(bool bParam0, bool bParam1)
{
	func_27(&uLocal_297);
	if (unk_0x7887B64A08364778(Local_277.f_0))
	{
		if (iLocal_317)
		{
			unk_0xE49CEAAA37CEC2B3(Local_277.f_0);
			iLocal_317 = 0;
		}
		unk_0xC1CDF4F2825C3F22(Local_277.f_0, 0);
	}
	if (iLocal_292)
	{
		unk_0x8188DB74546FF484(iLocal_291);
		unk_0x8188DB74546FF484(Local_277.f_1);
	}
	if (bParam0)
	{
		func_33(&iLocal_290);
		func_31(&Local_277);
	}
	else
	{
		func_498(&iLocal_290, 1, 0, 1);
		func_465(&Local_277);
	}
	func_271(&uLocal_261, 0, 0);
	if (iLocal_294)
	{
		unk_0xA402A00DD48EB3E9(iLocal_295);
	}
	if (func_26(iLocal_273) && iLocal_274)
	{
		unk_0x3F1BB6177798DB33(iLocal_273);
		iLocal_274 = 0;
	}
	if (bParam0)
	{
		func_33(&iLocal_289);
		func_31(&iLocal_273);
	}
	else
	{
		if (!bParam1)
		{
			if (unk_0x7887B64A08364778(iLocal_289))
			{
				if (!unk_0xB529B2A4B7C64D6D(iLocal_289, 0))
				{
					unk_0x37338B7B7C4982DC(iLocal_289);
					unk_0x5457695C257D1470(iLocal_289, 0);
					func_498(&iLocal_289, 1, 0, 1);
				}
				else
				{
					func_498(&iLocal_289, 1, 0, 1);
				}
			}
		}
		func_465(&iLocal_273);
	}
	unk_0xC8BB600EA931F89A(Local_534[0 /*3*/], Local_534[1 /*3*/], Local_534.f_7, 1);
	unk_0x1AAA727AD9762D22(uLocal_542, 0);
	unk_0x8FE45474D7594498(0);
	unk_0xFA03BA297FE81584(Local_277.f_1, 0);
	unk_0xFA03BA297FE81584(joaat("issi2"), 0);
	func_485(0);
	unk_0x578D07DA5FE1C7A1();
	unk_0xFA5E84DCAE200259(1f);
	unk_0x1B0911E42F22C137(1);
	unk_0x01DFCA3621B68C4A();
}

void func_498(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (!unk_0x00B5B0B68211D89B(*uParam0))
		{
			unk_0x6D20A3AA82585D8C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xB42E7901B9B18D2A(*uParam0);
			}
			unk_0x7D99F00F48D15ADB(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x5457695C257D1470(*uParam0, 0);
			}
		}
		unk_0xD4B3FF1E63C36391(uParam0);
	}
}

void func_499()
{
	int iVar0;
	
	if (unk_0x4AAFD43C0AFB7A1A("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_101652.f_8028 || func_39(0))
	{
		if (!func_500())
		{
			iVar0 = func_37();
			if (iVar0 != -1)
			{
				if (!func_413(iVar0))
				{
					return;
				}
				unk_0xB8A73E7DA87B2968(&(Global_82571[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_418();
		}
	}
}

int func_500()
{
	if (((Global_91486 == 13 || Global_91486 == 10) || Global_91486 == 11) || Global_91486 == 12)
	{
		return 0;
	}
	return 1;
}


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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_64[12];
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	struct<7> Local_127 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
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
	var uLocal_144 = 16;
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
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<3> Local_311 = { 0, 0, 0 } ;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	struct<76> Local_317 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403[3] = { 0, 0, 0 };
	var uLocal_407[3] = { 0, 0, 0 };
	int iLocal_411[3] = { 0, 0, 0 };
	float fLocal_415 = 0f;
	bool bLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	struct<13> Local_419[10];
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570 = 0;
	bool bLocal_571 = 0;
	int iLocal_572 = 0;
	bool bLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_596[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	struct<3> Local_624 = { 0, 0, 0 } ;
	int iLocal_627 = 0;
	struct<41> Local_628 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
#endregion

void __EntryFunction__()
{
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_415 = 0f;
	bLocal_416 = true;
	Local_624 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0x7547D7CF93115D6D(3))
	{
		func_81();
	}
	uLocal_310 = unk_0x507DA4994C3D8EBD();
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xA6E6CA9E3F5ACCE7(unk_0xAF65E5A58BE87D95());
	}
	while (true)
	{
		if (unk_0xE5D56342B0FF1D0D(uLocal_310))
		{
			func_81();
		}
		func_80();
		Local_311 = { unk_0xBF1B13057E5119A4(iLocal_310, 1) };
		switch (iLocal_309)
		{
			case 0:
				func_78();
				iLocal_309 = 1;
				break;
			
			case 1:
				func_77();
				func_76();
				func_75();
				func_73();
				iLocal_309 = 2;
				break;
			
			case 2:
				if ((((func_72() && func_71()) && func_70()) && func_69()) && func_68())
				{
					iLocal_309 = 3;
				}
				break;
			
			case 3:
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				func_61();
				unk_0x4EDE34FBADD967A6(0);
				func_58();
				func_57();
				iLocal_309 = 4;
				break;
			
			case 4:
				if (!Global_24452)
				{
					if (Global_87117)
					{
						func_81();
					}
					func_32();
					func_31();
					func_27();
					func_26();
					func_24();
					func_2();
					func_1();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_50 == 1)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[0] = 1;
				}
			}
			else
			{
				iLocal_106[0] = 0;
			}
		}
	}
	else if (iLocal_50 == 2)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[1] = 1;
				}
			}
			else
			{
				iLocal_106[1] = 0;
			}
		}
	}
	else if (iLocal_50 == 3)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[2] = 1;
				}
			}
			else
			{
				iLocal_106[2] = 0;
			}
		}
	}
	else if (iLocal_50 == 4)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[3] = 1;
				}
			}
			else
			{
				iLocal_106[3] = 0;
			}
		}
	}
	else if (iLocal_50 == 5)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[4] = 1;
				}
			}
			else
			{
				iLocal_106[4] = 0;
			}
		}
	}
	else if (iLocal_50 == 6)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[5] = 1;
				}
			}
			else
			{
				iLocal_106[5] = 0;
			}
		}
	}
	else if (iLocal_50 == 7)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[6] = 1;
				}
			}
			else
			{
				iLocal_106[6] = 0;
			}
		}
	}
	else if (iLocal_50 == 8)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[7] = 1;
				}
			}
			else
			{
				iLocal_106[7] = 0;
			}
		}
	}
	else if (iLocal_50 == 9)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[8] = 1;
				}
			}
			else
			{
				iLocal_106[8] = 0;
			}
		}
	}
	else if (iLocal_50 == 10)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[9] = 1;
				}
			}
			else
			{
				iLocal_106[9] = 0;
			}
		}
	}
	iLocal_50++;
	if (iLocal_50 > 10)
	{
		iLocal_50 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_106[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_102)
			{
				unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_2()
{
	struct<3> Var0;
	
	switch (iLocal_49)
	{
		case 0:
			unk_0xCBE6AC5010E5CE5C(joaat("police3"));
			unk_0xCBE6AC5010E5CE5C(joaat("s_m_y_cop_01"));
			if (unk_0xD291857D0C9C7FEC(joaat("police3")) && unk_0xD291857D0C9C7FEC(joaat("s_m_y_cop_01")))
			{
				iLocal_49++;
			}
			break;
		
		case 1:
			iLocal_123 = unk_0x546974B676313326(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, 1);
			iLocal_125 = unk_0xC68FBD37098CE438(iLocal_123, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			func_23(&iLocal_125);
			iLocal_49++;
			break;
		
		case 2:
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			}
			if ((func_13(iLocal_125, iLocal_123, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || func_13(iLocal_126, iLocal_124, &Local_127, &uLocal_134, 0, 1, 0, 1, 1)) || (func_12(Var0, 4, 20, 0) && !unk_0x7E94D7B1F9207611(unk_0x507DA4994C3D8EBD())))
			{
				unk_0x1CD43CFDD3B0B347(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0);
				unk_0x1CD43CFDD3B0B347(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0);
				if (!unk_0xE5D56342B0FF1D0D(iLocal_125))
				{
					unk_0x247B2966C6C2A4C1(iLocal_125, unk_0x507DA4994C3D8EBD(), 0, 16);
				}
				if (!func_11(&uLocal_135))
				{
					func_8(&uLocal_135);
				}
				iLocal_49++;
			}
			break;
		
		case 3:
			if (func_11(&uLocal_135))
			{
				if (func_5(&uLocal_135) > 15f)
				{
					iLocal_124 = unk_0x546974B676313326(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, 1);
					iLocal_126 = unk_0xC68FBD37098CE438(iLocal_124, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					func_23(&iLocal_126);
					unk_0x247B2966C6C2A4C1(iLocal_126, unk_0x507DA4994C3D8EBD(), 0, 16);
					iLocal_49++;
				}
				else if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
				{
					if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
					{
						Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
					}
					if (func_4(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
					{
						func_3();
						iLocal_49 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
				}
				if (func_4(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
				{
					func_3();
					iLocal_49 = 0;
				}
			}
			break;
	}
}

void func_3()
{
	if (unk_0xFD68187442384158(iLocal_123))
	{
		unk_0x10EA498723DC5A09(&iLocal_123);
	}
	if (unk_0xFD68187442384158(iLocal_125))
	{
		unk_0x8019BB3BA236A900(&iLocal_125);
	}
	if (unk_0xFD68187442384158(iLocal_124))
	{
		unk_0x10EA498723DC5A09(&iLocal_124);
	}
	if (unk_0xFD68187442384158(iLocal_126))
	{
		unk_0x8019BB3BA236A900(&iLocal_126);
	}
}

int func_4(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (unk_0xB7A628320EFF8E47(Param0, Param3) < (fParam6 * fParam6))
	{
		if (((unk_0xFD68187442384158(iLocal_123) && unk_0xFD68187442384158(iLocal_125)) && unk_0xFD68187442384158(iLocal_124)) && unk_0xFD68187442384158(iLocal_126))
		{
			if (unk_0x19F2D2C58150C825(iLocal_123) || !unk_0x9226425D9E480D72(iLocal_123))
			{
				if (unk_0x19F2D2C58150C825(iLocal_125) || !unk_0x9226425D9E480D72(iLocal_125))
				{
					if (unk_0x19F2D2C58150C825(iLocal_124) || !unk_0x9226425D9E480D72(iLocal_124))
					{
						if (unk_0x19F2D2C58150C825(iLocal_126) || !unk_0x9226425D9E480D72(iLocal_126))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (unk_0xB7A628320EFF8E47(Param0, Param3) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_5(var uParam0)
{
	if (func_11(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_6()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

bool func_7(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 2);
}

void func_8(var uParam0)
{
	if (!func_11(uParam0))
	{
		func_9(uParam0);
	}
}

void func_9(var uParam0)
{
	func_10(uParam0, 0f);
}

void func_10(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_6() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_11(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 1);
}

int func_12(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x65EC44693BF9CB43(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_13(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x507DA4994C3D8EBD();
	if (!unk_0xE5D56342B0FF1D0D(iVar0) && !unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_21(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_19(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_18(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_14(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_14(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xFD68187442384158(iParam0))
	{
		if (iParam7 && unk_0x6255AE2591FE7603(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_44)
		{
			iLocal_45 = unk_0x5D422B4764FA2ACA(iParam0);
			bLocal_44 = true;
		}
		iLocal_46 = unk_0x5D422B4764FA2ACA(iParam0);
		iLocal_47 = (iLocal_45 - iLocal_46);
		uVar0 = unk_0xF6EA6ED8FFB5B505();
		if (!unk_0xE5D56342B0FF1D0D(uVar0))
		{
			if (unk_0x6255AE2591FE7603(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_44)
		{
			if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xF6EA6ED8FFB5B505();
		if (!unk_0xE5D56342B0FF1D0D(uVar1))
		{
			if (unk_0x6255AE2591FE7603(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			if (unk_0x88253E28293B8BFD(iParam0))
			{
				if (unk_0x1F2BCCC99110BB36(iParam0) == unk_0x507DA4994C3D8EBD())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x594EB70937EC1486(iParam0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xA0DC5B4F5EADB551(unk_0xAF65E5A58BE87D95()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x2F0EF8797B769C86(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x99B3AF1B678B9666(iParam0))
		{
			return 1;
		}
	}
	if (func_17(unk_0x507DA4994C3D8EBD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x1983DA3C921BB046(iParam0) && func_15(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x2A24448FF232F834(iParam0, 0))
		{
			if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), unk_0x78AB10B64129B3D5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE5D56342B0FF1D0D(uParam1))
		{
			if (unk_0x6255AE2591FE7603(iParam1, unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_15(int iParam0, int iParam1)
{
	return func_16(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), iParam0, iParam1);
}

float func_16(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(uParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xAE0CD3052D6ED1ED(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xEB4AE93098956715(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iParam0, 1), unk_0xBF1B13057E5119A4(iParam1, 1)) < 2.5f)
			{
				if (unk_0x849DBD2D635C99D5(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_18(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x73741D3DABB81B29(uParam0, 4))
	{
		if (unk_0xEB4AE93098956715(uParam0) && !unk_0xB6CDBC1E2904184A(iParam0))
		{
			if (unk_0x594EB70937EC1486(uParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xE5D56342B0FF1D0D(uParam1))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	if (unk_0x0982F2F40B035E77(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x90782A0CBF77A844(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x73741D3DABB81B29(uParam0, 2))
	{
		if (unk_0xEB4AE93098956715(uParam0))
		{
			if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x849DBD2D635C99D5(unk_0x274BAC44978F9161(iParam1), iParam0, 120f) && unk_0x15DEAA4402D18301(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x2A24448FF232F834(unk_0x274BAC44978F9161(iParam1), 0))
			{
				iVar3 = unk_0x78AB10B64129B3D5(unk_0x274BAC44978F9161(iParam1), 0);
			}
			if (unk_0xA43F7819FA056045(iParam0) || func_20(iVar3))
			{
				if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x849DBD2D635C99D5(unk_0x274BAC44978F9161(iParam1), iParam0, 120f) && unk_0x15DEAA4402D18301(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xEE93FF4158B54B09((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0xE634CB9EE7094537(iParam0, -1) != 0)
			{
				if (unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_16(unk_0x507DA4994C3D8EBD(), iParam0, 1) < 40f)
						{
							if (unk_0x8FF35E6057D45161(unk_0xAF65E5A58BE87D95(), &uVar1))
							{
								if ((unk_0x1BA544973A67E699(uVar1) && unk_0x379620F9B34A512B(uVar1) == iParam0) || (unk_0x91F594068DF4424F(uVar1) && unk_0x274BAC44978F9161(uVar1) == unk_0xE634CB9EE7094537(iParam0, -1)))
								{
									if ((unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()) && unk_0xBD883E84B4B6E14E(0, 24)) || (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && unk_0xBD883E84B4B6E14E(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_21(int iParam0, var uParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
		{
			if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0))
			{
				if (unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), 90f))
				{
					if (func_15(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xF976C624234A4AA8();
						}
						else if ((unk_0xF976C624234A4AA8() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_23(int iParam0)
{
	unk_0x3F9EDC2D18464273(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
	unk_0x2DC5B31EBB810396(*iParam0, 1);
	unk_0x3A1E687904400847(*iParam0, 13, 1);
	unk_0x3A1E687904400847(*iParam0, 0, 1);
	unk_0x9B02246888A617A8(*iParam0, 1);
	unk_0x48FFA098B5BE8ED0(*iParam0, 1);
	unk_0xB317E9B67CA4E777(*iParam0, 0f);
	unk_0xA1E4BA3B17C6D931(*iParam0, 1);
	unk_0xE7962295F4C99484(*iParam0, 100);
	unk_0xD149F8A3FE6B4956(*iParam0, 2);
	unk_0x3A1E687904400847(*iParam0, 23, 0);
	unk_0x2F82BB8951419B6D(*iParam0, 1000f);
	unk_0x3A1E687904400847(*iParam0, 1, 1);
}

void func_24()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_573)
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_568))
		{
			if (!unk_0x8B3A54875054E60A(iLocal_568))
			{
				unk_0xFB79A537A7D76B64(iLocal_568, 101, "PrisonHeli", 1);
			}
			if (!unk_0xE5D56342B0FF1D0D(iLocal_569))
			{
				Var0 = { unk_0x0CAFB9D38494283D(iLocal_569, 0f, 4f, -2f) };
				unk_0x16197725DCDCCA20(iLocal_569, Var0);
			}
			if (bLocal_571)
			{
				if (!func_25())
				{
					bLocal_571 = false;
					unk_0xF0B3AB259115809C(iLocal_568, 0, 0);
				}
			}
			else if (func_25())
			{
				bLocal_571 = true;
				unk_0xF0B3AB259115809C(iLocal_568, 1, 0);
			}
			if (bLocal_571)
			{
				Var3 = { unk_0xBF1B13057E5119A4(iLocal_568, 1) };
				if (unk_0xB7A628320EFF8E47(Local_311, Var3) < 90000f)
				{
					if (!iLocal_572)
					{
						iLocal_572 = 1;
					}
				}
			}
		}
		else if (unk_0xD361727124133DF3(uLocal_570))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_570);
		}
	}
}

int func_25()
{
	if (unk_0xE76C684D1C903A71() >= 20 || unk_0xE76C684D1C903A71() < 6)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_628.f_18[0])
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		}
		if (!bLocal_105)
		{
			if (unk_0xB7A628320EFF8E47(Var1, Local_624) < 5625f)
			{
				iLocal_627 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x9F94F2CFDCA78C55(Local_628.f_27[iVar0]))
		{
			if (!Local_628.f_18[iVar0])
			{
				if (func_13(Local_628.f_27[iVar0], 0, &Local_127, &uLocal_134, 1, 1, 0, 1, 1) || iLocal_627)
				{
					unk_0x247B2966C6C2A4C1(Local_628.f_27[iVar0], unk_0x507DA4994C3D8EBD(), 0, 16);
					Local_628.f_18[iVar0] = 1;
				}
			}
			if (!Local_628.f_18[iVar0])
			{
				if (!unk_0x5AF4A1178852EEA9(Local_628.f_27[iVar0]))
				{
					unk_0xD8BA6491440C0DA6(Local_628.f_27[iVar0], Local_628.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0xD361727124133DF3(Local_628.f_36[iVar0]))
		{
			unk_0xA0A65B537B1F11EC(&(Local_628.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFD68187442384158(Local_628.f_31[iVar0]))
		{
			if (unk_0x9F94F2CFDCA78C55(Local_628.f_31[iVar0]))
			{
				if (unk_0xD361727124133DF3(Local_628.f_40[iVar0]))
				{
					unk_0xA0A65B537B1F11EC(&(Local_628.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_628.f_22[0])
	{
		if (!unk_0x9F94F2CFDCA78C55(Local_628.f_31[0]))
		{
			if ((func_13(Local_628.f_31[0], 0, &Local_127, &uLocal_134, 1, 1, 0, 1, 1) || Local_628.f_18[1] == 1) || iLocal_627)
			{
				unk_0xAC57FBF981AB03F4(Local_628.f_31[0]);
				unk_0x247B2966C6C2A4C1(Local_628.f_31[0], unk_0x507DA4994C3D8EBD(), 0, 16);
				Local_628.f_22[0] = 1;
			}
		}
	}
	if (!Local_628.f_22[1])
	{
		if (!unk_0x9F94F2CFDCA78C55(Local_628.f_31[1]))
		{
			if ((func_13(Local_628.f_31[1], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[1] == 1) || iLocal_627)
			{
				unk_0xAC57FBF981AB03F4(Local_628.f_31[1]);
				unk_0x247B2966C6C2A4C1(Local_628.f_31[1], unk_0x507DA4994C3D8EBD(), 0, 16);
				Local_628.f_22[1] = 1;
			}
		}
	}
	if (!Local_628.f_22[2])
	{
		if (!unk_0x9F94F2CFDCA78C55(Local_628.f_31[2]))
		{
			if ((func_13(Local_628.f_31[2], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[2] == 1) || iLocal_627)
			{
				unk_0xAC57FBF981AB03F4(Local_628.f_31[2]);
				unk_0x247B2966C6C2A4C1(Local_628.f_31[2], unk_0x507DA4994C3D8EBD(), 0, 16);
				Local_628.f_22[2] = 1;
			}
		}
	}
	if (!Local_628.f_22[3])
	{
		if (!unk_0x9F94F2CFDCA78C55(Local_628.f_31[3]))
		{
			if ((func_13(Local_628.f_31[3], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[2] == 1) || iLocal_627)
			{
				unk_0xAC57FBF981AB03F4(Local_628.f_31[3]);
				unk_0x247B2966C6C2A4C1(Local_628.f_31[3], unk_0x507DA4994C3D8EBD(), 0, 16);
				Local_628.f_22[3] = 1;
			}
		}
	}
	if (!unk_0x9F94F2CFDCA78C55(Local_628.f_27[1]))
	{
		if (unk_0x5AF4A1178852EEA9(Local_628.f_27[1]))
		{
			if (!Local_628.f_22[0])
			{
				if (!unk_0x9F94F2CFDCA78C55(Local_628.f_31[0]))
				{
					unk_0x3F79A7E4F9378558(Local_628.f_31[0], Local_628.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_628.f_22[1])
			{
				if (!unk_0x9F94F2CFDCA78C55(Local_628.f_31[1]))
				{
					unk_0x3F79A7E4F9378558(Local_628.f_31[1], Local_628.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0x9F94F2CFDCA78C55(Local_628.f_27[2]))
	{
		if (unk_0x5AF4A1178852EEA9(Local_628.f_27[2]))
		{
			if (!Local_628.f_22[2])
			{
				if (!unk_0x9F94F2CFDCA78C55(Local_628.f_31[2]))
				{
					unk_0x3F79A7E4F9378558(Local_628.f_31[2], Local_628.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_628.f_22[3])
			{
				if (!unk_0x9F94F2CFDCA78C55(Local_628.f_31[3]))
				{
					unk_0x3F79A7E4F9378558(Local_628.f_31[3], Local_628.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_27()
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_418++;
	if (iLocal_418 >= 30)
	{
		if (!bLocal_105)
		{
			if (func_12(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0xFD68187442384158(Local_317.f_64[iVar0]) && !unk_0x9F94F2CFDCA78C55(Local_317.f_64[iVar0]))
					{
						if (unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) != -1)
						{
							if (unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 1 || unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD()) == 2)
							{
								unk_0xE7962295F4C99484(Local_317.f_64[iVar0], 10);
								iLocal_417 = 1;
							}
						}
						else if (unk_0x7E94D7B1F9207611(unk_0x507DA4994C3D8EBD()))
						{
							unk_0xE7962295F4C99484(Local_317.f_64[iVar0], 10);
							iLocal_417 = 1;
						}
						else
						{
							unk_0xE7962295F4C99484(Local_317.f_64[iVar0], 100);
							iLocal_417 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_417 = 0;
			}
		}
		iLocal_418 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFD68187442384158(Local_317.f_64[iVar0]) && !unk_0x9F94F2CFDCA78C55(Local_317.f_64[iVar0]))
		{
			if (unk_0xF0428CCE35084401(unk_0x4D82797EF5035A9F(), 0))
			{
				unk_0x10C11CE8BB565A4F(unk_0xAF65E5A58BE87D95());
			}
			if ((((func_13(Local_317.f_64[iVar0], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || unk_0x0982F2F40B035E77(Local_317[iVar0 /*3*/], 20f, 1)) || unk_0xA6F6064678460049(Local_317[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_317[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_417) || func_30(&(Local_317.f_64[iVar0])))
			{
				if (!func_29(5))
				{
					if (unk_0x7E94D7B1F9207611(unk_0x507DA4994C3D8EBD()))
					{
						if (bLocal_118)
						{
							func_28(iVar0);
						}
					}
					else
					{
						func_28(iVar0);
					}
				}
			}
			else if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
			{
				if (!unk_0x5AF4A1178852EEA9(Local_317.f_64[iVar0]))
				{
					unk_0xD8BA6491440C0DA6(Local_317.f_64[iVar0], Local_317.f_42[iVar0], 0, 0, -1);
					Local_317.f_53[iVar0] = 0;
				}
			}
		}
		else if (unk_0xD361727124133DF3(Local_317.f_75[iVar0]))
		{
			unk_0xA0A65B537B1F11EC(&(Local_317.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0xFD68187442384158(uLocal_407[iVar0]) && !unk_0xE5D56342B0FF1D0D(uLocal_407[iVar0])) && unk_0xFD68187442384158(uLocal_403[iVar0])) && !unk_0xE5D56342B0FF1D0D(uLocal_403[iVar0]))
		{
			Var1 = { unk_0x0CAFB9D38494283D(uLocal_407[iVar0], 0f, 3.5f, -2f) };
			unk_0x16197725DCDCCA20(uLocal_407[iVar0], Var1);
			unk_0xE0E038A4E5C7727B(uLocal_403[iVar0], 0, 0);
			if (iLocal_411[iVar0])
			{
				if (!func_25())
				{
					if (!unk_0xE5D56342B0FF1D0D(uLocal_403[iVar0]))
					{
						iLocal_411[iVar0] = 0;
						unk_0xF0B3AB259115809C(uLocal_403[iVar0], 0, 0);
					}
				}
			}
			else if (func_25())
			{
				if (!unk_0xE5D56342B0FF1D0D(uLocal_403[iVar0]))
				{
					iLocal_411[iVar0] = 1;
					unk_0xF0B3AB259115809C(uLocal_403[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_415 > 20f)
	{
		bLocal_416 = false;
	}
	else if (fLocal_415 < -20f)
	{
		bLocal_416 = true;
	}
	if (bLocal_416)
	{
		fLocal_415 = (fLocal_415 + 0.25f);
	}
	else
	{
		fLocal_415 = (fLocal_415 - 0.25f);
	}
	if (unk_0xFD68187442384158(uLocal_403[0]))
	{
		unk_0x248DC16118AE5035(uLocal_403[0], (53f + fLocal_415));
	}
	if (unk_0xFD68187442384158(uLocal_403[1]))
	{
		unk_0x248DC16118AE5035(uLocal_403[1], (13f + fLocal_415));
	}
	if (unk_0xFD68187442384158(uLocal_403[2]))
	{
		unk_0x248DC16118AE5035(uLocal_403[2], (250f + fLocal_415));
	}
}

void func_28(int iParam0)
{
	if (!Local_317.f_53[iParam0])
	{
		unk_0x164444F49EF1FE97(Local_317.f_64[iParam0], unk_0x507DA4994C3D8EBD(), -1, 0);
		unk_0x2F82BB8951419B6D(Local_317.f_64[iParam0], 1000f);
		unk_0xDC06C29AA1C2E756(Local_317.f_64[iParam0]);
		Local_317.f_53[iParam0] = 1;
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
		{
			unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 3, 0);
			unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
		}
	}
}

bool func_29(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_30(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	}
	if (!unk_0xE5D56342B0FF1D0D(*uParam0))
	{
		Var3 = { unk_0xBF1B13057E5119A4(*uParam0, 1) };
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var3) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_31()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) >= 2 || func_12(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 4, 150, 0))
		{
			if (unk_0x56775AA79E85CAD9("PRISON_ALARMS"))
			{
				unk_0xB2FB4B4EB898466F("PRISON_ALARMS", 0);
			}
		}
		else
		{
			unk_0xA6765DB2EFC1926A("PRISON_ALARMS", 0);
		}
	}
}

void func_32()
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, 1, 0))
		{
			func_55(&Local_127, 2);
		}
		else
		{
			func_53(&Local_127, 2);
		}
	}
	if (iLocal_48 > 20)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			if (unk_0x7E94D7B1F9207611(unk_0x507DA4994C3D8EBD()))
			{
				if (func_12(Var0, 4, 150, 0))
				{
					func_52(4, 1);
					if (!func_11(&uLocal_141))
					{
						func_8(&uLocal_141);
					}
					if (!bLocal_117)
					{
						if (unk_0xFD68187442384158(iLocal_125) && !unk_0xE5D56342B0FF1D0D(iLocal_125))
						{
							func_51(&uLocal_144, 8, iLocal_125, "TANNOY", 0, 1);
							if (func_35(&uLocal_144, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_105 = true;
								bLocal_117 = true;
							}
						}
					}
				}
				else
				{
					func_52(4, 0);
					if (func_11(&uLocal_141))
					{
						func_9(&uLocal_141);
					}
					bLocal_105 = false;
				}
			}
			else
			{
				func_52(4, 0);
				if (func_11(&uLocal_141))
				{
					func_9(&uLocal_141);
				}
				bLocal_105 = false;
			}
			if (bLocal_105)
			{
				if (func_11(&uLocal_141))
				{
					if (func_5(&uLocal_141) > 10f)
					{
						if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) < 4)
						{
							unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 4, 0);
							unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
							bLocal_118 = true;
							bLocal_105 = false;
							func_52(4, 0);
						}
					}
				}
			}
			if (!bLocal_102)
			{
				if (bLocal_117)
				{
					if (!func_34())
					{
						if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
						{
							unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_102 = true;
						}
					}
				}
				else if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
				{
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_102 = true;
				}
			}
			if (!bLocal_105)
			{
				if (func_12(Var0, 4, 100, 0))
				{
					if (!bLocal_102)
					{
						if (bLocal_117)
						{
							if (!func_34())
							{
								unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_102 = true;
							}
						}
						else
						{
							unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x29DEF50C16608986("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_102 = true;
						}
					}
					func_33();
				}
			}
			iLocal_48 = 0;
		}
	}
	iLocal_48++;
}

void func_33()
{
	int iVar0;
	
	if (!iLocal_101)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uLocal_51[iVar0] = unk_0x73E83232BB98D800(Local_64[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_101 = 1;
	}
}

int func_34()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

bool func_35(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_36(sParam2, iParam3, 0);
}

int func_36(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_49();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_48(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_47();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_41();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_40())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_39())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_38();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_37();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_49();
	}
	return 0;
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_38()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_39()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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

void func_41()
{
	if (func_29(14))
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
		Global_14393 = func_42();
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

var func_42()
{
	func_43();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_43()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_46(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_45(unk_0x507DA4994C3D8EBD());
			if (func_44(iVar0) && (!func_29(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_44(Global_97173.f_1729.f_539.f_3213))
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

bool func_44(int iParam0)
{
	return iParam0 < 3;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_44(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_49()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_51(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

void func_52(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&Global_24601, iParam0);
	StringCopy(&(Global_24602[iParam0 /*6*/]), unk_0x3ED5FA3F61EC9E68(), 24);
	Global_24657[iParam0] = iParam1;
}

void func_53(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_57()
{
	unk_0xFF467904A8A12BBE(joaat("s_m_m_security_01"));
	unk_0xFF467904A8A12BBE(joaat("s_m_m_prisguard_01"));
}

void func_58()
{
	func_60();
	func_59();
}

void func_59()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFD68187442384158(Local_628.f_27[iVar0]) && !unk_0xE5D56342B0FF1D0D(Local_628.f_27[iVar0]))
		{
			unk_0x3F9EDC2D18464273(Local_628.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x94A4D627D865396B(Local_628.f_27[iVar0], 1000);
			unk_0xE440546F94B26235(Local_628.f_27[iVar0], -183807561);
			unk_0x463A4BE5AA0887B6(Local_628.f_27[iVar0], 0);
			unk_0x2DC5B31EBB810396(Local_628.f_27[iVar0], 1);
			if (!unk_0x9F94F2CFDCA78C55(Local_628.f_27[iVar0]))
			{
				unk_0xD8BA6491440C0DA6(Local_628.f_27[iVar0], Local_628.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_60()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xFD68187442384158(Local_628.f_27[iVar0]))
		{
			Local_628.f_27[iVar0] = unk_0x7B88529CAE3B7F15(6, joaat("s_m_m_prisguard_01"), Local_628[iVar0 /*3*/], Local_628.f_10[iVar0], 1, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	Var1 = { unk_0xDA0070A0FA486D72(Local_628[1 /*3*/], Local_628.f_10[1], -2f, 0f, 0f) };
	Var4 = { unk_0xDA0070A0FA486D72(Local_628[1 /*3*/], Local_628.f_10[1], -1f, 0f, 0f) };
	Var7 = { unk_0xDA0070A0FA486D72(Local_628[2 /*3*/], Local_628.f_10[2], 1f, 0f, 0f) };
	Var10 = { unk_0xDA0070A0FA486D72(Local_628[2 /*3*/], Local_628.f_10[2], -1f, 0f, 0f) };
	Local_628.f_31[0] = unk_0x7B88529CAE3B7F15(6, joaat("s_m_m_prisguard_01"), Var1, Local_628.f_10[1], 1, 1);
	Local_628.f_31[1] = unk_0x7B88529CAE3B7F15(6, joaat("s_m_m_prisguard_01"), Var4, Local_628.f_10[1], 1, 1);
	Local_628.f_31[2] = unk_0x7B88529CAE3B7F15(6, joaat("s_m_m_prisguard_01"), Var7, Local_628.f_10[2], 1, 1);
	Local_628.f_31[3] = unk_0x7B88529CAE3B7F15(6, joaat("s_m_m_prisguard_01"), Var10, Local_628.f_10[2], 1, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFD68187442384158(Local_628.f_31[iVar0]))
		{
			unk_0x3F9EDC2D18464273(Local_628.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x94A4D627D865396B(Local_628.f_31[iVar0], 500);
			unk_0xE440546F94B26235(Local_628.f_31[iVar0], -183807561);
			unk_0xF35ADFAA525ADE7B(Local_628.f_31[iVar0], 0);
			unk_0x2DC5B31EBB810396(Local_628.f_31[iVar0], 1);
		}
		iVar0++;
	}
	unk_0xFF467904A8A12BBE(joaat("s_m_m_prisguard_01"));
}

void func_61()
{
	if (bLocal_573)
	{
		iLocal_568 = unk_0x546974B676313326(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1);
		unk_0xE0E038A4E5C7727B(iLocal_568, 1, 1);
		unk_0x1AFF0858378FA21B(iLocal_568);
		unk_0xB13ED1AA2B45F4BE(iLocal_568, 0f, 0f, 10f);
		unk_0x94A4D627D865396B(iLocal_568, 500);
		if (func_25())
		{
			bLocal_571 = true;
			unk_0xF0B3AB259115809C(iLocal_568, 1, 0);
		}
		iLocal_569 = unk_0x7B88529CAE3B7F15(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
		unk_0x11460EBE0487B44F(iLocal_569, iLocal_568, -1);
		if (!unk_0xE5D56342B0FF1D0D(iLocal_568))
		{
			unk_0xFB79A537A7D76B64(iLocal_568, 101, "PrisonHeli", 1);
		}
		unk_0xFF467904A8A12BBE(joaat("polmav"));
	}
}

void func_62()
{
	func_67();
	func_66();
	func_65();
	func_64();
	func_63();
}

void func_63()
{
	Local_419[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_419[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_419[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_419[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0xD322713087350CD6("miss_Tower_01");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
	Local_419[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_419[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_419[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_419[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0xD322713087350CD6("miss_Tower_02");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
	Local_419[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_419[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_419[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_419[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0xD322713087350CD6("miss_Tower_03");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
	Local_419[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_419[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_419[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_419[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0xD322713087350CD6("miss_Tower_04");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
	Local_419[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_419[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_419[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_419[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0xD322713087350CD6("miss_Tower_05");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
	Local_419[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_419[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_419[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_419[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0xD322713087350CD6("miss_Tower_06");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
	Local_419[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_419[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_419[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_419[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0xD322713087350CD6("miss_Tower_07");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
	Local_419[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_419[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_419[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_419[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0xD322713087350CD6("miss_Tower_08");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
	Local_419[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_419[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_419[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_419[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0xD322713087350CD6("miss_Tower_10");
	unk_0xD14268664591381D(0, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(1, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(2, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0xD14268664591381D(3, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x4D3E68F73B727E49(5000, 10000));
	unk_0x9C1008B9C67EDBE2(0, 1);
	unk_0x9C1008B9C67EDBE2(1, 2);
	unk_0x9C1008B9C67EDBE2(2, 3);
	unk_0x9C1008B9C67EDBE2(3, 0);
	unk_0xB4D96C014CCD17CF();
	unk_0xDFCC6E6692869DC3();
}

void func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFD68187442384158(Local_317.f_64[iVar0]) && !unk_0xE5D56342B0FF1D0D(Local_317.f_64[iVar0]))
		{
			unk_0xE440546F94B26235(Local_317.f_64[iVar0], -183807561);
			unk_0x7FEDD088E489CE41(Local_317.f_64[iVar0], 132, 1);
			unk_0x491EB5C6E2E1F2DC(Local_317.f_64[iVar0], 300f, 10);
			unk_0x2F82BB8951419B6D(Local_317.f_64[iVar0], 1000f);
			unk_0x6ED0D84DD08E49FE(Local_317.f_64[iVar0], 1000f);
			unk_0x9A9059D04284280B(Local_317.f_64[iVar0], 1000f);
			unk_0x0E53A759D522CA83(Local_317.f_64[iVar0], 2);
			unk_0x3A1E687904400847(Local_317.f_64[iVar0], 13, 1);
			unk_0x3A1E687904400847(Local_317.f_64[iVar0], 0, 0);
			unk_0x9B02246888A617A8(Local_317.f_64[iVar0], 1);
			unk_0x48FFA098B5BE8ED0(Local_317.f_64[iVar0], 1);
			unk_0xB317E9B67CA4E777(Local_317.f_64[iVar0], 0f);
			unk_0xA1E4BA3B17C6D931(Local_317.f_64[iVar0], 1);
			unk_0xE7962295F4C99484(Local_317.f_64[iVar0], 20);
			unk_0xD149F8A3FE6B4956(Local_317.f_64[iVar0], 2);
			unk_0x3A1E687904400847(Local_317.f_64[iVar0], 23, 0);
			unk_0x3F9EDC2D18464273(Local_317.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
			unk_0x94A4D627D865396B(Local_317.f_64[iVar0], 1000);
			unk_0x2DC5B31EBB810396(Local_317.f_64[iVar0], 1);
			unk_0x2F82BB8951419B6D(Local_317.f_64[iVar0], 1000f);
			if (!unk_0x9F94F2CFDCA78C55(Local_317.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0xD62B753EF0EFAE9B(Local_317.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0xD8BA6491440C0DA6(Local_317.f_64[iVar0], Local_317.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_65()
{
	int iVar0;
	
	if (!unk_0x23A9305227426F8B(1823.845f, 2621.267f, 57f, 0.5f))
	{
		uLocal_403[0] = unk_0x546974B676313326(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, 1);
		if (unk_0xFD68187442384158(uLocal_403[0]) && !unk_0xE5D56342B0FF1D0D(uLocal_403[0]))
		{
			uLocal_407[0] = unk_0xC68FBD37098CE438(uLocal_403[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x843E25883D2C32A3(uLocal_407[0], 0);
			unk_0xE440546F94B26235(uLocal_407[0], iLocal_315);
			unk_0xCC8C6873CFB069A4(uLocal_403[0], 0, 0);
			unk_0x07E0AE075425AA06(uLocal_403[0], 0);
			unk_0x843E25883D2C32A3(uLocal_403[0], 0);
			unk_0x479E7EEEBDEE245D(uLocal_403[0], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x23A9305227426F8B(1761.418f, 2410.378f, 61f, 0.5f))
	{
		uLocal_403[1] = unk_0x546974B676313326(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, 1);
		if (unk_0xFD68187442384158(uLocal_403[1]) && !unk_0xE5D56342B0FF1D0D(uLocal_403[1]))
		{
			uLocal_407[1] = unk_0xC68FBD37098CE438(uLocal_403[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x843E25883D2C32A3(uLocal_407[1], 0);
			unk_0xE440546F94B26235(uLocal_407[1], iLocal_315);
			unk_0xCC8C6873CFB069A4(uLocal_403[1], 0, 0);
			unk_0x07E0AE075425AA06(uLocal_403[1], 0);
			unk_0x843E25883D2C32A3(uLocal_403[1], 0);
			unk_0x479E7EEEBDEE245D(uLocal_403[1], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x23A9305227426F8B(1534.635f, 2585.162f, 61f, 0.5f))
	{
		uLocal_403[2] = unk_0x546974B676313326(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, 1);
		if (unk_0xFD68187442384158(uLocal_403[2]) && !unk_0xE5D56342B0FF1D0D(uLocal_403[2]))
		{
			uLocal_407[2] = unk_0xC68FBD37098CE438(uLocal_403[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x843E25883D2C32A3(uLocal_407[2], 0);
			unk_0xE440546F94B26235(uLocal_407[2], iLocal_315);
			unk_0xCC8C6873CFB069A4(uLocal_403[2], 0, 0);
			unk_0x07E0AE075425AA06(uLocal_403[2], 0);
			unk_0x843E25883D2C32A3(uLocal_403[2], 0);
			unk_0x479E7EEEBDEE245D(uLocal_403[2], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0xFD68187442384158(uLocal_407[iVar0]) && !unk_0xE5D56342B0FF1D0D(uLocal_407[iVar0])) && !unk_0xE5D56342B0FF1D0D(uLocal_403[iVar0]))
		{
			if (func_25())
			{
				iLocal_411[iVar0] = 1;
				unk_0xF0B3AB259115809C(uLocal_403[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xFD68187442384158(Local_317.f_64[iVar0]))
		{
			Local_317.f_64[iVar0] = unk_0x7B88529CAE3B7F15(6, joaat("s_m_m_prisguard_01"), Local_317[iVar0 /*3*/], Local_317.f_31[iVar0], 1, 1);
			unk_0xFF467904A8A12BBE(joaat("s_m_m_prisguard_01"));
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
}

void func_67()
{
	Local_317[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_317[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_317[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_317[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_317[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_317[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_317[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_317[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_317[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_317[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_317.f_31[0] = 248.9733f;
	Local_317.f_31[1] = 45.8793f;
	Local_317.f_31[2] = 186.3656f;
	Local_317.f_31[3] = 313.5206f;
	Local_317.f_31[4] = 95.9574f;
	Local_317.f_31[5] = 289.3531f;
	Local_317.f_31[6] = 13.7511f;
	Local_317.f_31[7] = 0f;
	Local_317.f_31[8] = 208.5786f;
	Local_317.f_31[9] = 280.9389f;
}

int func_68()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0xB16E5DBDEC4BBDEB(Local_628.f_14[iVar0]))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	return 1;
}

int func_69()
{
	if (bLocal_617)
	{
		if (!unk_0xD291857D0C9C7FEC(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xB16E5DBDEC4BBDEB(Local_317.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xD291857D0C9C7FEC(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0xD291857D0C9C7FEC(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_71()
{
	if (bLocal_573)
	{
		if (!unk_0xD291857D0C9C7FEC(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0xD3536FF14115DA03(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_72()
{
	if (!unk_0xD291857D0C9C7FEC(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0xD291857D0C9C7FEC(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0xD291857D0C9C7FEC(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_73()
{
	int iVar0;
	
	func_74();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0x909E9D811F9F1AAE(Local_628.f_14[iVar0]);
		iVar0++;
	}
}

void func_74()
{
	Local_628[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_628[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_628[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_628.f_10[0] = 0f;
	Local_628.f_10[1] = 0f;
	Local_628.f_10[2] = 198.4323f;
	Local_628.f_14[0] = "PatrolGuard02";
	Local_628.f_14[1] = "PatrolGuard03";
	Local_628.f_14[2] = "PatrolGuard04";
}

void func_75()
{
	int iVar0;
	
	Local_317.f_42[0] = "TowerGuard01";
	Local_317.f_42[1] = "TowerGuard02";
	Local_317.f_42[2] = "TowerGuard03";
	Local_317.f_42[3] = "TowerGuard04";
	Local_317.f_42[4] = "TowerGuard05";
	Local_317.f_42[5] = "TowerGuard06";
	Local_317.f_42[6] = "TowerGuard07";
	Local_317.f_42[7] = "TowerGuard08";
	Local_317.f_42[8] = "TowerGuard09";
	Local_317.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0x909E9D811F9F1AAE(Local_317.f_42[iVar0]);
		iVar0++;
	}
	unk_0xCBE6AC5010E5CE5C(joaat("polmav"));
	unk_0xCBE6AC5010E5CE5C(joaat("s_m_m_prisguard_01"));
}

void func_76()
{
	bLocal_573 = false;
	if (func_25())
	{
		iLocal_574 = (unk_0x4D3E68F73B727E49(0, 65535) % 2);
		if (iLocal_574 == 0)
		{
			bLocal_573 = true;
			unk_0xCBE6AC5010E5CE5C(joaat("polmav"));
			unk_0x27859D80F345E855(101, "PrisonHeli");
		}
		else
		{
			bLocal_573 = false;
		}
	}
}

void func_77()
{
	unk_0xCBE6AC5010E5CE5C(joaat("s_m_m_security_01"));
	unk_0xCBE6AC5010E5CE5C(joaat("s_m_m_prisguard_01"));
	unk_0xCBE6AC5010E5CE5C(joaat("polmav"));
}

void func_78()
{
	iLocal_314 = iLocal_314;
	iLocal_314 = 0;
	func_79();
	func_32();
	Local_127.f_4 = 75;
	Local_127.f_6 = 15;
	unk_0x1CD43CFDD3B0B347(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0x1CD43CFDD3B0B347(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	unk_0x46B6351EE89452C8("Prison_Guards", &iLocal_315);
	unk_0x46B6351EE89452C8("Prison_Prisoners", &iLocal_316);
	unk_0xCA4EA7D4F6DCCD43(2, iLocal_315, iLocal_316);
	unk_0xCA4EA7D4F6DCCD43(2, iLocal_316, iLocal_315);
	unk_0xCA4EA7D4F6DCCD43(1, iLocal_315, joaat("COP"));
	unk_0xCA4EA7D4F6DCCD43(1, joaat("COP"), iLocal_315);
	unk_0xCA4EA7D4F6DCCD43(3, joaat("player"), iLocal_316);
	unk_0xCA4EA7D4F6DCCD43(3, iLocal_316, joaat("player"));
}

void func_79()
{
	Local_64[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	Local_64[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	Local_64[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	Local_64[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	Local_64[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	Local_64[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	Local_64[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	Local_64[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	Local_64[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	Local_64[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	Local_64[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	Local_64[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_80()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if ((unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, 1, 0) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, 1, 0)) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, 1, 0))
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
			{
				unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 2, 0);
				unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
			}
		}
	}
	if (!iLocal_103)
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, 0, 0))
			{
				if (unk_0xE77D87B24BECF3E0(unk_0xAF65E5A58BE87D95()))
				{
					unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 4, 0);
					unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
					unk_0xCA4EA7D4F6DCCD43(5, joaat("player"), -183807561);
					unk_0xCA4EA7D4F6DCCD43(5, -183807561, joaat("player"));
					iLocal_103 = 1;
				}
				if ((unk_0x0982F2F40B035E77(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !unk_0xA0DC5B4F5EADB551(unk_0xAF65E5A58BE87D95())) || (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()) && !unk_0xE77D87B24BECF3E0(unk_0xAF65E5A58BE87D95())))
				{
					unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
					unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 1, 0);
					unk_0xCA4EA7D4F6DCCD43(5, joaat("player"), -183807561);
					unk_0xCA4EA7D4F6DCCD43(5, -183807561, joaat("player"));
					iLocal_103 = 1;
				}
			}
		}
	}
}

void func_81()
{
	int iVar0;
	
	func_87();
	func_86();
	func_85();
	func_84();
	func_83();
	func_82();
	unk_0xA6765DB2EFC1926A("PRISON_ALARMS", 1);
	if (iLocal_103)
	{
		unk_0xCA4EA7D4F6DCCD43(2, joaat("player"), -183807561);
		unk_0xCA4EA7D4F6DCCD43(2, -183807561, joaat("player"));
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0x49977BD3DD29F214(uLocal_51[iVar0]))
		{
			unk_0x8939E31C143EF145(uLocal_51[iVar0]);
		}
		iVar0++;
	}
	unk_0x1CD43CFDD3B0B347(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0x1CD43CFDD3B0B347(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	unk_0x883793591E631A3B();
}

void func_82()
{
	if (unk_0xFD68187442384158(iLocal_123))
	{
		unk_0xB67623A401171555(&iLocal_123);
	}
	if (unk_0xFD68187442384158(iLocal_125))
	{
		unk_0xCA4DD92F1F2931F3(&iLocal_125);
	}
	if (unk_0xFD68187442384158(iLocal_124))
	{
		unk_0xB67623A401171555(&iLocal_124);
	}
	if (unk_0xFD68187442384158(iLocal_126))
	{
		unk_0xCA4DD92F1F2931F3(&iLocal_126);
	}
}

void func_83()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFD68187442384158(Local_628.f_27[iVar0]))
		{
			if (unk_0xD361727124133DF3(Local_628.f_36[iVar0]))
			{
				unk_0xA0A65B537B1F11EC(&(Local_628.f_36[iVar0]));
			}
			if (unk_0x19F2D2C58150C825(Local_628.f_27[iVar0]))
			{
				unk_0x8019BB3BA236A900(&(Local_628.f_27[iVar0]));
			}
			else
			{
				unk_0xCA4DD92F1F2931F3(&(Local_628.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFD68187442384158(Local_628.f_31[iVar0]))
		{
			if (unk_0xD361727124133DF3(Local_628.f_40[iVar0]))
			{
				unk_0xA0A65B537B1F11EC(&(Local_628.f_40[iVar0]));
			}
			if (unk_0x19F2D2C58150C825(Local_628.f_31[iVar0]))
			{
				unk_0x8019BB3BA236A900(&(Local_628.f_31[iVar0]));
			}
			else
			{
				unk_0xCA4DD92F1F2931F3(&(Local_628.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_84()
{
	if (unk_0xD361727124133DF3(uLocal_620))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_620);
	}
	if (unk_0xFD68187442384158(uLocal_618))
	{
		unk_0x10EA498723DC5A09(&iLocal_618);
	}
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0xFD68187442384158(uLocal_575[iVar0]))
		{
			if (unk_0xD361727124133DF3(uLocal_596[iVar0]))
			{
				unk_0xA0A65B537B1F11EC(&(uLocal_596[iVar0]));
			}
			unk_0x8019BB3BA236A900(&(uLocal_575[iVar0]));
		}
		iVar0++;
	}
}

void func_86()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFD68187442384158(uLocal_403[iVar0]))
		{
			unk_0x10EA498723DC5A09(&(uLocal_403[iVar0]));
		}
		if (unk_0xFD68187442384158(uLocal_407[iVar0]))
		{
			unk_0x8019BB3BA236A900(&(uLocal_407[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFD68187442384158(Local_317.f_64[iVar0]))
		{
			if (unk_0xD361727124133DF3(Local_317.f_75[iVar0]))
			{
				unk_0xA0A65B537B1F11EC(&(Local_317.f_75[iVar0]));
			}
			if (unk_0x19F2D2C58150C825(Local_317.f_64[iVar0]))
			{
				unk_0x8019BB3BA236A900(&(Local_317.f_64[iVar0]));
			}
			else
			{
				unk_0xCA4DD92F1F2931F3(&(Local_317.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_87()
{
	if (unk_0xD361727124133DF3(uLocal_570))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_570);
	}
	if (unk_0xFD68187442384158(iLocal_568))
	{
		if (unk_0x19F2D2C58150C825(iLocal_568))
		{
			unk_0x10EA498723DC5A09(&iLocal_568);
			unk_0x8019BB3BA236A900(&iLocal_569);
		}
		else
		{
			func_88(&iLocal_568, &iLocal_569);
			unk_0xB67623A401171555(&iLocal_568);
		}
	}
}

void func_88(var uParam0, var uParam1)
{
	if (((unk_0xFD68187442384158(*uParam0) && unk_0xFD68187442384158(*uParam1)) && !unk_0xE5D56342B0FF1D0D(*uParam0)) && !unk_0xE5D56342B0FF1D0D(*uParam1))
	{
		if (unk_0xF97DDB74A78F6500(*uParam0))
		{
			if (unk_0x8B3A54875054E60A(*uParam0))
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					unk_0x8276BF488762405A(*uParam1, *uParam0, 0, 0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 8, 50f, -1f, 30f, 100, 50);
				}
			}
		}
	}
}


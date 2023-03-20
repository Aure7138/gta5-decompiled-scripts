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
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	struct<62> Local_36 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 16;
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
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	char[] cLocal_273[8] = 0;
	var uLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280[2] = { 0, 0 };
	var uLocal_283[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_290[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_297[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_271 = -1;
	iLocal_272 = -1;
	StringCopy(&cLocal_273, "PMGAUD", 8);
	iLocal_275 = -1;
	iLocal_276 = -1;
	unk_0xC4301E5121A0ED73(true);
	if (unk_0xC968670BFACE42D9(3))
	{
		func_56(2);
		func_55();
	}
	func_48();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_47())
		{
			iLocal_272 = -1;
		}
		else if (iLocal_272 == -1)
		{
			iLocal_272 = unk_0x9CD27B0045628463();
		}
		func_1();
	}
}

void func_1()
{
	struct<2> Var0;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	switch (iLocal_35)
	{
		case 0:
			unk_0x71A78003C8E71424("PGANG", 0);
			if (unk_0x02245FE4BED318B8(0))
			{
				iVar4 = 0;
				while (iVar4 <= 5)
				{
					if (unk_0x7239B21A38F536BA(Global_95887.f_225[iVar4]))
					{
						uLocal_283[iVar4] = Global_95887.f_225[iVar4];
						Global_95887.f_225[iVar4] = 0;
						unk_0xAD738C3085FE7E11(uLocal_283[iVar4], true, true);
						if (iLocal_306 == 0)
						{
							iLocal_306 = unk_0x9F47B058362C84B5(uLocal_283[iVar4]);
						}
						if (!unk_0x84A2DD9AC37C35C1(uLocal_283[iVar4]))
						{
							unk_0xC80A74AC829DDD92(uLocal_283[iVar4], iLocal_304);
							unk_0x4D9CA1009AFBD057(uLocal_283[iVar4], 1);
							unk_0x3C606747B23E497B(uLocal_283[iVar4], 0);
							unk_0x7AEFB85C1D49DEB6(uLocal_283[iVar4], 5);
							unk_0x0703B9079823DA4A(uLocal_283[iVar4], 1);
							func_46(uLocal_283[iVar4], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_105 == 0)
							{
								unk_0x4D9CA1009AFBD057(uLocal_283[iVar4], 2);
							}
							uLocal_297[iVar4] = func_43(uLocal_283[iVar4], 1, 145);
						}
					}
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= 1)
				{
					if (unk_0x7239B21A38F536BA(Global_95887.f_222[iVar4]))
					{
						uLocal_280[iVar4] = Global_95887.f_222[iVar4];
						Global_95887.f_222[iVar4] = 0;
						unk_0xAD738C3085FE7E11(uLocal_280[iVar4], true, true);
						if (iLocal_305 == 0)
						{
							iLocal_305 = unk_0x9F47B058362C84B5(uLocal_280[iVar4]);
						}
					}
					iVar4++;
				}
				StringCopy(&Var0, "START_", 16);
				StringConCat(&Var0, &(Local_36.f_61), 16);
				func_42(&Var0, 7500, 1);
				iLocal_35++;
			}
			break;
		
		case 1:
			bVar6 = true;
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (!bVar5)
				{
					if (uLocal_290[iVar4] > 0)
					{
						bVar5 = true;
					}
				}
				if (unk_0x7239B21A38F536BA(uLocal_283[iVar4]) && !unk_0x84A2DD9AC37C35C1(uLocal_283[iVar4]))
				{
					bVar6 = false;
				}
				iVar4++;
			}
			if (bVar5)
			{
				unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
			}
			if (bVar6)
			{
				if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (!iLocal_277)
					{
						func_42("LOSE_WANTED", 7500, 1);
						iLocal_277 = 1;
					}
				}
				else
				{
					func_41();
				}
			}
			break;
	}
	switch (iLocal_105)
	{
		case 1:
			func_39();
			break;
		
		case 0:
			func_9();
			break;
	}
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		if (unk_0x7239B21A38F536BA(uLocal_283[iVar4]))
		{
			if (unk_0x84A2DD9AC37C35C1(uLocal_283[iVar4]))
			{
				unk_0x2595DD4236549CE3(&(uLocal_283[iVar4]));
			}
			else if (func_6(uLocal_283[iVar4], func_7(func_8()), 1) > 100f && func_5(unk_0xD80958FC74E988A6(), uLocal_283[iVar4], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_279 && func_6(uLocal_283[iVar4], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
				{
					if (!iLocal_278)
					{
						StringCopy(&Var0, "ESC_", 16);
						StringConCat(&Var0, &(Local_36.f_61), 16);
						func_42(&Var0, 7500, 1);
						iLocal_278 = 1;
					}
				}
			}
		}
		if (unk_0xA6DB27D19ECBB7DA(uLocal_297[iVar4]))
		{
			if (!unk_0x7239B21A38F536BA(uLocal_283[iVar4]) || unk_0x84A2DD9AC37C35C1(uLocal_283[iVar4]))
			{
				unk_0x86A652570E5F25DD(&(uLocal_297[iVar4]));
			}
		}
		iVar4++;
	}
}

int func_2()
{
	if (unk_0x7984C03AA5CC2F41())
	{
		return 0;
	}
	if (unk_0xAD6DACA4BA53E0A4())
	{
		if (func_47() && !func_3())
		{
			return 0;
		}
	}
	return 1;
}

int func_3()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	func_56(2);
	func_55();
}

float func_5(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

float func_6(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

Vector3 func_7(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()
{
	return Global_95887.f_20;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x7239B21A38F536BA(uLocal_283[iVar0]) && !unk_0x84A2DD9AC37C35C1(uLocal_283[iVar0]))
		{
			switch (uLocal_290[iVar0])
			{
				case 0:
					if (func_37(iVar0))
					{
						iLocal_271 = 0;
						uLocal_290[iVar0]++;
					}
					break;
				
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (unk_0x7239B21A38F536BA(uLocal_283[iVar1]) && !unk_0x84A2DD9AC37C35C1(uLocal_283[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_290[iVar0]++;
					}
					break;
				
				case 2:
					break;
			}
			if (uLocal_290[iVar0] > 0)
			{
				iVar3 = 0;
				unk_0x3A87E44BB9A01D54(uLocal_283[iVar0], &iVar3, true);
				if (iVar3 == joaat("weapon_molotov"))
				{
					if (unk_0x8DECB02F88F428BC(uLocal_283[iVar0], joaat("weapon_microsmg"), false))
					{
						unk_0xADF692B254977C0C(uLocal_283[iVar0], joaat("weapon_microsmg"), true);
					}
					else
					{
						unk_0xBF0FD6E56C964FCB(uLocal_283[iVar0], joaat("weapon_microsmg"), -1, true, true);
					}
				}
			}
			switch (uLocal_290[iVar0])
			{
				case 0:
					func_33(uLocal_283[iVar0], Local_36[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (!func_32(uLocal_283[iVar0], 780511057, 1))
					{
						unk_0xF166E48407BAC484(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 0, 16);
					}
					break;
				
				case 2:
					if (!func_32(uLocal_283[iVar0], 1805844857, 1))
					{
						unk_0x22B0D0E37CCB840D(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 1000f, -1, true, false);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_271)
	{
		case 0:
			if (func_31())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x9072C8B49907BFAD(uLocal_283[iVar4]))
				{
					func_28(uLocal_283[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 1:
			if (func_31())
			{
				cVar5 = { func_27("START") };
				if (func_10(&uLocal_106, &cLocal_273, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 2:
			if (func_31())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x9072C8B49907BFAD(uLocal_283[iVar4]))
				{
					func_28(uLocal_283[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 3:
			if ((func_31() && (unk_0x9CD27B0045628463() - iLocal_272) > 3000) && !unk_0x9072C8B49907BFAD(unk_0xD80958FC74E988A6()))
			{
				func_28(unk_0xD80958FC74E988A6(), "BLIND_RAGE", 10);
				iLocal_271++;
			}
			break;
		
		case 4:
			if (func_31() && (unk_0x9CD27B0045628463() - iLocal_272) > 1000)
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x9072C8B49907BFAD(uLocal_283[iVar4]))
				{
					if (uLocal_290[iVar4] == 2)
					{
						func_28(uLocal_283[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
					else
					{
						func_28(uLocal_283[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD79DEEFB53455EBA(false);
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
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_23();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_16();
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_14())
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_12();
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
		func_25();
	}
	return 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_13()
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_14()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_16()
{
	if (func_22(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_17();
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

int func_17()
{
	func_18();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_21(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_20(unk_0xD80958FC74E988A6());
			if (func_19(iVar0) && (!func_22(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_19(Global_97173.f_1729.f_539.f_3213))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_25()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_27(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_17())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

void func_28(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_29(iParam2), 1);
}

int func_29(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_30()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0x7239B21A38F536BA(uLocal_283[iVar1]) && !unk_0x84A2DD9AC37C35C1(uLocal_283[iVar1]))
		{
			fVar3 = func_5(uLocal_283[iVar1], unk_0xD80958FC74E988A6(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_31()
{
	if (func_47())
	{
		return 0;
	}
	if (unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 0;
		}
	}
	return 1;
}

int func_32(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x77F1BEB8863288D5(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_33(int iParam0, struct<3> Param1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x3A87E44BB9A01D54(iParam0, &iVar0, true);
	if (!func_36(Param1))
	{
		unk_0x3A87E44BB9A01D54(iParam0, &iVar1, true);
		if (iVar0 == joaat("weapon_molotov"))
		{
			if (iVar1 != joaat("weapon_molotov"))
			{
				unk_0xADF692B254977C0C(iParam0, joaat("weapon_molotov"), true);
			}
			if (unk_0x77F1BEB8863288D5(iParam0, 242628503) != 1 && unk_0x77F1BEB8863288D5(iParam0, 242628503) != 0)
			{
				unk_0xE8854A4326B9E12B(&iVar2);
				unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 6000));
				unk_0x7285951DBF6B5A51(0, func_34(Param1, 1f));
				unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 6000));
				unk_0x7285951DBF6B5A51(0, func_34(Param1, 1f));
				unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 6000));
				unk_0x7285951DBF6B5A51(0, func_34(Param1, 1f));
				unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 6000));
				unk_0x7285951DBF6B5A51(0, func_34(Param1, 1f));
				unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 6000));
				unk_0x7285951DBF6B5A51(0, func_34(Param1, 1f));
				unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 6000));
				unk_0x7285951DBF6B5A51(0, func_34(Param1, 1f));
				unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 6000));
				unk_0x7285951DBF6B5A51(0, func_34(Param1, 1f));
				unk_0x919BE13EED931959(0, unk_0xD53343AA4FB7DD28(1000, 6000));
				unk_0x7285951DBF6B5A51(0, func_34(Param1, 1f));
				unk_0x58C70CF3A41E4AE7(iVar2, true);
				unk_0x39E72BC99E6360CB(iVar2);
				unk_0x5ABA3986D90D8A3B(iParam0, iVar2);
				unk_0x3841422E9C488D8C(&iVar2);
			}
		}
		else if (unk_0x77F1BEB8863288D5(iParam0, -653332088) != 1 && unk_0x77F1BEB8863288D5(iParam0, -653332088) != 0)
		{
			unk_0x46A6CC01E0826106(iParam0, Param1, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
		}
	}
	else if (unk_0x77F1BEB8863288D5(iParam0, -982327190) != 1 && unk_0x77F1BEB8863288D5(iParam0, -982327190) != 0)
	{
		unk_0x919BE13EED931959(iParam0, -1);
	}
}

Vector3 func_34(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0x313CE5879CEB6FCD(-1f, 1f), unk_0x313CE5879CEB6FCD(-1f, 1f), unk_0x313CE5879CEB6FCD(-1f, 1f) };
	return Param0 + func_35(Var0, unk_0x313CE5879CEB6FCD(0f, fParam3));
}

Vector3 func_35(struct<3> Param0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_36(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((unk_0x7239B21A38F536BA(uLocal_283[iVar0]) && !unk_0x84A2DD9AC37C35C1(uLocal_283[iVar0])) && uLocal_290[iVar0] > 0)
		{
			iLocal_279 = 1;
		}
		iVar0++;
	}
	if (((((((((((func_38(Global_95887.f_35, 134217728) || unk_0x6CD5A433374D4CFB(uLocal_283[iParam0], unk_0xD80958FC74E988A6())) || unk_0xF297383AA91DCA29(unk_0x4F8644AF03D0E0D6(), uLocal_283[iParam0])) || unk_0x605F5A140F202491(uLocal_283[iParam0])) || unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(uLocal_283[iParam0], true), 15f, true)) || unk_0x9870ACFB89A90995(unk_0x3FEF770D40960D5A(uLocal_283[iParam0], true), 15f, true, true)) || unk_0xAB0F816885B0E483(21, unk_0x3FEF770D40960D5A(uLocal_283[iParam0], true), 15f)) || unk_0xAB0F816885B0E483(10, unk_0x3FEF770D40960D5A(uLocal_283[iParam0], true), 15f)) || unk_0xAB0F816885B0E483(7, unk_0x3FEF770D40960D5A(uLocal_283[iParam0], true), 15f)) || unk_0xAB0F816885B0E483(0, unk_0x3FEF770D40960D5A(uLocal_283[iParam0], true), 15f)) || unk_0xAB0F816885B0E483(1, unk_0x3FEF770D40960D5A(uLocal_283[iParam0], true), 15f)) || iLocal_279)
	{
		return 1;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_39()
{
	int iVar0;
	var uVar1[2];
	int iVar4;
	char cVar5[24];
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char cVar20[16];
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0x7239B21A38F536BA(uLocal_280[iVar0]) && unk_0x4C241E39B23DF959(uLocal_280[iVar0], false))
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (unk_0x7239B21A38F536BA(uLocal_283[iVar4]) && !unk_0x84A2DD9AC37C35C1(uLocal_283[iVar4]))
				{
					if (Local_36[iVar4 /*10*/].f_8 != -1 && Local_36[iVar4 /*10*/].f_8 == iVar0)
					{
						if (!unk_0xA3EE4A07279BB9DB(uLocal_283[iVar4], uLocal_280[iVar0], false))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar4++;
			}
		}
		StringCopy(&cVar5, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar5, iVar0, 24);
		StringConCat(&cVar5, "]: ", 24);
		StringIntConCat(&cVar5, uVar1[iVar0], 24);
		unk_0xA3BB2E9555C05A8F(&cVar5, 0.05f, (0.25f + (IntToFloat(iVar0) * 0.025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x7239B21A38F536BA(uLocal_283[iVar0]) && !unk_0x84A2DD9AC37C35C1(uLocal_283[iVar0]))
		{
			switch (uLocal_290[iVar0])
			{
				case 0:
					if (func_37(iVar0))
					{
						iLocal_271 = 0;
						uLocal_290[iVar0]++;
					}
					break;
				
				case 1:
					if (Local_36[iVar0 /*10*/].f_8 == -1)
					{
						if (!unk_0x7EE53118C892B513(uLocal_283[iVar0], 286, true))
						{
							unk_0x1913FE4CBF41C463(uLocal_283[iVar0], 286, true);
						}
					}
					else
					{
						bVar12 = false;
						if (unk_0x997ABD671D25CA0B(uLocal_283[iVar0], false))
						{
							iVar13 = unk_0x9A9112A0FE9A4713(uLocal_283[iVar0], false);
							iVar11 = 0;
							while (iVar11 <= 1)
							{
								if (!bVar12)
								{
									if (uLocal_280[iVar11] == iVar13)
									{
										if (uVar1[iVar11] == 0)
										{
											bVar12 = true;
										}
									}
								}
								iVar11++;
							}
							if (bVar12)
							{
								if (iLocal_275 == -1 && func_40(uLocal_283[iVar0]) == -1)
								{
									iLocal_275 = iVar0;
								}
								uLocal_290[iVar0]++;
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_275 != -1)
					{
						iLocal_276 = iLocal_275;
						if (unk_0x7239B21A38F536BA(uLocal_283[iLocal_275]))
						{
							if (unk_0x997ABD671D25CA0B(uLocal_283[iLocal_275], false))
							{
								iVar14 = unk_0x9A9112A0FE9A4713(uLocal_283[iLocal_275], false);
							}
						}
					}
					if ((((((((iLocal_275 == -1 || !unk_0x7239B21A38F536BA(uLocal_283[iLocal_275])) || unk_0x84A2DD9AC37C35C1(uLocal_283[iLocal_275])) || !unk_0x7239B21A38F536BA(iVar14)) || !unk_0x4C241E39B23DF959(iVar14, false)) || unk_0xBA291848A0815CA9(iVar14, 0, true)) || unk_0xBA291848A0815CA9(iVar14, 1, true)) || unk_0xBA291848A0815CA9(iVar14, 4, true)) || unk_0xBA291848A0815CA9(iVar14, 5, true))
					{
						iVar15 = -1;
						bVar16 = false;
						iVar11 = 0;
						while (iVar11 <= 5)
						{
							if (unk_0x7239B21A38F536BA(uLocal_283[iVar11]) && !unk_0x84A2DD9AC37C35C1(uLocal_283[iVar11]))
							{
								if (func_40(uLocal_283[iVar11]) == -1)
								{
									if (iVar15 == -1 || !bVar16)
									{
										bVar16 = true;
										iVar15 = iVar11;
									}
								}
								else if (!bVar16)
								{
									iVar15 = iVar11;
								}
							}
							iVar11++;
						}
						if (iVar15 != -1)
						{
							iLocal_275 = iVar15;
						}
					}
					break;
			}
			if (uLocal_290[iVar0] > 0)
			{
				iVar17 = 0;
				unk_0x3A87E44BB9A01D54(uLocal_283[iVar0], &iVar17, true);
				if (iVar17 == joaat("weapon_molotov"))
				{
					if (unk_0x8DECB02F88F428BC(uLocal_283[iVar0], joaat("weapon_microsmg"), false))
					{
						unk_0xADF692B254977C0C(uLocal_283[iVar0], joaat("weapon_microsmg"), true);
					}
					else
					{
						unk_0xBF0FD6E56C964FCB(uLocal_283[iVar0], joaat("weapon_microsmg"), -1, true, true);
					}
				}
			}
			switch (uLocal_290[iVar0])
			{
				case 0:
					func_33(uLocal_283[iVar0], Local_36[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (Local_36[iVar0 /*10*/].f_8 == -1)
					{
						if (!func_32(uLocal_283[iVar0], 780511057, 1))
						{
							unk_0xF166E48407BAC484(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 0, 16);
						}
					}
					else if (uLocal_280[Local_36[iVar0 /*10*/].f_8] == 0 || Local_36[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!unk_0xA3EE4A07279BB9DB(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], false))
					{
						if (func_5(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!func_32(uLocal_283[iVar0], 780511057, 1))
							{
								unk_0xE4723DB6E736CCFF(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, false);
								unk_0xF166E48407BAC484(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 0, 16);
							}
						}
						else if (!func_32(uLocal_283[iVar0], -1794415470, 1))
						{
							unk_0xC20E50AA46D09CA8(uLocal_283[iVar0], uLocal_280[Local_36[iVar0 /*10*/].f_8], -1, Local_36[iVar0 /*10*/].f_9, 2f, 1, 0);
						}
					}
					else if (!func_32(uLocal_283[iVar0], 538064912, 1))
					{
						unk_0x10AB107B887214D8(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 20f);
					}
					break;
				
				case 2:
					if (unk_0x997ABD671D25CA0B(uLocal_283[iVar0], false))
					{
						if (iLocal_275 == iVar0)
						{
							if (func_40(uLocal_283[iVar0]) != -1)
							{
								if (!func_32(uLocal_283[iVar0], 355471868, 1))
								{
									unk_0x7AA80209BDA643EB(uLocal_283[iVar0], unk_0x9A9112A0FE9A4713(uLocal_283[iVar0], false));
								}
							}
							else if (!func_32(uLocal_283[iVar0], -1273030092, 1) || iLocal_275 != iLocal_276)
							{
								unk_0x9454528DF15D657A(uLocal_283[iVar0], unk_0x9A9112A0FE9A4713(uLocal_283[iVar0], false), unk_0xD80958FC74E988A6(), 8, 40f, 786468, 1000f, 0f, true);
							}
							else if (unk_0x77F1BEB8863288D5(uLocal_283[iVar0], -1273030092) == 1)
							{
								if (!unk_0x8785E6E40C7A8818(uLocal_283[iVar0]))
								{
									unk_0x2F8AF0E82773A171(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 1000f, 100, true, -753768974);
								}
							}
						}
						else if (func_40(uLocal_283[iVar0]) == -1)
						{
							if (!func_32(uLocal_283[iVar0], -1273030092, 1) || iLocal_275 != iLocal_276)
							{
								unk_0x0FA6E4B75F302400(uLocal_283[iVar0], unk_0x9A9112A0FE9A4713(uLocal_283[iVar0], false), unk_0x9A9112A0FE9A4713(uLocal_283[iLocal_275], false), -1, 40f, 786468, -1f, 20, 20f);
							}
							else if (unk_0x77F1BEB8863288D5(uLocal_283[iVar0], -1273030092) == 1)
							{
								if (!unk_0x8785E6E40C7A8818(uLocal_283[iVar0]))
								{
									unk_0x2F8AF0E82773A171(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 1000f, 100, true, -753768974);
								}
							}
						}
						else
						{
							iVar18 = unk_0xBB40DD2270B65366(unk_0x9A9112A0FE9A4713(uLocal_283[iVar0], false), -1);
							if (!unk_0x7239B21A38F536BA(iVar18) || unk_0x84A2DD9AC37C35C1(iVar18))
							{
								if (!func_32(uLocal_283[iVar0], 355471868, 1))
								{
									unk_0x7AA80209BDA643EB(uLocal_283[iVar0], unk_0x9A9112A0FE9A4713(uLocal_283[iVar0], false));
								}
							}
							else if (!func_32(uLocal_283[iVar0], 2104565373, 1) || iLocal_275 != iLocal_276)
							{
								unk_0x2F8AF0E82773A171(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 1000f, 100, true, -753768974);
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_271)
	{
		case 0:
			if (func_31())
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !unk_0x9072C8B49907BFAD(uLocal_283[iVar19]))
				{
					func_28(uLocal_283[iVar19], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 1:
			if (func_31())
			{
				cVar20 = { func_27("START") };
				if (func_10(&uLocal_106, &cLocal_273, &cVar20, 8, 0, 0, 0))
				{
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 2:
			if (func_31())
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !unk_0x9072C8B49907BFAD(uLocal_283[iVar19]))
				{
					func_28(uLocal_283[iVar19], "SHOUT_THREATEN", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_271++;
				}
			}
			break;
		
		case 3:
			if ((func_31() && (unk_0x9CD27B0045628463() - iLocal_272) > 3000) && !unk_0x9072C8B49907BFAD(unk_0xD80958FC74E988A6()))
			{
				func_28(unk_0xD80958FC74E988A6(), "BLIND_RAGE", 10);
				iLocal_271++;
			}
			break;
		
		case 4:
			if (func_31() && (unk_0x9CD27B0045628463() - iLocal_272) > 1000)
			{
				iVar19 = func_30();
				if (iVar19 != -1 && !unk_0x9072C8B49907BFAD(uLocal_283[iVar19]))
				{
					if (unk_0x997ABD671D25CA0B(uLocal_283[iVar19], false))
					{
						func_28(uLocal_283[iVar19], "GENERIC_INSULT", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
					else
					{
						func_28(uLocal_283[iVar19], "SHOUT_THREATEN", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_271 = (iLocal_271 - 1);
					}
				}
			}
			break;
	}
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				if (!unk_0x5F9532F3B5CC2551(iVar0))
				{
					iVar1 = unk_0x2AD93716F184EDA4(unk_0x9F47B058362C84B5(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x22AC59A870E6A669(iVar0, iVar3))
						{
							if (unk_0xBB40DD2270B65366(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

void func_41()
{
	func_56(1);
	func_55();
}

void func_42(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

int func_43(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_44(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_44(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_45(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_45(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_45(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_46(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		unk_0xF29CF591C4BF6CEE(iParam0, fParam1);
		unk_0x9C74B0BC831B753A(iParam0, fParam2);
		unk_0x3B6405E8AB34A907(iParam0, (fParam3 / 2f));
		unk_0x2DB492222FB21E26(iParam0, fParam4);
		unk_0x70793BDCA1E854D4(iParam0, fParam5);
	}
}

int func_47()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_48()
{
	int iVar0;
	
	switch (func_17())
	{
		case 0:
			func_54(&uLocal_106, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_54(&uLocal_106, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_54(&uLocal_106, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
			break;
	}
	unk_0x020E5F00CDA207BA(0.1f);
	unk_0xDC0F817884CDD856(3, false);
	unk_0x102E68B2024D536D(false);
	iLocal_105 = func_52();
	switch (func_8())
	{
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 1;
			break;
		
		case 13:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 0;
			break;
	}
	func_51(&(Local_36[0 /*10*/]), func_8(), 0);
	func_51(&(Local_36[1 /*10*/]), func_8(), 1);
	func_51(&(Local_36[2 /*10*/]), func_8(), 2);
	func_51(&(Local_36[3 /*10*/]), func_8(), 3);
	func_51(&(Local_36[4 /*10*/]), func_8(), 4);
	func_51(&(Local_36[5 /*10*/]), func_8(), 5);
	StringCopy(&(Local_36.f_61), func_50(iVar0), 16);
	StringCopy(&(Local_36.f_65), func_49(iVar0), 16);
	unk_0xF372BC22FCB88606("relGang", &iLocal_304);
	unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_304);
	unk_0xBF25EB89375A37AD(5, iLocal_304, joaat("player"));
	unk_0xBF25EB89375A37AD(5, iLocal_304, joaat("COP"));
	switch (iVar0)
	{
		case 0:
			unk_0xBF25EB89375A37AD(5, joaat("player"), 296331235);
			unk_0xBF25EB89375A37AD(1, iLocal_304, 296331235);
			unk_0xBF25EB89375A37AD(1, 296331235, iLocal_304);
			break;
		
		case 1:
			unk_0xBF25EB89375A37AD(5, joaat("player"), -1033021910);
			unk_0xBF25EB89375A37AD(1, iLocal_304, -1033021910);
			unk_0xBF25EB89375A37AD(1, -1033021910, iLocal_304);
			break;
		
		case 2:
			unk_0xBF25EB89375A37AD(5, joaat("player"), 1782292358);
			unk_0xBF25EB89375A37AD(1, iLocal_304, 1782292358);
			unk_0xBF25EB89375A37AD(1, 1782292358, iLocal_304);
			break;
	}
}

char* func_49(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		
		case 2:
			return "KOREANGUY";
			break;
		
		case 0:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_50(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		
		case 2:
			return "KOR";
			break;
		
		case 0:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_51(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 4:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 4:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325.1079f, 6263.833f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -312.9843f, 6250.115f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -326.1756f, 6268.338f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { -323.9344f, 6259.659f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.395f, 42.7414f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215.32f, 4275.046f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.376f, 48.4082f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -2200.848f, 4268.19f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.575f, 4275.129f, 49.0669f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -2202.818f, 4294.149f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.783f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -2196.271f, 4265.064f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.183f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -2204.492f, 4290.059f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.017f, 4292.669f, 54.873f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_52()
{
	return func_53(Global_95887.f_20, Global_95887.f_29);
}

int func_53(var uParam0, int iParam1)
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_54(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_55()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x7239B21A38F536BA(uLocal_283[iVar0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(uLocal_283[iVar0]) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x22B0D0E37CCB840D(uLocal_283[iVar0], unk_0xD80958FC74E988A6(), 1000f, -1, false, true);
			}
			unk_0x2595DD4236549CE3(&(uLocal_283[iVar0]));
		}
		if (unk_0xA6DB27D19ECBB7DA(uLocal_297[iVar0]))
		{
			unk_0x86A652570E5F25DD(&(uLocal_297[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0x7239B21A38F536BA(uLocal_280[iVar0]))
		{
			unk_0x629BFA74418D6239(&(uLocal_280[iVar0]));
		}
		iVar0++;
	}
	unk_0xE163A4BCE4DE6F11(iLocal_305, false);
	unk_0x0FC2D89AC25A5814(iLocal_306, false);
	unk_0x020E5F00CDA207BA(1f);
	unk_0xDC0F817884CDD856(3, true);
	unk_0x102E68B2024D536D(true);
	unk_0x1090044AD1DA76FA();
}

void func_56(int iParam0)
{
	Global_95887.f_22 = iParam0;
}


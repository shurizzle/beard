/* Copyleft (¿) meh. - http://meh.schizofreni.co
 *
 * This file is part of beard - https://github.com/carthy/beard
 *
 * beard is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published
 * by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * beard is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with beard. If not, see <http://www.gnu.org/licenses/>.
 */

typedef struct Tuple Tuple;

Tuple* Tuple_new (Runtime* rt);

Tuple* Tuple_new_with_size (Runtime* rt, int size);

void Tuple_destroy (Tuple* self);

Tuple* Tuple_resize (Tuple* self, int size);

Value** Tuple_items (Tuple* self);

int Tuple_size (Tuple* self);

/*
    Copyright (C) 2015 Modelon AB

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, version 3 of the License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

package org.jmodelica.util.collections;

import java.util.Iterator;

/**
 * \brief Generic iterator over constant array.
 */
public class ConstArrayIterator<T> implements Iterator<T> {
	
	protected T[] elems;
	protected int i;
	
	public ConstArrayIterator(T[] arr) {
		elems = arr;
		i = 0;
	}
	
	public boolean hasNext() {
		return i < elems.length;
	}
	
	public T next() {
		return elems[i++];
	}
	
	public void remove() {
		throw new UnsupportedOperationException();
	}
	
}
